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

// CLASS HEADER
#include "nui-view-accessible.h"

// EXTERNAL INCLUDES
#include <dali/integration-api/debug.h>

// INTERNAL INCLUDES
#include "control-devel-wrap.h"

using namespace Dali;
using namespace Dali::Toolkit;

using Interface = Accessibility::AtspiInterface;

namespace
{
void GetAttributesCallback(const char* key, const char* value, Accessibility::Attributes* attributes)
{
  attributes->insert_or_assign(key, value);
}

using GetAttributesCallbackType = decltype(&GetAttributesCallback);

} // unnamed namespace

// Keep this structure layout binary compatible with the respective C# structure!
struct NUIViewAccessible::AccessibilityDelegate
{
  AccessibilityDelegate() = delete;

  // clang-format off
  char*                 (*getName)                 (RefObject*);                   //  1
  char*                 (*getDescription)          (RefObject*);                   //  2
  bool                  (*doAction)                (RefObject*, const char*);      //  3
  std::uint64_t         (*calculateStates)         (RefObject*, std::uint64_t);    //  4
  int                   (*getActionCount)          (RefObject*);                   //  5
  char*                 (*getActionName)           (RefObject*, int);              //  6
  std::uint32_t         (*getInterfaces)           (RefObject*);                   //  7
  double                (*getMinimum)              (RefObject*);                   //  8
  double                (*getCurrent)              (RefObject*);                   //  9
  double                (*getMaximum)              (RefObject*);                   // 10
  bool                  (*setCurrent)              (RefObject*, double);           // 11
  double                (*getMinimumIncrement)     (RefObject*);                   // 12
  bool                  (*isScrollable)            (RefObject*);                   // 13
  char*                 (*getText)                 (RefObject*, int, int);         // 14
  int                   (*getCharacterCount)       (RefObject*);                   // 15
  int                   (*getCursorOffset)         (RefObject*);                   // 16
  bool                  (*setCursorOffset)         (RefObject*, int);              // 17
  Accessibility::Range* (*getTextAtOffset)         (RefObject*, int, int);         // 18
  Accessibility::Range* (*getRangeOfSelection)     (RefObject*, int);              // 19
  bool                  (*removeSelection)         (RefObject*, int);              // 20
  bool                  (*setRangeOfSelection)     (RefObject*, int, int, int);    // 21
  bool                  (*copyText)                (RefObject*, int, int);         // 22
  bool                  (*cutText)                 (RefObject*, int, int);         // 23
  bool                  (*insertText)              (RefObject*, int, const char*); // 24
  bool                  (*setTextContents)         (RefObject*, const char*);      // 25
  bool                  (*deleteText)              (RefObject*, int, int);         // 26
  bool                  (*scrollToChild)           (RefObject*, Actor*);           // 27
  int                   (*getSelectedChildrenCount)(RefObject*);                   // 28
  Actor*                (*getSelectedChild)        (RefObject*, int);              // 29
  bool                  (*selectChild)             (RefObject*, int);              // 30
  bool                  (*deselectSelectedChild)   (RefObject*, int);              // 31
  bool                  (*isChildSelected)         (RefObject*, int);              // 32
  bool                  (*selectAll)               (RefObject*);                   // 33
  bool                  (*clearSelection)          (RefObject*);                   // 34
  bool                  (*deselectChild)           (RefObject*, int);              // 35
  Rect<int>*            (*getRangeExtents)         (RefObject*, int, int, int);    // 36
  void                  (*getAttributes)           (RefObject*, GetAttributesCallbackType, Accessibility::Attributes*); // 37
  // clang-format on
};

NUIViewAccessible::NUIViewAccessible(Actor actor)
: ControlAccessible(actor)
{
  DALI_ASSERT_DEBUG(mTable);
}

void NUIViewAccessible::SetAccessibilityDelegate(const AccessibilityDelegate* accessibilityDelegate)
{
  if(mTable)
  {
    DALI_LOG_ERROR("Overwriting global AccessibilityDelegate");
  }

  mTable = accessibilityDelegate;
}

std::string NUIViewAccessible::StealString(char* str)
{
  std::string ret{};

  if(str)
  {
    ret = {str};
    free(str);
  }

  return ret;
}

template<typename T>
T NUIViewAccessible::StealObject(T* obj)
{
  T ret{};

  if(obj)
  {
    ret = std::move(*obj);
    delete obj;
  }

  return ret;
}

template<Interface I, typename R, typename... Args>
R NUIViewAccessible::CallMethod(R (*method)(RefObject*, Args...), Args... args) const
{
  DALI_ASSERT_DEBUG(method);
  DALI_ASSERT_ALWAYS(GetInterfaces()[I]);

  return method(Self().GetObjectPtr(), args...);
}

//
// Standard interfaces (Accessible, Action, Component)
//

std::string NUIViewAccessible::GetNameRaw() const
{
  char* name = CallMethod<Interface::ACCESSIBLE>(mTable->getName);

  return StealString(name);
}

std::string NUIViewAccessible::GetDescriptionRaw() const
{
  char* description = CallMethod<Interface::ACCESSIBLE>(mTable->getDescription);

  return StealString(description);
}

bool NUIViewAccessible::GrabHighlight()
{
  bool ret = ControlAccessible::GrabHighlight();

  if(ret)
  {
    // Note: Currently (2021-03-26), size negotiation between the default highlight frame
    // and NUI Components is known to be broken (and possibly in other cases, too). Please
    // remove this for GrabHighlight() when it is fixed.
    auto size = Self().GetProperty<Vector2>(Actor::Property::SIZE);
    mCurrentHighlightActor.GetHandle().SetProperty(Actor::Property::SIZE, size);
  }

  return ret;
}

std::string NUIViewAccessible::GetActionName(std::size_t index) const
{
  char* name = CallMethod<Interface::ACTION>(mTable->getActionName, static_cast<int>(index));

  return StealString(name);
}

std::size_t NUIViewAccessible::GetActionCount() const
{
  int count = CallMethod<Interface::ACTION>(mTable->getActionCount);

  return static_cast<std::size_t>(count);
}

bool NUIViewAccessible::DoAction(std::size_t index)
{
  return DoAction(GetActionName(index));
}

bool NUIViewAccessible::DoAction(const std::string& name)
{
  return CallMethod<Interface::ACTION>(mTable->doAction, name.c_str());
}

Accessibility::States NUIViewAccessible::CalculateStates()
{
  std::uint64_t states = ControlAccessible::CalculateStates().GetRawData64();

  states = CallMethod<Interface::ACCESSIBLE>(mTable->calculateStates, states);

  return Accessibility::States{states};
}

Accessibility::Attributes NUIViewAccessible::GetAttributes() const
{
  auto attributes = ControlAccessible::GetAttributes();

  CallMethod<Interface::ACCESSIBLE>(mTable->getAttributes, &GetAttributesCallback, &attributes);

  return attributes;
}

Property::Index NUIViewAccessible::GetNamePropertyIndex()
{
  return Property::INVALID_INDEX;
}

Property::Index NUIViewAccessible::GetDescriptionPropertyIndex()
{
  return Property::INVALID_INDEX;
}

bool NUIViewAccessible::IsScrollable() const
{
  return CallMethod<Interface::COMPONENT>(mTable->isScrollable);
}

bool NUIViewAccessible::ScrollToChild(Actor child)
{
  return CallMethod<Interface::ACCESSIBLE>(mTable->scrollToChild, new Actor(child));
}

Accessibility::AtspiInterfaces NUIViewAccessible::DoGetInterfaces() const
{
  using Interfaces = Accessibility::AtspiInterfaces;

  Interfaces baseInterfaces;
  Interfaces extraInterfaces;

  // These are always implemented
  baseInterfaces[Interface::ACCESSIBLE] = true;
  baseInterfaces[Interface::ACTION]     = true;
  baseInterfaces[Interface::COLLECTION] = true;
  baseInterfaces[Interface::COMPONENT]  = true;

  // We cannot use CallMethod() here as that would cause recursion.
  // Note that the result will be cached and subsequent calls to GetInterfaces()
  // will not involve calling this virtual method or jumping into C# code.
  extraInterfaces = Interfaces{mTable->getInterfaces(Self().GetObjectPtr())};

  return baseInterfaces | extraInterfaces;
}

//
// Value interface
//

double NUIViewAccessible::GetMinimum() const
{
  return CallMethod<Interface::VALUE>(mTable->getMinimum);
}

double NUIViewAccessible::GetCurrent() const
{
  return CallMethod<Interface::VALUE>(mTable->getCurrent);
}

double NUIViewAccessible::GetMaximum() const
{
  return CallMethod<Interface::VALUE>(mTable->getMaximum);
}

bool NUIViewAccessible::SetCurrent(double value)
{
  return CallMethod<Interface::VALUE>(mTable->setCurrent, value);
}

double NUIViewAccessible::GetMinimumIncrement() const
{
  return CallMethod<Interface::VALUE>(mTable->getMinimumIncrement);
}

//
// Text interface
//

std::string NUIViewAccessible::GetText(std::size_t startOffset, std::size_t endOffset) const
{
  char* text = CallMethod<Interface::TEXT>(mTable->getText, static_cast<int>(startOffset), static_cast<int>(endOffset));

  return StealString(text);
}

std::size_t NUIViewAccessible::GetCharacterCount() const
{
  int count = CallMethod<Interface::TEXT>(mTable->getCharacterCount);

  return static_cast<std::size_t>(count);
}

std::size_t NUIViewAccessible::GetCursorOffset() const
{
  int offset = CallMethod<Interface::TEXT>(mTable->getCursorOffset);

  return static_cast<std::size_t>(offset);
}

bool NUIViewAccessible::SetCursorOffset(std::size_t offset)
{
  return CallMethod<Interface::TEXT>(mTable->setCursorOffset, static_cast<int>(offset));
}

Accessibility::Range NUIViewAccessible::GetTextAtOffset(std::size_t offset, Accessibility::TextBoundary boundary) const
{
  Accessibility::Range* range = CallMethod<Interface::TEXT>(mTable->getTextAtOffset, static_cast<int>(offset), static_cast<int>(boundary));

  return StealObject(range);
}

Accessibility::Range NUIViewAccessible::GetRangeOfSelection(std::size_t selectionIndex) const
{
  Accessibility::Range* range = CallMethod<Interface::TEXT>(mTable->getRangeOfSelection, static_cast<int>(selectionIndex));

  return StealObject(range);
}

bool NUIViewAccessible::RemoveSelection(std::size_t selectionIndex)
{
  return CallMethod<Interface::TEXT>(mTable->removeSelection, static_cast<int>(selectionIndex));
}

bool NUIViewAccessible::SetRangeOfSelection(std::size_t selectionIndex, std::size_t startOffset, std::size_t endOffset)
{
  return CallMethod<Interface::TEXT>(mTable->setRangeOfSelection, static_cast<int>(selectionIndex), static_cast<int>(startOffset), static_cast<int>(endOffset));
}

Rect<> NUIViewAccessible::GetRangeExtents(std::size_t startOffset, std::size_t endOffset, Accessibility::CoordinateType type)
{
  auto      rectPtr = CallMethod<Interface::TEXT>(mTable->getRangeExtents, static_cast<int>(startOffset), static_cast<int>(endOffset), static_cast<int>(type));
  Rect<int> rect    = StealObject(rectPtr);

  return {(float)rect.x, (float)rect.y, (float)rect.width, (float)rect.height};
}

//
// EditableText interface
//

bool NUIViewAccessible::CopyText(std::size_t startPosition, std::size_t endPosition)
{
  return CallMethod<Interface::EDITABLE_TEXT>(mTable->copyText, static_cast<int>(startPosition), static_cast<int>(endPosition));
}

bool NUIViewAccessible::CutText(std::size_t startPosition, std::size_t endPosition)
{
  return CallMethod<Interface::EDITABLE_TEXT>(mTable->cutText, static_cast<int>(startPosition), static_cast<int>(endPosition));
}

bool NUIViewAccessible::InsertText(std::size_t startPosition, std::string text)
{
  return CallMethod<Interface::EDITABLE_TEXT>(mTable->insertText, static_cast<int>(startPosition), text.c_str());
}

bool NUIViewAccessible::SetTextContents(std::string newContents)
{
  return CallMethod<Interface::EDITABLE_TEXT>(mTable->setTextContents, newContents.c_str());
}

bool NUIViewAccessible::DeleteText(std::size_t startPosition, std::size_t endPosition)
{
  return CallMethod<Interface::EDITABLE_TEXT>(mTable->deleteText, static_cast<int>(startPosition), static_cast<int>(endPosition));
}

//
// Selection interface
//

int NUIViewAccessible::GetSelectedChildrenCount() const
{
  return CallMethod<Interface::SELECTION>(mTable->getSelectedChildrenCount);
}

Accessibility::Accessible* NUIViewAccessible::GetSelectedChild(int selectedChildIndex)
{
  Actor* actor = CallMethod<Interface::SELECTION>(mTable->getSelectedChild, selectedChildIndex);

  return actor ? Accessibility::Accessible::Get(*actor) : nullptr;
}

bool NUIViewAccessible::SelectChild(int childIndex)
{
  return CallMethod<Interface::SELECTION>(mTable->selectChild, childIndex);
}

bool NUIViewAccessible::DeselectSelectedChild(int selectedChildIndex)
{
  return CallMethod<Interface::SELECTION>(mTable->deselectSelectedChild, selectedChildIndex);
}

bool NUIViewAccessible::IsChildSelected(int childIndex) const
{
  return CallMethod<Interface::SELECTION>(mTable->isChildSelected, childIndex);
}

bool NUIViewAccessible::SelectAll()
{
  return CallMethod<Interface::SELECTION>(mTable->selectAll);
}

bool NUIViewAccessible::ClearSelection()
{
  return CallMethod<Interface::SELECTION>(mTable->clearSelection);
}

bool NUIViewAccessible::DeselectChild(int childIndex)
{
  return CallMethod<Interface::SELECTION>(mTable->deselectChild, childIndex);
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Accessibility_DuplicateString(const char* arg)
{
  return strdup(arg);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_SetAccessibilityDelegate(const void* arg1_accessibilityDelegate, int arg2_accessibilityDelegateSize)
{
  GUARD_ON_NULL_RET(arg1_accessibilityDelegate);

  const auto* accessibilityDelegate     = static_cast<const NUIViewAccessible::AccessibilityDelegate*>(arg1_accessibilityDelegate);
  auto        accessibilityDelegateSize = static_cast<std::size_t>(arg2_accessibilityDelegateSize);

  try_catch(([&]() {
    if(accessibilityDelegateSize != sizeof(*accessibilityDelegate))
    {
      DALI_LOG_ERROR("SetAccessibilityDelegate error: Marshal.SizeOf<AccessibilityDelegate>()[%zu] != sizeof(AccessibilityDelegate)[%zu]\n", accessibilityDelegateSize, sizeof(*accessibilityDelegate));
      throw std::runtime_error("SetAccessibilityDelegate error: Marshal.SizeOf<AccessibilityDelegate>() != sizeof(AccessibilityDelegate)");
    }

    NUIViewAccessible::SetAccessibilityDelegate(accessibilityDelegate);
    Accessibility::Bridge::GetCurrentBridge()->SetToolkitName("nui(dali)");
  }));
}

#ifdef __cplusplus
} // extern "C"
#endif