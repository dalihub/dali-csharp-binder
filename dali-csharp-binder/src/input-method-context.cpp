/** Copyright (c) 2017 Samsung Electronics Co., Ltd.
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

#ifndef CSHARP_INPUT_METHOD_CONTEXT
#define CSHARP_INPUT_METHOD_CONTEXT
#endif

#include "common.h"
#include <dali/devel-api/adaptor-framework/input-method-context.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Empty(Dali::Signal< void (Dali::InputMethodContext &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::InputMethodContext &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Connect(Dali::Signal< void (Dali::InputMethodContext &) > *self,void (*func)(Dali::InputMethodContext &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::InputMethodContext &) > *self,void (*func)(Dali::InputMethodContext &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Emit(Dali::Signal< void (Dali::InputMethodContext &) > *self,Dali::InputMethodContext &arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Empty(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Connect(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *self,Dali::InputMethodContext::CallbackData (*func)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *self,Dali::InputMethodContext::CallbackData (*func)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &)){
  self->Disconnect( func );
}
SWIGINTERN Dali::InputMethodContext::CallbackData Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Emit(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *self,Dali::InputMethodContext &arg1,Dali::InputMethodContext::EventData const &arg2){
  return self->Emit( arg1, arg2 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty(Dali::Signal< void (bool) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount(Dali::Signal< void (bool) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(Dali::Signal< void (bool) > *self,void (*func)(bool)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(Dali::Signal< void (bool) > *self,void (*func)(bool)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(Dali::Signal< void (bool) > *self,bool arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Empty(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Connect(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *self,void (*func)(Dali::InputMethodContext::KeyboardType)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Disconnect(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *self,void (*func)(Dali::InputMethodContext::KeyboardType)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Emit(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *self,Dali::InputMethodContext::KeyboardType arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty(Dali::Signal< void (int) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount(Dali::Signal< void (int) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(Dali::Signal< void (int) > *self,void (*func)(int)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(Dali::Signal< void (int) > *self,void (*func)(int)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(Dali::Signal< void (int) > *self,int arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Empty(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__GetConnectionCount(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Connect(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *self,void (*func)(std::string const &, std::string const &, std::string const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Disconnect(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *self,void (*func)(std::string const &, std::string const &, std::string const &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Emit(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *self,std::string const &arg1,std::string const &arg2,std::string const &arg3){
  self->Emit( arg1, arg2, arg3 );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_InputMethodContext_SWIGUpcast(Dali::InputMethodContext *jarg1) {
  return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext_EventData__SWIG_0() {
  void * jresult ;
  Dali::InputMethodContext::EventData *result = 0 ;

  {
    try {
      result = (Dali::InputMethodContext::EventData *)new Dali::InputMethodContext::EventData();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext_EventData__SWIG_1(int jarg1, char * jarg2, int jarg3, int jarg4) {
  void * jresult ;
  Dali::InputMethodContext::EventType arg1 ;
  std::string *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  Dali::InputMethodContext::EventData *result = 0 ;

  arg1 = (Dali::InputMethodContext::EventType)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (int)jarg3;
  arg4 = (int)jarg4;
  {
    try {
      result = (Dali::InputMethodContext::EventData *)new Dali::InputMethodContext::EventData(arg1,(std::string const &)*arg2,arg3,arg4);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_predictiveString_set(void * jarg1, char * jarg2) {
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->predictiveString = *arg2;

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_predictiveString_get(void * jarg1) {
  char * jresult ;
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
  result = (std::string *) & ((arg1)->predictiveString);
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_eventName_set(void * jarg1, int jarg2) {
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;
  Dali::InputMethodContext::EventType arg2 ;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
  arg2 = (Dali::InputMethodContext::EventType)jarg2;
  if (arg1) (arg1)->eventName = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_eventName_get(void * jarg1) {
  int jresult ;
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;
  Dali::InputMethodContext::EventType result;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
  result = (Dali::InputMethodContext::EventType) ((arg1)->eventName);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_cursorOffset_set(void * jarg1, int jarg2) {
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;
  int arg2 ;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->cursorOffset = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_cursorOffset_get(void * jarg1) {
  int jresult ;
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;
  int result;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
  result = (int) ((arg1)->cursorOffset);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_numberOfChars_set(void * jarg1, int jarg2) {
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;
  int arg2 ;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->numberOfChars = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_numberOfChars_get(void * jarg1) {
  int jresult ;
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;
  int result;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
  result = (int) ((arg1)->numberOfChars);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext_EventData(void * jarg1) {
  Dali::InputMethodContext::EventData *arg1 = (Dali::InputMethodContext::EventData *) 0 ;

  arg1 = (Dali::InputMethodContext::EventData *)jarg1;
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
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext_CallbackData__SWIG_0() {
  void * jresult ;
  Dali::InputMethodContext::CallbackData *result = 0 ;

  {
    try {
      result = (Dali::InputMethodContext::CallbackData *)new Dali::InputMethodContext::CallbackData();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext_CallbackData__SWIG_1(unsigned int jarg1, int jarg2, char * jarg3, unsigned int jarg4) {
  void * jresult ;
  bool arg1 ;
  int arg2 ;
  std::string *arg3 = 0 ;
  bool arg4 ;
  Dali::InputMethodContext::CallbackData *result = 0 ;

  arg1 = jarg1 ? true : false;
  arg2 = (int)jarg2;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = (Dali::InputMethodContext::CallbackData *)new Dali::InputMethodContext::CallbackData(arg1,arg2,(std::string const &)*arg3,arg4);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_currentText_set(void * jarg1, char * jarg2) {
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->currentText = *arg2;

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_currentText_get(void * jarg1) {
  char * jresult ;
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
  result = (std::string *) & ((arg1)->currentText);
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_cursorPosition_set(void * jarg1, int jarg2) {
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;
  int arg2 ;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->cursorPosition = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_cursorPosition_get(void * jarg1) {
  int jresult ;
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;
  int result;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
  result = (int) ((arg1)->cursorPosition);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_update_set(void * jarg1, unsigned int jarg2) {
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;
  bool arg2 ;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
  arg2 = jarg2 ? true : false;
  if (arg1) (arg1)->update = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_update_get(void * jarg1) {
  unsigned int jresult ;
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;
  bool result;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
  result = (bool) ((arg1)->update);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_preeditResetRequired_set(void * jarg1, unsigned int jarg2) {
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;
  bool arg2 ;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
  arg2 = jarg2 ? true : false;
  if (arg1) (arg1)->preeditResetRequired = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_preeditResetRequired_get(void * jarg1) {
  unsigned int jresult ;
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;
  bool result;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
  result = (bool) ((arg1)->preeditResetRequired);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext_CallbackData(void * jarg1) {
  Dali::InputMethodContext::CallbackData *arg1 = (Dali::InputMethodContext::CallbackData *) 0 ;

  arg1 = (Dali::InputMethodContext::CallbackData *)jarg1;
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
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Finalize(void * jarg1) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      (arg1)->Finalize();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext__SWIG_0() {
  void * jresult ;
  Dali::InputMethodContext *result = 0 ;

  {
    try {
      result = (Dali::InputMethodContext *)new Dali::InputMethodContext();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext(void * jarg1) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_New() {
  void * jresult ;
  Dali::InputMethodContext result;

  {
    try {
      result = Dali::InputMethodContext::New();
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
  jresult = new Dali::InputMethodContext((const Dali::InputMethodContext &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = 0 ;
  Dali::InputMethodContext *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::InputMethodContext *)new Dali::InputMethodContext((Dali::InputMethodContext const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext *arg2 = 0 ;
  Dali::InputMethodContext *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  arg2 = (Dali::InputMethodContext *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::InputMethodContext *) &(arg1)->operator =((Dali::InputMethodContext const &)*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::InputMethodContext result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::InputMethodContext::DownCast(arg1);
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
  jresult = new Dali::InputMethodContext((const Dali::InputMethodContext &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Activate(void * jarg1) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      (arg1)->Activate();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Deactivate(void * jarg1) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      (arg1)->Deactivate();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_RestoreAfterFocusLost(void * jarg1) {
  unsigned int jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  bool result;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (bool)((Dali::InputMethodContext const *)arg1)->RestoreAfterFocusLost();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetRestoreAfterFocusLost(void * jarg1, unsigned int jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  bool arg2 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetRestoreAfterFocusLost(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Reset(void * jarg1) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      (arg1)->Reset();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_NotifyCursorPosition(void * jarg1) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      (arg1)->NotifyCursorPosition();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetCursorPosition(void * jarg1, unsigned int jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->SetCursorPosition(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetCursorPosition(void * jarg1) {
  unsigned int jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  unsigned int result;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::InputMethodContext const *)arg1)->GetCursorPosition();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetSurroundingText(void * jarg1, char * jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetSurroundingText((std::string const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_InputMethodContext_GetSurroundingText(void * jarg1) {
  char * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (std::string *) &((Dali::InputMethodContext const *)arg1)->GetSurroundingText();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_NotifyTextInputMultiLine(void * jarg1, unsigned int jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  bool arg2 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->NotifyTextInputMultiLine(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetTextDirection(void * jarg1) {
  int jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::TextDirection result;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::TextDirection)(arg1)->GetTextDirection();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputMethodArea(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::Rect< int > result;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (arg1)->GetInputMethodArea();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = new Dali::Rect< int >((const Dali::Rect< int > &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_ApplyOptions(void * jarg1, void * jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodOptions *arg2 = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  arg2 = (Dali::InputMethodOptions *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "InputMethodOptions const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->ApplyOptions((Dali::InputMethodOptions const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetInputPanelUserData(void * jarg1, char * jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetInputPanelData((std::string const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }

  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelUserData(void * jarg1, char** jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;

  //typemap in
  std::string temp;
  arg2 = &temp;

  {
    try {
      (arg1)->GetInputPanelData(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }

  //Typemap argout in c++ file.
  //This will convert c++ string to c# string
  *jarg2 = SWIG_csharp_string_callback(arg2->c_str());

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelState(void * jarg1) {
  int jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::State result;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::State)(arg1)->GetInputPanelState();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetReturnKeyState(void * jarg1, unsigned int jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  bool arg2 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetReturnKeyState(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_AutoEnableInputPanel(void * jarg1, unsigned int jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  bool arg2 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->AutoEnableInputPanel(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_ShowInputPanel(void * jarg1) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      (arg1)->ShowInputPanel();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_HideInputPanel(void * jarg1) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      (arg1)->HideInputPanel();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetKeyboardType(void * jarg1) {
  int jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::KeyboardType result;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::KeyboardType)(arg1)->GetKeyboardType();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelLocale(void * jarg1) {
  char * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  std::string result;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (arg1)->GetInputPanelLocale();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_AllowTextPrediction(void * jarg1, unsigned int jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  bool arg2 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->AllowTextPrediction(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_IsTextPredictionAllowed(void * jarg1) {
  unsigned int jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  bool result;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (bool)((Dali::InputMethodContext const *)arg1)->IsTextPredictionAllowed();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetMIMEType(void * jarg1, char * jarg2) {
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetMIMEType((std::string const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }

  //argout typemap for const std::string&

}


// Signals
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_ActivatedSignal(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::ActivatedSignalType *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::ActivatedSignalType *) &(arg1)->ActivatedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_EventReceivedSignal(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::KeyboardEventSignalType *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::KeyboardEventSignalType *) &(arg1)->EventReceivedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_StatusChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::StatusSignalType *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::StatusSignalType *) &(arg1)->StatusChangedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_ResizedSignal(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::KeyboardResizedSignalType *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::KeyboardResizedSignalType *) &(arg1)->ResizedSignal();
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

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_LanguageChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::LanguageChangedSignalType *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::LanguageChangedSignalType *) &(arg1)->LanguageChangedSignal();
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

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_KeyboardTypeChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::KeyboardTypeSignalType *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::KeyboardTypeSignalType *) &(arg1)->KeyboardTypeChangedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_ContentReceivedSignal(void * jarg1) {
  void * jresult ;
  Dali::InputMethodContext *arg1 = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::ContentReceivedSignalType *result = 0 ;

  arg1 = (Dali::InputMethodContext *)jarg1;
  {
    try {
      result = (Dali::InputMethodContext::ContentReceivedSignalType *) &(arg1)->ContentReceivedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}

// ActivatedSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::InputMethodContext &) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Empty((Dali::Signal< void (Dali::InputMethodContext &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ActivatedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::InputMethodContext &) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::InputMethodContext &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::InputMethodContext &) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  void (*arg2)(Dali::InputMethodContext &) = (void (*)(Dali::InputMethodContext &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *)jarg1;
  arg2 = (void (*)(Dali::InputMethodContext &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::InputMethodContext &) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  void (*arg2)(Dali::InputMethodContext &) = (void (*)(Dali::InputMethodContext &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *)jarg1;
  arg2 = (void (*)(Dali::InputMethodContext &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::InputMethodContext &) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  Dali::InputMethodContext *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *)jarg1;
  arg2 = (Dali::InputMethodContext *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Emit(arg1,*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ActivatedSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::InputMethodContext &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::InputMethodContext &) > *)new Dali::Signal< void (Dali::InputMethodContext &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ActivatedSignalType(void * jarg1) {
  Dali::Signal< void (Dali::InputMethodContext &) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext &) > *)jarg1;
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
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}

// KeyboardEventSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Empty((Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (unsigned long)result;
  return jresult;
}

typedef Dali::InputMethodContext::CallbackData* (SWIGSTDCALL* SWIG_CallbackEventReceived)(Dali::InputMethodContext *, Dali::InputMethodContext::EventData *);
SWIG_CallbackEventReceived swig_callbackOnEventReceived;

Dali::InputMethodContext::CallbackData OnEventReceivedCallback(Dali::InputMethodContext inputMethodContext, Dali::InputMethodContext::EventData eventData)
{
    Dali::InputMethodContext::CallbackData *callbackDataP;
    Dali::InputMethodContext::CallbackData callbackData;
    Dali::InputMethodContext *inputMethodContextP = NULL;
    Dali::InputMethodContext::EventData *eventDataP = NULL;

    if (inputMethodContext)
    {
      inputMethodContextP = (Dali::InputMethodContext *)&inputMethodContext;
    }

    eventDataP = (Dali::InputMethodContext::EventData *)&eventData;

    callbackDataP = (Dali::InputMethodContext::CallbackData *)swig_callbackOnEventReceived(inputMethodContextP, eventDataP);
    if (callbackDataP)
    {
      callbackData = *callbackDataP;
    }

    return callbackData;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Connect(void * jarg1, SWIG_CallbackEventReceived callbackOnEventReceived) {

  swig_callbackOnEventReceived = callbackOnEventReceived;

  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  Dali::InputMethodContext::CallbackData (*arg2)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) = (Dali::InputMethodContext::CallbackData (*)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &)) 0 ;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)jarg1;
  arg2 = (Dali::InputMethodContext::CallbackData (*)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &))OnEventReceivedCallback;
  {
    try {
      Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Disconnect(void * jarg1, SWIG_CallbackEventReceived callbackOnEventReceived) {

  swig_callbackOnEventReceived = callbackOnEventReceived;

  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  Dali::InputMethodContext::CallbackData (*arg2)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) = (Dali::InputMethodContext::CallbackData (*)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &)) 0 ;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)jarg1;
  arg2 = (Dali::InputMethodContext::CallbackData (*)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &))OnEventReceivedCallback;
  {
    try {
      Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Emit(void * jarg1, void * jarg2, void * jarg3) {
  void * jresult ;
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  Dali::InputMethodContext *arg2 = 0 ;
  Dali::InputMethodContext::EventData *arg3 = 0 ;
  Dali::InputMethodContext::CallbackData result;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)jarg1;
  arg2 = (Dali::InputMethodContext *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext & type is null", 0);
    return 0;
  }
  arg3 = (Dali::InputMethodContext::EventData *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext::EventData const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Emit(arg1,*arg2,(Dali::InputMethodContext::EventData const &)*arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = new Dali::InputMethodContext::CallbackData((const Dali::InputMethodContext::CallbackData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_KeyboardEventSignalType() {
  void * jresult ;
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)new Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardEventSignalType(void * jarg1) {
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)jarg1;
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
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


// VoidSignalType
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VoidSignalType() {
  void * jresult ;
  Dali::Signal< void () > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void () > *)new Dali::Signal< void () >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VoidSignalType(void * jarg1) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
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
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_VoidSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void () > *)jarg1;
  {
    try {
      result = (bool)((Dali::Signal< void () > const *)arg1)->Empty();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_VoidSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void () > *)jarg1;
  {
    try {
      result = ((Dali::Signal< void () > const *)arg1)->GetConnectionCount();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VoidSignalType_Connect__SWIG_0(void * jarg1, void * jarg2) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  void (*arg2)() = (void (*)()) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  arg2 = (void (*)())jarg2;
  {
    try {
      (arg1)->Connect(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VoidSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  void (*arg2)() = (void (*)()) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  arg2 = (void (*)())jarg2;
  {
    try {
      (arg1)->Disconnect(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VoidSignalType_Connect__SWIG_4(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  Dali::ConnectionTrackerInterface *arg2 = (Dali::ConnectionTrackerInterface *) 0 ;
  Dali::FunctorDelegate *arg3 = (Dali::FunctorDelegate *) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  arg2 = (Dali::ConnectionTrackerInterface *)jarg2;
  arg3 = (Dali::FunctorDelegate *)jarg3;
  {
    try {
      (arg1)->Connect(arg2,arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VoidSignalType_Emit(void * jarg1) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  {
    try {
      (arg1)->Emit();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}

//StatusSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_StatusSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty((Dali::Signal< void (bool) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_StatusSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount((Dali::Signal< void (bool) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  void (*arg2)(bool) = (void (*)(bool)) 0 ;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  arg2 = (void (*)(bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  void (*arg2)(bool) = (void (*)(bool)) 0 ;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  arg2 = (void (*)(bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Emit(void * jarg1, unsigned int jarg2) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_StatusSignalType() {
  void * jresult ;
  Dali::Signal< void (bool) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (bool) > *)new Dali::Signal< void (bool) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_StatusSignalType(void * jarg1) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
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
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}

//KeyboardTypeSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Empty((Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  void (*arg2)(Dali::InputMethodContext::KeyboardType) = (void (*)(Dali::InputMethodContext::KeyboardType)) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  arg2 = (void (*)(Dali::InputMethodContext::KeyboardType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  void (*arg2)(Dali::InputMethodContext::KeyboardType) = (void (*)(Dali::InputMethodContext::KeyboardType)) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  arg2 = (void (*)(Dali::InputMethodContext::KeyboardType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Emit(void * jarg1, int jarg2) {
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  Dali::InputMethodContext::KeyboardType arg2 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  arg2 = (Dali::InputMethodContext::KeyboardType)jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Emit(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_KeyboardTypeSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)new Dali::Signal< void (Dali::InputMethodContext::KeyboardType) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardTypeSignalType(void * jarg1) {
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
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
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return ; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ; }  }
}

//LanguageChangedSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty((Dali::Signal< void (int) > const *)arg1);
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
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount((Dali::Signal< void (int) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Emit(void * jarg1, int jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  int arg2 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LanguageChangedSignalType() {
  void * jresult ;
  Dali::Signal< void (int) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (int) > *)new Dali::Signal< void (int) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LanguageChangedSignalType(void * jarg1) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
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

//KeyboardTypeSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty((Dali::Signal< void (int) > const *)arg1);
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
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount((Dali::Signal< void (int) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Emit(void * jarg1, int jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  int arg2 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_KeyboardResizedSignalType() {
  void * jresult ;
  Dali::Signal< void (int) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (int) > *)new Dali::Signal< void (int) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardResizedSignalType(void * jarg1) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
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

//ContentReceivedSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Empty((Dali::Signal< void (std::string const &, std::string const &, std::string const &) > const *)arg1);
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
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__GetConnectionCount((Dali::Signal< void (std::string const &, std::string const &, std::string const &) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  void (*arg2)(std::string const &, std::string const &, std::string const &) = (void (*)(std::string const &, std::string const &, std::string const &)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  arg2 = (void (*)(std::string const &, std::string const &, std::string const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  void (*arg2)(std::string const &, std::string const &, std::string const &) = (void (*)(std::string const &, std::string const &, std::string const &)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  arg2 = (void (*)(std::string const &, std::string const &, std::string const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Emit(void * jarg1, char * jarg2, char * jarg3, char * jarg4) {
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  std::string *arg4 = 0 ;

  arg1 = (Dali::Signal<  void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  std::string arg4_str(jarg4);
  arg4 = &arg4_str;
  {
    try {
      Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Emit(arg1,(std::string const &)*arg2,(std::string const &)*arg3,(std::string const &)*arg4);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ContentReceivedSignalType() {
  void * jresult ;
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)new Dali::Signal< void (std::string const &, std::string const &, std::string const &) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ContentReceivedSignalType(void * jarg1) {
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
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

#ifdef __cplusplus
}
#endif

