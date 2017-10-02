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

#ifndef CSHARP_APPLICATION
#define CSHARP_APPLICATION
#endif

#include "common.h"
#include <dali/public-api/adaptor-framework/application.h>
#include <dali/devel-api/adaptor-framework/application-devel.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


// keep argcs and argv so they're always available to DALi
int argC = 1;
char **argV = NULL;

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Application &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Application &) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Application &) > *self,void (*func)(Dali::Application &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Application &) > *self,void (*func)(Dali::Application &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Application &) > *self,Dali::Application &arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Empty(Dali::Signal< void (Dali::Application &,void *) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Application &,void *) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Connect(Dali::Signal< void (Dali::Application &,void *) > *self,void (*func)(Dali::Application &,void *)){
self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Disconnect(Dali::Signal< void (Dali::Application &,void *) > *self,void (*func)(Dali::Application &,void *)){
self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Emit(Dali::Signal< void (Dali::Application &,void *) > *self,Dali::Application &arg1,void *arg2){
self->Emit( arg1, arg2 );
}

#ifdef __cplusplus
extern "C" {
#endif

/*Application binding*/
SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_Application_SWIGUpcast(Dali::Application *jarg1) {
  return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_New__SWIG_0() {
  void * jresult ;
  Dali::Application result;

  {
    try {
      result = Dali::Application::New();
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
  jresult = new Dali::Application((const Dali::Application &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_New__SWIG_1(int jarg1) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  Dali::Application result;

  {
    // Todo generate argv data from the C# args
    char **array;         // two dimensional array
    int numStrings = 1;     // number of strings
    int stringLength = 30;      // max string length.
    array = (char **)malloc( (numStrings + 1 )* sizeof(char *) );
    argV = array;

    // allocate the string data
    for( int i=0; i < numStrings; i++)
    {
      array[i]=(char *)malloc( stringLength * sizeof(char *) );
    }
    array[ numStrings ] =  NULL; // we allocated +1 for hold the NULL part

    strcpy( array[0], "dali-csharp-app");

    arg1 = &argC;
    arg2 = &argV;
  }
  {
    try {
      result = Dali::Application::New(arg1,arg2);
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
  jresult = new Dali::Application((const Dali::Application &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_New__SWIG_2(int jarg1, char * jarg3) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  std::string *arg3 = 0 ;
  Dali::Application result;

  {
    // Todo generate argv data from the C# args
    char **array;         // two dimensional array
    int numStrings = 1;     // number of strings
    int stringLength = 30;      // max string length.
    array = (char **)malloc( (numStrings + 1 )* sizeof(char *) );
    argV = array;

    // allocate the string data
    for( int i=0; i < numStrings; i++)
    {
      array[i]=(char *)malloc( stringLength * sizeof(char *) );
    }
    array[ numStrings ] =  NULL; // we allocated +1 for hold the NULL part

    strcpy( array[0], "dali-csharp-app");

    arg1 = &argC;
    arg2 = &argV;
  }
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = Dali::Application::New(arg1,arg2,(std::string const &)*arg3);
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
  jresult = new Dali::Application((const Dali::Application &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_New__SWIG_3(int jarg1, char * jarg3, int jarg4) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  std::string *arg3 = 0 ;
  Dali::Application::WINDOW_MODE arg4 ;
  Dali::Application result;

  {
    // Todo generate argv data from the C# args
    char **array;         // two dimensional array
    int numStrings = 1;     // number of strings
    int stringLength = 30;      // max string length.
    array = (char **)malloc( (numStrings + 1 )* sizeof(char *) );
    argV = array;

    // allocate the string data
    for( int i=0; i < numStrings; i++)
    {
      array[i]=(char *)malloc( stringLength * sizeof(char *) );
    }
    array[ numStrings ] =  NULL; // we allocated +1 for hold the NULL part

    strcpy( array[0], "dali-csharp-app");

    arg1 = &argC;
    arg2 = &argV;
  }
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  arg4 = (Dali::Application::WINDOW_MODE)jarg4;
  {
    try {
      result = Dali::Application::New(arg1,arg2,(std::string const &)*arg3,arg4);
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
  jresult = new Dali::Application((const Dali::Application &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Application__SWIG_0() {
  void * jresult ;
  Dali::Application *result = 0 ;

  {
    try {
      result = (Dali::Application *)new Dali::Application();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Application__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = 0 ;
  Dali::Application *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Application *)new Dali::Application((Dali::Application const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application *arg2 = 0 ;
  Dali::Application *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  arg2 = (Dali::Application *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Application *) &(arg1)->operator =((Dali::Application const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Application(void * jarg1) {
  Dali::Application *arg1 = (Dali::Application *) 0 ;

  arg1 = (Dali::Application *)jarg1;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_MainLoop__SWIG_0(void * jarg1) {
  Dali::Application *arg1 = (Dali::Application *) 0 ;

  arg1 = (Dali::Application *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_MainLoop__SWIG_1(void * jarg1, void * jarg2) {
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Configuration::ContextLoss arg2 ;
  Dali::Configuration::ContextLoss *argp2 ;

  arg1 = (Dali::Application *)jarg1;
  argp2 = (Dali::Configuration::ContextLoss *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Configuration::ContextLoss", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->MainLoop(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_Lower(void * jarg1) {
  Dali::Application *arg1 = (Dali::Application *) 0 ;

  arg1 = (Dali::Application *)jarg1;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_Quit(void * jarg1) {
  Dali::Application *arg1 = (Dali::Application *) 0 ;

  arg1 = (Dali::Application *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Application_AddIdle(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::CallbackBase *arg2 = (Dali::CallbackBase *) 0 ;
  bool result;

  arg1 = (Dali::Application *)jarg1;
  arg2 = (Dali::CallbackBase *)jarg2;
  {
    try {
      result = (bool)(arg1)->AddIdle(arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_GetWindow(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Window result;

  arg1 = (Dali::Application *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = new Dali::Window((const Dali::Window &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_ReplaceWindow(void * jarg1, void * jarg2, char * jarg3) {
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::PositionSize arg2 ;
  std::string *arg3 = 0 ;
  Dali::PositionSize *argp2 ;

  arg1 = (Dali::Application *)jarg1;
  argp2 = (Dali::PositionSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return ;
  }
  arg2 = *argp2;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      (arg1)->ReplaceWindow(arg2,(std::string const &)*arg3);
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

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_Application_GetResourcePath() {
  char * jresult ;
  std::string result;

  {
    try {
      result = Dali::Application::GetResourcePath();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_SetViewMode(void * jarg1, int jarg2) {
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::ViewMode arg2 ;

  arg1 = (Dali::Application *)jarg1;
  arg2 = (Dali::ViewMode)jarg2;
  {
    try {
      (arg1)->SetViewMode(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Application_GetViewMode(void * jarg1) {
  int jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::ViewMode result;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::ViewMode)((Dali::Application const *)arg1)->GetViewMode();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_SetStereoBase(void * jarg1, float jarg2) {
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  float arg2 ;

  arg1 = (Dali::Application *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetStereoBase(arg2);
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


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Application_GetStereoBase(void * jarg1) {
  float jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  float result;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (float)((Dali::Application const *)arg1)->GetStereoBase();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_InitSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->InitSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_TerminateSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->TerminateSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_PauseSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->PauseSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_ResumeSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->ResumeSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_ResetSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->ResetSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_ResizeSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->ResizeSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_AppControlSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppControlSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppControlSignalType *) &(arg1)->AppControlSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_LanguageChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->LanguageChangedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_RegionChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->RegionChangedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_BatteryLowSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->BatteryLowSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_MemoryLowSignal(void * jarg1) {
  void * jresult ;
  Dali::Application *arg1 = (Dali::Application *) 0 ;
  Dali::Application::AppSignalType *result = 0 ;

  arg1 = (Dali::Application *)jarg1;
  {
    try {
      result = (Dali::Application::AppSignalType *) &(arg1)->MemoryLowSignal();
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ApplicationSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Application &) > *arg1 = (Dali::Signal< void (Dali::Application &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Application &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Application &) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ApplicationSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Application &) > *arg1 = (Dali::Signal< void (Dali::Application &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Application &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Application &) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &) > *arg1 = (Dali::Signal< void (Dali::Application &) > *) 0 ;
  void (*arg2)(Dali::Application &) = (void (*)(Dali::Application &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &) > *)jarg1;
  arg2 = (void (*)(Dali::Application &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &) > *arg1 = (Dali::Signal< void (Dali::Application &) > *) 0 ;
  void (*arg2)(Dali::Application &) = (void (*)(Dali::Application &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &) > *)jarg1;
  arg2 = (void (*)(Dali::Application &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &) > *arg1 = (Dali::Signal< void (Dali::Application &) > *) 0 ;
  Dali::Application *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &) > *)jarg1;
  arg2 = (Dali::Application *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Emit(arg1,*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ApplicationSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Application &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Application &) > *)new Dali::Signal< void (Dali::Application &) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ApplicationSignal(void * jarg1) {
  Dali::Signal< void (Dali::Application &) > *arg1 = (Dali::Signal< void (Dali::Application &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &) > *)jarg1;
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Application &,void *) > *arg1 = (Dali::Signal< void (Dali::Application &,void *) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Application &,void *) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Empty((Dali::Signal< void (Dali::Application &,void *) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Application &,void *) > *arg1 = (Dali::Signal< void (Dali::Application &,void *) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Application &,void *) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Application &,void *) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &,void *) > *arg1 = (Dali::Signal< void (Dali::Application &,void *) > *) 0 ;
  void (*arg2)(Dali::Application &,void *) = (void (*)(Dali::Application &,void *)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,void *) > *)jarg1;
  arg2 = (void (*)(Dali::Application &,void *))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &,void *) > *arg1 = (Dali::Signal< void (Dali::Application &,void *) > *) 0 ;
  void (*arg2)(Dali::Application &,void *) = (void (*)(Dali::Application &,void *)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,void *) > *)jarg1;
  arg2 = (void (*)(Dali::Application &,void *))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_Emit(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Signal< void (Dali::Application &,void *) > *arg1 = (Dali::Signal< void (Dali::Application &,void *) > *) 0 ;
  Dali::Application *arg2 = 0 ;
  void *arg3 = (void *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,void *) > *)jarg1;
  arg2 = (Dali::Application *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application & type is null", 0);
    return ;
  }
  arg3 = jarg3;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Emit(arg1,*arg2,arg3);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ApplicationControlSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Application &,void *) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Application &,void *) > *)new Dali::Signal< void (Dali::Application &,void *) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ApplicationControlSignal(void * jarg1) {
  Dali::Signal< void (Dali::Application &,void *) > *arg1 = (Dali::Signal< void (Dali::Application &,void *) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,void *) > *)jarg1;
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


/*application-devel binding*/

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Application_New__SWIG_4(int jarg1, char * jarg3, int jarg4, void * jarg5) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  std::string *arg3 = 0 ;
  Dali::Application::WINDOW_MODE arg4 ;
  Dali::PositionSize arg5 ;
  Dali::PositionSize *argp5 ;
  Dali::Application result;

  {
    // Todo generate argv data from the C# args
    char **array;         // two dimensional array
    int numStrings = 1;     // number of strings
    int stringLength = 30;      // max string length.
    array = (char **)malloc( (numStrings + 1 )* sizeof(char *) );
    argV = array;

    // allocate the string data
    for( int i=0; i < numStrings; i++)
    {
      array[i]=(char *)malloc( stringLength * sizeof(char *) );
    }
    array[ numStrings ] =  NULL; // we allocated +1 for hold the NULL part

    strcpy( array[0], "dali-csharp-app");

    arg1 = &argC;
    arg2 = &argV;
  }
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  arg4 = (Dali::Application::WINDOW_MODE)jarg4;
  argp5 = (Dali::PositionSize *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }
  arg5 = *argp5;
  {
    try {
      result = Dali::Application::New(arg1,arg2,(std::string const &)*arg3,arg4,arg5);
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
  jresult = new Dali::Application((const Dali::Application &)result);

  return jresult;
}



#ifdef __cplusplus
}
#endif

