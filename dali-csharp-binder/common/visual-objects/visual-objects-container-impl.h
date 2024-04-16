#ifndef CSHARP_VISUAL_OBJECTS_CONTAINER_IMPL_H
#define CSHARP_VISUAL_OBJECTS_CONTAINER_IMPL_H

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
#include <dali-toolkit/public-api/controls/control.h>
#include <dali/devel-api/common/free-list.h>
#include <dali/public-api/common/dali-common.h>
#include <dali/public-api/common/intrusive-ptr.h>
#include <dali/public-api/common/vector-wrapper.h>
#include <dali/public-api/object/base-object.h>
#include <dali/public-api/object/weak-handle.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/visual-objects/visual-object.h>

namespace Dali
{
namespace Internal
{
class VisualObjectsContainer;
using VisualObjectsContainerPtr = Dali::IntrusivePtr<VisualObjectsContainer>;

class VisualObjectsContainer : public Dali::BaseObject
{
public:
  /**
   * @brief Creates a VisualObjectsContainer object.
   *
   * @SINCE_2_3.27
   * @param[in] control The control that owns this VisualObjectsContainer.
   * @param[in] rangeType The range type of this VisualObjectsContainer.
   * @return The newly created visual object container.
   */
  static VisualObjectsContainerPtr New(Dali::Toolkit::Control control, Dali::VisualObjectsContainer::ContainerRangeType rangeType);

public: ///< Public API
  /**
   * @copydoc Dali::VisualObjectsContainer::GetOwner()
   */
  Dali::Toolkit::Control GetOwner() const;

  /**
   * @copydoc Dali::VisualObjectsContainer::GetContainerRangeType()
   */
  Dali::VisualObjectsContainer::ContainerRangeType GetContainerRangeType() const;

  /**
   * @copydoc Dali::VisualObjectsContainer::GetVisualObjectsCount()
   */
  uint32_t GetVisualObjectsCount() const;

  /**
   * @copydoc Dali::VisualObjectsContainer::GetVisualObjectAt()
   */
  Dali::VisualObject GetVisualObjectAt(uint32_t index) const;

  /**
   * @copydoc Dali::VisualObjectsContainer::AddVisualObject()
   */
  bool AddVisualObject(Dali::VisualObject visualObject);

  /**
   * @copydoc Dali::VisualObjectsContainer::RemoveVisualObject()
   */
  void RemoveVisualObject(Dali::VisualObject visualObject);

public: ///< Called from Internal::VisualObject
  /**
   * @brief Replace visual object's visual into the control.
   * If the visual object is already registered, it will be replaced.
   * If VisualObject doesn't have visual yet, it will unregister visual.
   *
   * @param[in] visualObjectImpl visual object implements.
   */
  void ReplaceVisualObject(Dali::Internal::VisualObject& visualObjectImpl);

  /**
   * @copydoc Dali::VisualObjectsContainer::ChangeSiblingOrder()
   */
  void ChangeSiblingOrder(uint32_t fromIndex, uint32_t toIndex);

private:
  /**
   * @brief Unregister visual object's visual from the control.
   *
   * @param[in] visualObjectImpl visual object implements.
   */
  void UnregisterVisualObject(Dali::Internal::VisualObject& visualObjectImpl);

public:
  /**
   * @brief Constructor - creates a VisualObjectsContainer.
   *
   * @param[in] control The control that owns this VisualObjectsContainer.
   * @param[in] rangeType The range type of this VisualObjectsContainer.
   */
  VisualObjectsContainer(Dali::Toolkit::Control control, Dali::VisualObjectsContainer::ContainerRangeType rangeType);

  /**
   * @brief Destructor.
   */
  ~VisualObjectsContainer() override;

private:
  std::vector<Dali::VisualObject>          mVisualObjects;
  Dali::WeakHandle<Dali::Toolkit::Control> mControl;

  const Dali::VisualObjectsContainer::ContainerRangeType mRangeType;

  Dali::FreeList mVisualIndexConverter; ///< Convert from virtual visual index of VisualObject to actual visual index of mControl.
};
} // namespace Internal

// Helpers for api forwarding methods

inline static Internal::VisualObjectsContainer& GetImplementation(Dali::VisualObjectsContainer& handle)
{
  DALI_ASSERT_ALWAYS(handle && "VisualObjectsContainer handle is empty.");

  Dali::BaseObject& object = handle.GetBaseObject();

  return static_cast<Internal::VisualObjectsContainer&>(object);
}

inline static const Internal::VisualObjectsContainer& GetImplementation(const Dali::VisualObjectsContainer& handle)
{
  DALI_ASSERT_ALWAYS(handle && "VisualObjectsContainer handle is empty.");

  const Dali::BaseObject& object = handle.GetBaseObject();

  return static_cast<const Internal::VisualObjectsContainer&>(object);
}

} // namespace Dali

#endif // CSHARP_VISUAL_OBJECTS_CONTAINER_IMPL_H