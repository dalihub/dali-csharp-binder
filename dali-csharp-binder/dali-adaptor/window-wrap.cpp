/*
 * Copyright (c) 2024 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/adaptor-framework/mouse-in-out-event.h>
#include <dali/devel-api/adaptor-framework/mouse-relative-event.h>
#include <dali/devel-api/adaptor-framework/pointer-constraints-event.h>
#include <dali/devel-api/adaptor-framework/window-devel.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

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

/* Moved signal */
SWIGINTERN bool Dali_Signal_Window_Moved_Signal_Empty(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Window_Moved_Signal_GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Window_Moved_Signal_Connect(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *self, void (*func)(Dali::Window, Dali::Window::WindowPosition)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Window_Moved_Signal_Disconnect(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *self,void (*func)(Dali::Window, Dali::Window::WindowPosition)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Window_Moved_Signal_Emit(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *self,Dali::Window window, Dali::Window::WindowPosition position){
  self->Emit( window, position );
}

//Orientation Changed
SWIGINTERN bool Dali_Signal_Window_Orientation_Changed_Signal_Empty(Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Window_Orientation_Changed_Signal_GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Window_Orientation_Changed_Signal_Connect(Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *self, void (*func)(Dali::Window, Dali::WindowOrientation)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Window_Orientation_Changed_Signal_Disconnect(Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *self, void (*func)(Dali::Window, Dali::WindowOrientation)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Window_Orientation_Changed_Signal_Emit(Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *self, Dali::Window arg, Dali::WindowOrientation orientation){
  self->Emit( arg, orientation );
}

//input
SWIGINTERN bool Dali_Signal_Window_MouseInOutEvent_Signal_Empty(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Window_MouseInOutEvent_Signal_GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Window_MouseInOutEvent_Signal_Connect(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *self, void (*func)(Dali::Window, Dali::DevelWindow::MouseInOutEvent const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Window_MouseInOutEvent_Signal_Disconnect(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *self, void (*func)(Dali::Window, Dali::DevelWindow::MouseInOutEvent const &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Window_MouseInOutEvent_Signal_Emit(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *self, Dali::Window arg, Dali::DevelWindow::MouseInOutEvent const &mouseInOutEvent){
  self->Emit( arg, mouseInOutEvent );
}

//pointer grab
SWIGINTERN bool Dali_Signal_Window_MouseRelativeEvent_Signal_Empty(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Window_MouseRelativeEvent_Signal_GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Window_MouseRelativeEvent_Signal_Connect(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *self, void (*func)(Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Window_MouseRelativeEvent_Signal_Disconnect(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *self, void (*func)(Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Window_MouseRelativeEvent_Signal_Emit(Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *self, Dali::Window arg, Dali::DevelWindow::MouseRelativeEvent const &mouseRelativeEvent){
  self->Emit( arg, mouseRelativeEvent );
}

/* Move Completed signal */
SWIGINTERN bool Dali_Signal_Window_Move_Completed_Signal_Empty(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Window_Move_Completed_Signal_GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Window_Move_Completed_Signal_Connect(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *self, void (*func)(Dali::Window, Dali::Window::WindowPosition)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Window_Move_Completed_Signal_Disconnect(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *self,void (*func)(Dali::Window, Dali::Window::WindowPosition)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Window_Move_Completed_Signal_Emit(Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *self,Dali::Window window, Dali::Window::WindowPosition position){
  self->Emit( window, position );
}

/* Resize Completed signal */
SWIGINTERN bool Dali_Signal_Window_Resize_Completed_Signal_Empty(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Window_Resize_Completed_Signal_GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Window_Resize_Completed_Signal_Connect(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *self, void (*func)(Dali::Window, Dali::Window::WindowSize)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Window_Resize_Completed_Signal_Disconnect(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *self,void (*func)(Dali::Window, Dali::Window::WindowSize)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Window_Resize_Completed_Signal_Emit(Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *self,Dali::Window window, Dali::Window::WindowSize size){
  self->Emit( window, size );
}

//pointer constraints
SWIGINTERN bool Dali_Signal_Window_PointerConstraintsEvent_Signal_Empty(Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Window_PointerConstraintsEvent_Signal_GetConnectionCount(Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Window_PointerConstraintsEvent_Signal_Connect(Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *self, void (*func)(Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Window_PointerConstraintsEvent_Signal_Disconnect(Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *self, void (*func)(Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Window_PointerConstraintsEvent_Signal_Emit(Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *self, Dali::Window arg, Dali::DevelWindow::PointerConstraintsEvent const &pointerConstraintsEvent){
  self->Emit( arg, pointerConstraintsEvent );
}

int CheckingWindowHandle(Dali::Window *window)
{
    if (!window) {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Window const & type is null", 0);
      return 0;
    }
    return 1;
}

#ifdef __cplusplus
extern "C" {
#endif

/*Window binding*/

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








SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Window_New__WithWindowData(char* nuiName, char* nuiClassName, void* nuiWindowData)
{
  void*             jresult;
  std::string*      name      = 0;
  std::string*      className = 0;
  Dali::WindowData* pWindowData;
  Dali::Window      result;

  if(!nuiName)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "String NUI Name is NULL", 0);
    return 0;
  }
  std::string name_str(nuiName);
  name = &name_str;

  if(!nuiClassName)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "String NUI Class Name is NULL", 0);
    return 0;
  }
  std::string className_str(nuiClassName);
  className = &className_str;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return 0;
  }

  {
    try
    {
      result = Dali::Window::New((std::string const&)*name, (std::string const&)*className, *pWindowData);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window((const Dali::Window&)result);

  return jresult;
}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Window(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle ;

  if(!CheckingWindowHandle(window)) {
   return;
  }

  {
    try {
      delete window;
    } CALL_CATCH_EXCEPTION();
  }

}

// need not sample

// need not sample


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetClass(void * winHandle, char * pName, char * pClassName) {
  Dali::Window *window = (Dali::Window *)winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  std::string name;
  std::string className;

  if (!pName) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "name is null string", 0);
    return ;
  }
  (&name)->assign(pName);

  if (!pClassName) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "className is null string", 0);
    return ;
  }

  (&className)->assign(pClassName);
  {
    try {
      (window)->SetClass(name,className);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Raise(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      (window)->Raise();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Lower(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      (window)->Lower();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Activate(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      (window)->Activate();
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Maximize(void * winHandle, bool maximize) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::Maximize(*window, maximize);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_IsMaximized(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return false;
  }

  bool isMaximized = false;
  {
    try {
      isMaximized = Dali::DevelWindow::IsMaximized(*window);
    } CALL_CATCH_EXCEPTION(false);
  }
  return isMaximized;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Set_Maximum_Size(void * winHandle, void * size) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  Dali::Window::WindowSize *winSize;
  Dali::Window::WindowSize maximumSize;

  winSize = (Dali::Window::WindowSize *)size;
  if (!winSize) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window::WindowSize", 0);
    return ;
  }
  maximumSize = *winSize;

  {
    try {
      Dali::DevelWindow::SetMaximumSize(*window, maximumSize);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Minimize(void * winHandle, bool minimize) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::Minimize(*window, minimize);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_IsMinimized(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return false;
  }

  bool isMinimized = false;

  {
    try {
      isMinimized = Dali::DevelWindow::IsMinimized(*window);
    } CALL_CATCH_EXCEPTION(false);
  }
  return isMinimized;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Set_Minimum_Size(void * winHandle, void * size) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  Dali::Window::WindowSize *winSize;
  Dali::Window::WindowSize minimumSize;

  winSize = (Dali::Window::WindowSize *)size;
  if (!winSize) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window::WindowSize", 0);
    return ;
  }
  minimumSize = *winSize;

  {
    try {
      Dali::DevelWindow::SetMimimumSize(*window, minimumSize);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_AddAvailableOrientation(void * winHandle, int orientation) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  Dali::WindowOrientation windowOrientation = (Dali::WindowOrientation)orientation;

  {
    try {
      (window)->AddAvailableOrientation(windowOrientation);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_RemoveAvailableOrientation(void * winHandle, int orientation) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  Dali::WindowOrientation windowOrientation = (Dali::WindowOrientation)orientation;

  {
    try {
      (window)->RemoveAvailableOrientation(windowOrientation);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPreferredOrientation(void * winHandle, int orientation) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  Dali::WindowOrientation windowOrientation = (Dali::WindowOrientation)orientation;

  {
    try {
      window->SetPreferredOrientation(windowOrientation);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Window_GetPreferredOrientation(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  Dali::WindowOrientation windowOrientation;

  int jresult ;

  {
    try {
      windowOrientation = (Dali::WindowOrientation)(window)->GetPreferredOrientation();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)windowOrientation;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Window_GetCurrentOrientation(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  Dali::WindowOrientation windowOrientation;

  int jresult ;
  {
    try {
      windowOrientation = Dali::DevelWindow::GetCurrentOrientation(*window);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)windowOrientation;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetAvailableOrientations(void * winHandle, void* pArray, int arrayCount) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return;
  }

  Dali::Property::Array *array = (static_cast<Dali::Property::Array *>(pArray));
  unsigned int count = static_cast<unsigned int>(arrayCount);

  Dali::Vector< Dali::WindowOrientation> orientations;
  orientations.Resize( count );
  for(Dali::Property::Array::SizeType i = 0; i < count; ++i)
  {
    int angle = array->GetElementAt(i).Get<int>();
    orientations[i] = static_cast< Dali::WindowOrientation >(angle);
  }
  {
    try {
      Dali::DevelWindow::SetAvailableOrientations(*window, orientations);
    } CALL_CATCH_EXCEPTION();
  }

}

// Need not
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetNativeHandle(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  Dali::Any nativeHandle;
  void * jresult ;

  {
    try {
      nativeHandle = ((Dali::Window const *)window)->GetNativeHandle();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Any((const Dali::Any &)nativeHandle);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetAcceptFocus(void * winHandle, unsigned int flag) {
  Dali::Window *window = (Dali::Window *) winHandle;
  if(!CheckingWindowHandle(window)) {
   return;
  }

  bool focus ;

  focus = flag ? true : false;
  {
    try {
      window->SetAcceptFocus(focus);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_IsFocusAcceptable(void * winHandle) {
  unsigned int jresult ;
  bool result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return false;
  }

  {
    try {
      result = (bool)window->IsFocusAcceptable();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Show(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      window->Show();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Hide(void * winHandle) {
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      window->Hide();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_IsVisible(void * winHandle) {
  unsigned int jresult ;
  bool result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  {
    try {
      result = (bool)window->IsVisible();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetInputRegion(void * winHandle, void * jarg2) {
  Dali::Rect< int > *arg2 = 0 ;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  arg2 = (Dali::Rect< int > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Rect< int > const & type is null", 0);
    return ;
  }
  {
    try {
      window->SetInputRegion((Dali::Rect< int > const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetType(void * winHandle, int jarg2) {
  Dali::WindowType arg2 ;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  arg2 = (Dali::WindowType)jarg2;
  {
    try {
      window->SetType(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetType(void * winHandle) {
  int jresult ;
  Dali::WindowType result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return -1;
  }

  {
    try {
      result = (Dali::WindowType)window->GetType();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetNotificationLevel(void * winHandle, int jarg2) {
  unsigned int jresult ;
  Dali::WindowNotificationLevel arg2 ;
  int result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  arg2 = (Dali::WindowNotificationLevel)jarg2;
  {
    try {
      result = (int)window->SetNotificationLevel(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetNotificationLevel(void * winHandle) {
  int jresult ;
  Dali::WindowNotificationLevel result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  {
    try {
      result = (Dali::WindowNotificationLevel)window->GetNotificationLevel();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetOpaqueState(void * winHandle, unsigned int jarg2) {
  bool arg2 ;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  arg2 = jarg2 ? true : false;
  {
    try {
      window->SetOpaqueState(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_IsOpaqueState(void * winHandle) {
  unsigned int jresult ;
  bool result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  {
    try {
      result = (bool)window->IsOpaqueState();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetScreenOffMode(void * winHandle, int jarg2) {
  unsigned int jresult ;
  Dali::WindowScreenOffMode arg2 ;
  int result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  arg2 = (Dali::WindowScreenOffMode)jarg2;
  {
    try {
      result = (int)window->SetScreenOffMode(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetScreenOffMode(void * winHandle) {
  int jresult ;
  Dali::WindowScreenOffMode result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  {
    try {
      result = (Dali::WindowScreenOffMode)window->GetScreenOffMode();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetBrightness(void * winHandle, int jarg2) {
  unsigned int jresult ;
  int arg2 ;
  int result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  arg2 = (int)jarg2;
  {
    try {
      result = (int)window->SetBrightness(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetBrightness(void * winHandle) {
  int jresult ;
  int result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0 ;
  }

  {
    try {
      result = (int)window->GetBrightness();
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetSize(void * winHandle, void * jarg2) {
  Dali::Window::WindowSize arg2;
  Dali::Window::WindowSize *argp2;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  argp2 = (Dali::Window::WindowSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window::WindowSize", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      window->SetSize(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetSize(void * winHandle) {
  void * jresult ;
  Dali::Window::WindowSize result;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0 ;
  }

  {
    try {
      result = window->GetSize();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window::WindowSize((const Dali::Window::WindowSize &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPosition(void * winHandle, void * position) {
  Dali::Window::WindowPosition *pPosition;
  Dali::Window::WindowPosition windowPosition;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  pPosition = (Dali::Window::WindowPosition *)position;
  if (!pPosition) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowPosition", 0);
    return ;
  }
  windowPosition = *pPosition;

  {
    try {
      window->SetPosition(windowPosition);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetPosition(void * winHandle) {
  Dali::Window::WindowPosition windowPosition;
  Dali::Window::WindowPosition result;
  void * jresult ;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  {
    try {
      windowPosition = window->GetPosition();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window::WindowPosition((const Dali::Window::WindowPosition &)windowPosition);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPositionSize(void* winHandle, void* jarg2)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
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

// NUI LayoutSamples
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetLayout(void* winHandle, unsigned int numCols, unsigned int numRows, unsigned int column, unsigned int row, unsigned int colSpan, unsigned int rowSpan)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      window->SetLayout(numCols, numRows, column, row, colSpan, rowSpan);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetTransparency(void * winHandle, unsigned int jarg2) {
  bool arg2 ;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  arg2 = jarg2 ? true : false;
  {
    try {
      window->SetTransparency(arg2);
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
      if(Dali::Adaptor::IsAvailable())
      {
        Dali::Adaptor::Get().FeedKeyEvent(*keyEvent);
      }
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_FeedHover(void * window, void * touchPoint) {
  Dali::Window* win = (Dali::Window*)window;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  Dali::TouchPoint *aTouchPoint = 0 ;
  aTouchPoint = (Dali::TouchPoint *)touchPoint;
  if (!aTouchPoint) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TouchPoint & type is null", 0);
    return ;
  }
  {
    try {
      Dali::DevelWindow::FeedHoverEvent(*win, *aTouchPoint);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_RenderOnce(void * /* jarg1 */) {
  try {
    if(Dali::Adaptor::IsAvailable())
    {
      Dali::Adaptor::Get().RenderOnce();
    }
  } CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Add(void * winHandle, void * jarg2) {
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;
  Dali::Window* window = (Dali::Window*)winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      window->Add(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Remove(void * winHandle, void * jarg2) {
  Dali::Actor *arg2 = (Dali::Actor *)jarg2;
  Dali::Window* window = (Dali::Window*)winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor & type is null", 0);
    return ;
  }
  {
    try {
      window->Remove(*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetBackgroundColor(void * winHandle, void * jarg2) {
  Dali::Vector4 arg2 ;
  Dali::Vector4 *argp2 = (Dali::Vector4 *)jarg2;
  Dali::Window* window = (Dali::Window*)winHandle;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector4", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      window->SetBackgroundColor(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetBackgroundColor(void * winHandle) {
  void * jresult ;
  Dali::Vector4 result;
  Dali::Window* window = (Dali::Window*)winHandle;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  {
    try {
      result = window->GetBackgroundColor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetRootLayer(void * winHandle) {
  void * jresult ;
  Dali::Layer result;
  Dali::Window* window = (Dali::Window*)winHandle;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  {
    try {
      result = window->GetRootLayer();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Layer((const Dali::Layer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetOverlayLayer(void * winHandle) {
  void * jresult ;
  Dali::Layer result;
  Dali::Window* window = (Dali::Window*)winHandle;
  if(!CheckingWindowHandle(window)) {
   return 0;
  }

  {
    try {
      result = window->GetOverlayLayer();
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

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_InterceptKeyEventSignal(void * winHandle) {
  void * jresult ;
  Dali::Window *window = (Dali::Window *) 0 ;
  Dali::DevelWindow::InterceptKeyEventSignalType *result = 0 ;

  window = (Dali::Window *)winHandle;
  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  {
    try {
      result = (Dali::DevelWindow::InterceptKeyEventSignalType *) &(Dali::DevelWindow::InterceptKeyEventSignal(*window));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetParent(void* childWinHandle, void* parentWinHandle)
{
  Dali::Window* childWindow = (Dali::Window*)childWinHandle;
  if(!CheckingWindowHandle(childWindow)) {
   return ;
  }

  Dali::Window* parentWindow = (Dali::Window*)parentWinHandle;
  if(!CheckingWindowHandle(parentWindow)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::SetParent(*childWindow, *parentWindow);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetParent_With_Stack(void* childWinHandle, void* parentWinHandle, bool belowParent)
{
  Dali::Window* childWindow = (Dali::Window*)childWinHandle;
  if(!CheckingWindowHandle(childWindow)) {
   return ;
  }

  Dali::Window* parentWindow = (Dali::Window*)parentWinHandle;
  if(!CheckingWindowHandle(parentWindow)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::SetParent(*childWindow, *parentWindow, belowParent);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Unparent(void* winHandle)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::Unparent(*window);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetParent(void* winHandle)
{
  void * jresult ;
  Dali::Window parentWindow;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return 0 ;
  }

  {
    try {
      parentWindow = Dali::DevelWindow::GetParent(*window);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Window((const Dali::Window &)parentWindow);
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

SWIGEXPORT int32_t SWIGSTDCALL CSharp_Dali_Window_GetNativeId( void* winHandle )
{
  int32_t ret = -1;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return -1 ;
  }

  {
    try {
      ret = Dali::DevelWindow::GetNativeId( *window );
    }
    CALL_CATCH_EXCEPTION(ret);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_AddFrameRenderedCallback( void* winHandle, void* nuiCallback, int nuiFrameId )
{
  void (*callback)(int32_t) = (void (*)(int32_t))nuiCallback;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  if( !callback )
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_AddFramePresentedCallback( void* winHandle, void* nuiCallback, int nuiFrameId )
{
  void (*callback)(int32_t) = (void (*)(int32_t))nuiCallback;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  if( !callback )
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

// need not

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_RequestMoveToServer(void* winHandle)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::RequestMoveToServer(*window);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_RequestResizeToServer(void* winHandle, int jarg2)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  Dali::WindowResizeDirection direction = (Dali::WindowResizeDirection)jarg2;

  {
    try {
      Dali::DevelWindow::RequestResizeToServer(*window, direction);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_EnableFloatingMode(void* winHandle, bool jarg2)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  bool enable = jarg2;
  {
    try {
      Dali::DevelWindow::EnableFloatingMode(*window, enable);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_IsFloatingModeEnabled(void* winHandle)
{
  bool result = false;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return false ;
  }

  {
    try {
      result = Dali::DevelWindow::IsFloatingModeEnabled(*window);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_IncludeInputRegion(void* winHandle, void* region)
{
  Dali::Rect<int> *addedRegion = (Dali::Rect<int> *)region;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::IncludeInputRegion(*window, *addedRegion);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_ExcludeInputRegion(void* winHandle, void* region)
{
  Dali::Rect<int> *subtractedRegion = (Dali::Rect<int> *)region;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::ExcludeInputRegion(*window, *subtractedRegion);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_KeepRendering(void* winHandle, float durationSeconds)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try
    {
      window->KeepRendering(durationSeconds);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPartialUpdateEnabled(void* winHandle, bool enabled)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try
    {
      window->SetPartialUpdateEnabled(enabled);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_IsPartialUpdateEnabled(void* winHandle)
{
  bool enabled = false;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return false ;
  }

  {
    try
    {
      enabled = window->IsPartialUpdateEnabled();
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return enabled;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Window_Accessibility_Highlight_Signal(void* winHandle) {
  Dali::Window* window = (Dali::Window*) winHandle;
  Dali::DevelWindow::AccessibilityHighlightSignalType* result = 0;

  {
    try {
      result = (Dali::DevelWindow::AccessibilityHighlightSignalType*) &( Dali::DevelWindow::AccessibilityHighlightSignal(*window) );
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_Accessibility_Highlight_Signal_Empty(void* accessibilityHighlightSignalTypeHandle) {
  bool result;
  Dali::DevelWindow::AccessibilityHighlightSignalType* accessibilityHighlightSignalType = (Dali::DevelWindow::AccessibilityHighlightSignalType*) accessibilityHighlightSignalTypeHandle;

  if (accessibilityHighlightSignalType == nullptr) {
    DALI_LOG_ERROR("[ERR] accessibilityHighlightSignalType == nullptr");
    return false;
  }

  {
    try {
      result = accessibilityHighlightSignalType->Empty();
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Window_Accessibility_Highlight_Signal_GetConnectionCount(void* accessibilityHighlightSignalTypeHandle) {
  unsigned int result;
  Dali::DevelWindow::AccessibilityHighlightSignalType* accessibilityHighlightSignalType = (Dali::DevelWindow::AccessibilityHighlightSignalType *) accessibilityHighlightSignalTypeHandle;

  if (accessibilityHighlightSignalType == nullptr) {
    DALI_LOG_ERROR("[ERR] accessibilityHighlightSignalType == nullptr");
    return 0;
  }

  {
    try {
      result = accessibilityHighlightSignalType->GetConnectionCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Accessibility_Highlight_Signal_Connect(void* accessibilityHighlightSignalTypeHandle, void* winHandle) {
  Dali::DevelWindow::AccessibilityHighlightSignalType* accessibilityHighlightSignalType = (Dali::DevelWindow::AccessibilityHighlightSignalType *)accessibilityHighlightSignalTypeHandle;
  void (*window)(Dali::Window, bool) = ( void (*)(Dali::Window, bool) )winHandle;

  if (accessibilityHighlightSignalType == nullptr) {
    DALI_LOG_ERROR("[ERR] accessibilityHighlightSignalType == nullptr");
    return ;
  }

  {
    try {
      accessibilityHighlightSignalType->Connect(window);
    }
    CALL_CATCH_EXCEPTION();
  }
  return ;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Accessibility_Highlight_Signal_Disconnect(void* accessibilityHighlightSignalTypeHandle, void* winHandle) {
  Dali::DevelWindow::AccessibilityHighlightSignalType* accessibilityHighlightSignalType = (Dali::DevelWindow::AccessibilityHighlightSignalType*)accessibilityHighlightSignalTypeHandle;
  void (*window)(Dali::Window, bool) = (void (*)(Dali::Window, bool))winHandle;

  if (accessibilityHighlightSignalType == nullptr) {
    DALI_LOG_ERROR("[ERR] accessibilityHighlightSignalType == nullptr");
    return;
  }

  {
    try {
      accessibilityHighlightSignalType->Disconnect(window);
    }
    CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Accessibility_Highlight_Signal_delete(void* accessibilityHighlightSignalTypeHandle) {
  Dali::DevelWindow::AccessibilityHighlightSignalType* accessibilityHighlightSignalType = (Dali::DevelWindow::AccessibilityHighlightSignalType*)accessibilityHighlightSignalTypeHandle;

  {
    try {
      delete accessibilityHighlightSignalType;
    }
    CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_IsWindowRotating(void* winHandle)
{
  bool result = false;
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return false ;
  }

  {
    try {
      result = Dali::DevelWindow::IsWindowRotating(*window);
    } CALL_CATCH_EXCEPTION(false);
  }

  return result;
}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_InternalRetrievingLastKeyEvent(void* winHandle, void* keyHandle)
{
  Dali::Window* window = (Dali::Window*)winHandle;
  Dali::KeyEvent* keyEvent = (Dali::KeyEvent*)keyHandle;

  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return;
  }
  if (!keyEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::KeyEvent", 0);
    return;
  }
  {
    try {
      // TODO : To make ensure that inputed handle have body, let we retrieving last event only if it exist.
      auto& lastKeyEvent = Dali::DevelWindow::GetLastKeyEvent(*window);
      if(lastKeyEvent)
      {
        (*keyEvent) = *((Dali::KeyEvent *)&lastKeyEvent);
      }
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_InternalRetrievingLastTouchEvent(void* winHandle, void* touchHandle)
{
  Dali::Window* window = (Dali::Window*)winHandle;
  Dali::TouchEvent* touchEvent = (Dali::TouchEvent*)touchHandle;

  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return;
  }
  if (!touchEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TouchEvent", 0);
    return;
  }
  {
    try {
      // TODO : To make ensure that key handle have body, let we retrieving last event only if it exist.
      auto& lastTouchEvent = Dali::DevelWindow::GetLastTouchEvent(*window);
      if(lastTouchEvent)
      {
        (*touchEvent) = *((Dali::TouchEvent *)&lastTouchEvent);
      }
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_InternalRetrievingLastHoverEvent(void* winHandle, void* hoverHandle)
{
  Dali::Window* window = (Dali::Window*)winHandle;
  Dali::HoverEvent* hoverEvent = (Dali::HoverEvent*)hoverHandle;

  if (!window) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return;
  }
  if (!hoverEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::HoverEvent", 0);
    return;
  }
  {
    try {
      // TODO : To make ensure that key handle have body, let we retrieving last event only if it exist.
      auto& lastHoverEvent = Dali::DevelWindow::GetLastHoverEvent(*window);
      if(lastHoverEvent)
      {
        (*hoverEvent) = *((Dali::HoverEvent *)&lastHoverEvent);
      }
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetNeedsRotationCompletedAcknowledgement(void* winHandle, bool needAcknowledgement)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::SetNeedsRotationCompletedAcknowledgement(*window, needAcknowledgement);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SendRotationCompletedAcknowledgement(void* winHandle)
{
  Dali::Window *window = (Dali::Window *) winHandle ;
  if(!CheckingWindowHandle(window)) {
   return ;
  }

  {
    try {
      Dali::DevelWindow::SendRotationCompletedAcknowledgement(*window);
    } CALL_CATCH_EXCEPTION();
  }
}

/* Moved signal binding */
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Moved_Signal(void* winHandle)
{
  void *result;
  Dali::Window window;
  Dali::Window *win;
  Dali::DevelWindow::MovedSignalType* movedSignal;

  win = (Dali::Window *)winHandle;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  window = *win;
  {
    try {
      movedSignal = (Dali::DevelWindow::MovedSignalType *) &Dali::DevelWindow::MovedSignal(window);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (void *)movedSignal;
  return result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Moved_Signal_Empty(void * signal)
{
  unsigned int result;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  bool flag;

  movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  {
    try {
      flag = (bool)Dali_Signal_Window_Moved_Signal_Empty((Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > const *)movedSignal);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (unsigned int)flag;
  return result;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Moved_Signal_GetConnectionCount(void * signal) {
  unsigned long result;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  std::size_t count;

  movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  {
    try {
      count = Dali_Signal_Window_Moved_Signal_GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > const *)movedSignal);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (unsigned long)count;
  return result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Moved_Signal_Connect(void * signal, void * func) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  void (*functionPtr)(Dali::Window, Dali::Window::WindowPosition) = (void (*)(Dali::Window, Dali::Window::WindowPosition)) 0 ;

  movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  functionPtr = (void (*)(Dali::Window, Dali::Window::WindowPosition))func;
  {
    try {
      Dali_Signal_Window_Moved_Signal_Connect(movedSignal, functionPtr);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Moved_Signal_Disconnect(void * signal, void * func) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  void (*functionPtr)(Dali::Window, Dali::Window::WindowPosition) = (void (*)(Dali::Window, Dali::Window::WindowPosition)) 0 ;

  movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  functionPtr = (void (*)(Dali::Window, Dali::Window::WindowPosition))func;
  {
    try {
      Dali_Signal_Window_Moved_Signal_Disconnect(movedSignal, functionPtr);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Moved_Signal_Emit(void * signal, void* winHandle, void * position) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  Dali::Window* win = (Dali::Window*)winHandle;
  Dali::Window window;
  Dali::Window::WindowPosition windowPosition;
  Dali::Window::WindowPosition *pPosition;

  movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  if (movedSignal == nullptr || window == nullptr) {
    DALI_LOG_ERROR("[ERR] movedSignal == nullptr or window == nullptr");
    return;
  }

  pPosition = (Dali::Window::WindowPosition *)position;
  if (!pPosition) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector2", 0);
    return ;
  }
  window = *win;
  windowPosition = *pPosition;
  {
    try {
      Dali_Signal_Window_Moved_Signal_Emit(movedSignal, window, windowPosition);
    } CALL_CATCH_EXCEPTION();
  }

}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Moved_Signal(void * signal) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;

  movedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  {
    try {
      delete movedSignal;
    } CALL_CATCH_EXCEPTION();
  }

}

/* Orientation Changed signal binding */
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Orientation_Changed_Signal(void* winHandle)
{
  void *result;
  Dali::Window window;
  Dali::Window *win;
  Dali::DevelWindow::OrientationChangedSignalType* orientationChangedSignal;

  win = (Dali::Window *)winHandle;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  window = *win;
  {
    try {
      orientationChangedSignal = (Dali::DevelWindow::OrientationChangedSignalType *) &Dali::DevelWindow::OrientationChangedSignal(window);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (void *)orientationChangedSignal;
  return result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Orientation_Changed_Signal_Empty(void * signal)
{
  unsigned int result;
  Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *) 0 ;
  bool flag;

  orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *)signal;
  {
    try {
      flag = (bool)Dali_Signal_Window_Orientation_Changed_Signal_Empty((Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > const *)orientationChangedSignal);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (unsigned int)flag;
  return result;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Orientation_Changed_Signal_GetConnectionCount(void * signal) {
  unsigned long result;
  Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *) 0 ;
  std::size_t count;

  orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *)signal;
  {
    try {
      count = Dali_Signal_Window_Orientation_Changed_Signal_GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > const *)orientationChangedSignal);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (unsigned long)count;
  return result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Orientation_Changed_Signal_Connect(void * signal, void * func) {
  Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *) 0 ;
  void (*functionPtr)(Dali::Window, Dali::WindowOrientation) = (void (*)(Dali::Window, Dali::WindowOrientation)) 0 ;

  orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *)signal;
  functionPtr = (void (*)(Dali::Window, Dali::WindowOrientation))func;
  {
    try {
      Dali_Signal_Window_Orientation_Changed_Signal_Connect(orientationChangedSignal, functionPtr);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Orientation_Changed_Signal_Disconnect(void * signal, void * func) {
  Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *) 0 ;
  void (*functionPtr)(Dali::Window, Dali::WindowOrientation) = (void (*)(Dali::Window, Dali::WindowOrientation)) 0 ;

  orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *)signal;
  functionPtr = (void (*)(Dali::Window, Dali::WindowOrientation))func;
  {
    try {
      Dali_Signal_Window_Orientation_Changed_Signal_Disconnect(orientationChangedSignal, functionPtr);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Orientation_Changed_Signal_Emit(void * signal, void* winHandle, int orientation) {
  Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *) 0 ;
  Dali::Window* win = (Dali::Window*)winHandle;
  Dali::Window window;
  Dali::WindowOrientation windowOrientation;

  orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *)signal;
  if (orientationChangedSignal == nullptr || window == nullptr) {
    DALI_LOG_ERROR("[ERR] orientationChangedSignal == nullptr or window == nullptr");
    return;
  }

  window = *win;
  windowOrientation = static_cast<Dali::WindowOrientation>(orientation);
  {
    try {
      Dali_Signal_Window_Orientation_Changed_Signal_Emit(orientationChangedSignal, window, windowOrientation);
    } CALL_CATCH_EXCEPTION();
  }

}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Orientation_Changed_Signal(void * signal) {
  Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *) 0 ;

  orientationChangedSignal = (Dali::Signal< void (Dali::Window, Dali::WindowOrientation) > *)signal;
  {
    try {
      delete orientationChangedSignal;
    } CALL_CATCH_EXCEPTION();
  }

}

//
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WindowMouseInOutEventSignal(void* winHandle)
{
  void *result;
  Dali::Window window;
  Dali::Window *win;
  Dali::DevelWindow::MouseInOutEventSignalType* mouseInOutSignal;

  win = (Dali::Window *)winHandle;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  window = *win;
  {
    try {
      mouseInOutSignal = (Dali::DevelWindow::MouseInOutEventSignalType *) &Dali::DevelWindow::MouseInOutEventSignal(window);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (void *)mouseInOutSignal;
  return result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WindowMouseInOutEventSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Window_MouseInOutEvent_Signal_Empty((Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WindowMouseInOutEventSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Window_MouseInOutEvent_Signal_GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowMouseInOutEventSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) = (void (*)(Dali::Window, Dali::DevelWindow::MouseInOutEvent const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::DevelWindow::MouseInOutEvent const &))jarg2;
  {
    try {
      Dali_Signal_Window_MouseInOutEvent_Signal_Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowMouseInOutEventSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) = (void (*)(Dali::Window, Dali::DevelWindow::MouseInOutEvent const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::DevelWindow::MouseInOutEvent const &))jarg2;
  {
    try {
      Dali_Signal_Window_MouseInOutEvent_Signal_Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowMouseInOutEventSignal_Emit(void * jarg1, void* jarg2, void* jarg3) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *)jarg1;
  Dali::Window* arg2 = (Dali::Window*)jarg2;
  Dali::DevelWindow::MouseInOutEvent* arg3 = (Dali::DevelWindow::MouseInOutEvent*)jarg3;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Signal", 0);
    return ;
  }

  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DevelWindow::MouseInOutEvent", 0);
    return ;
  }

  {
    try {
      Dali_Signal_Window_MouseInOutEvent_Signal_Emit(arg1,*arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WindowMouseInOutEventSignal(void * jarg1) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseInOutEvent const &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_MouseInOutEvent__SWIG_0(int jarg1, unsigned int jarg2, void * jarg3, unsigned int jarg4) {
  void * jresult ;
  Dali::DevelWindow::MouseInOutEvent::Type arg1 ;
  unsigned int arg2 ;
  Dali::Vector2 arg3 ;
  unsigned int arg4 ;

  Dali::Vector2 *argp3 ;

  Dali::DevelWindow::MouseInOutEvent *result = 0;

  arg1 = static_cast<Dali::DevelWindow::MouseInOutEvent::Type>(jarg1);
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Vector2 *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector2", 0);
    return 0;
  }
  arg3 = *argp3;
  arg4 = (unsigned int)jarg4;
  {
    try {
      result = (Dali::DevelWindow::MouseInOutEvent *)new Dali::DevelWindow::MouseInOutEvent(arg1, arg2, arg3, arg4, Dali::Device::Class::NONE, Dali::Device::Subclass::NONE);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MouseInOutEvent(void * jarg1) {
  Dali::DevelWindow::MouseInOutEvent *arg1 = (Dali::DevelWindow::MouseInOutEvent *) 0 ;

  arg1 = (Dali::DevelWindow::MouseInOutEvent *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MouseInOutEvent_type_get(void * jarg1) {
  int jresult ;
  Dali::DevelWindow::MouseInOutEvent *arg1 = (Dali::DevelWindow::MouseInOutEvent *) 0 ;
  Dali::DevelWindow::MouseInOutEvent::Type result;

  arg1 = (Dali::DevelWindow::MouseInOutEvent *)jarg1;
  {
    try {
      result = ((Dali::DevelWindow::MouseInOutEvent const *)arg1)->type;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MouseInOutEvent_modifiers_get(void * jarg1) {
  unsigned int jresult ;
  Dali::DevelWindow::MouseInOutEvent *arg1 = (Dali::DevelWindow::MouseInOutEvent *) 0 ;
  unsigned int result;

  arg1 = (Dali::DevelWindow::MouseInOutEvent *)jarg1;
  {
    try {
      result = ((Dali::DevelWindow::MouseInOutEvent const *)arg1)->modifiers;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MouseInOutEvent_point_get(void * jarg1) {
  void * jresult ;
  Dali::DevelWindow::MouseInOutEvent *arg1 = (Dali::DevelWindow::MouseInOutEvent *) 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::DevelWindow::MouseInOutEvent *)jarg1;
  {
    try {
      result = (Dali::Vector2 *) &((Dali::DevelWindow::MouseInOutEvent const *)arg1)->point;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MouseInOutEvent_timeStamp_get(void * jarg1) {
  unsigned int jresult ;
  Dali::DevelWindow::MouseInOutEvent *arg1 = (Dali::DevelWindow::MouseInOutEvent *) 0 ;
  unsigned int result;

  arg1 = (Dali::DevelWindow::MouseInOutEvent *)jarg1;
  {
    try {
      result = ((Dali::DevelWindow::MouseInOutEvent const *)arg1)->timeStamp;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MouseInOutEvent_GetDeviceClass(void * jarg1) {
  int jresult ;
  Dali::DevelWindow::MouseInOutEvent *arg1 = 0 ;
  Dali::Device::Class::Type result;

  arg1 = (Dali::DevelWindow::MouseInOutEvent *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::DevelWindow::MouseInOutEvent const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Device::Class::Type)arg1->deviceClass;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MouseInOutEvent_GetDeviceSubClass(void * jarg1) {
  int jresult ;
  Dali::DevelWindow::MouseInOutEvent *arg1 = 0 ;
  Dali::Device::Subclass::Type result;

  arg1 = (Dali::DevelWindow::MouseInOutEvent *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::DevelWindow::MouseInOutEvent const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Device::Subclass::Type)arg1->deviceSubclass;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

// mouse pointer grab event
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WindowMouseRelativeEventSignal(void* winHandle)
{
  void *result;
  Dali::Window window;
  Dali::Window *win;
  Dali::DevelWindow::MouseRelativeEventSignalType* mouseRelativeSignal;

  win = (Dali::Window *)winHandle;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  window = *win;
  {
    try {
      mouseRelativeSignal = (Dali::DevelWindow::MouseRelativeEventSignalType *) &Dali::DevelWindow::MouseRelativeEventSignal(window);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (void *)mouseRelativeSignal;
  return result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WindowMouseRelativeEventSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Window_MouseRelativeEvent_Signal_Empty((Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WindowMouseRelativeEventSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Window_MouseRelativeEvent_Signal_GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowMouseRelativeEventSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) = (void (*)(Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &))jarg2;
  {
    try {
      Dali_Signal_Window_MouseRelativeEvent_Signal_Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowMouseRelativeEventSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) = (void (*)(Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &))jarg2;
  {
    try {
      Dali_Signal_Window_MouseRelativeEvent_Signal_Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowMouseRelativeEventSignal_Emit(void * jarg1, void* jarg2, void* jarg3) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *)jarg1;
  Dali::Window* arg2 = (Dali::Window*)jarg2;
  Dali::DevelWindow::MouseRelativeEvent* arg3 = (Dali::DevelWindow::MouseRelativeEvent*)jarg3;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Signal", 0);
    return ;
  }

  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DevelWindow::MouseRelativeEvent", 0);
    return ;
  }

  {
    try {
      Dali_Signal_Window_MouseRelativeEvent_Signal_Emit(arg1,*arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WindowMouseRelativeEventSignal(void * jarg1) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::MouseRelativeEvent const &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_MouseRelativeEvent__SWIG_0(int jarg1, unsigned int jarg2, unsigned int jarg3, void * jarg4, void * jarg5) {
  void * jresult ;
  Dali::DevelWindow::MouseRelativeEvent::Type arg1 ;
  unsigned int arg2 ;
  unsigned int arg3 ;
  Dali::Vector2 arg4 ;
  Dali::Vector2 arg5 ;
  Dali::Vector2 arg6 ;

  Dali::Vector2 *argp4 ;
  Dali::Vector2 *argp5 ;

  Dali::DevelWindow::MouseRelativeEvent *result = 0;

  arg1 = static_cast<Dali::DevelWindow::MouseRelativeEvent::Type>(jarg1);
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int)jarg3;
  argp4 = (Dali::Vector2 *)jarg4;
  argp5 = (Dali::Vector2 *)jarg5;
  if (!argp4 || !argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector2", 0);
    return 0;
  }
  arg4 = *argp4;
  arg5 = *argp4;
  {
    try {
      result = (Dali::DevelWindow::MouseRelativeEvent *)new Dali::DevelWindow::MouseRelativeEvent(arg1, arg2, arg3, arg4, arg5, Dali::Device::Class::NONE, Dali::Device::Subclass::NONE);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MouseRelativeEvent(void * jarg1) {
  Dali::DevelWindow::MouseRelativeEvent *arg1 = (Dali::DevelWindow::MouseRelativeEvent *) 0 ;

  arg1 = (Dali::DevelWindow::MouseRelativeEvent *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MouseRelativeEvent_type_get(void * jarg1) {
  int jresult ;
  Dali::DevelWindow::MouseRelativeEvent *arg1 = (Dali::DevelWindow::MouseRelativeEvent *) 0 ;
  Dali::DevelWindow::MouseRelativeEvent::Type result;

  arg1 = (Dali::DevelWindow::MouseRelativeEvent *)jarg1;
  {
    try {
      result = ((Dali::DevelWindow::MouseRelativeEvent const *)arg1)->type;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MouseRelativeEvent_modifiers_get(void * jarg1) {
  unsigned int jresult ;
  Dali::DevelWindow::MouseRelativeEvent *arg1 = (Dali::DevelWindow::MouseRelativeEvent *) 0 ;
  unsigned int result;

  arg1 = (Dali::DevelWindow::MouseRelativeEvent *)jarg1;
  {
    try {
      result = ((Dali::DevelWindow::MouseRelativeEvent const *)arg1)->modifiers;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MouseRelativeEvent_diff_position_get(void * jarg1) {
  void * jresult ;
  Dali::DevelWindow::MouseRelativeEvent *arg1 = (Dali::DevelWindow::MouseRelativeEvent *) 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::DevelWindow::MouseRelativeEvent *)jarg1;
  {
    try {
      result = (Dali::Vector2 *) &((Dali::DevelWindow::MouseRelativeEvent const *)arg1)->diffPosition;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MouseRelativeEvent_unaccelated_position_get(void * jarg1) {
  void * jresult ;
  Dali::DevelWindow::MouseRelativeEvent *arg1 = (Dali::DevelWindow::MouseRelativeEvent *) 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::DevelWindow::MouseRelativeEvent *)jarg1;
  {
    try {
      result = (Dali::Vector2 *) &((Dali::DevelWindow::MouseRelativeEvent const *)arg1)->unaccelatedPosition;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MouseRelativeEvent_timeStamp_get(void * jarg1) {
  unsigned int jresult ;
  Dali::DevelWindow::MouseRelativeEvent *arg1 = (Dali::DevelWindow::MouseRelativeEvent *) 0 ;
  unsigned int result;

  arg1 = (Dali::DevelWindow::MouseRelativeEvent *)jarg1;
  {
    try {
      result = ((Dali::DevelWindow::MouseRelativeEvent const *)arg1)->timeStamp;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MouseRelativeEvent_GetDeviceClass(void * jarg1) {
  int jresult ;
  Dali::DevelWindow::MouseRelativeEvent *arg1 = 0 ;
  Dali::Device::Class::Type result;

  arg1 = (Dali::DevelWindow::MouseRelativeEvent *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::DevelWindow::MouseRelativeEvent const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Device::Class::Type)arg1->deviceClass;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MouseRelativeEvent_GetDeviceSubClass(void * jarg1) {
  int jresult ;
  Dali::DevelWindow::MouseRelativeEvent *arg1 = 0 ;
  Dali::Device::Subclass::Type result;

  arg1 = (Dali::DevelWindow::MouseRelativeEvent *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::DevelWindow::MouseRelativeEvent const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Device::Subclass::Type)arg1->deviceSubclass;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}
///////////////

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_PointerConstraintsLock(void * winHandle) {
  Dali::Window *window = (Dali::Window *) 0 ;
  bool result = false;

  window = (Dali::Window *)winHandle;
  {
    try {
      result = Dali::DevelWindow::PointerConstraintsLock(*window);
    } CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_PointerConstraintsUnlock(void * winHandle) {
  Dali::Window *window = (Dali::Window *) 0 ;
  bool result = false;

  window = (Dali::Window *)winHandle;
  {
    try {
      result = Dali::DevelWindow::PointerConstraintsUnlock(*window);
    } CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_LockedPointerRegionSet(void * winHandle, int x, int y, int w, int h) {
  Dali::Window *window = (Dali::Window *) 0 ;

  window = (Dali::Window *)winHandle;
  {
    try {
      Dali::DevelWindow::LockedPointerRegionSet(*window, x, y, w, h);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_LockedPointerCursorPositionHintSet(void * winHandle, int x, int y) {
  Dali::Window *window = (Dali::Window *) 0 ;

  window = (Dali::Window *)winHandle;
  {
    try {
      Dali::DevelWindow::LockedPointerCursorPositionHintSet(*window, x, y);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_PointerWarp(void * winHandle, int x, int y) {
  Dali::Window *window = (Dali::Window *) 0 ;
  bool result = false;

  window = (Dali::Window *)winHandle;
  {
    try {
      result = Dali::DevelWindow::PointerWarp(*window, x, y);
    } CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_CursorVisibleSet(void * winHandle, bool visible) {
  Dali::Window *window = (Dali::Window *) 0 ;

  window = (Dali::Window *)winHandle;
  {
    try {
      Dali::DevelWindow::CursorVisibleSet(*window, visible);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_KeyboardGrab(void * winHandle, unsigned int deviceSubclass) {
  Dali::Window *window = (Dali::Window *) 0 ;
  bool result = false;

  window = (Dali::Window *)winHandle;
  {
    try {
      result = Dali::DevelWindow::KeyboardGrab(*window, (Dali::Device::Subclass::Type)deviceSubclass);
    } CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_KeyboardUnGrab(void * winHandle) {
  Dali::Window *window = (Dali::Window *) 0 ;
  bool result = false;

  window = (Dali::Window *)winHandle;
  {
    try {
      result = Dali::DevelWindow::KeyboardUnGrab(*window);
    } CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetFullScreen(void * winHandle, bool fullscreen) {
  Dali::Window *window = (Dali::Window *) 0 ;

  window = (Dali::Window *)winHandle;
  {
    try {
      Dali::DevelWindow::SetFullScreen(*window, fullscreen);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_GetFullScreen(void * winHandle) {
  Dali::Window *window = (Dali::Window *) 0 ;
  bool result = false;

  window = (Dali::Window *)winHandle;
  {
    try {
      result = Dali::DevelWindow::GetFullScreen(*window);
    } CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

/* pointer constraints event */
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WindowPointerConstraintsEventSignal(void* winHandle)
{
  void *result;
  Dali::Window window;
  Dali::Window *win;
  Dali::DevelWindow::PointerConstraintsSignalType* pointerConstraintsSignal;

  win = (Dali::Window *)winHandle;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  window = *win;
  {
    try {
      pointerConstraintsSignal = (Dali::DevelWindow::PointerConstraintsSignalType *) &Dali::DevelWindow::PointerConstraintsSignal(window);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (void *)pointerConstraintsSignal;
  return result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WindowPointerConstraintsEventSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Window_PointerConstraintsEvent_Signal_Empty((Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WindowPointerConstraintsEventSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Window_PointerConstraintsEvent_Signal_GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowPointerConstraintsEventSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) = (void (*)(Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &))jarg2;
  {
    try {
      Dali_Signal_Window_PointerConstraintsEvent_Signal_Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowPointerConstraintsEventSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *) 0 ;
  void (*arg2)(Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) = (void (*)(Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *)jarg1;
  arg2 = (void (*)(Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &))jarg2;
  {
    try {
      Dali_Signal_Window_PointerConstraintsEvent_Signal_Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowPointerConstraintsEventSignal_Emit(void * jarg1, void* jarg2, void* jarg3) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *)jarg1;
  Dali::Window* arg2 = (Dali::Window*)jarg2;
  Dali::DevelWindow::PointerConstraintsEvent* arg3 = (Dali::DevelWindow::PointerConstraintsEvent*)jarg3;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Signal", 0);
    return ;
  }

  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }

  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DevelWindow::PointerConstraintsEvent", 0);
    return ;
  }

  {
    try {
      Dali_Signal_Window_PointerConstraintsEvent_Signal_Emit(arg1,*arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WindowPointerConstraintsEventSignal(void * jarg1) {
  Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Window, Dali::DevelWindow::PointerConstraintsEvent const &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PointerConstraintsEvent__SWIG_0(int jarg1, int jarg2, bool jarg3, bool jarg4) {
  void * jresult ;
  int arg1 ;
  int arg2 ;
  bool arg3 ;
  bool arg4 ;

  Dali::DevelWindow::PointerConstraintsEvent *result = 0;

  arg1 = jarg1;
  arg2 = jarg2;
  arg3 = jarg3;
  arg4 = jarg4;
  {
    try {
      result = (Dali::DevelWindow::PointerConstraintsEvent *)new Dali::DevelWindow::PointerConstraintsEvent(arg1, arg2, arg3, arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PointerConstraintsEvent(void * jarg1) {
  Dali::DevelWindow::PointerConstraintsEvent *arg1 = (Dali::DevelWindow::PointerConstraintsEvent *) 0 ;

  arg1 = (Dali::DevelWindow::PointerConstraintsEvent *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PointerConstraintsEvent_x_get(void * jarg1) {
  int jresult ;
  Dali::DevelWindow::PointerConstraintsEvent *arg1 = (Dali::DevelWindow::PointerConstraintsEvent *) 0 ;

  arg1 = (Dali::DevelWindow::PointerConstraintsEvent *)jarg1;
  {
    try {
      jresult = ((Dali::DevelWindow::PointerConstraintsEvent const *)arg1)->x;
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PointerConstraintsEvent_y_get(void * jarg1) {
  int jresult ;
  Dali::DevelWindow::PointerConstraintsEvent *arg1 = (Dali::DevelWindow::PointerConstraintsEvent *) 0 ;

  arg1 = (Dali::DevelWindow::PointerConstraintsEvent *)jarg1;
  {
    try {
      jresult = ((Dali::DevelWindow::PointerConstraintsEvent const *)arg1)->y;
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_PointerConstraintsEvent_locked_get(void * jarg1) {
  bool jresult = false;
  Dali::DevelWindow::PointerConstraintsEvent *arg1 = (Dali::DevelWindow::PointerConstraintsEvent *) 0 ;

  arg1 = (Dali::DevelWindow::PointerConstraintsEvent *)jarg1;
  {
    try {
      jresult = ((Dali::DevelWindow::PointerConstraintsEvent const *)arg1)->locked;
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_PointerConstraintsEvent_confined_get(void * jarg1) {
  bool jresult = false;
  Dali::DevelWindow::PointerConstraintsEvent *arg1 = (Dali::DevelWindow::PointerConstraintsEvent *) 0 ;

  arg1 = (Dali::DevelWindow::PointerConstraintsEvent *)jarg1;
  {
    try {
      jresult = ((Dali::DevelWindow::PointerConstraintsEvent const *)arg1)->confined;
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}


/* Move Completed signal binding */
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Move_Completed_Signal(void* winHandle)
{
  void *result;
  Dali::Window window;
  Dali::Window *win;
  Dali::DevelWindow::MoveCompletedSignalType* moveCompletedSignal;

  win = (Dali::Window *)winHandle;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  window = *win;
  {
    try {
      moveCompletedSignal = (Dali::DevelWindow::MoveCompletedSignalType *) &Dali::DevelWindow::MoveCompletedSignal(window);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (void *)moveCompletedSignal;
  return result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Move_Completed_Signal_Empty(void * signal)
{
  unsigned int result;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  bool flag;

  moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  {
    try {
      flag = (bool)Dali_Signal_Window_Move_Completed_Signal_Empty((Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > const *)moveCompletedSignal);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (unsigned int)flag;
  return result;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Move_Completed_Signal_GetConnectionCount(void * signal) {
  unsigned long result;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  std::size_t count;

  moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  {
    try {
      count = Dali_Signal_Window_Move_Completed_Signal_GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > const *)moveCompletedSignal);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (unsigned long)count;
  return result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Move_Completed_Signal_Connect(void * signal, void * func) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  void (*functionPtr)(Dali::Window, Dali::Window::WindowPosition) = (void (*)(Dali::Window, Dali::Window::WindowPosition)) 0 ;

  moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  functionPtr = (void (*)(Dali::Window, Dali::Window::WindowPosition))func;
  {
    try {
      Dali_Signal_Window_Move_Completed_Signal_Connect(moveCompletedSignal, functionPtr);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Move_Completed_Signal_Disconnect(void * signal, void * func) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  void (*functionPtr)(Dali::Window, Dali::Window::WindowPosition) = (void (*)(Dali::Window, Dali::Window::WindowPosition)) 0 ;

  moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  functionPtr = (void (*)(Dali::Window, Dali::Window::WindowPosition))func;
  {
    try {
      Dali_Signal_Window_Move_Completed_Signal_Disconnect(moveCompletedSignal, functionPtr);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Move_Completed_Signal_Emit(void * signal, void* winHandle, void * position) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;
  Dali::Window* win = (Dali::Window*)winHandle;
  Dali::Window window;
  Dali::Window::WindowPosition windowPosition;
  Dali::Window::WindowPosition *pPosition;

  moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  if (moveCompletedSignal == nullptr || window == nullptr) {
    DALI_LOG_ERROR("[ERR] moveCompletedSignal == nullptr or window == nullptr");
    return;
  }

  pPosition = (Dali::Window::WindowPosition *)position;
  if (!pPosition) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector2", 0);
    return ;
  }
  window = *win;
  windowPosition = *pPosition;
  {
    try {
      Dali_Signal_Window_Move_Completed_Signal_Emit(moveCompletedSignal, window, windowPosition);
    } CALL_CATCH_EXCEPTION();
  }

}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Move_Completed_Signal(void * signal) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *) 0 ;

  moveCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowPosition) > *)signal;
  {
    try {
      delete moveCompletedSignal;
    } CALL_CATCH_EXCEPTION();
  }

}

/* Resized Completed signal binding */
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_Resize_Completed_Signal(void* winHandle)
{
  void *result;
  Dali::Window window;
  Dali::Window *win;
  Dali::DevelWindow::ResizeCompletedSignalType* resizeCompletedSignal;

  win = (Dali::Window *)winHandle;
  if (!win) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  window = *win;
  {
    try {
      resizeCompletedSignal = (Dali::DevelWindow::ResizeCompletedSignalType *) &Dali::DevelWindow::ResizeCompletedSignal(window);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (void *)resizeCompletedSignal;
  return result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Resize_Completed_Signal_Empty(void * signal)
{
  unsigned int result;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  bool flag;

  resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)signal;
  {
    try {
      flag = (bool)Dali_Signal_Window_Resize_Completed_Signal_Empty((Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > const *)resizeCompletedSignal);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (unsigned int)flag;
  return result;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Resize_Completed_Signal_GetConnectionCount(void * signal) {
  unsigned long result;
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  std::size_t count;

  resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)signal;
  {
    try {
      count = Dali_Signal_Window_Resize_Completed_Signal_GetConnectionCount((Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > const *)resizeCompletedSignal);
    } CALL_CATCH_EXCEPTION(0);
  }

  result = (unsigned long)count;
  return result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Resize_Completed_Signal_Connect(void * signal, void * func) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  void (*functionPtr)(Dali::Window, Dali::Window::WindowSize) = (void (*)(Dali::Window, Dali::Window::WindowSize)) 0 ;

  resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)signal;
  functionPtr = (void (*)(Dali::Window, Dali::Window::WindowSize))func;
  {
    try {
      Dali_Signal_Window_Resize_Completed_Signal_Connect(resizeCompletedSignal, functionPtr);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Resize_Completed_Signal_Disconnect(void * signal, void * func) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  void (*functionPtr)(Dali::Window, Dali::Window::WindowSize) = (void (*)(Dali::Window, Dali::Window::WindowSize)) 0 ;

  resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)signal;
  functionPtr = (void (*)(Dali::Window, Dali::Window::WindowSize))func;
  {
    try {
      Dali_Signal_Window_Resize_Completed_Signal_Disconnect(resizeCompletedSignal, functionPtr);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Resize_Completed_Signal_Emit(void * signal, void* winHandle, void * size) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;
  Dali::Window* win = (Dali::Window*)winHandle;
  Dali::Window window;
  Dali::Window::WindowSize windowSize;
  Dali::Window::WindowSize *pSize;

  resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)signal;
  if (resizeCompletedSignal == nullptr || window == nullptr) {
    DALI_LOG_ERROR("[ERR] resizeCompletedSignal == nullptr or window == nullptr");
    return;
  }

  pSize = (Dali::Window::WindowSize *)size;
  if (!pSize) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector2", 0);
    return ;
  }
  window = *win;
  windowSize = *pSize;
  {
    try {
      Dali_Signal_Window_Resize_Completed_Signal_Emit(resizeCompletedSignal, window, windowSize);
    } CALL_CATCH_EXCEPTION();
  }

}




SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Resize_Completed_Signal(void * signal) {
  Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *) 0 ;

  resizeCompletedSignal = (Dali::Signal< void (Dali::Window, Dali::Window::WindowSize) > *)signal;
  {
    try {
      delete resizeCompletedSignal;
    } CALL_CATCH_EXCEPTION();
  }

}



////////////////////////////////////////////////////////////////////
/// InsetsChanged event
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_InsetsChanged_Signal(void * windowHandle) {
  void * jresult ;
  Dali::Window *window = (Dali::Window *) 0 ;
  Dali::DevelWindow::InsetsChangedSignalType *result = 0 ;

  window = (Dali::Window *)windowHandle;
  {
    try {
      result = (Dali::DevelWindow::InsetsChangedSignalType *) &(Dali::DevelWindow::InsetsChangedSignal(*window));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Window_InsetsChanged_Signal_Empty(void * signal) {
  bool result;
  Dali::DevelWindow::InsetsChangedSignalType* arg1 = (Dali::DevelWindow::InsetsChangedSignalType*) signal;

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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Window_InsetsChanged_Signal_GetConnectionCount(void * signal) {
  unsigned int result;
  Dali::DevelWindow::InsetsChangedSignalType* arg1 = (Dali::DevelWindow::InsetsChangedSignalType *) signal;

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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_InsetsChanged_Signal_Connect(void * signal, void * func) {
  Dali::DevelWindow::InsetsChangedSignalType* arg1 = (Dali::DevelWindow::InsetsChangedSignalType *)signal;
  void (*arg2)(Dali::WindowInsetsPartType, Dali::WindowInsetsPartState, const Dali::Extents&) = ( void (*)(Dali::WindowInsetsPartType, Dali::WindowInsetsPartState, const Dali::Extents&) )func;

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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_InsetsChanged_Signal_Disconnect(void * signal, void * func) {
  Dali::DevelWindow::InsetsChangedSignalType* arg1 = (Dali::DevelWindow::InsetsChangedSignalType *)signal;
  void (*arg2)(Dali::WindowInsetsPartType, Dali::WindowInsetsPartState, const Dali::Extents&) = ( void (*)(Dali::WindowInsetsPartType, Dali::WindowInsetsPartState, const Dali::Extents&) )func;

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


#ifdef __cplusplus
}
#endif
