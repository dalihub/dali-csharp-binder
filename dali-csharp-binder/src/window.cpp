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

#ifndef CSHARP_WINDOW
#define CSHARP_WINDOW
#endif

#include "common.h"
#include <dali/devel-api/adaptor-framework/drag-and-drop-detector.h>
#include <dali/public-api/adaptor-framework/window.h>
#include <dali/devel-api/adaptor-framework/window-devel.h>
#include <dali/integration-api/adaptors/adaptor.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;



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

/*ResizedSignal*/
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__Empty(Dali::Signal< void (Dali::DevelWindow::WindowSize) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::DevelWindow::WindowSize) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__Connect(Dali::Signal< void (Dali::DevelWindow::WindowSize) > *self,void (*func)(Dali::DevelWindow::WindowSize)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__Disconnect(Dali::Signal< void (Dali::DevelWindow::WindowSize) > *self,void (*func)(Dali::DevelWindow::WindowSize)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__Emit(Dali::Signal< void (Dali::DevelWindow::WindowSize) > *self,Dali::DevelWindow::WindowSize arg){
  self->Emit( arg );
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
  arg3 = jarg3 ? true : false;
  {
    try {
      result = Dali::Window::New(arg1,(std::string const &)*arg2,arg3);
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
  jresult = new Dali::Window((const Dali::Window &)result);

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Window__SWIG_0() {
  void * jresult ;
  Dali::Window *result = 0 ;

  {
    try {
      result = (Dali::Window *)new Dali::Window();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Window(void * jarg1) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;

  arg1 = (Dali::Window *)jarg1;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_ShowIndicator(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::IndicatorVisibleMode arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::Window::IndicatorVisibleMode)jarg2;
  {
    try {
      (arg1)->ShowIndicator(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetIndicatorBgOpacity(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::IndicatorBgOpacity arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::Window::IndicatorBgOpacity)jarg2;
  {
    try {
      (arg1)->SetIndicatorBgOpacity(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_RotateIndicator(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::WindowOrientation arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::Window::WindowOrientation)jarg2;
  {
    try {
      (arg1)->RotateIndicator(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Raise(void * jarg1) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      (arg1)->Raise();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Lower(void * jarg1) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      (arg1)->Lower();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_Activate(void * jarg1) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;

  arg1 = (Dali::Window *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_AddAvailableOrientation(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::WindowOrientation arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::Window::WindowOrientation)jarg2;
  {
    try {
      (arg1)->AddAvailableOrientation(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_RemoveAvailableOrientation(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::WindowOrientation arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::Window::WindowOrientation)jarg2;
  {
    try {
      (arg1)->RemoveAvailableOrientation(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPreferredOrientation(void * jarg1, int jarg2) {
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::WindowOrientation arg2 ;

  arg1 = (Dali::Window *)jarg1;
  arg2 = (Dali::Window::WindowOrientation)jarg2;
  {
    try {
      (arg1)->SetPreferredOrientation(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Window_GetPreferredOrientation(void * jarg1) {
  int jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Window::WindowOrientation result;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = (Dali::Window::WindowOrientation)(arg1)->GetPreferredOrientation();
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
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetDragAndDropDetector(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::DragAndDropDetector result;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = ((Dali::Window const *)arg1)->GetDragAndDropDetector();
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
  jresult = new Dali::DragAndDropDetector((const Dali::DragAndDropDetector &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetNativeHandle(void * jarg1) {
  void * jresult ;
  Dali::Window *arg1 = (Dali::Window *) 0 ;
  Dali::Any result;

  arg1 = (Dali::Window *)jarg1;
  {
    try {
      result = ((Dali::Window const *)arg1)->GetNativeHandle();
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
  jresult = new Dali::Any((const Dali::Any &)result);
  return jresult;
}

/*window-devel binding*/

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FocusChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::FocusSignalType *result = 0 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::DevelWindow::FocusSignalType *) &Dali::DevelWindow::FocusChangedSignal(arg1);
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
      Dali::DevelWindow::SetAcceptFocus(arg1,arg2);
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
      result = (bool)Dali::DevelWindow::IsFocusAcceptable(arg1);
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
      Dali::DevelWindow::Show(arg1);
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
      Dali::DevelWindow::Hide(arg1);
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
      result = (bool)Dali::DevelWindow::IsVisible(arg1);
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
      result = (unsigned int)Dali::DevelWindow::GetSupportedAuxiliaryHintCount(arg1);
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
      result = Dali::DevelWindow::GetSupportedAuxiliaryHint(arg1,arg2);
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
      result = (unsigned int)Dali::DevelWindow::AddAuxiliaryHint(arg1,(std::string const &)*arg2,(std::string const &)*arg3);
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
      result = (bool)Dali::DevelWindow::RemoveAuxiliaryHint(arg1,arg2);
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
      result = (bool)Dali::DevelWindow::SetAuxiliaryHintValue(arg1,arg2,(std::string const &)*arg3);
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
      result = Dali::DevelWindow::GetAuxiliaryHintValue(arg1,arg2);
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
      result = (unsigned int)Dali::DevelWindow::GetAuxiliaryHintId(arg1,(std::string const &)*arg2);
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
      Dali::DevelWindow::SetInputRegion(arg1,(Dali::Rect< int > const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetType(void * jarg1, int jarg2) {
  Dali::Window arg1 ;
  Dali::DevelWindow::Type arg2 ;
  Dali::Window *argp1 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = (Dali::DevelWindow::Type)jarg2;
  {
    try {
      Dali::DevelWindow::SetType(arg1,arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetType(void * jarg1) {
  int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::Type result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::DevelWindow::Type)Dali::DevelWindow::GetType(arg1);
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
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetNotificationLevel(void * jarg1, int jarg2) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  Dali::DevelWindow::NotificationLevel::Type arg2 ;
  Dali::Window *argp1 ;
  bool result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::DevelWindow::NotificationLevel::Type)jarg2;
  {
    try {
      result = (bool)Dali::DevelWindow::SetNotificationLevel(arg1,arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetNotificationLevel(void * jarg1) {
  int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::NotificationLevel::Type result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::DevelWindow::NotificationLevel::Type)Dali::DevelWindow::GetNotificationLevel(arg1);
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
      Dali::DevelWindow::SetOpaqueState(arg1,arg2);
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
      result = (bool)Dali::DevelWindow::IsOpaqueState(arg1);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetScreenMode(void * jarg1, int jarg2) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  Dali::DevelWindow::ScreenMode::Type arg2 ;
  Dali::Window *argp1 ;
  bool result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::DevelWindow::ScreenMode::Type)jarg2;
  {
    try {
      result = (bool)Dali::DevelWindow::SetScreenMode(arg1,arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GetScreenMode(void * jarg1) {
  int jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::ScreenMode::Type result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::DevelWindow::ScreenMode::Type)Dali::DevelWindow::GetScreenMode(arg1);
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
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_SetBrightness(void * jarg1, int jarg2) {
  unsigned int jresult ;
  Dali::Window arg1 ;
  int arg2 ;
  Dali::Window *argp1 ;
  bool result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (int)jarg2;
  {
    try {
      result = (bool)Dali::DevelWindow::SetBrightness(arg1,arg2);
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
      result = (int)Dali::DevelWindow::GetBrightness(arg1);
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

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_Empty(void * jarg1) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_GetConnectionCount(void * jarg1) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_Connect(void * jarg1, void * jarg2) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_Disconnect(void * jarg1, void * jarg2) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowFocusSignalType_Emit(void * jarg1, unsigned int jarg2) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WindowFocusSignalType() {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WindowFocusSignalType(void * jarg1) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}



SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_ResizedSignal(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::ResizedSignalType *result = 0 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::DevelWindow::ResizedSignalType *) &Dali::DevelWindow::ResizedSignal(arg1);
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

/*ResizedSignal binding*/
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ResizedSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::DevelWindow::WindowSize) > *arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__Empty((Dali::Signal< void (Dali::DevelWindow::WindowSize) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ResizedSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::DevelWindow::WindowSize) > *arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::DevelWindow::WindowSize) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ResizedSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DevelWindow::WindowSize) > *arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *) 0 ;
  void (*arg2)(Dali::DevelWindow::WindowSize) = (void (*)(Dali::DevelWindow::WindowSize)) 0 ;

  arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *)jarg1;
  arg2 = (void (*)(Dali::DevelWindow::WindowSize))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ResizedSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DevelWindow::WindowSize) > *arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *) 0 ;
  void (*arg2)(Dali::DevelWindow::WindowSize) = (void (*)(Dali::DevelWindow::WindowSize)) 0 ;

  arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *)jarg1;
  arg2 = (void (*)(Dali::DevelWindow::WindowSize))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ResizedSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::DevelWindow::WindowSize) > *arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *) 0 ;
  Dali::DevelWindow::WindowSize arg2 ;
  Dali::DevelWindow::WindowSize *argp2 ;

  arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *)jarg1;
  argp2 = (Dali::DevelWindow::WindowSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DevelWindow::WindowSize", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_DevelWindow_WindowSize_SP__Sg__Emit(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ResizedSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::DevelWindow::WindowSize) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *)new Dali::Signal< void (Dali::DevelWindow::WindowSize) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ResizedSignal(void * jarg1) {
  Dali::Signal< void (Dali::DevelWindow::WindowSize) > *arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::DevelWindow::WindowSize) > *)jarg1;
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetSize(void * jarg1, void * jarg2) {
  Dali::Window arg1 ;
  Dali::DevelWindow::WindowSize arg2 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::WindowSize *argp2 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  argp2 = (Dali::DevelWindow::WindowSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DevelWindow::WindowSize", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali::DevelWindow::SetSize(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetSize(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::WindowSize result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::DevelWindow::GetSize(arg1);
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
  jresult = new Dali::DevelWindow::WindowSize((const Dali::DevelWindow::WindowSize &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_SetPosition(void * jarg1, void * jarg2) {
  Dali::Window arg1 ;
  Dali::DevelWindow::WindowPosition arg2 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::WindowPosition *argp2 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg1 = *argp1;
  argp2 = (Dali::DevelWindow::WindowPosition *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DevelWindow::WindowPosition", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali::DevelWindow::SetPosition(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Window_GetPosition(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::DevelWindow::WindowPosition result;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::DevelWindow::GetPosition(arg1);
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
  jresult = new Dali::DevelWindow::WindowPosition((const Dali::DevelWindow::WindowPosition &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Window_FeedKeyEvent(void * jarg1) {
  Dali::KeyEvent *arg1 = 0 ;

  arg1 = (Dali::KeyEvent *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyEvent & type is null", 0);
    return ;
  }
  {
    try {
      Dali::Adaptor::Get().FeedKeyEvent(*arg1);
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

