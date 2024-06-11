#ifndef CSHARP_VISUAL_OBJECT_IMPL_H
#define CSHARP_VISUAL_OBJECT_IMPL_H

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

// EXTERNAL INCLUDES
#include <dali-toolkit/devel-api/visual-factory/visual-base.h>
#include <dali/public-api/common/dali-common.h>
#include <dali/public-api/common/intrusive-ptr.h>
#include <dali/public-api/object/base-object.h>
#include <dali/public-api/object/property-map.h>
#include <dali/public-api/object/weak-handle.h>
#include <limits>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/visual-objects/visual-object.h>
#include <dali-csharp-binder/common/visual-objects/visual-objects-container.h>

namespace Dali
{
namespace Internal
{
class VisualObject;
using VisualObjectPtr = Dali::IntrusivePtr<VisualObject>;

class VisualObject : public Dali::BaseObject
{
public:
  using VisualPropertyId                                       = uint32_t;
  static constexpr VisualPropertyId INVALID_VISUAL_PROPERTY_ID = std::numeric_limits<VisualPropertyId>::max();

  /**
   * @brief Creates a VisualObject object.
   *
   * @SINCE_2_3.27
   * @return The newly created visual object.
   */
  static VisualObjectPtr New();

public: ///< Public API
  /**
   * @copydoc Dali::VisualObject::DetachFromContainer()
   */
  void DetachFromContainer();

  /**
   * @copydoc Dali::VisualObject::GetContainer()
   */
  Dali::VisualObjectsContainer GetContainer();

  /**
   * @copydoc Dali::VisualObject::CreateVisual()
   */
  void CreateVisual(const Dali::Property::Map& map);

  /**
   * @copydoc Dali::VisualObject::RetrieveVisualProperty()
   */
  void RetrieveVisualPropertyMap(Dali::Property::Map& map) const;

  /**
   * @copydoc Dali::VisualObject::DoAction()
   */
  void DoAction(Dali::Property::Index actionId, const Dali::Property::Value& attributes);

  /// Sibling Order Change API

  /**
   * @copydoc Dali::VisualObject::SetSiblingOrder()
   */
  void SetSiblingOrder(uint32_t siblingOrder);

  /**
   * @copydoc Dali::VisualObject::GetSiblingOrder()
   */
  uint32_t GetSiblingOrder() const;

  /**
   * @copydoc Dali::VisualObject::Raise()
   */
  void Raise();

  /**
   * @copydoc Dali::VisualObject::Lower()
   */
  void Lower();

  /**
   * @copydoc Dali::VisualObject::RaiseToTop()
   */
  void RaiseToTop();

  /**
   * @copydoc Dali::VisualObject::LowerToBottom()
   */
  void LowerToBottom();

  /**
   * @copydoc Dali::VisualObject::RaiseAbove()
   */
  void RaiseAbove(Dali::Internal::VisualObject& target);

  /**
   * @copydoc Dali::VisualObject::LowerBelow()
   */
  void LowerBelow(Dali::Internal::VisualObject& target);

public: ///< Called from Internal::VisualObjectsContainer
  /**
   * @brief Set the container who contain this visual object.
   * @note It should be called only from Internal::VisualObject or Internal::VisualObjectsContainer.
   *
   * @param[in] container VisualObjectsContainer who contain this visual object. Or empty container if visual object is not in container.
   */
  void AttachToContainerInternal(Dali::VisualObjectsContainer container);

  /**
   * @brief Detach from container without change the container.
   * @note It should be called only from Internal::VisualObject or Internal::VisualObjectsContainer.
   */
  void DetachFromContainerInternal();

  /**
   * @brief Set the sibling order without change the container.
   * @note It should be called only from Internal::VisualObject or Internal::VisualObjectsContainer.
   *
   * @param[in] siblingOrder The sibling order inside of the container.
   */
  void SetSiblingOrderInternal(uint32_t siblingOrder);

  /**
   * @brief Get the depth index of visual, depend by sibling order.
   * @note It should be called only from Internal::VisualObject or Internal::VisualObjectsContainer.
   *
   * @return The depth index of visual.
   */
  int32_t GetDepthIndex() const;

  /**
   * @brief Get the Visual::Base object what this object hold.
   * @note It should be called only from Internal::VisualObject or Internal::VisualObjectsContainer.
   *
   * @return Latest created Visual::Base object created by VisualObject::CreateVisual();
   */
  Dali::Toolkit::Visual::Base GetVisual()
  {
    return mVisual;
  }

  /**
   * @brief Set the unique id of visual what it registered into control.
   *
   * @param[in] visualPropertyId The id of visual property registered.
   */
  void SetVisualPropertyId(VisualPropertyId visualPropertyId)
  {
    mVisualPropertyId = visualPropertyId;
  }

  /**
   * @brief Get the unique id of visual what it registered into control.
   *
   * @return The id of visual property registered
   */
  VisualPropertyId GetVisualPropertyId() const
  {
    return mVisualPropertyId;
  }

public:
  /**
   * @brief Constructor - creates a VisualObject.
   */
  VisualObject();

  /**
   * @brief Destructor.
   */
  ~VisualObject() override;

private:
  Dali::WeakHandle<Dali::VisualObjectsContainer> mContainer;

  Dali::Toolkit::Visual::Base mVisual;

  Dali::VisualObjectsContainer::ContainerRangeType mRangeType{Dali::VisualObjectsContainer::ContainerRangeType::CONTENT};

  uint32_t mSiblingOrder{0u};
  uint32_t mVisualPropertyId{INVALID_VISUAL_PROPERTY_ID};
};
} // namespace Internal

// Helpers for api forwarding methods

inline static Internal::VisualObject& GetImplementation(Dali::VisualObject& handle)
{
  DALI_ASSERT_ALWAYS(handle && "VisualObject handle is empty.");

  Dali::BaseObject& object = handle.GetBaseObject();

  return static_cast<Internal::VisualObject&>(object);
}

inline static const Internal::VisualObject& GetImplementation(const Dali::VisualObject& handle)
{
  DALI_ASSERT_ALWAYS(handle && "VisualObject handle is empty.");

  const Dali::BaseObject& object = handle.GetBaseObject();

  return static_cast<const Internal::VisualObject&>(object);
}

} // namespace Dali

#endif // CSHARP_VISUAL_OBJECT_IMPL_H