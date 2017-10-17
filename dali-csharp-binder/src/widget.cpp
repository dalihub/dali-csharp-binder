/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
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

#ifndef CSHARP_WIDGET
#define CSHARP_WIDGET
#endif

#include "common.h"
#include "string"
#include <dali/devel-api/adaptor-framework/widget.h>
#include <dali/devel-api/adaptor-framework/widget-application.h>
#include <dali/integration-api/debug.h>
#include <dlog.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

// keep argWidgetCs and argWidgetV so they're always available to DALi
int argWidgetC = 1;
char **argWidgetV = NULL;
char *g_argv = NULL;

SWIGINTERN bool Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__Empty(Dali::Signal< void (std::string const &,bundle *,Dali::Window) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__GetConnectionCount(Dali::Signal< void (std::string const &,bundle *,Dali::Window) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__Connect(Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *self,void (*func)(std::string const &,bundle *,Dali::Window)){
  return self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__Disconnect(Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *self,void (*func)(std::string const &,bundle *,Dali::Window)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__Emit(Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *self,std::string const &arg1,bundle *arg2,Dali::Window arg3){
  self->Emit( arg1, arg2, arg3 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Empty(Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__GetConnectionCount(Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Connect(Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *self,void (*func)(std::string const &,bundle *,Dali::Widget::WidgetTerminateType)){
  return self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Disconnect(Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *self,void (*func)(std::string const &,bundle *,Dali::Widget::WidgetTerminateType)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Emit(Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *self,std::string const &arg1,bundle *arg2,Dali::Widget::WidgetTerminateType arg3){
  self->Emit( arg1, arg2, arg3 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Empty(Dali::Signal< void (std::string const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (std::string const &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Connect(Dali::Signal< void (std::string const &) > *self,void (*func)(std::string const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< void (std::string const &) > *self,void (*func)(std::string const &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Emit(Dali::Signal< void (std::string const &) > *self,std::string const &arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__Empty(Dali::Signal< void (std::string const &,Dali::Window) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__GetConnectionCount(Dali::Signal< void (std::string const &,Dali::Window) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__Connect(Dali::Signal< void (std::string const &,Dali::Window) > *self,void (*func)(std::string const &,Dali::Window)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__Disconnect(Dali::Signal< void (std::string const &,Dali::Window) > *self,void (*func)(std::string const &,Dali::Window)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__Emit(Dali::Signal< void (std::string const &,Dali::Window) > *self,std::string const &arg1,Dali::Window arg2){
  self->Emit( arg1, arg2 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__Empty(Dali::Signal< void (std::string const &,bundle *,int) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__GetConnectionCount(Dali::Signal< void (std::string const &,bundle *,int) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__Connect(Dali::Signal< void (std::string const &,bundle *,int) > *self,void (*func)(std::string const &,bundle *,int)){
  return self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__Disconnect(Dali::Signal< void (std::string const &,bundle *,int) > *self,void (*func)(std::string const &,bundle *,int)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__Emit(Dali::Signal< void (std::string const &,bundle *,int) > *self,std::string const &arg1,bundle *arg2,int arg3){
  self->Emit( arg1, arg2, arg3 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__Empty(Dali::Signal< void (Dali::WidgetApplication &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::WidgetApplication &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__Connect(Dali::Signal< void (Dali::WidgetApplication &) > *self,void (*func)(Dali::WidgetApplication &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::WidgetApplication &) > *self,void (*func)(Dali::WidgetApplication &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__Emit(Dali::Signal< void (Dali::WidgetApplication &) > *self,Dali::WidgetApplication &arg){
  self->Emit( arg );
}


SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Empty(Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Connect(Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *self,void (*func)(Dali::DeviceStatus::Battery::Status)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Disconnect(Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *self,void (*func)(Dali::DeviceStatus::Battery::Status)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Emit(Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *self,Dali::DeviceStatus::Battery::Status arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Empty(Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Connect(Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *self,void (*func)(Dali::DeviceStatus::Memory::Status)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Disconnect(Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *self,void (*func)(Dali::DeviceStatus::Memory::Status)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Emit(Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *self,Dali::DeviceStatus::Memory::Status arg){
  self->Emit( arg );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_Widget_SWIGUpcast(Dali::Widget *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_WidgetApplication_SWIGUpcast(Dali::WidgetApplication *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_New(char * jarg1) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::Widget result;
  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::Widget::New((std::string const &)*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = new Dali::Widget((const Dali::Widget &)result);

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Widget__SWIG_0() {
  void * jresult ;
  Dali::Widget *result = 0 ;
  {
    try {
      result = (Dali::Widget *)new Dali::Widget();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Widget__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Widget *arg1 = 0 ;
  Dali::Widget *result = 0 ;
  arg1 = (Dali::Widget *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Widget const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Widget *)new Dali::Widget((Dali::Widget const &)*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  Dali::Widget *arg2 = 0 ;
  Dali::Widget *result = 0 ;
  arg1 = (Dali::Widget *)jarg1;
  arg2 = (Dali::Widget *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Widget const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Widget *) &(arg1)->operator =((Dali::Widget const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Widget(void * jarg1) {
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_CreateSignal(void * jarg1) {
  void * jresult ;
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  Dali::Widget::WidgetCreateSignalType *result = 0 ;

  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetCreateSignalType *) &(arg1)->CreateSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_TerminateSignal(void * jarg1) {
  void * jresult ;
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  Dali::Widget::WidgetTerminateSignalType *result = 0 ;

  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetTerminateSignalType *) &(arg1)->TerminateSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_PauseSignal(void * jarg1) {
  void * jresult ;
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  Dali::Widget::WidgetPauseSignalType *result = 0 ;

  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetPauseSignalType *) &(arg1)->PauseSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_ResumeSignal(void * jarg1) {
  void * jresult ;
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  Dali::Widget::WidgetResumeSignalType *result = 0 ;

  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetResumeSignalType *) &(arg1)->ResumeSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_ResizeSignal(void * jarg1) {
  void * jresult ;
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  Dali::Widget::WidgetResizeSignalType *result = 0 ;

  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetResizeSignalType *) &(arg1)->ResizeSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_UpdateSignal(void * jarg1) {
  void * jresult ;
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  Dali::Widget::WidgetUpdateSignalType *result = 0 ;

  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetUpdateSignalType *) &(arg1)->UpdateSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_New(int jarg1,char * jarg2, char * jarg3) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  std::string *arg3 = 0 ;
  Dali::WidgetApplication result;
  {
    int index = 0;
    char *retPtr;
    char *nextPtr;
    argWidgetC = jarg1;
    argWidgetV = new char*[jarg1 + 1];

    retPtr = strtok_r( jarg2, " ", &nextPtr);
    argWidgetV[index] = new char[strlen(retPtr)+1];
    strncpy(argWidgetV[index], retPtr, strlen(retPtr));
    argWidgetV[index][strlen(retPtr)] = '\0';
    index++;

    while (index < jarg1)
    {
      retPtr = strtok_r(NULL, " ", &nextPtr);
      argWidgetV[index] = new char[strlen(retPtr)+1];
      strncpy(argWidgetV[index], retPtr, strlen(retPtr));
      argWidgetV[index][strlen(retPtr)] = '\0';
      index++;
    }

    argWidgetV[jarg1] = NULL;
    argWidgetC = jarg1;

    arg1 = &argWidgetC;
    arg2 = &argWidgetV;
  }

  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = Dali::WidgetApplication::New(arg1,arg2,(std::string const &)*arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = new Dali::WidgetApplication((const Dali::WidgetApplication &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetApplication__SWIG_0() {
  void * jresult ;
  Dali::WidgetApplication *result = 0 ;
  {
    try {
      result = (Dali::WidgetApplication *)new Dali::WidgetApplication();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetApplication__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = 0 ;
  Dali::WidgetApplication *result = 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetApplication const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WidgetApplication *)new Dali::WidgetApplication((Dali::WidgetApplication const &)*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication *arg2 = 0 ;
  Dali::WidgetApplication *result = 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  arg2 = (Dali::WidgetApplication *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetApplication const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WidgetApplication *) &(arg1)->operator =((Dali::WidgetApplication const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetApplication(void * jarg1) {
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      delete arg1;
      if( argWidgetV )
      {
        // free string data
        for( int i=0; i < argWidgetC+1; i++)
        {
          delete [] argWidgetV[i];
        }
        delete [] argWidgetV;
      }
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_MainLoop(void * jarg1) {
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;

  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      (arg1)->MainLoop();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_Quit(void * jarg1) {
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      (arg1)->Quit();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_WidgetApplication_GetResourcePath() {
  char * jresult ;
  std::string result;

  {
    try {
      result = Dali::WidgetApplication::GetResourcePath();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_WidgetApplication_GetRegion(void * jarg1) {
  char * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  std::string result;

  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (arg1)->GetRegion();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_WidgetApplication_GetLanguage(void * jarg1) {
  char * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  std::string result;

  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (arg1)->GetLanguage();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_InitSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication::AppSignalType *result = 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (Dali::WidgetApplication::AppSignalType *) &(arg1)->InitSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_TerminateSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication::AppSignalType *result = 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (Dali::WidgetApplication::AppSignalType *) &(arg1)->TerminateSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_LanguageChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication::AppSignalType *result = 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (Dali::WidgetApplication::AppSignalType *) &(arg1)->LanguageChangedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_RegionChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication::AppSignalType *result = 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (Dali::WidgetApplication::AppSignalType *) &(arg1)->RegionChangedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_LowBatterySignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication::LowBatterySignalType *result = 0 ;

  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (Dali::WidgetApplication::LowBatterySignalType *) &(arg1)->LowBatterySignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_LowMemorySignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication::LowMemorySignalType *result = 0 ;

  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (Dali::WidgetApplication::LowMemorySignalType *) &(arg1)->LowMemorySignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}



SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetCreateSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__Empty((Dali::Signal< void (std::string const &,bundle *,Dali::Window) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetCreateSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__GetConnectionCount((Dali::Signal< void (std::string const &,bundle *,Dali::Window) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetCreateSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *) 0 ;
  void (*arg2)(std::string const &,bundle *,Dali::Window) = (void (*)(std::string const &,bundle *,Dali::Window)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *)jarg1;
  arg2 = (void (*)(std::string const &,bundle *,Dali::Window))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetCreateSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *) 0 ;
  void (*arg2)(std::string const &,bundle *,Dali::Window) = (void (*)(std::string const &,bundle *,Dali::Window)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *)jarg1;
  arg2 = (void (*)(std::string const &,bundle *,Dali::Window))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetCreateSignalType_Emit(void * jarg1, char * jarg2, void * jarg3, void * jarg4) {
  Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *) 0 ;
  std::string *arg2 = 0 ;
  bundle *arg3 = (bundle *) 0 ;
  Dali::Window arg4 ;
  Dali::Window *argp4 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (bundle *)jarg3;
  argp4 = (Dali::Window *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Window_SP__Sg__Emit(arg1,(std::string const &)*arg2,arg3,arg4);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetCreateSignalType() {
  void * jresult ;
  Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *)new Dali::Signal< void (std::string const &,bundle *,Dali::Window) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetCreateSignalType(void * jarg1) {
  Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Window) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetTerminateSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Empty((Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetTerminateSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__GetConnectionCount((Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetTerminateSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  void (*arg2)(std::string const &,bundle *,Dali::Widget::WidgetTerminateType) = (void (*)(std::string const &,bundle *,Dali::Widget::WidgetTerminateType)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  arg2 = (void (*)(std::string const &,bundle *,Dali::Widget::WidgetTerminateType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetTerminateSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  void (*arg2)(std::string const &,bundle *,Dali::Widget::WidgetTerminateType) = (void (*)(std::string const &,bundle *,Dali::Widget::WidgetTerminateType)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  arg2 = (void (*)(std::string const &,bundle *,Dali::Widget::WidgetTerminateType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetTerminateSignalType_Emit(void * jarg1, char * jarg2, void * jarg3, int jarg4) {
  Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  std::string *arg2 = 0 ;
  bundle *arg3 = (bundle *) 0 ;
  Dali::Widget::WidgetTerminateType arg4 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (bundle *)jarg3;
  arg4 = (Dali::Widget::WidgetTerminateType)jarg4;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Emit(arg1,(std::string const &)*arg2,arg3,arg4);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetTerminateSignalType() {
  void * jresult ;
  Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *)new Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetTerminateSignalType(void * jarg1) {
  Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetPauseSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Empty((Dali::Signal< void (std::string const &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetPauseSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (std::string const &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetPauseSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  void (*arg2)(std::string const &) = (void (*)(std::string const &)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  arg2 = (void (*)(std::string const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetPauseSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  void (*arg2)(std::string const &) = (void (*)(std::string const &)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  arg2 = (void (*)(std::string const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetPauseSignalType_Emit(void * jarg1, char * jarg2) {
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Emit(arg1,(std::string const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetPauseSignalType() {
  void * jresult ;
  Dali::Signal< void (std::string const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (std::string const &) > *)new Dali::Signal< void (std::string const &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetPauseSignalType(void * jarg1) {
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetResumeSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Empty((Dali::Signal< void (std::string const &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetResumeSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (std::string const &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetResumeSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  void (*arg2)(std::string const &) = (void (*)(std::string const &)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  arg2 = (void (*)(std::string const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetResumeSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  void (*arg2)(std::string const &) = (void (*)(std::string const &)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  arg2 = (void (*)(std::string const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetResumeSignalType_Emit(void * jarg1, char * jarg2) {
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__SP__Sg__Emit(arg1,(std::string const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetResumeSignalType() {
  void * jresult ;
  Dali::Signal< void (std::string const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (std::string const &) > *)new Dali::Signal< void (std::string const &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetResumeSignalType(void * jarg1) {
  Dali::Signal< void (std::string const &) > *arg1 = (Dali::Signal< void (std::string const &) > *) 0 ;

  arg1 = (Dali::Signal< void (std::string const &) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetResizeSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (std::string const &,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__Empty((Dali::Signal< void (std::string const &,Dali::Window) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetResizeSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (std::string const &,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__GetConnectionCount((Dali::Signal< void (std::string const &,Dali::Window) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetResizeSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *) 0 ;
  void (*arg2)(std::string const &,Dali::Window) = (void (*)(std::string const &,Dali::Window)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *)jarg1;
  arg2 = (void (*)(std::string const &,Dali::Window))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetResizeSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *) 0 ;
  void (*arg2)(std::string const &,Dali::Window) = (void (*)(std::string const &,Dali::Window)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *)jarg1;
  arg2 = (void (*)(std::string const &,Dali::Window))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetResizeSignalType_Emit(void * jarg1, char * jarg2, void * jarg3) {
  Dali::Signal< void (std::string const &,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Window arg3 ;
  Dali::Window *argp3 ;

  arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::Window *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_Dali_Window_SP__Sg__Emit(arg1,(std::string const &)*arg2,arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetResizeSignalType() {
  void * jresult ;
  Dali::Signal< void (std::string const &,Dali::Window) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (std::string const &,Dali::Window) > *)new Dali::Signal< void (std::string const &,Dali::Window) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetResizeSignalType(void * jarg1) {
  Dali::Signal< void (std::string const &,Dali::Window) > *arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,Dali::Window) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetUpdateSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (std::string const &,bundle *,int) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__Empty((Dali::Signal< void (std::string const &,bundle *,int) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetUpdateSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (std::string const &,bundle *,int) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__GetConnectionCount((Dali::Signal< void (std::string const &,bundle *,int) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetUpdateSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &,bundle *,int) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *) 0 ;
  void (*arg2)(std::string const &,bundle *,int) = (void (*)(std::string const &,bundle *,int)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *)jarg1;
  arg2 = (void (*)(std::string const &,bundle *,int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetUpdateSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &,bundle *,int) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *) 0 ;
  void (*arg2)(std::string const &,bundle *,int) = (void (*)(std::string const &,bundle *,int)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *)jarg1;
  arg2 = (void (*)(std::string const &,bundle *,int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetUpdateSignalType_Emit(void * jarg1, char * jarg2, void * jarg3, int jarg4) {
  Dali::Signal< void (std::string const &,bundle *,int) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *) 0 ;
  std::string *arg2 = 0 ;
  bundle *arg3 = (bundle *) 0 ;
  int arg4 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (bundle *)jarg3;
  arg4 = (int)jarg4;
  {
    try {
      Dali_Signal_Sl_void_Sp_std_string_SS_const_SA__Sc_bundle_Sm__Sc_int_SP__Sg__Emit(arg1,(std::string const &)*arg2,arg3,arg4);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

  //argout typemap for const std::string&

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetUpdateSignalType() {
  void * jresult ;
  Dali::Signal< void (std::string const &,bundle *,int) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (std::string const &,bundle *,int) > *)new Dali::Signal< void (std::string const &,bundle *,int) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetUpdateSignalType(void * jarg1) {
  Dali::Signal< void (std::string const &,bundle *,int) > *arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *) 0 ;

  arg1 = (Dali::Signal< void (std::string const &,bundle *,int) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AppSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::WidgetApplication &) > *arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *) 0 ;
  bool result;
  arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__Empty((Dali::Signal< void (Dali::WidgetApplication &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_AppSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::WidgetApplication &) > *arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *) 0 ;
  std::size_t result;
  arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::WidgetApplication &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AppSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetApplication &) > *arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *) 0 ;
  void (*arg2)(Dali::WidgetApplication &) = (void (*)(Dali::WidgetApplication &)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetApplication &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AppSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetApplication &) > *arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *) 0 ;
  void (*arg2)(Dali::WidgetApplication &) = (void (*)(Dali::WidgetApplication &)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetApplication &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AppSignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetApplication &) > *arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *) 0 ;
  Dali::WidgetApplication *arg2 = 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *)jarg1;
  arg2 = (Dali::WidgetApplication *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetApplication & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetApplication_SA__SP__Sg__Emit(arg1,*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AppSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::WidgetApplication &) > *result = 0 ;
  {
    try {
      result = (Dali::Signal< void (Dali::WidgetApplication &) > *)new Dali::Signal< void (Dali::WidgetApplication &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AppSignalType(void * jarg1) {
  Dali::Signal< void (Dali::WidgetApplication &) > *arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetApplication &) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetApplication_LowBatterySignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Empty((Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetApplication_LowBatterySignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_LowBatterySignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *) 0 ;
  void (*arg2)(Dali::DeviceStatus::Battery::Status) = (void (*)(Dali::DeviceStatus::Battery::Status)) 0 ;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Battery::Status))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_LowBatterySignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *) 0 ;
  void (*arg2)(Dali::DeviceStatus::Battery::Status) = (void (*)(Dali::DeviceStatus::Battery::Status)) 0 ;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Battery::Status))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_LowBatterySignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *) 0 ;
  Dali::DeviceStatus::Battery::Status arg2 ;
  Dali::DeviceStatus::Battery::Status *argp2 ;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *)jarg1;
  argp2 = (Dali::DeviceStatus::Battery::Status *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DeviceStatus::Battery::Status", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Emit(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_new_LowBatterySignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *)new Dali::Signal< void (Dali::DeviceStatus::Battery::Status) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_delete_LowBatterySignalType(void * jarg1) {
  Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Battery::Status) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetApplication_LowMemorySignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Empty((Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetApplication_LowMemorySignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_LowMemorySignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *) 0 ;
  void (*arg2)(Dali::DeviceStatus::Memory::Status) = (void (*)(Dali::DeviceStatus::Memory::Status)) 0 ;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Memory::Status))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_LowMemorySignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *) 0 ;
  void (*arg2)(Dali::DeviceStatus::Memory::Status) = (void (*)(Dali::DeviceStatus::Memory::Status)) 0 ;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Memory::Status))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_LowMemorySignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *) 0 ;
  Dali::DeviceStatus::Memory::Status arg2 ;
  Dali::DeviceStatus::Memory::Status *argp2 ;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *)jarg1;
  argp2 = (Dali::DeviceStatus::Memory::Status *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DeviceStatus::Memory::Status", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Emit(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_new_LowMemorySignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *)new Dali::Signal< void (Dali::DeviceStatus::Memory::Status) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_delete_LowMemorySignalType(void * jarg1) {
  Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::DeviceStatus::Memory::Status) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}

#ifdef __cplusplus
}
#endif

