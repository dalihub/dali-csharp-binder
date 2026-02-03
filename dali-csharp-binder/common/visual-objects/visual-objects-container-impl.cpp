/*
 * Copyright (c) 2026 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/devel-api/visuals/visual-properties-devel.h>
#include <dali-toolkit/public-api/controls/control-impl.h>
#include <dali-toolkit/public-api/controls/control.h>
#include <dali-toolkit/public-api/toolkit-constraint-tag-ranges.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>
#include <dali/integration-api/constraint-integ.h>
#include <dali/integration-api/debug.h>
#include <dali/public-api/animation/constraints.h>
#include <dali/public-api/rendering/decorated-visual-renderer.h>

#include <algorithm>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/visual-objects/visual-object-impl.h>
#include <dali-csharp-binder/common/visual-objects/visual-object.h>

namespace Dali::Internal
{
namespace
{
constexpr std::string_view VISUAL_OBJECT_PROPERTY_NAME_PREFIX("VisualObject");

constexpr uint32_t MAXIMUM_VISUAL_OBJECTS_COUNT = (Dali::Toolkit::DepthIndex::Ranges::CONTENT - Dali::Toolkit::DepthIndex::Ranges::BACKGROUND - 1u - 3u /* Placeholder + Transition + RenderEffect */);

static constexpr uint32_t INNER_SHADOW_CORNER_RADIUS_CONSTRAINT_TAG(Dali::Toolkit::ConstraintTagRanges::TOOLKIT_CONSTRAINT_TAG_START + 10);

/**
 * @brief Constraint function for InnerShadow's CornerRadius
 * inputs[0] : View CornerRadius, [1] : View CornerRadiusPolicy, [2] : View size, [3] : ExtraSize, [4] : Borderline Width
 * @param[out] current InnerShadow's corner radius value.
 * @param[in] inputs Input properties.
 */
void InnerShadowCornerRadiusConstraint(Vector4& current, const PropertyInputContainer& inputs)
{
  // We just assume below state are applied.
  // - Transform::ORIGIN is CENTER
  // - Transform::ANCHOR_POINT is CENTER
  // - Transform::OFFSET_POLICY are ABSOLUTE
  // - Transform::SIZE_POLICY are RELATIVE
  // - Transform::SIZE is Vector2::ONE
  // - Visual::BORDERLINE_OFFSET is -1.0f

  Vector4 viewCornerRadius = inputs[0]->GetVector4();

  const int     viewCornerRadiusPolicy = inputs[1]->GetInteger();
  const Vector3 visualSize             = inputs[2]->GetVector3(); // We use VisualSize as ViewSize.

  Vector2 extraSize = inputs[3]->GetVector2();

  if(viewCornerRadiusPolicy == Toolkit::Visual::Transform::Policy::RELATIVE)
  {
    const float minViewSize = std::min(visualSize.x, visualSize.y);
    viewCornerRadius *= minViewSize;
  }

  float borderlineWidth = inputs[4]->GetFloat();

  // Corner Radius for Innershadow is expand about borderlineWidth.

  // Calculate on pixel scale.
  current.x = viewCornerRadius.x + borderlineWidth;
  current.y = viewCornerRadius.y + borderlineWidth;
  current.z = viewCornerRadius.z + borderlineWidth;
  current.w = viewCornerRadius.w + borderlineWidth;

  if(viewCornerRadiusPolicy == Toolkit::Visual::Transform::Policy::RELATIVE)
  {
    const float minInnerShadowSize = std::min(visualSize.x + extraSize.x, visualSize.y + extraSize.y);
    if(DALI_LIKELY(minInnerShadowSize > Math::MACHINE_EPSILON_100))
    {
      current /= minInnerShadowSize;
    }
  }
}

Dali::Constraint CreateVisualCornerConstraint(Dali::Toolkit::Control control, Dali::Internal::VisualObject& visualObjectImpl)
{
  Dali::Constraint constraint;
  auto             visualBase                 = visualObjectImpl.GetVisual();
  auto             visualCornerRadiusProperty = visualBase.GetPropertyObject(Dali::Toolkit::DevelVisual::Property::CORNER_RADIUS);
  if(visualObjectImpl.GetShadowType() == Dali::VisualObjectsContainer::ShadowType::INNER_SHADOW)
  {
    auto visualBorderlineProperty = visualBase.GetPropertyObject(Dali::Toolkit::DevelVisual::Property::BORDERLINE_WIDTH);

    if(DALI_LIKELY(visualCornerRadiusProperty.propertyIndex != Property::INVALID_INDEX && visualCornerRadiusProperty.object) &&
       DALI_LIKELY(visualBorderlineProperty.propertyIndex != Property::INVALID_INDEX && visualBorderlineProperty.object))
    {
      constraint = Constraint::New<Vector4>(visualCornerRadiusProperty.object, visualCornerRadiusProperty.propertyIndex, InnerShadowCornerRadiusConstraint);
      constraint.AddSource(Source(control, Dali::Toolkit::DevelControl::Property::CORNER_RADIUS));
      constraint.AddSource(Source(control, Dali::Toolkit::DevelControl::Property::CORNER_RADIUS_POLICY));
      constraint.AddSource(Source(control, Dali::Actor::Property::SIZE));
      constraint.AddSource(LocalSource(Dali::VisualRenderer::Property::EXTRA_SIZE));
      constraint.AddSource(LocalSource(Dali::DecoratedVisualRenderer::Property::BORDERLINE_WIDTH));
      Dali::Integration::ConstraintSetInternalTag(constraint, INNER_SHADOW_CORNER_RADIUS_CONSTRAINT_TAG);
    }
  }
  else if(visualObjectImpl.GetShadowType() == Dali::VisualObjectsContainer::ShadowType::BOX_SHADOW)
  {
    constraint = Constraint::New<Vector4>(visualCornerRadiusProperty.object, visualCornerRadiusProperty.propertyIndex, EqualToConstraint());
    constraint.AddSource(Source(control, Dali::Toolkit::DevelControl::Property::CORNER_RADIUS));
  }
  return constraint;
}

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

bool VisualObjectsContainer::AddVisualObject(Dali::VisualObject visualObject, Dali::VisualObjectsContainer::ShadowType shadowType)
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
      visualObjectImpl.SetShadowType(shadowType);

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

          if(visualObjectImpl.GetShadowType() != Dali::VisualObjectsContainer::ShadowType::NONE)
          {
            Dali::Constraint constraint = CreateVisualCornerConstraint(control, visualObjectImpl);
            // Apply Once
            // constraint.Apply();
            Dali::Toolkit::DevelControl::EnableCornerPropertiesOverridden(Dali::Toolkit::Internal::GetImplementation(control), visualBase, true, constraint);
          }
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