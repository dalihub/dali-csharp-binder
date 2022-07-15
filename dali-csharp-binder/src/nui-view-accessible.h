
/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
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

#ifndef NUI_VIEW_ACCESSIBLE_H
#define NUI_VIEW_ACCESSIBLE_H

// EXTERNAL INCLUDES
#include <dali-toolkit/devel-api/controls/control-accessible.h>
#include <dali/devel-api/adaptor-framework/accessibility.h>
#include <dali/devel-api/atspi-interfaces/editable-text.h>
#include <dali/devel-api/atspi-interfaces/selection.h>
#include <dali/devel-api/atspi-interfaces/text.h>
#include <dali/devel-api/atspi-interfaces/value.h>

class NUIViewAccessible : public Dali::Toolkit::DevelControl::ControlAccessible,
                          public virtual Dali::Accessibility::EditableText, // includes Text
                          public virtual Dali::Accessibility::Selection,
                          public virtual Dali::Accessibility::Value

{
public:
  struct AccessibilityDelegate; // Forward declaration

  NUIViewAccessible()                         = delete;
  NUIViewAccessible(const NUIViewAccessible&) = delete;
  NUIViewAccessible(NUIViewAccessible&&)      = delete;

  NUIViewAccessible& operator=(const NUIViewAccessible&) = delete;
  NUIViewAccessible& operator=(NUIViewAccessible&&) = delete;

  NUIViewAccessible(Dali::Actor actor);

  static void SetAccessibilityDelegate(const AccessibilityDelegate* accessibilityDelegate);

  // Standard interfaces (Accessible, Action, Component)

  std::string GetNameRaw() const override;

  std::string GetDescriptionRaw() const override;

  bool GrabHighlight() override;

  std::string GetActionName(std::size_t index) const override;

  std::size_t GetActionCount() const override;

  bool DoAction(std::size_t index) override;

  bool DoAction(const std::string& name) override;

  Dali::Accessibility::States CalculateStates() override;

  Dali::Accessibility::Attributes GetAttributes() const override;

  Dali::Property::Index GetNamePropertyIndex() override;

  Dali::Property::Index GetDescriptionPropertyIndex() override;

  bool IsScrollable() const override;

  bool ScrollToChild(Dali::Actor child) override;

  Dali::Accessibility::AtspiInterfaces DoGetInterfaces() const override;

  // Value interface

  double GetMinimum() const override;

  double GetCurrent() const override;

  double GetMaximum() const override;

  bool SetCurrent(double value) override;

  double GetMinimumIncrement() const override;

  // Text interface

  std::string GetText(std::size_t startOffset, std::size_t endOffset) const override;

  std::size_t GetCharacterCount() const override;

  std::size_t GetCursorOffset() const override;

  bool SetCursorOffset(std::size_t offset) override;

  Dali::Accessibility::Range GetTextAtOffset(std::size_t offset, Dali::Accessibility::TextBoundary boundary) const override;

  Dali::Accessibility::Range GetRangeOfSelection(std::size_t selectionIndex) const override;

  bool RemoveSelection(std::size_t selectionIndex) override;

  bool SetRangeOfSelection(std::size_t selectionIndex, std::size_t startOffset, std::size_t endOffset) override;

  Dali::Rect<> GetRangeExtents(std::size_t startOffset, std::size_t endOffset, Dali::Accessibility::CoordinateType type) override;

  // EditableText interface

  bool CopyText(std::size_t startPosition, std::size_t endPosition) override;

  bool CutText(std::size_t startPosition, std::size_t endPosition) override;

  bool InsertText(std::size_t startPosition, std::string text) override;

  bool SetTextContents(std::string newContents) override;

  bool DeleteText(std::size_t startPosition, std::size_t endPosition) override;

  // Selection interface

  int GetSelectedChildrenCount() const override;

  Dali::Accessibility::Accessible* GetSelectedChild(int selectedChildIndex) override;

  bool SelectChild(int childIndex) override;

  bool DeselectSelectedChild(int selectedChildIndex) override;

  bool IsChildSelected(int childIndex) const override;

  bool SelectAll() override;

  bool ClearSelection() override;

  bool DeselectChild(int childIndex) override;

private:
  // Points to memory managed from the C# side
  static inline const AccessibilityDelegate* mTable = nullptr;

  // Frees memory allocated in C# via a call to CSharp_Dali_Accessibility_DuplicateString
  static std::string StealString(char* str);

  // Frees memory allocated in C# via a call to an interop that calls 'operator new'
  template<typename T>
  static T StealObject(T* obj);

  /**
   * @brief Safely calls a virtual C# method through AccessibilityDelegate.
   *
   * This verifies that the specified function pointer is not null and that
   * the specified interface is implemented by the target object. This is due
   * to the fact that dynamic_cast can see more interfaces than this object
   * is meant to represent (dynamic_cast cannot be used to examine C# objects,
   * so we have to rely on a set of AtspiInterfaces returned by GetInterfaces).
   *
   * @tparam I The interface that the method belongs to
   * @tparam R The return type of the method (deduced automatically)
   * @tparam Args The parameter types of the method (deduced automatically)
   *
   * @param method The method (function pointer from AccessibilityDelegate)
   * @param args Method arguments
   *
   * @return Value returned by the chosen method
   */
  template<Dali::Accessibility::AtspiInterface I, typename R, typename... Args>
  R CallMethod(R (*method)(Dali::RefObject*, Args...), Args... args) const;
};

#endif // NUI_VIEW_ACCESSIBLE_H
