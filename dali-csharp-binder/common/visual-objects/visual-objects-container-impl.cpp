/*
 * Copyright (c) 2024 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// CLASS HEADER
#include <dali-csharp-binder/common/visual-objects/visual-objects-container-impl.h>

// EXTERNAL INCLUDES
#include <dali-toolkit/devel-api/controls/control-depth-index-ranges.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/public-api/controls/control-impl.h>
#include <dali-toolkit/public-api/controls/control.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>
#include <dali/integration-api/debug.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/visual-objects/visual-object-impl.h>
#include <dali-csharp-binder/common/visual-objects/visual-object.h>

namespace Dali::Internal
{
namespace
{
constexpr std::string_view VISUAL_OBJECT_PROPERTY_NAME_PREFIX("VisualObject");

constexpr uint32_t MAXIMUM_VISUAL_OBJECTS_COUNT = (Dali::Toolkit::DepthIndex::Ranges::CONTENT - Dali::Toolkit::DepthIndex::Ranges::BACKGROUND - 1u - 3u /* Placeholder + Transition + RenderEffect */);
} // namespace
VisualObjectsContainerPtr VisualObjectsContainer::New(Dali::Toolkit::Control control, Dali::VisualObjectsContainer::ContainerRangeType rangeType)
{
  VisualObjectsContainerPtr container(new VisualObjectsContainer(control, rangeType));
  return container;
}

///< Public API

Dali::Toolkit::Control VisualObjectsContainer::GetOwner() const
{
  return mControl.GetHandle();
}

Dali::VisualObjectsContainer::ContainerRangeType VisualObjectsContainer::GetContainerRangeType() const
{
  return mRangeType;
}

uint32_t VisualObjectsContainer::GetVisualObjectsCount() const
{
  return static_cast<uint32_t>(mVisualObjects.size());
}

Dali::VisualObject VisualObjectsContainer::GetVisualObjectAt(uint32_t index) const
{
  DALI_ASSERT_ALWAYS(index < mVisualObjects.size() && "Visual object index out of bounds");
  return mVisualObjects[index];
}

bool VisualObjectsContainer::AddVisualObject(Dali::VisualObject visualObject)
{
  if(visualObject)
  {
    if(DALI_UNLIKELY(!Dali::Adaptor::IsAvailable()))
    {
      DALI_LOG_ERROR("Application is terminated, or worker thread call this API. Add VisualObject failed.\n");
      return false;
    }

    Dali::VisualObjectsContainer self(this); // Keep reference for safety

    auto oldContainer = visualObject.GetContainer();

    // Skip below logic if visual object is already in this container.
    if(self != oldContainer)
    {
      if(mVisualObjects.size() >= MAXIMUM_VISUAL_OBJECTS_COUNT)
      {
        DALI_LOG_ERROR("Visual objects container is full. Add VisualObject failed.\n");
        return false;
      }

      if(oldContainer)
      {
        visualObject.DetachFromContainer();
      }

      // Add to this container.
      auto& visualObjectImpl = GetImplementation(visualObject);
      visualObjectImpl.AttachToContainerInternal(self);
      visualObjectImpl.SetSiblingOrderInternal(mVisualObjects.size());

      ReplaceVisualObject(visualObjectImpl);

      mVisualObjects.push_back(visualObject);
      return true;
    }
  }
  return false;
}

void VisualObjectsContainer::RemoveVisualObject(Dali::VisualObject visualObject)
{
  if(visualObject)
  {
    if(DALI_UNLIKELY(!Dali::Adaptor::IsAvailable()))
    {
      return;
    }

    Dali::VisualObjectsContainer self(this); // Keep reference for safety

    auto iter = std::find(mVisualObjects.begin(), mVisualObjects.end(), visualObject);
    if(iter != mVisualObjects.end())
    {
      // Shift down other visual objects sibling order
      uint32_t siblingOrder = visualObject.GetSiblingOrder();
      for(auto jter = iter + 1; jter != mVisualObjects.end(); ++jter)
      {
        GetImplementation(*jter).SetSiblingOrderInternal(siblingOrder++);
      }
      mVisualObjects.erase(iter);

      auto& visualObjectImpl = GetImplementation(visualObject);
      UnregisterVisualObject(visualObjectImpl);
      visualObjectImpl.DetachFromContainerInternal();
    }
  }
}

void VisualObjectsContainer::ChangeSiblingOrder(uint32_t fromIndex, uint32_t toIndex)
{
  DALI_ASSERT_ALWAYS(fromIndex < mVisualObjects.size() && "fromIndex is out of bounds");
  DALI_ASSERT_ALWAYS(toIndex < mVisualObjects.size() && "toIndex is out of bounds");
  if(fromIndex != toIndex)
  {
    // Keep reference of visual object.
    Dali::VisualObject visualObject = mVisualObjects[fromIndex];

    if(fromIndex < toIndex)
    {
      for(uint32_t i = fromIndex; i != toIndex; ++i)
      {
        GetImplementation(mVisualObjects[i + 1]).SetSiblingOrderInternal(i);
        mVisualObjects[i] = mVisualObjects[i + 1];
      }
    }
    else if(fromIndex > toIndex)
    {
      for(uint32_t i = fromIndex; i != toIndex; --i)
      {
        GetImplementation(mVisualObjects[i - 1]).SetSiblingOrderInternal(i);
        mVisualObjects[i] = mVisualObjects[i - 1];
      }
    }
    GetImplementation(visualObject).SetSiblingOrderInternal(toIndex);
    mVisualObjects[toIndex] = visualObject;
  }
}

// Private and internal

void VisualObjectsContainer::ReplaceVisualObject(Dali::Internal::VisualObject& visualObjectImpl)
{
  if(DALI_LIKELY(Dali::Adaptor::IsAvailable()))
  {
    Dali::Toolkit::Control control = mControl.GetHandle();
    if(control)
    {
      VisualObject::VisualPropertyId propertyId = visualObjectImpl.GetVisualPropertyId();

      Property::Index index = Property::INVALID_INDEX;

      if(propertyId == VisualObject::INVALID_VISUAL_PROPERTY_ID)
      {
        // Add dummy index to converter, and get unique id.
        propertyId = mVisualIndexConverter.Add(static_cast<uint32_t>(Property::INVALID_INDEX));

        // Register new property to control using propertyId
        {
          std::ostringstream oss;
          oss << VISUAL_OBJECT_PROPERTY_NAME_PREFIX << "_" << static_cast<int>(mRangeType) << "_" << propertyId;
          index = control.RegisterProperty(oss.str(), Property::Value(oss.str()), Property::AccessMode::READ_WRITE);
        }

        // Change as valid index now.
        mVisualIndexConverter[propertyId] = static_cast<uint32_t>(index);

        visualObjectImpl.SetVisualPropertyId(propertyId);
      }
      else
      {
        index = mVisualIndexConverter[propertyId];
      }

      if(index != Property::INVALID_INDEX)
      {
        // Replace visual.
        auto visualBase = visualObjectImpl.GetVisual();
        if(visualBase)
        {
          // Register the visual to the control.
          Dali::Toolkit::DevelControl::RegisterVisual(Dali::Toolkit::Internal::GetImplementation(control), index, visualBase, static_cast<int>(visualObjectImpl.GetDepthIndex()));
        }
        else
        {
          // Unregister the visual from the control.
          Dali::Toolkit::DevelControl::UnregisterVisual(Dali::Toolkit::Internal::GetImplementation(control), index);
        }
      }
    }
  }
}

void VisualObjectsContainer::UnregisterVisualObject(Dali::Internal::VisualObject& visualObjectImpl)
{
  if(DALI_LIKELY(Dali::Adaptor::IsAvailable()))
  {
    Dali::Toolkit::Control control = mControl.GetHandle();
    if(control)
    {
      VisualObject::VisualPropertyId propertyId = visualObjectImpl.GetVisualPropertyId();

      DALI_ASSERT_ALWAYS(propertyId != VisualObject::INVALID_VISUAL_PROPERTY_ID && "VisualObject is not registered before!");

      Property::Index index = static_cast<Property::Index>(mVisualIndexConverter[propertyId]);
      if(index != Property::INVALID_INDEX)
      {
        Dali::Toolkit::DevelControl::UnregisterVisual(Dali::Toolkit::Internal::GetImplementation(control), index);
      }
      mVisualIndexConverter.Remove(propertyId);

      visualObjectImpl.SetVisualPropertyId(VisualObject::INVALID_VISUAL_PROPERTY_ID);
    }
  }
}

VisualObjectsContainer::VisualObjectsContainer(Dali::Toolkit::Control control, Dali::VisualObjectsContainer::ContainerRangeType rangeType)
: BaseObject(),
  mVisualObjects(),
  mControl(control),
  mRangeType(rangeType),
  mVisualIndexConverter()
{
}

VisualObjectsContainer::~VisualObjectsContainer()
{
  if(DALI_LIKELY(Dali::Adaptor::IsAvailable()))
  {
    // Detach visual objects without touch the containers.
    for(auto&& visualObject : mVisualObjects)
    {
      auto& visualObjectImpl = GetImplementation(visualObject);

      UnregisterVisualObject(visualObjectImpl);
      visualObjectImpl.DetachFromContainerInternal();
    }
    mVisualObjects.clear();
  }
}

} // namespace Dali::Internal