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

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>
#include <dali-toolkit/public-api/controls/control.h>

// Global dummy signal for Ubuntu environment
static Dali::Signal<void(Dali::Toolkit::Control)> g_dummySignal;

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Empty(Dali::Signal<void(Dali::Toolkit::Control)> const* self)
{
  return self->Empty();
}

SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::Toolkit::Control)> const* self)
{
  return self->GetConnectionCount();
}

SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Connect(Dali::Signal<void(Dali::Toolkit::Control)>* self, void (*func)(Dali::Toolkit::Control))
{
  self->Connect(func);
}

SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Disconnect(Dali::Signal<void(Dali::Toolkit::Control)>* self, void (*func)(Dali::Toolkit::Control))
{
  self->Disconnect(func);
}

SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Emit(Dali::Signal<void(Dali::Toolkit::Control)>* self, Dali::Toolkit::Control arg)
{
  self->Emit(arg);
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::Toolkit::Control* SWIGSTDCALL CSharp_Dali_WidgetView_SWIGUpcast(Dali::Toolkit::Control* jarg1)
{
  return (Dali::Toolkit::Control*)jarg1;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_WIDGET_ID_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_INSTANCE_ID_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_CONTENT_INFO_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_TITLE_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_UPDATE_PERIOD_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_PREVIEW_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_LOADING_TEXT_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_WIDGET_STATE_FAULTED_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_PERMANENT_DELETE_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_RETRY_TEXT_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_EFFECT_get() { return 0; }
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_KEEP_WIDGET_SIZE_get() { return 0; }

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_New(char* jarg1, char* jarg2, int jarg3, int jarg4, float jarg5)
{
  void* jresult;

  Dali::Toolkit::Control result;
  {
    try
    {
      result = Dali::Toolkit::Control::New();
      result.SetProperty(Dali::Actor::Property::SIZE, Dali::Vector2(static_cast<float>(jarg3), static_cast<float>(jarg4)));
      result.SetProperty(Dali::Actor::Property::COLOR, Dali::Vector4(0.7f, 0.7f, 0.7f, 1.0f));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_DownCast(void* jarg1)
{
  void* jresult;
  Dali::BaseHandle arg1;
  Dali::BaseHandle* argp1;
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

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WidgetView__SWIG_1(void* jarg1)
{
  void* jresult;
  Dali::Toolkit::Control* arg1 = 0;
  Dali::Toolkit::Control* result = 0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Toolkit::Control*)new Dali::Toolkit::Control((Dali::Toolkit::Control const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_Assign(void* jarg1, void* jarg2)
{
  void* jresult;
  Dali::Toolkit::Control* arg1 = (Dali::Toolkit::Control*)0;
  Dali::Toolkit::Control* arg2 = 0;
  Dali::Toolkit::Control* result = 0;

  arg1 = (Dali::Toolkit::Control*)jarg1;
  arg2 = (Dali::Toolkit::Control*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Toolkit::Control*)&(arg1)->operator=((Dali::Toolkit::Control const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetView(void* jarg1)
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

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetView_PauseWidget(void* jarg1) { return 1; }
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetView_ResumeWidget(void* jarg1) { return 1; }
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetView_CancelTouchEvent(void* jarg1) { return 1; }
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetView_ActivateFaultedWidget(void* jarg1) { }
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetView_TerminateWidget(void* jarg1) { return 1; }

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_WidgetAddedSignal(void* jarg1) { return (void*)&g_dummySignal; }
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_WidgetDeletedSignal(void* jarg1) { return (void*)&g_dummySignal; }
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_WidgetCreationAbortedSignal(void* jarg1) { return (void*)&g_dummySignal; }
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_WidgetContentUpdatedSignal(void* jarg1) { return (void*)&g_dummySignal; }
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_WidgetUpdatePeriodChangedSignal(void* jarg1) { return (void*)&g_dummySignal; }
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetView_WidgetFaultedSignal(void* jarg1) { return (void*)&g_dummySignal; }

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetViewSignal_Empty(void* jarg1)
{
  unsigned int jresult;
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  bool result;
  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Empty((Dali::Signal<void(Dali::Toolkit::Control)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetViewSignal_GetConnectionCount(void* jarg1)
{
  unsigned long jresult;
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  std::size_t result;
  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::Toolkit::Control)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetViewSignal_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  void (*arg2)(Dali::Toolkit::Control) = (void (*)(Dali::Toolkit::Control))0;
  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  arg2 = (void (*)(Dali::Toolkit::Control))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetViewSignal_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  void (*arg2)(Dali::Toolkit::Control) = (void (*)(Dali::Toolkit::Control))0;
  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
  arg2 = (void (*)(Dali::Toolkit::Control))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetViewSignal_Emit(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::Control)>* arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)0;
  Dali::Toolkit::Control arg2;
  Dali::Toolkit::Control* argp2;
  arg1 = (Dali::Signal<void(Dali::Toolkit::Control)>*)jarg1;
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
      Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WidgetViewSignal()
{
  void* jresult;
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetViewSignal(void* jarg1)
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
