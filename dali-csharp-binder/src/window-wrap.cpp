/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/adaptor-framework/window.h>
#include <dali/devel-api/adaptor-framework/window-devel.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>

// INTERNAL INCLUDES
#include "common.h"

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;



SWIGINTERN bool Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty(Dali::Signal< void (Dali::Window, bool) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Window, bool) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(Dali::Signal< void (Dali::Window, bool) > *self,void (*func)(Dali::Window, bool)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(Dali::Signal< void (Dali::Window, bool) > *self,void (*func)(Dali::Window, bool)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(Dali::Signal< void (Dali::Window, bool) > *self,Dali::Window arg, bool focusIn){
  self->Emit( arg, focusIn );
}

/*ResizeSignal*/
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__Empty(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__Connect(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *self,void (*func)(Dali::Window, Dali::Window::WindowSize)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__Disconnect(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *self,void (*func)(Dali::Window, Dali::Window::WindowSize)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__Emit(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *self, Dali::Window arg, Dali::Window::WindowSize size){
  self->Emit( arg, size );
}

//Transition effect
SWIGINTERN bool Dali_Signal_Window_Transition_Effect_Event_Signal_Empty(Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Window_Transition_Effect_Event_Signal_GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Window_Transition_Effect_Event_Signal_Connect(Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *self, void (*func)(Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Window_Transition_Effect_Event_Signal_Disconnect(Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *self,void (*func)(Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Window_Transition_Effect_Event_Signal_Emit(Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *self,Dali::Window arg, Dali::WindowEffectState state, Dali::WindowEffectType type){
  self->Emit( arg, state, type );
}

#ifdef __cplusplus
extern "C" {
#endif

/*Window binding*/
SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_Window_SWIGUpcast(Dali::Window *jarg1) {
  return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_New__SWIG_0(void * jarg1, char * jarg2, unsigned int jarg3) {
  void * jresult ;
  Dali::PositionSize arg1 ;
  std::string *arg2 = 0 ;
  bool arg3 ;
  Dali::PositionSize *argp1 ;
  Dali::Window result;

  argp1 = (Dali::PositionSize *)jarg1;
  if (!argp1)
  {
    arg1 = Dali::PositionSize(0, 0, 0, 0);
  }
  else
  {
    arg1 = *argp1;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = jarg3 ? true : false;
  {
    try {
      result = Dali::Window::New(arg1,(std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window((const Dali::Window &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_New__SWIG_1(void * jarg1, char * jarg2) {
  void * jresult ;
  Dali::PositionSize arg1 ;
  std::string *arg2 = 0 ;
  Dali::PositionSize *argp1 ;
  Dali::Window result;

  argp1 = (Dali::PositionSize *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }
  arg1 = *argp1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = Dali::Window::New(arg1,(std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window((const Dali::Window &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_New__SWIG_2(void * jarg1, char * jarg2, char * jarg3, unsigned int jarg4) {
  void * jresult ;
  Dali::PositionSize arg1 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  bool arg4 ;
  Dali::PositionSize *argp1 ;
  Dali::Window result;

  argp1 = (Dali::PositionSize *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }
  arg1 = *argp1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = Dali::Window::New(arg1,(std::string const &)*arg2,(std::string const &)*arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window((const Dali::Window &)result);

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_New__SWIG_3(void * jarg1, char * jarg2, char * jarg3) {
  void * jresult ;
  Dali::PositionSize arg1 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  Dali::PositionSize *argp1 ;
  Dali::Window result;

  argp1 = (Dali::PositionSize *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }
  arg1 = *argp1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = Dali::Window::New(arg1,(std::string const &)*arg2,(std::string const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window((const Dali::Window &)result);

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Window__SWIG_0() {
  void * jresult ;
  Dali::Window *result = 0 ;

  {
    try {
      result = (Dali::Window *)new Dali::Window();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Window(void * jarg1) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Window__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = 0 ;
  Dali::Window *result = 0 ;

  arg1 = (Dali::Window *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Window const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Window *)new Dali::Window((Dali::Window const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window *arg2 = 0 ;
  Dali::Window *result = 0 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::Window *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Window const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Window *) &(arg1)->operator =((Dali::Window const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetClass(void * jarg1, char * jarg2, char * jarg3) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  std::string arg2 ;
  std::string arg3 ;

  arg1 = (Dali::Window *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  (&arg2)->assign(jarg2);
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  (&arg3)->assign(jarg3);
  {
    try {
      (arg1)->SetClass(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Raise(void * jarg1) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      (arg1)->Raise();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Lower(void * jarg1) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      (arg1)->Lower();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Activate(void * jarg1) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      (arg1)->Activate();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_AddAvailableOrientation(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::WindowOrientation arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::WindowOrientation)jarg2;
  {
    try {
      (arg1)->AddAvailableOrientation(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_RemoveAvailableOrientation(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::WindowOrientation arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::WindowOrientation)jarg2;
  {
    try {
      (arg1)->RemoveAvailableOrientation(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPreferredOrientation(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::WindowOrientation arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::WindowOrientation)jarg2;
  {
    try {
      (arg1)->SetPreferredOrientation(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Window_GetPreferredOrientation(void * jarg1) {
  int jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::WindowOrientation result;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = (Dali::WindowOrientation)(arg1)->GetPreferredOrientation();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Window_GetCurrentOrientation(void * jarg1) {
  int jresult ;
  Dali::WindowOrientation result;
  Dali::Window* window = (Dali::Window*)jarg1;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  {
    try {
      result = Dali::DevelWindow::GetCurrentOrientation(*window);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetAvailableOrientations(void * jarg1, void* jarg2, int jarg3) {
  Dali::Window* window = (Dali::Window*)jarg1;
  if(!window)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return;
  }
  Dali::Property::Array *arg2 = (static_cast<Dali::Property::Array *>(jarg2));
  unsigned int count = static_cast<unsigned int>(jarg3);

  Dali::Vector< Dali::WindowOrientation> orientations;
  orientations.Resize( count );
  for(Dali::Property::Array::SizeType i = 0; i < count; ++i)
  {
    int angle = arg2->GetElementAt(i).Get<int>();
    orientations[i] = static_cast< Dali::WindowOrientation >(angle);
  }
  {
    try {
      Dali::DevelWindow::SetAvailableOrientations(*window, orientations);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetNativeHandle(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Any result;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = ((Dali::Window const *)arg1)->GetNativeHandle();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Any((const Dali::Any &)result);
  return jresult;
}

/*window-devel binding*/

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FocusChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::Window::FocusChangeSignalType *result = 0 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::Window::FocusChangeSignalType*)&arg1.FocusChangeSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetAcceptFocus(void * jarg1, unsigned int jarg2) {
  Dali::Window arg1 ;
  bool arg2 ;
  Dali::Window *argp1 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = jarg2 ? true : false;
  {
    try {
      arg1.SetAcceptFocus(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_IsFocusAcceptable(void * jarg1) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  bool result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (bool)arg1.IsFocusAcceptable();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Show(void * jarg1) {
  Dali::Window arg1 ;
  Dali::Window *argp1 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  {
    try {
      arg1.Show();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Hide(void * jarg1) {
  Dali::Window arg1 ;
  Dali::Window *argp1 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  {
    try {
      arg1.Hide();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_IsVisible(void * jarg1) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  bool result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (bool)arg1.IsVisible();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GetSupportedAuxiliaryHintCount(void * jarg1) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  unsigned int result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (unsigned int)arg1.GetSupportedAuxiliaryHintCount();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_GetSupportedAuxiliaryHint(void * jarg1, unsigned int jarg2) {
  char * jresult ;
  Dali::Window arg1 ;
  unsigned int arg2 ;
  Dali::Window *argp1 ;
  std::string result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = arg1.GetSupportedAuxiliaryHint(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AddAuxiliaryHint(void * jarg1, char * jarg2, char * jarg3) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  Dali::Window *argp1 ;
  unsigned int result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = (unsigned int)arg1.AddAuxiliaryHint((std::string const &)*arg2,(std::string const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_RemoveAuxiliaryHint(void * jarg1, unsigned int jarg2) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  unsigned int arg2 ;
  Dali::Window *argp1 ;
  bool result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (bool)arg1.RemoveAuxiliaryHint(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetAuxiliaryHintValue(void * jarg1, unsigned int jarg2, char * jarg3) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  unsigned int arg2 ;
  std::string *arg3 = 0 ;
  Dali::Window *argp1 ;
  bool result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (unsigned int)jarg2;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = (bool)arg1.SetAuxiliaryHintValue(arg2,(std::string const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_GetAuxiliaryHintValue(void * jarg1, unsigned int jarg2) {
  char * jresult ;
  Dali::Window arg1 ;
  unsigned int arg2 ;
  Dali::Window *argp1 ;
  std::string result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = arg1.GetAuxiliaryHintValue(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GetAuxiliaryHintId(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  std::string *arg2 = 0 ;
  Dali::Window *argp1 ;
  unsigned int result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (unsigned int)arg1.GetAuxiliaryHintId((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetInputRegion(void * jarg1, void * jarg2) {
  Dali::Window arg1 ;
  Dali::Rect< int > *arg2 = 0 ;
  Dali::Window *argp1 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = (Dali::Rect< int > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Rect< int > const & type is null", 0);
    return ;
  }
  {
    try {
      arg1.SetInputRegion((Dali::Rect< int > const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetType(void * jarg1, int jarg2) {
  Dali::Window arg1 ;
  Dali::WindowType arg2 ;
  Dali::Window *argp1 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = (Dali::WindowType)jarg2;
  {
    try {
      arg1.SetType(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetType(void * jarg1) {
  int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::WindowType result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::WindowType)arg1.GetType();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetNotificationLevel(void * jarg1, int jarg2) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  Dali::WindowNotificationLevel arg2 ;
  Dali::Window *argp1 ;
  int result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::WindowNotificationLevel)jarg2;
  {
    try {
      result = (int)arg1.SetNotificationLevel(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetNotificationLevel(void * jarg1) {
  int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::WindowNotificationLevel result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::WindowNotificationLevel)arg1.GetNotificationLevel();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetOpaqueState(void * jarg1, unsigned int jarg2) {
  Dali::Window arg1 ;
  bool arg2 ;
  Dali::Window *argp1 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = jarg2 ? true : false;
  {
    try {
      arg1.SetOpaqueState(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_IsOpaqueState(void * jarg1) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  bool result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (bool)arg1.IsOpaqueState();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetScreenOffMode(void * jarg1, int jarg2) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  Dali::WindowScreenOffMode arg2 ;
  Dali::Window *argp1 ;
  int result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::WindowScreenOffMode)jarg2;
  {
    try {
      result = (int)arg1.SetScreenOffMode(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetScreenOffMode(void * jarg1) {
  int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::WindowScreenOffMode result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::WindowScreenOffMode)arg1.GetScreenOffMode();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetBrightness(void * jarg1, int jarg2) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  int arg2 ;
  Dali::Window *argp1 ;
  int result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (int)jarg2;
  {
    try {
      result = (int)arg1.SetBrightness(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetBrightness(void * jarg1) {
  int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  int result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (int)arg1.GetBrightness();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Window, bool) > *arg1 = (Dali::Signal< void (Dali::Window, bool) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Window, bool) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty((Dali::Signal< void (Dali::Window, bool) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Window, bool) > *arg1 = (Dali::Signal< void (Dali::Window, bool) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Window, bool) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Window, bool) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, bool) > *arg1 = (Dali::Signal< void (Dali::Window, bool) > *) 0 ;
  void (*arg2)(Dali::Window, bool) = (void (*)(Dali::Window, bool)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, bool) > *)jarg1;
  arg2 = (void (*)(Dali::Window, bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, bool) > *arg1 = (Dali::Signal< void (Dali::Window, bool) > *) 0 ;
  void (*arg2)(Dali::Window, bool) = (void (*)(Dali::Window, bool)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, bool) > *)jarg1;
  arg2 = (void (*)(Dali::Window, bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_Emit(void * jarg1, void* jarg2, unsigned int jarg3) {
  Dali::Signal< void (Dali::Window, bool) > *arg1 = (Dali::Signal< void (Dali::Window, bool) > *)jarg1;
  Dali::Window* arg2 = (Dali::Window*)jarg2;
  bool arg3 = jarg3 ? true : false;;

  if (arg1 == nullptr || arg2 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr or arg2 == nullptr");
    return;
  }

  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(arg1,*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WindowFocusSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::Window, bool) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Window, bool) > *)new Dali::Signal< void (Dali::Window, bool) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WindowFocusSignalType(void * jarg1) {
  Dali::Signal< void (Dali::Window, bool) > *arg1 = (Dali::Signal< void (Dali::Window, bool) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, bool) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}



SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_ResizeSignal(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::Window::ResizeSignalType *result = 0 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::Window::ResizeSignalType *) &arg1.ResizeSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

/*ResizedSignal binding*/
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ResizeSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__Empty((Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ResizeSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ResizeSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::Window::WindowSize) = (void (*)(Dali::Window, Dali::Window::WindowSize)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::Window::WindowSize))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ResizeSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::Window::WindowSize) = (void (*)(Dali::Window, Dali::Window::WindowSize)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::Window::WindowSize))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ResizeSignal_Emit(void * jarg1, void* jarg2, void * jarg3) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  Dali::Window* arg2 = (Dali::Window*)jarg2;
  Dali::Window::WindowSize arg3 ;
  Dali::Window::WindowSize *argp3 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)jarg1;
  if (arg1 == nullptr || arg2 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr or arg2 == nullptr");
    return;
  }

  argp3 = (Dali::Window::WindowSize *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window::WindowSize", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Window_WindowSize_SP__Sg__Emit(arg1,*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ResizeSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)new Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ResizeSignal(void * jarg1) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetSize(void * jarg1, void * jarg2) {
  Dali::Window arg1 ;
  Dali::Window::WindowSize arg2 ;
  Dali::Window *argp1 ;
  Dali::Window::WindowSize *argp2 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  argp2 = (Dali::Window::WindowSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window::WindowSize", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      arg1.SetSize(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetSize(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::Window::WindowSize result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = arg1.GetSize();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window::WindowSize((const Dali::Window::WindowSize &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPosition(void * jarg1, void * jarg2) {
  Dali::Window arg1 ;
  Dali::Window::WindowPosition arg2 ;
  Dali::Window *argp1 ;
  Dali::Window::WindowPosition *argp2 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  argp2 = (Dali::Window::WindowPosition *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window::WindowPosition", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      arg1.SetPosition(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetPosition(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::Window::WindowPosition result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = arg1.GetPosition();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window::WindowPosition((const Dali::Window::WindowPosition &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPositionSize(void* jarg1, void* jarg2)
{
  Dali::Window* window = (Dali::Window*)jarg1;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::Rect<int>* positionSize = (Dali::Rect<int>*)jarg2;
  if (!positionSize) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Rect< int > const & type is null", 0);
    return ;
  }
  {
    try {
      Dali::DevelWindow::SetPositionSize(*window, *positionSize);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetTransparency(void * jarg1, unsigned int jarg2) {
  Dali::Window arg1 ;
  bool arg2 ;
  Dali::Window *argp1 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = jarg2 ? true : false;
  {
    try {
      arg1.SetTransparency(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_FeedKey_Default_Window(void * event) {
  Dali::KeyEvent *keyEvent = 0 ;

  keyEvent = (Dali::KeyEvent *)event;
  if (!keyEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyEvent & type is null", 0);
    return ;
  }
  {
    try {
      Dali::Adaptor::Get().FeedKeyEvent(*keyEvent);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_FeedKey(void * window, void * event) {
  Dali::Window* win = (Dali::Window*)window;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::KeyEvent *keyEvent = 0 ;
  keyEvent = (Dali::KeyEvent *)event;
  if (!keyEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyEvent & type is null", 0);
    return ;
  }
  {
    try {
      Dali::DevelWindow::FeedKeyEvent(*win, *keyEvent);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_FeedTouch(void * window, void * event, int timeStamp) {
  Dali::Window* win = (Dali::Window*)window;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::TouchPoint *touchPoint = 0 ;
  touchPoint = (Dali::TouchPoint *)event;
  if (!touchPoint) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TouchPoint & type is null", 0);
    return ;
  }
  {
    try {
      Dali::DevelWindow::FeedTouchPoint(*win, *touchPoint, timeStamp);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_FeedWheel(void * window, void * event) {
  Dali::Window* win = (Dali::Window*)window;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::WheelEvent *wheelEvent = 0 ;
  wheelEvent = (Dali::WheelEvent *)event;
  if (!wheelEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WheelEvent & type is null", 0);
    return ;
  }
  {
    try {
      Dali::DevelWindow::FeedWheelEvent(*win, *wheelEvent);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_RenderOnce(void * /* jarg1 */) {
  try {
    Dali::Adaptor::Get().RenderOnce();
  } CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Add(void * jarg1, void * jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Window *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->Add(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Remove(void * jarg1, void * jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Actor *arg2 = 0 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::Actor *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Remove(*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetBackgroundColor(void * jarg1, void * jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Vector4 arg2 ;
  Dali::Vector4 *argp2 ;

  arg1 = (Dali::Window *)jarg1;
  argp2 = (Dali::Vector4 *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector4", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetBackgroundColor(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetBackgroundColor(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = ((Dali::Window const *)arg1)->GetBackgroundColor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetRootLayer(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Layer result;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = ((Dali::Window const *)arg1)->GetRootLayer();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Layer((const Dali::Layer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_KeyEventSignal(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::KeyEventSignalType *result = 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = (Dali::Window::KeyEventSignalType *) &(arg1->KeyEventSignal());
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_TouchSignal(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::TouchEventSignalType *result = 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = (Dali::Window::TouchEventSignalType *) &(arg1->TouchedSignal());
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetParent(void* child, void* parent)
{
  Dali::Window* childWindow = (Dali::Window*)child;
  if (!childWindow) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::Window* parentWindow = (Dali::Window*)parent;
  if (!parentWindow) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  {
    try {
      Dali::DevelWindow::SetParent(*childWindow, *parentWindow);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetParent_With_Stack(void* child, void* parent, bool belowParent)
{
  Dali::Window* childWindow = (Dali::Window*)child;
  if (!childWindow) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::Window* parentWindow = (Dali::Window*)parent;
  if (!parentWindow) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  {
    try {
      Dali::DevelWindow::SetParent(*childWindow, *parentWindow, belowParent);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Unparent(void* jarg1)
{
  Dali::Window* window = (Dali::Window*)jarg1;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  {
    try {
      Dali::DevelWindow::Unparent(*window);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetParent(void* jarg1)
{
  void * jresult ;
  Dali::Window* window = (Dali::Window*)jarg1;
  Dali::Window result;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  {
    try {
      result = Dali::DevelWindow::GetParent(*window);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Window((const Dali::Window &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetWindow(void * jarg1) {
  void * jresult ;
  Dali::Window result;

  {
    try {
      result = Dali::DevelWindow::Get(*(Dali::Actor*)jarg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Window((const Dali::Window &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Transition_Effect_EventSignal(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::DevelWindow::TransitionEffectEventSignalType *result = 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = (Dali::DevelWindow::TransitionEffectEventSignalType *) &(Dali::DevelWindow::TransitionEffectEventSignal(*arg1));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Window_Transition_Effect_Event_Signal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Window_Transition_Effect_Event_Signal_Empty((Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Window_Transition_Effect_Event_Signal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *)jarg1;
  {
    try {
      result = Dali_Signal_Window_Transition_Effect_Event_Signal_GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Transition_Effect_Event_Signal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) = (void (*)(Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType))jarg2;
  {
    try {
    //DALI_LOG_ERROR("CSharp_Dali_Window_Transition_Effect_Event_Signal_Connect(arg1=0x%x, arg2=0x%x) \n", arg1, arg2);
      Dali_Signal_Window_Transition_Effect_Event_Signal_Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Transition_Effect_Event_Signal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) = (void (*)(Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType))jarg2;
  {
    try {
      Dali_Signal_Window_Transition_Effect_Event_Signal_Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Transition_Effect_Event_Signal_Emit(void * jarg1, void * jarg2, int jarg3, int jarg4) {
  Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *) 0 ;
  Dali::Window arg2 ;
  Dali::Window *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *)jarg1;
  argp2 = (Dali::Window *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Window_Transition_Effect_Event_Signal_Emit(arg1,arg2, (Dali::WindowEffectState)jarg3, (Dali::WindowEffectType)jarg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Transition_Effect_Event_Signal_new() {
  void * jresult ;
  Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *)new Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Transition_Effect_Event_Signal_delete(void * jarg1) {
  Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::WindowEffectState, Dali::WindowEffectType) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


////////////////////////////////////////////////////////////////////
/// Auxiliary Message event

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Auxiliary_Message_Signal(void * jarg1) {
  void * jresult ;
  Dali::Window *window = (Dali::Window *) 0 ;
  Dali::DevelWindow::AuxiliaryMessageSignalType *result = 0 ;

  window = (Dali::Window *)jarg1;
  {
    try {
      result = (Dali::DevelWindow::AuxiliaryMessageSignalType *) &(Dali::DevelWindow::AuxiliaryMessageSignal(*window));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_Auxiliary_Message_Signal_Empty(void * jarg1) {
  bool result;
  Dali::DevelWindow::AuxiliaryMessageSignalType* arg1 = (Dali::DevelWindow::AuxiliaryMessageSignalType*) jarg1;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return false;
  }

  {
    try {
      result = arg1->Empty();
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Window_Auxiliary_Message_Signal_GetConnectionCount(void * jarg1) {
  unsigned int result;
  Dali::DevelWindow::AuxiliaryMessageSignalType* arg1 = (Dali::DevelWindow::AuxiliaryMessageSignalType *) jarg1;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return 0;
  }

  {
    try {
      result = arg1->GetConnectionCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Auxiliary_Message_Signal_Connect(void * jarg1, void * jarg2) {
  Dali::DevelWindow::AuxiliaryMessageSignalType* arg1 = (Dali::DevelWindow::AuxiliaryMessageSignalType *)jarg1;
  void (*arg2)(const std::string&, const std::string&, const Dali::Property::Array&) = ( void (*)(const std::string&, const std::string&, const Dali::Property::Array&) )jarg2;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return ;
  }

  {
    try {
      arg1->Connect(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
  return ;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Auxiliary_Message_Signal_Disconnect(void * jarg1, void * jarg2) {
  Dali::DevelWindow::AuxiliaryMessageSignalType* arg1 = (Dali::DevelWindow::AuxiliaryMessageSignalType *)jarg1;
  void (*arg2)(const std::string&, const std::string&, const Dali::Property::Array&) = ( void (*)(const std::string&, const std::string&, const Dali::Property::Array&) )jarg2;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return;
  }

  {
    try {
      arg1->Disconnect(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
  return;
}

/////////////////
// Keyboard Repeat Settings Changed
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Keyboard_Repeat_Settings_ChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *result = 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *) &(Dali::DevelWindow::KeyboardRepeatSettingsChangedSignal(*arg1));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Window_Keyboard_Repeat_Settings_Changed_Signal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *arg1 = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType*)jarg1;
  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return false;
  }

  bool result;
  {
    try {
      result = (bool)((Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType const *)arg1)->Empty();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Window_Keyboard_Repeat_Settings_Changed_Signal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *arg1 = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *)jarg1;
  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return false;
  }

  std::size_t result;
  {
    try {
      result = ((Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType const *)arg1)->GetConnectionCount();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Keyboard_Repeat_Settings_Changed_Signal_Connect(void * jarg1, void * jarg2) {
  Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *arg1 = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *)jarg1;
  void (*arg2)() = (void (*)())jarg2;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return;
  }

  {
    try {
      (arg1)->Connect(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Keyboard_Repeat_Settings_Changed_Signal_Disconnect(void * jarg1, void * jarg2) {
  Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *arg1 = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *)jarg1;
  void (*arg2)() = (void (*)())jarg2;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return;
  }

  {
    try {
      (arg1)->Disconnect(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Keyboard_Repeat_Settings_Changed_Signal_Emit(void * jarg1) {
  Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *arg1 = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *)jarg1;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return;
  }

  {
    try {
      (arg1)->Emit();
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Keyboard_Repeat_Settings_Changed_Signal_new() {
  void * jresult ;
  Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *result = 0;

  {
    try {
      result = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *)new Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Keyboard_Repeat_Settings_Changed_Signal_delete(void * jarg1) {
  Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *arg1 = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType*) 0;

  arg1 = (Dali::DevelWindow::KeyboardRepeatSettingsChangedSignalType *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Window_Visibility_Changed_Signal(void* jarg1) {
  Dali::Window* arg1 = (Dali::Window*) jarg1;
  Dali::DevelWindow::VisibilityChangedSignalType* result = 0;

  {
    try {
      result = (Dali::DevelWindow::VisibilityChangedSignalType*) &( Dali::DevelWindow::VisibilityChangedSignal(*arg1) );
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_Visibility_Changed_Signal_Empty(void* jarg1) {
  bool result;
  Dali::DevelWindow::VisibilityChangedSignalType* arg1 = (Dali::DevelWindow::VisibilityChangedSignalType*) jarg1;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return false;
  }

  {
    try {
      result = arg1->Empty();
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Window_Visibility_Changed_Signal_GetConnectionCount(void* jarg1) {
  unsigned int result;
  Dali::DevelWindow::VisibilityChangedSignalType* arg1 = (Dali::DevelWindow::VisibilityChangedSignalType *) jarg1;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return 0;
  }

  {
    try {
      result = arg1->GetConnectionCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Visibility_Changed_Signal_Connect(void* jarg1, void* jarg2) {
  Dali::DevelWindow::VisibilityChangedSignalType* arg1 = (Dali::DevelWindow::VisibilityChangedSignalType *)jarg1;
  void (*arg2)(Dali::Window, bool) = ( void (*)(Dali::Window, bool) )jarg2;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return ;
  }

  {
    try {
      arg1->Connect(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
  return ;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Visibility_Changed_Signal_Disconnect(void* jarg1, void* jarg2) {
  Dali::DevelWindow::VisibilityChangedSignalType* arg1 = (Dali::DevelWindow::VisibilityChangedSignalType*)jarg1;
  void (*arg2)(Dali::Window, bool) = (void (*)(Dali::Window, bool))jarg2;

  if (arg1 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr");
    return;
  }

  {
    try {
      arg1->Disconnect(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Visibility_Changed_Signal_Emit(void* jarg1, void* jarg2, bool jarg3) {
  Dali::DevelWindow::VisibilityChangedSignalType* arg1 = (Dali::DevelWindow::VisibilityChangedSignalType*)jarg1;
  Dali::Window* arg2 = (Dali::Window*)jarg2;
  bool arg3 = jarg3;

  if (arg1 == nullptr || arg2 == nullptr) {
    DALI_LOG_ERROR("[ERR] arg1 == nullptr or arg2 == nullptr");
    return;
  }

  {
    try {
      arg1->Emit(*arg2, arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Visibility_Changed_Signal_delete(void* jarg1) {
  Dali::DevelWindow::VisibilityChangedSignalType* arg1 = (Dali::DevelWindow::VisibilityChangedSignalType*)jarg1;

  {
    try {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT int32_t SWIGSTDCALL CSharp_Dali_Window_GetNativeId( void* jarg1 )
{
  Dali::Window* window = (Dali::Window*)jarg1;
  int32_t ret = -1;
  if( !window )
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ret;
  }

  {
    try {
      ret = Dali::DevelWindow::GetNativeId( *window );
    }
    CALL_CATCH_EXCEPTION(ret);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_AddFrameRenderedCallback( void* nuiWindow, void* nuiCallback, int nuiFrameId )
{
  Dali::Window* window = (Dali::Window*)nuiWindow;
  void (*callback)(int32_t) = (void (*)(int32_t))nuiCallback;

  if( !window || !callback )
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null", 0);
    return;
  }

  try
  {
    Dali::DevelWindow::AddFrameRenderedCallback( *window, std::unique_ptr< Dali::CallbackBase >( Dali::MakeCallback( callback ) ), nuiFrameId );
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_AddFramePresentedCallback( void* nuiWindow, void* nuiCallback, int nuiFrameId )
{
  Dali::Window* window = (Dali::Window*)nuiWindow;
  void (*callback)(int32_t) = (void (*)(int32_t))nuiCallback;

  if( !window || !callback )
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null", 0);
    return;
  }

  try
  {
    Dali::DevelWindow::AddFramePresentedCallback( *window, std::unique_ptr< Dali::CallbackBase >( Dali::MakeCallback( callback ) ), nuiFrameId );
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPositionSizeWithOrientation(void* jarg1, void* jarg2, int jarg3)
{
  Dali::Window* window = (Dali::Window*)jarg1;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::Rect<int>* positionSize = (Dali::Rect<int>*)jarg2;
  if (!positionSize) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Rect< int > const & type is null", 0);
    return ;
  }

  Dali::WindowOrientation orientation = (Dali::WindowOrientation)jarg3;
  {
    try {
      Dali::DevelWindow::SetPositionSizeWithOrientation(*window, *positionSize, orientation);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_RequestMoveToServer(void* jarg1)
{
  Dali::Window* window = (Dali::Window*)jarg1;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  {
    try {
      Dali::DevelWindow::RequestMoveToServer(*window);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_RequestResizeToServer(void* jarg1, int jarg2)
{
  Dali::Window* window = (Dali::Window*)jarg1;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::WindowResizeDirection direction = (Dali::WindowResizeDirection)jarg2;

  {
    try {
      Dali::DevelWindow::RequestResizeToServer(*window, direction);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_EnableFloatingMode(void* jarg1, bool jarg2)
{
  Dali::Window* window = (Dali::Window*)jarg1;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return;
  }

  bool enable = jarg2;
  {
    try {
      Dali::DevelWindow::EnableFloatingMode(*window, enable);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_IncludeInputRegion(void* winHandle, void* region)
{
  Dali::Window* window = (Dali::Window*)winHandle;
  Dali::Rect<int> *addedRegion = (Dali::Rect<int> *)region;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return;
  }
  {
    try {
      Dali::DevelWindow::IncludeInputRegion(*window, *addedRegion);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_ExcludeInputRegion(void* winHandle, void* region)
{
  Dali::Window* window = (Dali::Window*)winHandle;
  Dali::Rect<int> *subtractedRegion = (Dali::Rect<int> *)region;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return;
  }
  {
    try {
      Dali::DevelWindow::ExcludeInputRegion(*window, *subtractedRegion);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_IsWindowRotating(void* winHandle)
{
  Dali::Window* window = (Dali::Window*)winHandle;
  bool result = false;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return result;
  }
  {
    try {
      result = Dali::DevelWindow::IsWindowRotating(*window);
    } CALL_CATCH_EXCEPTION(false);
  }

  return result;
}

#ifdef __cplusplus
}
#endif

