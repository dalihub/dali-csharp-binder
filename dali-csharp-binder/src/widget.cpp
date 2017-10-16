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
#include <dali/devel-api/widget/widget.h>
#include <dali/devel-api/widget/widget-application.h>
#include <dali/devel-api/widget/widget-data.h>
#include <dali/integration-api/debug.h>
#include <dlog.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

// keep argWidgetCs and argWidgetV so they're always available to DALi
int argWidgetC = 1;
char **argWidgetV = NULL;
char *g_argv = NULL;

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__Empty(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__Connect(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *self,void (*func)(Dali::WidgetData,bundle *,Dali::Widget::WindowSize)){
  return self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__Disconnect(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *self,void (*func)(Dali::WidgetData,bundle *,Dali::Widget::WindowSize)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__Emit(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *self,Dali::WidgetData arg1,bundle *arg2,Dali::Widget::WindowSize arg3){
  self->Emit( arg1, arg2, arg3 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Empty(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Connect(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *self,void (*func)(Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType)){
  return self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Disconnect(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *self,void (*func)(Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Emit(Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *self,Dali::WidgetData arg1,bundle *arg2,Dali::Widget::WidgetTerminateType arg3){
  self->Emit( arg1, arg2, arg3 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__Empty(Dali::Signal< void (Dali::WidgetData) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::WidgetData) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__Connect(Dali::Signal< void (Dali::WidgetData) > *self,void (*func)(Dali::WidgetData)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__Disconnect(Dali::Signal< void (Dali::WidgetData) > *self,void (*func)(Dali::WidgetData)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__Emit(Dali::Signal< void (Dali::WidgetData) > *self,Dali::WidgetData arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__Empty(Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__Connect(Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *self,void (*func)(Dali::WidgetData,Dali::Widget::WindowSize)){
self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__Disconnect(Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *self,void (*func)(Dali::WidgetData,Dali::Widget::WindowSize)){
self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__Emit(Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *self,Dali::WidgetData arg1,Dali::Widget::WindowSize arg2){
self->Emit( arg1, arg2 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__Empty(Dali::Signal< void (Dali::WidgetData,bundle *,int) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::WidgetData,bundle *,int) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__Connect(Dali::Signal< void (Dali::WidgetData,bundle *,int) > *self,void (*func)(Dali::WidgetData,bundle *,int)){
  return self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__Disconnect(Dali::Signal< void (Dali::WidgetData,bundle *,int) > *self,void (*func)(Dali::WidgetData,bundle *,int)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__Emit(Dali::Signal< void (Dali::WidgetData,bundle *,int) > *self,Dali::WidgetData arg1,bundle *arg2,int arg3){
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

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_Widget_SWIGUpcast(Dali::Widget *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_WidgetApplication_SWIGUpcast(Dali::WidgetApplication *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_WidgetData_SWIGUpcast(Dali::WidgetData *jarg1) {
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
  Dali::Widget::WidgetInstanceCreateSignalType *result = 0 ;
  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetInstanceCreateSignalType *) &(arg1)->CreateSignal();
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
  Dali::Widget::WidgetInstanceTerminateSignalType *result = 0 ;
  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetInstanceTerminateSignalType *) &(arg1)->TerminateSignal();
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
  Dali::Widget::WidgetInstancePauseSignalType *result = 0 ;
  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetInstancePauseSignalType *) &(arg1)->PauseSignal();
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
  Dali::Widget::WidgetInstanceResumeSignalType *result = 0 ;
  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetInstanceResumeSignalType *) &(arg1)->ResumeSignal();
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
  Dali::Widget::WidgetInstanceResizeSignalType *result = 0 ;
  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetInstanceResizeSignalType *) &(arg1)->ResizeSignal();
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
  Dali::Widget::WidgetInstanceUpdateSignalType *result = 0 ;
  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      result = (Dali::Widget::WidgetInstanceUpdateSignalType *) &(arg1)->UpdateSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_GetWindow(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::Window result;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (arg1)->GetWindow();
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
  jresult = new Dali::Window((const Dali::Window &)result);
  return jresult;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_BatteryLowSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication::AppSignalType *result = 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (Dali::WidgetApplication::AppSignalType *) &(arg1)->BatteryLowSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_MemoryLowSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication::AppSignalType *result = 0 ;
  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      result = (Dali::WidgetApplication::AppSignalType *) &(arg1)->MemoryLowSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetData_New(char * jarg1, void * jarg2, char * jarg3) {
  void * jresult ;
  char *arg1 = (char *) 0 ;
  bundle *arg2 = (bundle *) 0 ;
  char *arg3 = (char *) 0 ;
  Dali::WidgetData result;
  arg1 = (char *)jarg1;
  arg2 = (bundle *)jarg2;
  arg3 = (char *)jarg3;
  {
    try {
      result = Dali::WidgetData::New((char const *)arg1,arg2,arg3);
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
  jresult = new Dali::WidgetData((const Dali::WidgetData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetData__SWIG_0() {
  void * jresult ;
  Dali::WidgetData *result = 0 ;
  {
    try {
      result = (Dali::WidgetData *)new Dali::WidgetData();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetData__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::WidgetData *arg1 = 0 ;
  Dali::WidgetData *result = 0 ;
  arg1 = (Dali::WidgetData *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetData const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WidgetData *)new Dali::WidgetData((Dali::WidgetData const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetData_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  Dali::WidgetData *arg2 = 0 ;
  Dali::WidgetData *result = 0 ;
  arg1 = (Dali::WidgetData *)jarg1;
  arg2 = (Dali::WidgetData *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetData const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WidgetData *) &(arg1)->operator =((Dali::WidgetData const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetData(void * jarg1) {
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  arg1 = (Dali::WidgetData *)jarg1;
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


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_WidgetData_GetInstanceId(void * jarg1) {
  char * jresult ;
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  char *result = 0 ;
  arg1 = (Dali::WidgetData *)jarg1;
  {
    try {
      result = (char *)(arg1)->GetInstanceId();
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
  jresult = SWIG_csharp_string_callback((const char *)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetData_GetArgs(void * jarg1) {
  void * jresult ;
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  bundle *result = 0 ;
  arg1 = (Dali::WidgetData *)jarg1;
  {
    try {
      result = (bundle *)(arg1)->GetArgs();
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


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_WidgetData_GetContent(void * jarg1) {
  char * jresult ;
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  char *result = 0 ;
  arg1 = (Dali::WidgetData *)jarg1;
  {
    try {
      result = (char *)(arg1)->GetContent();
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
  jresult = SWIG_csharp_string_callback((const char *)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetData_GetWindow(void * jarg1) {
  void * jresult ;
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  Dali::Window result;
  arg1 = (Dali::WidgetData *)jarg1;
  {
    try {
      result = (arg1)->GetWindow();
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
  jresult = new Dali::Window((const Dali::Window &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetData_SetArgs(void * jarg1, void * jarg2) {
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  bundle *arg2 = (bundle *) 0 ;
  arg1 = (Dali::WidgetData *)jarg1;
  arg2 = (bundle *)jarg2;
  {
    try {
      (arg1)->SetArgs(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetData_SetContent(void * jarg1, char * jarg2) {
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  char *arg2 = (char *) 0 ;
  arg1 = (Dali::WidgetData *)jarg1;
  arg2 = (char *)jarg2;
  {
    try {
      (arg1)->SetContent(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetData_SetWindow(void * jarg1, void * jarg2) {
  Dali::WidgetData *arg1 = (Dali::WidgetData *) 0 ;
  Dali::Window arg2 ;
  Dali::Window *argp2 ;
  arg1 = (Dali::WidgetData *)jarg1;
  argp2 = (Dali::Window *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetWindow(arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetInstanceCreateSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *) 0 ;
  bool result;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__Empty((Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetInstanceCreateSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *) 0 ;
  std::size_t result;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceCreateSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *) 0 ;
  void (*arg2)(Dali::WidgetData,bundle *,Dali::Widget::WindowSize) = (void (*)(Dali::WidgetData,bundle *,Dali::Widget::WindowSize)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData,bundle *,Dali::Widget::WindowSize))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceCreateSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *) 0 ;
  void (*arg2)(Dali::WidgetData,bundle *,Dali::Widget::WindowSize) = (void (*)(Dali::WidgetData,bundle *,Dali::Widget::WindowSize)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData,bundle *,Dali::Widget::WindowSize))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceCreateSignalType_Emit(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *) 0 ;
  Dali::WidgetData arg2 ;
  bundle *arg3 = (bundle *) 0 ;
  Dali::Widget::WindowSize arg4 ;
  Dali::WidgetData *argp2 ;
  Dali::Widget::WindowSize *argp4 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *)jarg1;
  argp2 = (Dali::WidgetData *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WidgetData", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (bundle *)jarg3;
  argp4 = (Dali::Widget::WindowSize *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Widget::WindowSize", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WindowSize_SP__Sg__Emit(arg1,arg2,arg3,arg4);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetInstanceCreateSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *result = 0 ;
  {
    try {
      result = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *)new Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetInstanceCreateSignalType(void * jarg1) {
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WindowSize) > *)jarg1;
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetInstanceTerminateSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  bool result;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Empty((Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetInstanceTerminateSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  std::size_t result;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceTerminateSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  void (*arg2)(Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) = (void (*)(Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceTerminateSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  void (*arg2)(Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) = (void (*)(Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceTerminateSignalType_Emit(void * jarg1, void * jarg2, void * jarg3, int jarg4) {
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  Dali::WidgetData arg2 ;
  bundle *arg3 = (bundle *) 0 ;
  Dali::Widget::WidgetTerminateType arg4 ;
  Dali::WidgetData *argp2 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
  argp2 = (Dali::WidgetData *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WidgetData", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (bundle *)jarg3;
  arg4 = (Dali::Widget::WidgetTerminateType)jarg4;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_Dali_Widget_WidgetTerminateType_SP__Sg__Emit(arg1,arg2,arg3,arg4);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetInstanceTerminateSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *result = 0 ;
  {
    try {
      result = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *)new Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetInstanceTerminateSignalType(void * jarg1) {
  Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,Dali::Widget::WidgetTerminateType) > *)jarg1;
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetInstancePauseOrResumeSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::WidgetData) > *arg1 = (Dali::Signal< void (Dali::WidgetData) > *) 0 ;
  bool result;
  arg1 = (Dali::Signal< void (Dali::WidgetData) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__Empty((Dali::Signal< void (Dali::WidgetData) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetInstancePauseOrResumeSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::WidgetData) > *arg1 = (Dali::Signal< void (Dali::WidgetData) > *) 0 ;
  std::size_t result;
  arg1 = (Dali::Signal< void (Dali::WidgetData) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::WidgetData) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstancePauseOrResumeSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData) > *arg1 = (Dali::Signal< void (Dali::WidgetData) > *) 0 ;
  void (*arg2)(Dali::WidgetData) = (void (*)(Dali::WidgetData)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstancePauseOrResumeSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData) > *arg1 = (Dali::Signal< void (Dali::WidgetData) > *) 0 ;
  void (*arg2)(Dali::WidgetData) = (void (*)(Dali::WidgetData)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstancePauseOrResumeSignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData) > *arg1 = (Dali::Signal< void (Dali::WidgetData) > *) 0 ;
  Dali::WidgetData arg2 ;
  Dali::WidgetData *argp2 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData) > *)jarg1;
  argp2 = (Dali::WidgetData *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WidgetData", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_SP__Sg__Emit(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetInstancePauseOrResumeSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::WidgetData) > *result = 0 ;
  {
    try {
      result = (Dali::Signal< void (Dali::WidgetData) > *)new Dali::Signal< void (Dali::WidgetData) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetInstancePauseOrResumeSignalType(void * jarg1) {
  Dali::Signal< void (Dali::WidgetData) > *arg1 = (Dali::Signal< void (Dali::WidgetData) > *) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData) > *)jarg1;
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetInstanceResizeSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *) 0 ;
  bool result;
  arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__Empty((Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetInstanceResizeSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *) 0 ;
  std::size_t result;
  arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceResizeSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *) 0 ;
  void (*arg2)(Dali::WidgetData,Dali::Widget::WindowSize) = (void (*)(Dali::WidgetData,Dali::Widget::WindowSize)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData,Dali::Widget::WindowSize))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceResizeSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *) 0 ;
  void (*arg2)(Dali::WidgetData,Dali::Widget::WindowSize) = (void (*)(Dali::WidgetData,Dali::Widget::WindowSize)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData,Dali::Widget::WindowSize))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceResizeSignalType_Emit(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *) 0 ;
  Dali::WidgetData arg2 ;
  Dali::Widget::WindowSize arg3 ;
  Dali::WidgetData *argp2 ;
  Dali::Widget::WindowSize *argp3 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *)jarg1;
  argp2 = (Dali::WidgetData *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WidgetData", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Widget::WindowSize *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Widget::WindowSize", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_Dali_Widget_WindowSize_SP__Sg__Emit(arg1,arg2,arg3);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetInstanceResizeSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *result = 0 ;
  {
    try {
      result = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *)new Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetInstanceResizeSignalType(void * jarg1) {
  Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,Dali::Widget::WindowSize) > *)jarg1;
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetInstanceUpdateSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,int) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *) 0 ;
  bool result;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__Empty((Dali::Signal< void (Dali::WidgetData,bundle *,int) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetInstanceUpdateSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,int) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *) 0 ;
  std::size_t result;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::WidgetData,bundle *,int) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceUpdateSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData,bundle *,int) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *) 0 ;
  void (*arg2)(Dali::WidgetData,bundle *,int) = (void (*)(Dali::WidgetData,bundle *,int)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData,bundle *,int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceUpdateSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetData,bundle *,int) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *) 0 ;
  void (*arg2)(Dali::WidgetData,bundle *,int) = (void (*)(Dali::WidgetData,bundle *,int)) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetData,bundle *,int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetInstanceUpdateSignalType_Emit(void * jarg1, void * jarg2, void * jarg3, int jarg4) {
  Dali::Signal< void (Dali::WidgetData,bundle *,int) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *) 0 ;
  Dali::WidgetData arg2 ;
  bundle *arg3 = (bundle *) 0 ;
  int arg4 ;
  Dali::WidgetData *argp2 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *)jarg1;
  argp2 = (Dali::WidgetData *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WidgetData", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (bundle *)jarg3;
  arg4 = (int)jarg4;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetData_Sc_bundle_Sm__Sc_int_SP__Sg__Emit(arg1,arg2,arg3,arg4);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetInstanceUpdateSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::WidgetData,bundle *,int) > *result = 0 ;
  {
    try {
      result = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *)new Dali::Signal< void (Dali::WidgetData,bundle *,int) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetInstanceUpdateSignalType(void * jarg1) {
  Dali::Signal< void (Dali::WidgetData,bundle *,int) > *arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *) 0 ;
  arg1 = (Dali::Signal< void (Dali::WidgetData,bundle *,int) > *)jarg1;
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


#ifdef __cplusplus
}
#endif

