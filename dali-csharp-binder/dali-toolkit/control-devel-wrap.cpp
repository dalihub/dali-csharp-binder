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

// EXTERNAL INCLUDES
#include <dali/devel-api/adaptor-framework/accessibility-bridge.h>
#include <dali/devel-api/adaptor-framework/accessibility.h>
#include <vector>

// INTERNAL INCLUDES
#include "control-devel-wrap.h"
#include <dali-toolkit/devel-api/visuals/animated-vector-image-visual-actions-devel.h>
#include <dali-toolkit/dali-toolkit.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/visuals/animated-vector-image-visual-signals-devel.h>
#include <dali-toolkit/devel-api/visuals/image-visual-properties-devel.h>
#include <dali/devel-api/adaptor-framework/vector-animation-renderer.h>
#include <string>

using namespace Dali;
using namespace Dali::Toolkit;
using namespace Dali::Toolkit::DevelControl;

namespace
{
typedef void (*SavedCallbackType)(int32_t, int32_t, uint32_t, float *val1, float *val2, float *val3);
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
    case VectorAnimationRenderer::VectorProperty::FILL_COLOR :
    case VectorAnimationRenderer::VectorProperty::STROKE_COLOR :
      return Dali::Vector3(val1, val2, val3);
      break;

    case VectorAnimationRenderer::VectorProperty::TRANSFORM_ANCHOR :
    case VectorAnimationRenderer::VectorProperty::TRANSFORM_POSITION :
    case VectorAnimationRenderer::VectorProperty::TRANSFORM_SCALE :
      return Dali::Vector2(val1, val2);
      break;

    case VectorAnimationRenderer::VectorProperty::FILL_OPACITY :
    case VectorAnimationRenderer::VectorProperty::STROKE_OPACITY :
    case VectorAnimationRenderer::VectorProperty::STROKE_WIDTH :
    case VectorAnimationRenderer::VectorProperty::TRANSFORM_ROTATION :
    case VectorAnimationRenderer::VectorProperty::TRANSFORM_OPACITY :
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

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityActivateSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityActivateSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityActivateSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingSkippedSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityReadingSkippedSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityReadingSkippedSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingPausedSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityReadingPausedSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityReadingPausedSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingResumedSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityReadingResumedSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityReadingResumedSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingCancelledSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityReadingCancelledSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityReadingCancelledSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityReadingStoppedSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityReadingStoppedSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityReadingStoppedSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityGetNameSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityGetNameSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityGetNameSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityGetDescriptionSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityGetDescriptionSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityGetDescriptionSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AccessibilityDoGestureSignal(void* arg1)
{
  Dali::Toolkit::DevelControl::AccessibilityDoGestureSignalType* result = nullptr;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)arg1;
    result                          = &(AccessibilityDoGestureSignal(*control));
  }));
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_AppendAccessibilityRelation(void* arg1, void* arg2, int arg3)
{
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch(([&]() {
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
  try_catch(([&]() {
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

  try_catch(([&]() {
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
  try_catch(([&]() {
    auto* control = (Dali::Toolkit::Control*)arg1;
    ClearAccessibilityRelations(*control);
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
  try_catch(([&]() {
    auto* control = (Dali::Toolkit::Control*)arg1;
    SetAccessibilityReadingInfoType(*control, ReadingInfoTypes{static_cast<std::uint32_t>(arg2)});
  }));
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GetAccessibilityReadingInfoType2(void* arg1)
{
  int result = 0;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
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
  try_catch(([&]() {
    auto* control = (Dali::Toolkit::Control*)arg1;
    result        = ClearAccessibilityHighlight(*control);
  }));
  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GrabAccessibilityHighlight(void* arg1)
{
  bool result = false;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    auto* control = (Dali::Toolkit::Control*)arg1;
    result        = GrabAccessibilityHighlight(*control);
  }));
  return result;
}

SWIGEXPORT uint64_t SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_GetAccessibilityStates(void* arg1)
{
  uint64_t result = 0;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]() {
    auto* control = (Dali::Toolkit::Control*)arg1;
    auto  states  = GetAccessibilityStates(*control);
    result        = states.GetRawData64();
  }));
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Toolkit_DevelControl_NotifyAccessibilityStateChange(void* arg1, uint64_t arg2, int arg3)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]() {
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
  try_catch(([&]() {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
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
  try_catch(([&]() {
    auto state = static_cast<Dali::Accessibility::State>(arg2_state);

    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
    if(accessible)
    {
      accessible->EmitStateChanged(state, arg3);
    }
    else
    {
      SWIG_CSharpException(SWIG_RuntimeError, "Actor does not have accessible object.");
    }
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_EmitTextInsertedEvent(
  void* arg1, int arg2_position, int arg3_length, char* arg4_content)
{
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]() {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
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
  try_catch(([&]() {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
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
  try_catch(([&]() {
    Dali::Actor* control    = (Dali::Actor*)arg1;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
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
  try_catch(([&]() {
    Dali::Actor* control    = (Dali::Actor*)arg1_actor;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
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
  try_catch(([&]() {
    Dali::Actor* control    = (Dali::Actor*)arg1_actor;
    auto         accessible = Dali::Accessibility::Accessible::Get(*control);
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
  try_catch(([&]() {
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
  try_catch(([&]() {
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
  try_catch(([&]() {
    result = new Dali::Accessibility::Range(arg1_start, arg2_end, arg3_content);
  }));
  return (void*)result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_Bridge_RegisterDefaultLabel(void* arg1_actor)
{
  GUARD_ON_NULL_RET(arg1_actor);
  try_catch(([&]() {
    Dali::Actor* actor      = (Dali::Actor*)arg1_actor;
    auto         accessible = Dali::Accessibility::Accessible::Get(*actor);
    auto         bridge     = Dali::Accessibility::Bridge::GetCurrentBridge();

    if(!accessible)
    {
      SWIG_CSharpException(SWIG_RuntimeError, "No accessible object bind with actor.");
      return;
    }

    bridge->RegisterDefaultLabel(accessible);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Accessibility_Bridge_UnregisterDefaultLabel(void* arg1_actor)
{
  GUARD_ON_NULL_RET(arg1_actor);
  try_catch(([&]() {
    Dali::Actor* actor      = (Dali::Actor*)arg1_actor;
    auto         accessible = Dali::Accessibility::Accessible::Get(*actor);
    auto         bridge     = Dali::Accessibility::Bridge::GetCurrentBridge();

    if(!accessible)
    {
      SWIG_CSharpException(SWIG_RuntimeError, "No accessible object bind with actor.");
      return;
    }

    bridge->UnregisterDefaultLabel(accessible);
  }));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Accessibility_Accessible_GetCurrentlyHighlightedActor()
{
  Dali::Actor* result = NULL;
  try_catch(([&]() {
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
  try_catch(([&]() {
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
  try_catch(([&]() {
    Dali::Actor actor = arg1_actor ? *((Dali::Actor*)arg1_actor) : Dali::Actor();
    Dali::Accessibility::Accessible::SetHighlightActor(actor);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_DoActionExtension(void * control, int visualIndex, int actionId, int callbackId, char* keyPath, int property, void * callback)
{
  DevelAnimatedVectorImageVisual::DynamicPropertyInfo info;
  info.id = callbackId;
  std::string path(keyPath);
  info.keyPath = path;
  info.property = property;
  gSavedRootCallback = (void (*)(int32_t, int32_t, uint32_t, float *val1, float *val2, float *val3))callback;
  info.callback = Dali::MakeCallback((Dali::Property::Value (*)(int32_t, int32_t, uint32_t))RootCallback);

  try
  {
    DevelControl::DoActionExtension(*((Dali::Toolkit::Control *)control), (Dali::Property::Index)visualIndex, (Dali::Property::Index)actionId, Dali::Any(info));
  } CALL_CATCH_EXCEPTION();
}

#ifdef __cplusplus
} // extern "C"
#endif
