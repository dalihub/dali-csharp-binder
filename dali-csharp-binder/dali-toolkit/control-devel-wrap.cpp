/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/devel-api/controls/control-accessible.h>
#include <dali/devel-api/adaptor-framework/accessibility-bridge.h>
#include <dali/devel-api/adaptor-framework/accessibility.h>
#include <vector>

// INTERNAL INCLUDES
#include <dali-toolkit/dali-toolkit.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/visuals/animated-vector-image-visual-actions-devel.h>
#include <dali-toolkit/devel-api/visuals/animated-vector-image-visual-signals-devel.h>
#include <dali-toolkit/devel-api/visuals/image-visual-properties-devel.h>
#include <dali/devel-api/adaptor-framework/vector-animation-renderer.h>
#include <dali/devel-api/atspi-interfaces/accessible.h>
#include <string>
#include "control-devel-wrap.h"

using namespace Dali;
using namespace Dali::Toolkit;
using namespace Dali::Toolkit::DevelControl;

namespace
{
typedef void (*SavedCallbackType)(int32_t, int32_t, uint32_t, float* val1, float* val2, float* val3);
SavedCallbackType gSavedRootCallback = nullptr;

Dali::Property::Value RootCallback(int32_t id, VectorAnimationRenderer::VectorProperty property, uint32_t frameNumber)
{
  float val1 = 0.0f, val2 = 0.0f, val3 = 0.0f;
  if(gSavedRootCallback != nullptr)
  {
    gSavedRootCallback(id, (int)property, frameNumber, &val1, &val2, &val3);
  }

  switch(property)
  {
    case VectorAnimationRenderer::VectorProperty::FILL_COLOR:
    case VectorAnimationRenderer::VectorProperty::STROKE_COLOR:
      return Dali::Vector3(val1, val2, val3);
      break;

    case VectorAnimationRenderer::VectorProperty::TRANSFORM_ANCHOR:
    case VectorAnimationRenderer::VectorProperty::TRANSFORM_POSITION:
    case VectorAnimationRenderer::VectorProperty::TRANSFORM_SCALE:
    case VectorAnimationRenderer::VectorProperty::TRIM_END:
      return Dali::Vector2(val1, val2);
      break;

    case VectorAnimationRenderer::VectorProperty::FILL_OPACITY:
    case VectorAnimationRenderer::VectorProperty::STROKE_OPACITY:
    case VectorAnimationRenderer::VectorProperty::STROKE_WIDTH:
    case VectorAnimationRenderer::VectorProperty::TRANSFORM_ROTATION:
    case VectorAnimationRenderer::VectorProperty::TRANSFORM_OPACITY:
    case VectorAnimationRenderer::VectorProperty::TRIM_START:
      return val1;
      break;

    default:
      return 0;
      break;
  }
}
} //unnamed namespace

#ifdef __cplusplus
extern "C" {
#endif

// property
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_DISPATCH_KEY_EVENTS_get()
{
  return (int)Dali::Toolkit::DevelControl::Property::DISPATCH_KEY_EVENTS;
}

#define GENERATE_ACCESSIBILITY_SIGNAL_2_FUNCTIONS(HType, SignalType, SignalName) \
  GENERATE_CONTROL_SIGNAL_1(Dali::Toolkit::Control*, HType, SignalType, SignalName)

#define GENERATE_ACCESSIBILITY_SIGNAL_3_FUNCTIONS(HType, SignalType, SignalName)    \
  GENERATE_CONTROL_SIGNAL_1(Dali::Toolkit::Control*, HType, SignalType, SignalName) \
  GENERATE_CONTROL_SIGNAL_2(Dali::Toolkit::Control*, SignalType, SignalName)

#define GENERATE_ACCESSIBILITY_SIGNAL_4_FUNCTIONS(HType, SignalType, SignalName)    \
  GENERATE_CONTROL_SIGNAL_1(Dali::Toolkit::Control*, HType, SignalType, SignalName) \
  GENERATE_CONTROL_SIGNAL_2(Dali::Toolkit::Control*, SignalType, SignalName)        \
  GENERATE_CONTROL_SIGNAL_3(Dali::Toolkit::Control*, SignalType, SignalName)

#define GENERATE_CONTROL_SIGNAL_1(CType, HType, SignalType, SignalName)                                               \
  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_##SignalName##_Connect(void* caller, void* handler)    \
  {                                                                                                                   \
    GUARD_ON_NULL_RET(caller);                                                                                        \
    GUARD_ON_NULL_RET(handler);                                                                                       \
    try_catch(([&]() {                                                                                                \
      CType       control = (CType)caller;                                                                            \
      SignalType& signal  = SignalName(*control);                                                                     \
      signal.Connect((HType)handler);                                                                                 \
    }));                                                                                                              \
  }                                                                                                                   \
  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_##SignalName##_Disconnect(void* caller, void* handler) \
  {                                                                                                                   \
    GUARD_ON_NULL_RET(caller);                                                                                        \
    GUARD_ON_NULL_RET(handler);                                                                                       \
    try_catch(([&]() {                                                                                                \
      CType       control = (CType)caller;                                                                            \
      SignalType& signal  = SignalName(*control);                                                                     \
      signal.Disconnect((HType)handler);                                                                              \
    }));                                                                                                              \
  }

#define GENERATE_CONTROL_SIGNAL_2(CType, SignalType, SignalName)                                          \
  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_##SignalName##_Empty(void* caller) \
  {                                                                                                       \
    bool result = false;                                                                                  \
    GUARD_ON_NULL_RET0(caller);                                                                           \
    try_catch(([&]() {                                                                                    \
      CType       control = (CType)caller;                                                                \
      SignalType& signal  = SignalName(*control);                                                         \
      result              = signal.Empty();                                                               \
    }));                                                                                                  \
    return result;                                                                                        \
  }

#define GENERATE_CONTROL_SIGNAL_3(CType, SignalType, SignalName)                                 \
  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_##SignalName##_Emit(void* caller) \
  {                                                                                              \
    GUARD_ON_NULL_RET(caller);                                                                   \
    try_catch(([&]() {                                                                           \
      CType       control = (CType)caller;                                                       \
      SignalType& signal  = SignalName(*control);                                                \
      signal.Emit();                                                                             \
    }));                                                                                         \
  }

GENERATE_ACCESSIBILITY_SIGNAL_4_FUNCTIONS(void (*)(), Dali::Toolkit::DevelControl::AccessibilityActivateSignalType, AccessibilityActivateSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityActivateSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityActivateSignal_Disconnect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityActivateSignal_Empty
// CSharp_Dali_Toolkit_DevelControl_AccessibilityActivateSignal_Emit

GENERATE_ACCESSIBILITY_SIGNAL_4_FUNCTIONS(void (*)(), Dali::Toolkit::DevelControl::AccessibilityReadingSkippedSignalType, AccessibilityReadingSkippedSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingSkippedSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingSkippedSignal_Disconnect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingSkippedSignal_Empty
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingSkippedSignal_Emit

GENERATE_ACCESSIBILITY_SIGNAL_4_FUNCTIONS(void (*)(), Dali::Toolkit::DevelControl::AccessibilityReadingPausedSignalType, AccessibilityReadingPausedSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingPausedSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingPausedSignal_Disconnect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingPausedSignal_Empty
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingPausedSignal_Emit

GENERATE_ACCESSIBILITY_SIGNAL_4_FUNCTIONS(void (*)(), Dali::Toolkit::DevelControl::AccessibilityReadingResumedSignalType, AccessibilityReadingResumedSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingResumedSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingResumedSignal_Disconnect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingResumedSignal_Empty
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingResumedSignal_Emit

GENERATE_ACCESSIBILITY_SIGNAL_4_FUNCTIONS(void (*)(), Dali::Toolkit::DevelControl::AccessibilityReadingCancelledSignalType, AccessibilityReadingCancelledSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingCancelledSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingCancelledSignal_Disconnect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingCancelledSignal_Empty
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingCancelledSignal_Emit

GENERATE_ACCESSIBILITY_SIGNAL_4_FUNCTIONS(void (*)(), Dali::Toolkit::DevelControl::AccessibilityReadingStoppedSignalType, AccessibilityReadingStoppedSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingStoppedSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingStoppedSignal_Disconnect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingStoppedSignal_Empty
// CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingStoppedSignal_Emit

GENERATE_ACCESSIBILITY_SIGNAL_3_FUNCTIONS(void (*)(std::string&), Dali::Toolkit::DevelControl::AccessibilityGetNameSignalType, AccessibilityGetNameSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityGetNameSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityGetNameSignal_Disconnect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityGetNameSignal_Empty

GENERATE_ACCESSIBILITY_SIGNAL_2_FUNCTIONS(void (*)(std::string&), Dali::Toolkit::DevelControl::AccessibilityGetDescriptionSignalType, AccessibilityGetDescriptionSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityGetDescriptionSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityGetDescriptionSignal_Disconnect

GENERATE_ACCESSIBILITY_SIGNAL_2_FUNCTIONS(void (*)(std::pair<Dali::Accessibility::GestureInfo, bool>&), Dali::Toolkit::DevelControl::AccessibilityDoGestureSignalType, AccessibilityDoGestureSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityDoGestureSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityDoGestureSignal_Disconnect

GENERATE_ACCESSIBILITY_SIGNAL_2_FUNCTIONS(bool (*)(const Dali::Accessibility::ActionInfo&), Dali::Toolkit::DevelControl::AccessibilityActionSignalType, AccessibilityActionSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityActionSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityActionSignal_Disconnect

GENERATE_ACCESSIBILITY_SIGNAL_2_FUNCTIONS(void (*)(bool), Dali::Toolkit::DevelControl::AccessibilityHighlightedSignalType, AccessibilityHighlightedSignal)
// CSharp_Dali_Toolkit_DevelControl_AccessibilityHighlightedSignal_Connect
// CSharp_Dali_Toolkit_DevelControl_AccessibilityHighlightedSignal_Disconnect

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityActionSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityActionSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]()
  {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityActionSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AppendAccessibilityRelation(void* arg1, void* arg2, int arg3)
{
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch(([&]()
  {
    auto* control     = (Dali::Toolkit::Control*)arg1;
    auto* destination = (Dali::Actor*)arg2;
    auto  relation    = (Dali::Accessibility::RelationType)arg3;
    AppendAccessibilityRelation(*control, *destination, relation);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_RemoveAccessibilityRelation(void* arg1, void* arg2, int arg3)
{
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch(([&]()
  {
    auto* control     = (Dali::Toolkit::Control*)arg1;
    auto* destination = (Dali::Actor*)arg2;
    auto  relation    = (Dali::Accessibility::RelationType)arg3;
    RemoveAccessibilityRelation(*control, *destination, relation);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GetAccessibilityRelations(void* arg1_control,
                                                                                       void (*arg2_callback)(int, void*, void*),
                                                                                       void* arg3_userData)
{
  using namespace Dali::Accessibility;

  GUARD_ON_NULL_RET(arg1_control);
  GUARD_ON_NULL_RET(arg2_callback);

  try_catch(([&]()
  {
    auto*                 control   = static_cast<Dali::Toolkit::Control*>(arg1_control);
    std::vector<Relation> relations = GetAccessibilityRelations(*control);

    for(Relation& relation : relations)
    {
      for(Accessible* target : relation.mTargets)
      {
        // NUI is unaware of Accessible objects, so we only report those
        // convertible to Control. Note that it is currently impossible to make
        // a relation with anything other than Control (View) using NUI API, so
        // there should not be any loss of information for typical NUI
        // applications.
        auto targetControl = Dali::Toolkit::Control::DownCast(target->GetInternalActor());

        if(targetControl)
        {
          arg2_callback(static_cast<int>(relation.mRelationType),
                        static_cast<void*>(new Dali::Actor(targetControl)),
                        arg3_userData);
        }
      }
    }
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_ClearAccessibilityRelations(void* arg1)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    auto* control = (Dali::Toolkit::Control*)arg1;
    ClearAccessibilityRelations(*control);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AppendAccessibilityAttribute(void* arg1, char* arg2_key, char* arg3_value)
{
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2_key);
  GUARD_ON_NULL_RET(arg3_value);
  try_catch(([&]()
  {
    auto*       control = (Dali::Toolkit::Control*)arg1;
    std::string key(arg2_key ? arg2_key : "");
    std::string value(arg3_value ? arg3_value : "");
    AppendAccessibilityAttribute(*control, key, value);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_RemoveAccessibilityAttribute(void* arg1, char* arg2_key)
{
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2_key);
  try_catch(([&]()
  {
    auto*       control = (Dali::Toolkit::Control*)arg1;
    std::string key(arg2_key ? arg2_key : "");
    RemoveAccessibilityAttribute(*control, key);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_SetAccessibilityReadingInfoType2(void* arg1, int arg2)
{
  using namespace Dali::Accessibility;
  static_assert(static_cast<int>(ReadingInfoType::NAME) == 0 &&
                  static_cast<int>(ReadingInfoType::ROLE) == 1 &&
                  static_cast<int>(ReadingInfoType::DESCRIPTION) == 2 &&
                  static_cast<int>(ReadingInfoType::STATE) == 3,
                "C++ and C# bindings does not match");

  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    auto* control = (Dali::Toolkit::Control*)arg1;
    SetAccessibilityReadingInfoType(*control, ReadingInfoTypes{static_cast<std::uint32_t>(arg2)});
  }));
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GetAccessibilityReadingInfoType2(void* arg1)
{
  int result = 0;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]()
  {
    auto* control     = (Dali::Toolkit::Control*)arg1;
    auto  readingInfo = GetAccessibilityReadingInfoType(*control);
    result            = readingInfo.GetRawData()[0];
  }));
  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_ClearAccessibilityHighlight(void* arg1)
{
  bool result = false;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]()
  {
    auto* control = (Dali::Toolkit::Control*)arg1;
    result        = ClearAccessibilityHighlight(*control);
  }));
  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GrabAccessibilityHighlight(void* arg1)
{
  bool result = false;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]()
  {
    auto* control = (Dali::Toolkit::Control*)arg1;
    result        = GrabAccessibilityHighlight(*control);
  }));
  return result;
}

SWIGEXPORT uint64_t SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GetAccessibilityStates(void* arg1)
{
  uint64_t result = 0;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]()
  {
    auto* control = (Dali::Toolkit::Control*)arg1;
    auto  states  = GetAccessibilityStates(*control);
    result        = states.GetRawData64();
  }));
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_NotifyAccessibilityStateChange(void* arg1, uint64_t arg2, int arg3)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    Dali::Accessibility::States states(arg2);
    auto*                       control = (Dali::Toolkit::Control*)arg1;
    NotifyAccessibilityStateChange(*control, states, static_cast<bool>(arg3));
  }));
}

/***********************************************
 **************** Accessibility ****************
 ***********************************************/

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitAccessibilityEvent(void* arg1, int arg2_event)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = dynamic_cast<Dali::Accessibility::ActorAccessible*>(Dali::Accessibility::Accessible::Get(*control));
    if(accessible)
    {
      accessible->Emit((Dali::Accessibility::ObjectPropertyChangeEvent)arg2_event);
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitAccessibilityStateChangedEvent(void* arg1, int arg2_state, int arg3)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    auto* actor = (Dali::Actor*)arg1;
    auto  state = static_cast<Dali::Accessibility::State>(arg2_state);
    EmitAccessibilityStateChanged(*actor, state, arg3);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitTextInsertedEvent(
  void* arg1, int arg2_position, int arg3_length, char* arg4_content)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = dynamic_cast<Dali::Accessibility::ActorAccessible*>(Dali::Accessibility::Accessible::Get(*control));
    std::string  content(arg4_content ? arg4_content : "");
    if(accessible)
    {
      accessible->EmitTextInserted(arg2_position, arg3_length, content);
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitTextDeletedEvent(
  void* arg1, int arg2_position, int arg3_length, char* arg4_content)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = dynamic_cast<Dali::Accessibility::ActorAccessible*>(Dali::Accessibility::Accessible::Get(*control));
    std::string  content(arg4_content ? arg4_content : "");
    if(accessible)
    {
      accessible->EmitTextDeleted(arg2_position, arg3_length, content);
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitTextCursorMovedEvent(
  void* arg1, int arg2_position)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = dynamic_cast<Dali::Accessibility::ActorAccessible*>(Dali::Accessibility::Accessible::Get(*control));
    if(accessible)
    {
      accessible->EmitTextCursorMoved(arg2_position);
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitScrollStartedEvent(void* arg1_actor)
{
  GUARD_ON_NULL_RET(arg1_actor);
  try_catch(([&]()
  {
    Dali::Actor* control    = (Dali::Actor*)arg1_actor;
    auto         accessible = dynamic_cast<Dali::Accessibility::ActorAccessible*>(Dali::Accessibility::Accessible::Get(*control));
    if(accessible)
    {
      accessible->EmitScrollStarted();
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitScrollFinishedEvent(void* arg1_actor)
{
  GUARD_ON_NULL_RET(arg1_actor);
  try_catch(([&]()
  {
    Dali::Actor* control    = (Dali::Actor*)arg1_actor;
    auto         accessible = dynamic_cast<Dali::Accessibility::ActorAccessible*>(Dali::Accessibility::Accessible::Get(*control));
    if(accessible)
    {
      accessible->EmitScrollFinished();
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Accessibility_IsSuppressedEvent(void* arg1, int32_t atspiEvent)
{
  bool result = false;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]()
  {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
    if(accessible)
    {
      result = accessible->GetSuppressedEvents()[static_cast<Dali::Accessibility::AtspiEvent>(atspiEvent)];
    }
  }));
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_SetSuppressedEvent(void* arg1, int32_t atspiEvent, bool isSuppressed)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
    if(accessible)
    {
      accessible->GetSuppressedEvents()[static_cast<Dali::Accessibility::AtspiEvent>(atspiEvent)] = isSuppressed;
    }
  }));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Accessibility_new_Range(
  int arg1_start, int arg2_end, char* arg3_content)
{
  Dali::Accessibility::Range* result = nullptr;
  try_catch(([&]()
  {
    result = new Dali::Accessibility::Range(arg1_start, arg2_end, arg3_content);
  }));
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_Bridge_RegisterDefaultLabel(void* arg1_actor)
{
  GUARD_ON_NULL_RET(arg1_actor);
  try_catch(([&]()
  {
    Dali::Actor* actor  = (Dali::Actor*)arg1_actor;
    auto         bridge = Dali::Accessibility::Bridge::GetCurrentBridge();
    bridge->RegisterDefaultLabel(*actor);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_Bridge_UnregisterDefaultLabel(void* arg1_actor)
{
  GUARD_ON_NULL_RET(arg1_actor);
  try_catch(([&]()
  {
    Dali::Actor* actor  = (Dali::Actor*)arg1_actor;
    auto         bridge = Dali::Accessibility::Bridge::GetCurrentBridge();
    bridge->UnregisterDefaultLabel(*actor);
  }));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Accessibility_Accessible_GetCurrentlyHighlightedActor()
{
  Dali::Actor* result = NULL;
  try_catch(([&]()
  {
    Dali::Actor actor = Dali::Accessibility::Accessible::GetCurrentlyHighlightedActor();
    if(actor)
    {
      result = new Dali::Actor(actor);
    }
  }));
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Accessibility_Accessible_GetHighlightActor()
{
  Dali::Actor* result = NULL;
  try_catch(([&]()
  {
    Dali::Actor actor = Dali::Accessibility::Accessible::GetHighlightActor();
    if(actor)
    {
      result = new Dali::Actor(actor);
    }
  }));
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_Accessible_SetHighlightActor(void* arg1_actor)
{
  // Passing nullptr as actor is used to remove custom highlight,
  // what leads to the restoration of default highlight starting
  // from next call to GrabHighlight()
  try_catch(([&]()
  {
    Dali::Actor actor = arg1_actor ? *((Dali::Actor*)arg1_actor) : Dali::Actor();
    Dali::Accessibility::Accessible::SetHighlightActor(actor);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_DoActionExtension(void* control, int visualIndex, int actionId, int callbackId, char* keyPath, int property, void* callback)
{
  DevelAnimatedVectorImageVisual::DynamicPropertyInfo info;
  info.id = callbackId;
  std::string path(keyPath);
  info.keyPath       = path;
  info.property      = property;
  gSavedRootCallback = (void (*)(int32_t, int32_t, uint32_t, float* val1, float* val2, float* val3))callback;
  info.callback      = Dali::MakeCallback((Dali::Property::Value (*)(int32_t, int32_t, uint32_t))RootCallback);

  try
  {
    DevelControl::DoActionExtension(*((Dali::Toolkit::Control*)control), (Dali::Property::Index)visualIndex, (Dali::Property::Index)actionId, Dali::Any(info));
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_SetCustomHighlightOverlay(void* actorPtr, void* positionPtr, void* sizePtr)
{
  GUARD_ON_NULL_RET(actorPtr);
  try_catch(([&]()
  {
    Dali::Actor* actor      = (Dali::Actor*)actorPtr;
    auto         accessible = Dali::Accessibility::Accessible::Get(*actor);

    if(accessible)
    {
      auto accessibleControl = dynamic_cast<DevelControl::ControlAccessible*>(accessible);
      if(accessibleControl)
      {
        auto positionVector = (Vector2*)positionPtr;
        auto sizeVector     = (Vector2*)sizePtr;
        accessibleControl->SetCustomHighlightOverlay(*positionVector, *sizeVector);
      }
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_ResetCustomHighlightOverlay(void* actorPtr)
{
  GUARD_ON_NULL_RET(actorPtr);
  try_catch(([&]()
  {
    Dali::Actor* actor      = (Dali::Actor*)actorPtr;
    auto         accessible = Dali::Accessibility::Accessible::Get(*actor);

    if(accessible)
    {
      auto accessibleControl = dynamic_cast<DevelControl::ControlAccessible*>(accessible);
      if(accessibleControl)
      {
        accessibleControl->ResetCustomHighlightOverlay();
      }
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

#ifdef __cplusplus
} // extern "C"
#endif
