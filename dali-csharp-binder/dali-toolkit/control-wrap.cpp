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

// EXTERNAL INCLUDES
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/visual-factory/transition-data.h>
#include <dali-toolkit/public-api/controls/control-impl.h>
#include <dali-toolkit/public-api/controls/control.h>
#include <dali-toolkit/public-api/image-loader/image-url.h>
#include <dali-toolkit/public-api/render-effects/render-effect.h>
#include <iostream>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__Empty(Dali::Signal<bool(Dali::Toolkit::Control, Dali::KeyEvent const&)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal<bool(Dali::Toolkit::Control, Dali::KeyEvent const&)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__Connect(Dali::Signal<bool(Dali::Toolkit::Control, Dali::KeyEvent const&)>* self, bool (*func)(Dali::Toolkit::Control, Dali::KeyEvent const&))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__Disconnect(Dali::Signal<bool(Dali::Toolkit::Control, Dali::KeyEvent const&)>* self, bool (*func)(Dali::Toolkit::Control, Dali::KeyEvent const&))
{
  self->Disconnect(func);
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__Emit(Dali::Signal<bool(Dali::Toolkit::Control, Dali::KeyEvent const&)>* self, Dali::Toolkit::Control arg1, Dali::KeyEvent const& arg2)
{
  return self->Emit(arg1, arg2);
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Empty(Dali::Signal<void(Dali::Toolkit::Control)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::Toolkit::Control)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Connect(Dali::Signal<void(Dali::Toolkit::Control)>* self, void (*func)(Dali::Toolkit::Control))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Disconnect(Dali::Signal<void(Dali::Toolkit::Control)>* self, void (*func)(Dali::Toolkit::Control))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Emit(Dali::Signal<void(Dali::Toolkit::Control)>* self, Dali::Toolkit::Control arg)
{
  /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
  /*@SWIG@*/ self->Emit(arg);
}

using namespace Dali;
using namespace Dali::Toolkit;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_STYLE_NAME_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::Control::Property::STYLE_NAME;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_KEY_INPUT_FOCUS_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::Control::Property::KEY_INPUT_FOCUS;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_BACKGROUND_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::Control::Property::BACKGROUND;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_MARGIN_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::Control::Property::MARGIN;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_PADDING_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::Control::Property::PADDING;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GetImplementation__SWIG_0(void* jarg1)
{
  void*                             jresult;
  Dali::Toolkit::Control*           arg1   = 0;
  Dali::Toolkit::Internal::Control* result = 0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Toolkit::Internal::Control*)&Dali::Toolkit::Internal::GetImplementation(*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_New()
{
  void*                  jresult;
  Dali::Toolkit::Control result;

  {
    try
    {
      result = Dali::Toolkit::Control::New(Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_NewWithBehaviour(int csBehaviour)
{
  void*                  jresult;
  Dali::Toolkit::Control result;

  {
    try
    {
      result = Dali::Toolkit::Control::New(static_cast<Dali::Toolkit::Control::ControlBehaviour>(csBehaviour | Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_View(void* jarg1)
{
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_DownCast(void* jarg1)
{
  void*                  jresult;
  Dali::BaseHandle       arg1;
  Dali::BaseHandle*      argp1;
  Dali::Toolkit::Control result;

  argp1 = (Dali::BaseHandle*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try
    {
      result = Dali::Toolkit::Control::DownCast(arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_SetKeyInputFocus(void* jarg1)
{
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      (arg1)->SetKeyInputFocus();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_View_HasKeyInputFocus(void* jarg1)
{
  bool                    jresult;
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;
  bool                    result;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      result = (bool)(arg1)->HasKeyInputFocus();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_ClearKeyInputFocus(void* jarg1)
{
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      (arg1)->ClearKeyInputFocus();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_GetPinchGestureDetector(void* jarg1)
{
  void*                      jresult;
  Dali::Toolkit::Control*    arg1 = (Dali::Toolkit::Control*)0;
  Dali::PinchGestureDetector result;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      result = ((Dali::Toolkit::Control const*)arg1)->GetPinchGestureDetector();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PinchGestureDetector((const Dali::PinchGestureDetector&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_GetPanGestureDetector(void* jarg1)
{
  void*                    jresult;
  Dali::Toolkit::Control*  arg1 = (Dali::Toolkit::Control*)0;
  Dali::PanGestureDetector result;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      result = ((Dali::Toolkit::Control const*)arg1)->GetPanGestureDetector();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PanGestureDetector((const Dali::PanGestureDetector&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_GetTapGestureDetector(void* jarg1)
{
  void*                    jresult;
  Dali::Toolkit::Control*  arg1 = (Dali::Toolkit::Control*)0;
  Dali::TapGestureDetector result;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      result = ((Dali::Toolkit::Control const*)arg1)->GetTapGestureDetector();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::TapGestureDetector((const Dali::TapGestureDetector&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_GetLongPressGestureDetector(void* jarg1)
{
  void*                          jresult;
  Dali::Toolkit::Control*        arg1 = (Dali::Toolkit::Control*)0;
  Dali::LongPressGestureDetector result;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      result = ((Dali::Toolkit::Control const*)arg1)->GetLongPressGestureDetector();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::LongPressGestureDetector((const Dali::LongPressGestureDetector&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_SetStyleName(void* jarg1, char* jarg2)
{
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;
  Dali::String*           arg2 = 0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  Dali::String arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try
    {
      (arg1)->SetStyleName((Dali::String const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }

  // argout typemap for const std::string&
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_View_GetStyleName(void* jarg1)
{
  char*                   jresult;
  Dali::Toolkit::Control* arg1   = (Dali::Toolkit::Control*)0;
  std::string*            result = 0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      result = (std::string*)&((Dali::Toolkit::Control const*)arg1)->GetStyleName();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_ClearBackground(void* jarg1)
{
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  {
    try
    {
      (arg1)->ClearBackground();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_SetRenderEffect(void* handle, void* effectHandle)
{
  Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)handle;

  if(!effectHandle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null render effect", 0);
    return;
  }

  Dali::Toolkit::RenderEffect* effect = (Dali::Toolkit::RenderEffect*)effectHandle;
  {
    try
    {
      control->SetRenderEffect(*effect);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_GetRenderEffect(void* handle)
{
  RenderEffect            renderEffect;
  Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)handle;
  {
    try
    {
      renderEffect = control->GetRenderEffect();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return renderEffect ? new Dali::Toolkit::RenderEffect((const Dali::Toolkit::RenderEffect&)renderEffect) : nullptr;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_ClearRenderEffect(void* handle)
{
  Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)handle;
  {
    try
    {
      control->ClearRenderEffect();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_GetOffScreenRenderingOutput(void* nuiControl)
{
  Dali::Toolkit::ImageUrl imageUrl;
  Dali::Toolkit::Control* control = (Dali::Toolkit::Control*)nuiControl;

  if(!control)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return 0;
  }

  {
    try
    {
      Dali::Toolkit::Internal::Control& controlImpl = Dali::Toolkit::Internal::GetImplementation(*control);
      Dali::Texture                     texture     = controlImpl.GetOffScreenRenderingOutput();
      if(!texture)
      {
        return 0;
      }
      imageUrl = Dali::Toolkit::ImageUrl::New(texture);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)imageUrl);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_View__SWIG_2(void* jarg1)
{
  void*                             jresult;
  Dali::Toolkit::Internal::Control* arg1   = 0;
  Dali::Toolkit::Control*           result = 0;

  arg1 = (Dali::Toolkit::Internal::Control*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::Control & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Toolkit::Control*)new Dali::Toolkit::Control(*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_GetVisualResourceStatus(void* jarg1, int jarg2)
{
  int                     jresult;
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;
  arg1                         = (Dali::Toolkit::Control*)jarg1;

  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
    return 0;
  }

  Dali::Property::Index arg2 = 0;
  arg2                       = (Dali::Property::Index)jarg2;

  Toolkit::Visual::ResourceStatus result;
  {
    try
    {
      result = arg1->GetVisualResourceStatus(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_CreateTransition(void* jarg1, void* jarg2)
{
  void*                   jresult;
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;
  arg1                         = (Dali::Toolkit::Control*)jarg1;

  Dali::Toolkit::Internal::Control& controlImpl = Dali::Toolkit::Internal::GetImplementation(*arg1);

  Dali::Toolkit::TransitionData* arg2 = 0;
  Dali::Animation                result;

  arg2 = (Dali::Toolkit::TransitionData*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TransitionData const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = DevelControl::CreateTransition(controlImpl, (Dali::Toolkit::TransitionData const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Animation((const Dali::Animation&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_DoAction(void* jarg1, int jarg2, int jarg3, void* jarg4)
{
  Dali::Toolkit::Control  arg1;
  Dali::Toolkit::Control* argp1 = (Dali::Toolkit::Control*)jarg1;

  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
  }
  arg1 = *argp1;

  Dali::Property::Index arg2 = 0;
  arg2                       = (Dali::Property::Index)jarg2;

  Dali::Property::Index arg3 = 0;
  arg3                       = (Dali::Property::Index)jarg3;

  Dali::Property::Value* arg4 = (Dali::Property::Value*)jarg4;

  {
    try
    {
      DevelControl::DoAction(arg1, arg2, arg3, *arg4);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_GetVisualProperty(void* control, int propertyIndex, int visualPropertyIndex)
{
  if(!control)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Given control is null", 0);
    return 0;
  }

  void* result = 0;
  try
  {
    Dali::Property property = DevelControl::GetVisualProperty(*((Dali::Toolkit::Control*)control), (Dali::Property::Index)propertyIndex, (Dali::Property::Index)visualPropertyIndex);
    result                  = new Dali::Property(property.object, property.propertyIndex);
  }
  CALL_CATCH_EXCEPTION(0);

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_IsResourceReady(void* jarg1)
{
  bool                    jresult;
  Dali::Toolkit::Control* arg1 = 0;
  bool                    result;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (bool)arg1->IsResourceReady();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

// Signals

#ifndef GENERATE_CONTROL_SIGNAL
#define GENERATE_CONTROL_SIGNAL(HType, SignalName) GENERATE_SIGNAL(Dali::Toolkit::Control*, HType, Dali_View, SignalName)
#endif

GENERATE_CONTROL_SIGNAL(bool (*)(Dali::Toolkit::Control, Dali::KeyEvent const&), KeyEventSignal)
// CSharp_Dali_View_KeyEventSignal_Connect
// CSharp_Dali_View_KeyEventSignal_Disconnect

GENERATE_CONTROL_SIGNAL(void (*)(Dali::Toolkit::Control), KeyInputFocusGainedSignal)
// CSharp_Dali_View_KeyInputFocusGainedSignal_Connect
// CSharp_Dali_View_KeyInputFocusGainedSignal_Disconnect

GENERATE_CONTROL_SIGNAL(void (*)(Dali::Toolkit::Control), KeyInputFocusLostSignal)
// CSharp_Dali_View_KeyInputFocusLostSignal_Connect
// CSharp_Dali_View_KeyInputFocusLostSignal_Disconnect

GENERATE_CONTROL_SIGNAL(void (*)(Dali::Toolkit::Control), ResourceReadySignal)
// CSharp_Dali_View_ResourceReadySignal_Connect
// CSharp_Dali_View_ResourceReadySignal_Disconnect

GENERATE_CONTROL_SIGNAL(void (*)(Dali::Toolkit::Control), OffScreenRenderingFinishedSignal)
// CSharp_Dali_View_OffScreenRenderingFinishedSignal_Connect
// CSharp_Dali_View_OffScreenRenderingFinishedSignal_Disconnect

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ResourceReadySignal(void* jarg1)
{
  void*                                            jresult;
  Dali::Toolkit::Control*                          arg1   = 0;
  Dali::Toolkit::Control::ResourceReadySignalType* result = 0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Toolkit::Control::ResourceReadySignalType*)&arg1->ResourceReadySignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_Empty(void* jarg1)
{
  bool                                        jresult;
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  bool                                        result;

  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Empty((Dali::Signal<void(Dali::Toolkit::Control)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_GetConnectionCount(void* jarg1)
{
  unsigned long                               jresult;
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  std::size_t                                 result;

  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::Toolkit::Control)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  void (*arg2)(Dali::Toolkit::Control)             = (void (*)(Dali::Toolkit::Control))0;

  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  arg2 = (void (*)(Dali::Toolkit::Control))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  void (*arg2)(Dali::Toolkit::Control)             = (void (*)(Dali::Toolkit::Control))0;

  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  arg2 = (void (*)(Dali::Toolkit::Control))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_Emit(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  Dali::Toolkit::Control                      arg2;
  Dali::Toolkit::Control*                     argp2;

  arg1  = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  argp2 = (Dali::Toolkit::Control*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Control", 0);
    return;
  }
  arg2 = *argp2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ViewResourceReadySignal()
{
  void*                                       jresult;
  Dali::Signal<void(Dali::Toolkit::Control)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::Toolkit::Control)>*)new Dali::Signal<void(Dali::Toolkit::Control)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ViewResourceReadySignal(void* jarg1)
{
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;

  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
