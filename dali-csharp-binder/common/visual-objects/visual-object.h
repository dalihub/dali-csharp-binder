#ifndef CSHARP_VISUAL_OBJECT_H
#define CSHARP_VISUAL_OBJECT_H

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
#include <dali/public-api/object/base-handle.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/visual-objects/visual-objects-container.h>

namespace Dali
{
namespace Internal
{
class VisualObject;
}
/**
 * @brief VisualObject is a owner of Visual::Base.
 * It will be used when we want to Attach / Detach from control,
 * and change rendering order for C# specific policy.
 *
 * VisualObject could be added to only one VisualObjectsContainer.
 * If user try to add VisualObject to another VisualObjectsContainer,
 * it will be removed from previous container and added to new container.
 *
 * @code
 *
 * TextLabel textLabel = TextLabel::New("Hello World");
 * textLabel.SetBackgroundColor(Color::RED);
 *
 * VisualObjectsContainer container = VisualObjectsContainer.New(textLabel);
 *
 * VisualObject visualObject1 = VisualObject.New();
 * VisualObject visualObject2 = VisualObject.New();
 * VisualObject visualObject3 = VisualObject.New();
 * container.AddVisualObject(visualObject1);
 * container.AddVisualObject(visualObject2);
 * container.AddVisualObject(visualObject3);
 *
 * // Current textLabel will show RED background and text.
 *
 * visualObject1.CreateVisual(TRANSLUCENT_BLUE_COLOR_PROPERTY_MAP);
 *
 * // textLabel will show text, translucent blue, and red (top to bottom)
 *
 * visualObject3.CreateVisual(SOME_IMAGE_PROPERTY_MAP);
 *
 * // textLabel will show text, some image, translucent blue, and red (top to bottom)
 *
 * visualObject2.CreateVisual(GREEN_BORDER_PROPERTY_MAP);
 *
 * // textLabel will show text, some image, green border, translucent blue, and red (top to bottom)
 *
 * visualObject2.RaiseToTop();
 *
 * // textLabel will show text, green border, some image, translucent blue, and red (top to bottom)
 *
 * @endcode
 *
 * @SINCE_2_3.27
 */
class VisualObject : public Dali::BaseHandle
{
public:
  /**
   * @brief Creates a VisualObject object.
   *
   * @SINCE_2_3.27
   * @return The newly created visual object.
   */
  static VisualObject New();

public: ///< Public API
  /**
   * @brief Detach from the Container. Now container will be empty handle.
   *
   * @SINCE_2_3.27
   */
  void DetachFromContainer();

  /**
   * @brief Get the Container who contain this visual object.
   *
   * @SINCE_2_3.27
   * @return VisualObjectsContainer who contain this visual object. Or empty container if visual object is not in container.
   */
  Dali::VisualObjectsContainer GetContainer();

  /**
   * @brief Create Visual with Property::Map.
   * @note It will remove previous visual.
   *
   * @SINCE_2_3.27
   * @param[in] map The Creation information of the visual.
   */
  void CreateVisual(const Dali::Property::Map& map);

  /**
   * @brief Get the visual property map.
   *
   * @SINCE_2_3.27
   * @param[out] map The visual property map.
   */
  void RetrieveVisualPropertyMap(Dali::Property::Map& map) const;

  /**
   * @brief Perform an action on a visual registered to this control.
   * Visuals will have actions, this API is used to perform one of these actions with the given attributes.
   * @note If visual is not been registered to the control, action should be ignored.
   *
   * @SINCE_2_3.27
   * @param[in] actionId The action to perform.  See Visual to find supported actions.
   * @param[in] attributes Optional attributes for the action.
   */
  void DoAction(Dali::Property::Index actionId, const Dali::Property::Value& attributes);

  /// Sibling Order Change API

  /**
   * @brief Set the sibling order of the visual object inside of the container.
   * @note It will change other VisualObject's sibling order to keep the order.
   *
   * @SINCE_2_3.27
   * @param[in] siblingOrder The sibling order inside of the container.
   */
  void SetSiblingOrder(uint32_t siblingOrder);

  /**
   * @brief Get the sibling order of the visual object inside of the container.
   *
   * @SINCE_2_3.27
   * @return The sibling order inside of the container. Or 0 if visual object is not in container.
   */
  uint32_t GetSiblingOrder() const;

  /**
   * @brief Raise the visual object above the next sibling visual object.
   *
   * @SINCE_2_3.27
   * @pre The VisualObject has been initialized.
   * @pre The VisualObject has been parented.
   */
  void Raise();

  /**
   * @brief Lower the visual object below the previous sibling visual object.
   *
   * @SINCE_2_3.27
   * @pre The VisualObject has been initialized.
   * @pre The VisualObject has been parented.
   */
  void Lower();

  /**
   * @brief Raise visual object above all other sibling visual objects.
   *
   * @SINCE_2_3.27
   * @pre The VisualObject has been initialized.
   * @pre The VisualObject has been parented.
   */
  void RaiseToTop();

  /**
   * @brief Lower visual object to the bottom of all other sibling visual objects.
   *
   * @SINCE_2_3.27
   * @pre The VisualObject has been initialized.
   * @pre The VisualObject has been parented.
   */
  void LowerToBottom();

  /**
   * @brief Raises the visual object above the target visual object.
   *
   * @SINCE_2_3.27
   * @param[in] target The target visual object
   * @pre The VisualObject has been initialized.
   * @pre The VisualObject has been parented.
   * @pre The target visual object is a sibling.
   */
  void RaiseAbove(VisualObject target);

  /**
   * @brief Lower the visual object to below the target visual object.
   *
   * @SINCE_2_3.27
   * @param[in] target The target visual object
   * @pre The VisualObject has been initialized.
   * @pre The VisualObject has been parented.
   * @pre The target visual object is a sibling.
   */
  void LowerBelow(VisualObject target);

public:
  VisualObject()                           = default;
  ~VisualObject()                          = default;
  VisualObject(const VisualObject& handle) = default;
  VisualObject& operator=(const VisualObject& rhs) = default;
  VisualObject(VisualObject&& rhs) noexcept        = default;
  VisualObject& operator=(VisualObject&& rhs) noexcept = default;

public:
  /**
   * @brief This constructor is used by Dali New() methods.
   *
   * @param[in] object A pointer to a newly allocated Dali resource
   */
  VisualObject(Dali::Internal::VisualObject* object);
};
} // namespace Dali

#endif // CSHARP_VISUAL_OBJECT_H