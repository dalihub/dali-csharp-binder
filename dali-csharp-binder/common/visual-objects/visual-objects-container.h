#ifndef CSHARP_VISUAL_OBJECTS_CONTAINER_H
#define CSHARP_VISUAL_OBJECTS_CONTAINER_H

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
#include <dali-toolkit/public-api/controls/control.h>
#include <dali/public-api/object/base-handle.h>

namespace Dali
{
namespace Internal
{
class VisualObjectsContainer;
}

class VisualObject;

/**
 * @brief VisualObjectsContainer is a container for visual objects for C# specific policy.
 *
 * For each VisualObjectContainer, there is a corresponding control.
 * Each control can has only one VisualObjectsContainer per each ContainerRangeType.
 *
 * It is used to manage visual objects properties to owned control;
 * e.g. SiblingOrder of visual objects to DepthIndex of visual.
 *
 * To avoid the collision between Dali toolkit logic and C# specific policy,
 * there is some limitation of visual object counts per each ContainerRangeType.
 *
 * For example, if ContainerRangeType is ContainerRangeType::CONTENT,
 * it will use visual object's depth index only between
 * Dali::Toolkit::DepthIndex::Ranges::BACKGROUND and Dali::Toolkit::DepthIndex::Ranges::CONTENT.
 * If user try to add over the Dali::Toolkit::DepthIndex::Ranges::CONTENT, it will be ignored.
 *
 * @SINCE_2_3.27
 */
class VisualObjectsContainer : public Dali::BaseHandle
{
public:
  /**
   * @brief Enumeration for the visual objects container range.
   * It will be used when we determine the visual's depth index.
   *
   * @SINCE_2_3.27
   */
  enum class ContainerRangeType
  {
    BACKGROUND_EFFECT, ///< The visual object exist under Dali::Toolkit::DepthIndex::Ranges::BACKGROUND_EFFECT
    BACKGROUND,        ///< The visual object exist between Dali::Toolkit::DepthIndex::Ranges::BACKGROUND_EFFECT and Dali::Toolkit::DepthIndex::Ranges::BACKGROUND
    CONTENT,           ///< The visual object exist between Dali::Toolkit::DepthIndex::Ranges::BACKGROUND and Dali::Toolkit::DepthIndex::Ranges::CONTENT
    DECORATION,        ///< The visual object exist between Dali::Toolkit::DepthIndex::Ranges::CONTENT and Dali::Toolkit::DepthIndex::Ranges::DECORATION
    FOREGROUND_EFFECT, ///< The visual object exist between Dali::Toolkit::DepthIndex::Ranges::DECORATION and Dali::Toolkit::DepthIndex::Ranges::FOREGROUND_EFFECT
  };

  /**
   * @brief Creates a VisualObjectsContainer object.
   *
   * @SINCE_2_3.27
   * @param[in] control The control that owns this VisualObjectsContainer.
   * @param[in] rangeType The range type of this VisualObjectsContainer.
   * @return The newly created visual objects container
   * @post The control should not create another VisualObjectsContainer for each rangeType.
   */
  static VisualObjectsContainer New(Dali::Toolkit::Control control, ContainerRangeType rangeType = ContainerRangeType::CONTENT);

public: ///< Public API
  /**
   * @brief Adds a visual object to the container.
   *
   * @SINCE_2_3.27
   * @return The owner of this container, or empty handle if owner is invalid.
   */
  Dali::Toolkit::Control GetOwner() const;

  /**
   * @brief Gets the range type of VisualObjectsContainer.
   *
   * @SINCE_2_3.27
   * @return The range type of VisualObjectsContainer.
   */
  ContainerRangeType GetContainerRangeType() const;

  /**
   * @brief Gets the number of visual objects in the container.
   *
   * @SINCE_2_3.27
   * @return The number of visual objects in the container.
   */
  uint32_t GetVisualObjectsCount() const;

  /**
   * @brief Get the visual objects from the container.
   * @note If index is out of range, will throw exception.
   *
   * @SINCE_2_3.27
   * @param[in] index The index of the visual object to get.
   * @return The visual object at the given index.
   */
  Dali::VisualObject GetVisualObjectAt(uint32_t index) const;

  /**
   * @brief Adds a visual object to the container.
   * Added visual object will be placed top of other visuals.
   * If the container cannot add more than maxium count of objects
   * or the visual object is already added, It will be ignored.
   *
   * @SINCE_2_3.27
   * @param[in] visualObject The visual object to be added.
   * @return True if the visual object is added successfully.
   */
  bool AddVisualObject(Dali::VisualObject visualObject);

  /**
   * @brief Removes a visual object from the container.
   * All other visual objects will be shifted down.
   *
   * @SINCE_2_3.27
   * @param[in] visualObject The visual object to be added.
   */
  void RemoveVisualObject(Dali::VisualObject visualObject);

public:
  VisualObjectsContainer()                                     = default;
  ~VisualObjectsContainer()                                    = default;
  VisualObjectsContainer(const VisualObjectsContainer& handle) = default;
  VisualObjectsContainer& operator=(const VisualObjectsContainer& rhs) = default;
  VisualObjectsContainer(VisualObjectsContainer&& rhs) noexcept        = default;
  VisualObjectsContainer& operator=(VisualObjectsContainer&& rhs) noexcept = default;

  /**
   * @brief Downcasts a handle to VisualObjectsContainer handle.
   *
   * @param[in] handle Handle to an object
   * @return A handle to a VisualObjectsContainer or an uninitialized handle
   */
  static VisualObjectsContainer DownCast(BaseHandle handle);

public:
  /**
   * @brief This constructor is used by Dali New() methods.
   *
   * @param[in] object A pointer to a newly allocated Dali resource
   */
  VisualObjectsContainer(Dali::Internal::VisualObjectsContainer* object);
};
} // namespace Dali

#endif // CSHARP_VISUAL_OBJECTS_CONTAINER_H