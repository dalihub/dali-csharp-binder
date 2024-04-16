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
#include <dali-csharp-binder/common/visual-objects/visual-object-impl.h>

// EXTERNAL INCLUDES
#include <dali-toolkit/devel-api/controls/control-depth-index-ranges.h>
#include <dali-toolkit/devel-api/visual-factory/visual-factory.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>
#include <dali/integration-api/debug.h>

// INTERNAL
#include <dali-csharp-binder/common/visual-objects/visual-object.h>
#include <dali-csharp-binder/common/visual-objects/visual-objects-container-impl.h>
#include <dali-csharp-binder/common/visual-objects/visual-objects-container.h>

namespace Dali::Internal
{
VisualObjectPtr VisualObject::New()
{
  VisualObjectPtr visualObject(new VisualObject());
  return visualObject;
}

///< Public API

void VisualObject::DetachFromContainer()
{
  if(auto container = mContainer.GetHandle())
  {
    container.RemoveVisualObject(Dali::VisualObject(this));
  }
  DetachFromContainerInternal();
}

Dali::VisualObjectsContainer VisualObject::GetContainer()
{
  return mContainer.GetHandle();
}

void VisualObject::CreateVisual(const Dali::Property::Map& map)
{
  if(Dali::Adaptor::IsAvailable())
  {
    auto visualFactory = Dali::Toolkit::VisualFactory::Get();
    if(visualFactory)
    {
      if(!map.Empty())
      {
        mVisual = visualFactory.CreateVisual(map, Dali::Toolkit::VisualFactory::CreationOptions::IMAGE_VISUAL_LOAD_STATIC_IMAGES_ONLY);
      }
      else
      {
        // Special behavior, if map is empty, unregister the visual.
        mVisual.Reset();
      }
    }

    // Replace as newly created visual now.
    if(auto container = mContainer.GetHandle())
    {
      GetImplementation(container).ReplaceVisualObject(*this);
    }
  }
}

void VisualObject::RetrieveVisualPropertyMap(Dali::Property::Map& map) const
{
  if(mVisual)
  {
    mVisual.CreatePropertyMap(map);
  }
}

void VisualObject::DoAction(Dali::Property::Index actionId, const Dali::Property::Value& attributes)
{
  if(mVisual)
  {
    mVisual.DoAction(actionId, attributes);
  }
}

/// Sibling Order Change API

void VisualObject::SetSiblingOrder(uint32_t siblingOrder)
{
  auto container = mContainer.GetHandle();
  if(container && mSiblingOrder != siblingOrder)
  {
    GetImplementation(container).ChangeSiblingOrder(mSiblingOrder, siblingOrder);
  }
}

uint32_t VisualObject::GetSiblingOrder() const
{
  // If we are not in container, return 0.
  if(!mContainer.GetHandle())
  {
    return 0u;
  }
  return mSiblingOrder;
}

void VisualObject::Raise()
{
  auto container = mContainer.GetHandle();
  if(container)
  {
    if(mSiblingOrder + 1u < container.GetVisualObjectsCount())
    {
      SetSiblingOrder(mSiblingOrder + 1u);
    }
  }
}

void VisualObject::Lower()
{
  auto container = mContainer.GetHandle();
  if(container)
  {
    if(mSiblingOrder > 0u)
    {
      SetSiblingOrder(mSiblingOrder - 1u);
    }
  }
}

void VisualObject::RaiseToTop()
{
  auto container = mContainer.GetHandle();
  if(container && container.GetVisualObjectsCount() > 0u)
  {
    SetSiblingOrder(container.GetVisualObjectsCount() - 1u);
  }
}

void VisualObject::LowerToBottom()
{
  auto container = mContainer.GetHandle();
  if(container)
  {
    SetSiblingOrder(0u);
  }
}

void VisualObject::RaiseAbove(Dali::Internal::VisualObject& target)
{
  auto container = mContainer.GetHandle();
  // Check whether target and this is in the same container.
  if(container && container == target.GetContainer())
  {
    uint32_t fromIndex = mSiblingOrder;
    uint32_t toIndex   = target.GetSiblingOrder();

    // Change sibling order only if fromIndex is less than toIndex.
    // Note : target's sibling order will be updated automatically.
    if(fromIndex < toIndex)
    {
      SetSiblingOrder(toIndex);
    }
  }
}

void VisualObject::LowerBelow(Dali::Internal::VisualObject& target)
{
  auto container = mContainer.GetHandle();
  // Check whether target and this is in the same container.
  if(container && container == target.GetContainer())
  {
    uint32_t fromIndex = mSiblingOrder;
    uint32_t toIndex   = target.GetSiblingOrder();

    // Change sibling order only if fromIndex is greater than toIndex.
    // Note : target's sibling order will be updated automatically.
    if(fromIndex > toIndex)
    {
      SetSiblingOrder(toIndex);
    }
  }
}

// Private and internal

void VisualObject::AttachToContainerInternal(Dali::VisualObjectsContainer container)
{
  mContainer = WeakHandle(container);
  mRangeType = container.GetContainerRangeType();
}

void VisualObject::DetachFromContainerInternal()
{
  mContainer.Reset();
  mSiblingOrder     = 0u;
  mVisualPropertyId = INVALID_VISUAL_PROPERTY_ID;
}

void VisualObject::SetSiblingOrderInternal(uint32_t siblingOrder)
{
  mSiblingOrder = siblingOrder;
  if(mVisual)
  {
    mVisual.SetDepthIndex(GetDepthIndex());
  }
}

int32_t VisualObject::GetDepthIndex() const
{
  int32_t baseDepthIndex = 0;
  switch(mRangeType)
  {
    case Dali::VisualObjectsContainer::ContainerRangeType::BACKGROUND_EFFECT:
    {
      baseDepthIndex = Dali::Toolkit::DepthIndex::Ranges::MINIMUM_DEPTH_INDEX + 1;
      break;
    }
    case Dali::VisualObjectsContainer::ContainerRangeType::BACKGROUND:
    {
      baseDepthIndex = Dali::Toolkit::DepthIndex::Ranges::BACKGROUND_EFFECT + 1;
      break;
    }
    case Dali::VisualObjectsContainer::ContainerRangeType::CONTENT:
    {
      baseDepthIndex = Dali::Toolkit::DepthIndex::Ranges::BACKGROUND + 1;
      break;
    }
    case Dali::VisualObjectsContainer::ContainerRangeType::DECORATION:
    {
      baseDepthIndex = Dali::Toolkit::DepthIndex::Ranges::CONTENT + 4; /* Give some gap from CONTENT. */
      break;
    }
    case Dali::VisualObjectsContainer::ContainerRangeType::FOREGROUND_EFFECT:
    {
      baseDepthIndex = Dali::Toolkit::DepthIndex::Ranges::DECORATION + 1;
      break;
    }
  }
  return baseDepthIndex + static_cast<int32_t>(mSiblingOrder);
}

VisualObject::VisualObject()
: mContainer(),
  mVisual(),
  mSiblingOrder(0u),
  mVisualPropertyId(VisualObject::INVALID_VISUAL_PROPERTY_ID)
{
}

VisualObject::~VisualObject()
{
  if(DALI_LIKELY(Dali::Adaptor::IsAvailable()))
  {
    DetachFromContainerInternal();

    if(mVisual)
    {
      auto visualFactory = Dali::Toolkit::VisualFactory::Get();
      if(visualFactory)
      {
        visualFactory.DiscardVisual(std::move(mVisual));
      }
    }
  }
}

} // namespace Dali::Internal