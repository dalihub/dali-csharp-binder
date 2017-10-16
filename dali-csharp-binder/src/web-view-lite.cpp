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

#ifndef CSHARP_WEB_VIEW_LITE
#define CSHARP_WEB_VIEW_LITE
#endif

#include "common.h"

#include <dali-toolkit/devel-api/controls/web-view-lite/web-view-lite.h>

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__Empty(Dali::Signal< void(Dali::Toolkit::WebViewLite &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__GetConnectionCount(Dali::Signal< void(Dali::Toolkit::WebViewLite &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__Connect(Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *self, void(*func)(Dali::Toolkit::WebViewLite &)){
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__Disconnect(Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *self, void(*func)(Dali::Toolkit::WebViewLite &)){
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__Emit(Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *self, Dali::Toolkit::WebViewLite &arg){
  self->Emit(arg);
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebViewLite_New() {
  void * jresult ;
  Dali::Toolkit::WebViewLite result;

  {
    try {
      result = Dali::Toolkit::WebViewLite::New();
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
  jresult = new Dali::Toolkit::WebViewLite((const Dali::Toolkit::WebViewLite &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewLite__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::WebViewLite *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::WebViewLite *)new Dali::Toolkit::WebViewLite();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewLite(void * jarg1) {
  Dali::Toolkit::WebViewLite *arg1 = (Dali::Toolkit::WebViewLite *) 0 ;

  arg1 = (Dali::Toolkit::WebViewLite *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewLite__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::WebViewLite *arg1 = 0 ;
  Dali::Toolkit::WebViewLite *result = 0 ;

  arg1 = (Dali::Toolkit::WebViewLite *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebViewLite const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::WebViewLite *)new Dali::Toolkit::WebViewLite((Dali::Toolkit::WebViewLite const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebViewLite_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::WebViewLite *arg1 = (Dali::Toolkit::WebViewLite *) 0 ;
  Dali::Toolkit::WebViewLite *arg2 = 0 ;
  Dali::Toolkit::WebViewLite *result = 0 ;

  arg1 = (Dali::Toolkit::WebViewLite *)jarg1;
  arg2 = (Dali::Toolkit::WebViewLite *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebViewLite const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::WebViewLite *) &(arg1)->operator =((Dali::Toolkit::WebViewLite const &)*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebViewLite_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::WebViewLite result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::WebViewLite::DownCast(arg1);
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
  jresult = new Dali::Toolkit::WebViewLite((const Dali::Toolkit::WebViewLite &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewLite_CreateInstance(void * jarg1, int jarg2, int jarg3, int jarg4, int jarg5, char * jarg6, char * jarg7) {
  Dali::Toolkit::WebViewLite *arg1 = (Dali::Toolkit::WebViewLite *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;
  std::string *arg6 = 0 ;
  std::string *arg7 = 0 ;

  arg1 = (Dali::Toolkit::WebViewLite *)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  arg4 = (int)jarg4;
  arg5 = (int)jarg5;
  if (!jarg6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg6_str(jarg6);
  arg6 = &arg6_str;
  if (!jarg7) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg7_str(jarg7);
  arg7 = &arg7_str;
  {
    try {
      (arg1)->CreateInstance(arg2, arg3, arg4, arg5, (std::string const &)*arg6, (std::string const &)*arg7);
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


  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewLite_DestroyInstance(void * jarg1) {
  Dali::Toolkit::WebViewLite *arg1 = (Dali::Toolkit::WebViewLite *) 0 ;

  arg1 = (Dali::Toolkit::WebViewLite *)jarg1;
  {
    try {
      (arg1)->DestroyInstance();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewLite_LoadHtml(void * jarg1, char * jarg2) {
  Dali::Toolkit::WebViewLite *arg1 = (Dali::Toolkit::WebViewLite *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::WebViewLite *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->LoadHtml((std::string const &)*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebViewLite_FinishedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::WebViewLite *arg1 = (Dali::Toolkit::WebViewLite *) 0 ;
  Dali::Toolkit::WebViewLite::WebViewLiteSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::WebViewLite *)jarg1;
  {
    try {
      result = (Dali::Toolkit::WebViewLite::WebViewLiteSignalType *) &(arg1)->FinishedSignal();
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

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WebViewLiteSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__Empty((Dali::Signal< void(Dali::Toolkit::WebViewLite &) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WebViewLiteSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__GetConnectionCount((Dali::Signal< void(Dali::Toolkit::WebViewLite &) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewLiteSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *) 0 ;
  void(*arg2)(Dali::Toolkit::WebViewLite &) = (void(*)(Dali::Toolkit::WebViewLite &)) 0 ;

  arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *)jarg1;
  arg2 = (void(*)(Dali::Toolkit::WebViewLite &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__Connect(arg1, arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewLiteSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *) 0 ;
  void(*arg2)(Dali::Toolkit::WebViewLite &) = (void(*)(Dali::Toolkit::WebViewLite &)) 0 ;

  arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *)jarg1;
  arg2 = (void(*)(Dali::Toolkit::WebViewLite &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__Disconnect(arg1, arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewLiteSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *) 0 ;
  Dali::Toolkit::WebViewLite *arg2 = 0 ;

  arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *)jarg1;
  arg2 = (Dali::Toolkit::WebViewLite *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebViewLite & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_WebViewLite_SA__SP__Sg__Emit(arg1, *arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewLiteSignal() {
  void * jresult ;
  Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *)new Dali::Signal< void(Dali::Toolkit::WebViewLite &) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewLiteSignal(void * jarg1) {
  Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *) 0 ;

  arg1 = (Dali::Signal< void(Dali::Toolkit::WebViewLite &) > *)jarg1;
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

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_WebViewLite_SWIGUpcast(Dali::Toolkit::WebViewLite *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

#ifdef __cplusplus
}
#endif

