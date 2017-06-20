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
#include <dali/devel-api/adaptor-framework/window-devel.h>

SWIGINTERN bool Dali_Signal_void_int_int___Empty(Dali::Signal< void (int,int) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_void_int_int__GetConnectionCount(Dali::Signal< void (int,int) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_void_int_int__Connect(Dali::Signal< void (int,int) > *self,void (*func)(int,int)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_void_int_int__Disconnect(Dali::Signal< void (int,int) > *self,void (*func)(int,int)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_void_int_int__Emit(Dali::Signal< void (int,int) > *self,int arg1,int arg2){
  self->Emit( arg1, arg2 );
}

#ifdef __cplusplus
extern "C" {
#endif

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

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ResizedSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (int,int) > *arg1 = (Dali::Signal< void (int,int) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (int,int) > *)jarg1; 
  {
    try {
      result = (bool)Dali_Signal_void_int_int___Empty((Dali::Signal< void (int,int) > const *)arg1);
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
  Dali::Signal< void (int,int) > *arg1 = (Dali::Signal< void (int,int) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (int,int) > *)jarg1; 
  {
    try {
      result = Dali_Signal_void_int_int__GetConnectionCount((Dali::Signal< void (int,int) > const *)arg1);
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
  Dali::Signal< void (int,int) > *arg1 = (Dali::Signal< void (int,int) > *) 0 ;
  void (*arg2)(int,int) = (void (*)(int,int)) 0 ;

  arg1 = (Dali::Signal< void (int,int) > *)jarg1; 
  arg2 = (void (*)(int,int))jarg2; 
  {
    try {
      Dali_Signal_void_int_int__Connect(arg1,arg2);
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
  Dali::Signal< void (int,int) > *arg1 = (Dali::Signal< void (int,int) > *) 0 ;
  void (*arg2)(int,int) = (void (*)(int,int)) 0 ;

  arg1 = (Dali::Signal< void (int,int) > *)jarg1; 
  arg2 = (void (*)(int,int))jarg2; 
  {
    try {
      Dali_Signal_void_int_int__Disconnect(arg1,arg2);
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ResizedSignal_Emit(void * jarg1, int jarg2, int jarg3) {
  Dali::Signal< void (int,int) > *arg1 = (Dali::Signal< void (int,int) > *) 0 ;
  int arg2 ;
  int arg3 ;

  arg1 = (Dali::Signal< void (int,int) > *)jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  {
    try {
      Dali_Signal_void_int_int__Emit(arg1,arg2,arg3);
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
  Dali::Signal< void (int,int) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (int,int) > *)new Dali::Signal< void (int,int) >();
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
  Dali::Signal< void (int,int) > *arg1 = (Dali::Signal< void (int,int) > *) 0 ;

  arg1 = (Dali::Signal< void (int,int) > *)jarg1; 
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

