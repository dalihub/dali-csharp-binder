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

#ifndef CSHARP_WATCH
#define CSHARP_WATCH
#endif

#include "common.h"
#include <dali/public-api/watch/watch-time.h>
#include <dali/public-api/watch/watch-application.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


// keep argcs and argv so they're always available to DALi
int argWatchC = 1;
char **argWatchV = NULL;

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *self,void (*func)(Dali::Application &,Dali::WatchTime const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *self,void (*func)(Dali::Application &,Dali::WatchTime const &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *self,Dali::Application &arg1,Dali::WatchTime const &arg2){
  self->Emit( arg1, arg2 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__Empty(Dali::Signal< void (Dali::Application &,bool) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Application &,bool) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__Connect(Dali::Signal< void (Dali::Application &,bool) > *self,void (*func)(Dali::Application &,bool)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__Disconnect(Dali::Signal< void (Dali::Application &,bool) > *self,void (*func)(Dali::Application &,bool)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__Emit(Dali::Signal< void (Dali::Application &,bool) > *self,Dali::Application &arg1,bool arg2){
  self->Emit( arg1, arg2 );
}

#ifdef __cplusplus
extern "C" {
#endif

/*watch binding*/

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WatchTime() {
  void * jresult ;
  Dali::WatchTime *result = 0 ;

  {
    try {
      result = (Dali::WatchTime *)new Dali::WatchTime();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WatchTime(void * jarg1) {
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;

  arg1 = (Dali::WatchTime *)jarg1;
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetHour(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetHour();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetHour24(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetHour24();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetMinute(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetMinute();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetSecond(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetSecond();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetMillisecond(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetMillisecond();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetYear(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetYear();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetMonth(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetMonth();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetDay(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetDay();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WatchTime_GetDayOfWeek(void * jarg1) {
  int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  int result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (int)((Dali::WatchTime const *)arg1)->GetDayOfWeek();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchTime_GetUtcTime(void * jarg1) {
  void * jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  tm result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = ((Dali::WatchTime const *)arg1)->GetUtcTime();
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
  jresult = new tm((const tm &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchTime_GetUtcTimeStamp(void * jarg1) {
  void * jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  time_t result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = ((Dali::WatchTime const *)arg1)->GetUtcTimeStamp();
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
  jresult = new time_t((const time_t &)result);
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_WatchTime_GetTimeZone(void * jarg1) {
  char * jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  char *result = 0 ;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (char *)((Dali::WatchTime const *)arg1)->GetTimeZone();
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WatchTime_GetDaylightSavingTimeStatus(void * jarg1) {
  unsigned int jresult ;
  Dali::WatchTime *arg1 = (Dali::WatchTime *) 0 ;
  bool result;

  arg1 = (Dali::WatchTime *)jarg1;
  {
    try {
      result = (bool)((Dali::WatchTime const *)arg1)->GetDaylightSavingTimeStatus();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchApplication_New__SWIG_0() {
  void * jresult ;
  Dali::WatchApplication result;

  {
    try {
      result = Dali::WatchApplication::New();
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
  jresult = new Dali::WatchApplication((const Dali::WatchApplication &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchApplication_New__SWIG_1(int jarg1, char * jarg2) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  Dali::WatchApplication result;
  {
    int index=0;
    char *retPtr;
    char *nextPtr;
    argWatchC = jarg1;
    argWatchV = new char*[jarg1 + 1];

    retPtr = strtok_r(jarg2, " ", &nextPtr);
    argWatchV[index] = new char[strlen(retPtr) + 1];
    strncpy(argWatchV[index], retPtr, strlen(retPtr));
    argWatchV[index][strlen(retPtr)] = '\0';
    index++;

    while( index < jarg1 )
    {
      retPtr = strtok_r(NULL, " ", &nextPtr);
      argWatchV[index] = new char[strlen(retPtr)+1];
      strncpy(argWatchV[index], retPtr, strlen(retPtr));
      argWatchV[index][strlen(retPtr)] = '\0';
      index++;
    }
  }

  argWatchV[jarg1] = NULL;

  arg1 = &argWatchC;
  arg2 = &argWatchV;
  {
    try {
      result = Dali::WatchApplication::New(arg1,arg2);
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
  jresult = new Dali::WatchApplication((const Dali::WatchApplication &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchApplication_New__SWIG_2(int jarg1, char * jarg2, char * jarg3) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  std::string *arg3 = 0 ;
  Dali::WatchApplication result;
  {
    int index=0;
    char *retPtr;
    char *nextPtr;
    argWatchC = jarg1;
    argWatchV = new char*[jarg1 + 1];

    retPtr = strtok_r(jarg2, " ", &nextPtr);
    argWatchV[index] = new char[strlen(retPtr) + 1];
    strncpy(argWatchV[index], retPtr, strlen(retPtr));
    argWatchV[index][strlen(retPtr)] = '\0';
    index++;

    while( index < jarg1 )
    {
      retPtr = strtok_r(NULL, " ", &nextPtr);
      argWatchV[index] = new char[strlen(retPtr)+1];
      strncpy(argWatchV[index], retPtr, strlen(retPtr));
      argWatchV[index][strlen(retPtr)] = '\0';
      index++;
    }
  }

  argWatchV[jarg1] = NULL;

  arg1 = &argWatchC;
  arg2 = &argWatchV;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = Dali::WatchApplication::New(arg1,arg2,(std::string const &)*arg3);
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
  jresult = new Dali::WatchApplication((const Dali::WatchApplication &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WatchApplication__SWIG_0() {
  void * jresult ;
  Dali::WatchApplication *result = 0 ;

  {
    try {
      result = (Dali::WatchApplication *)new Dali::WatchApplication();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WatchApplication__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::WatchApplication *arg1 = 0 ;
  Dali::WatchApplication *result = 0 ;

  arg1 = (Dali::WatchApplication *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WatchApplication const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WatchApplication *)new Dali::WatchApplication((Dali::WatchApplication const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchApplication_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::WatchApplication *arg1 = (Dali::WatchApplication *) 0 ;
  Dali::WatchApplication *arg2 = 0 ;
  Dali::WatchApplication *result = 0 ;

  arg1 = (Dali::WatchApplication *)jarg1;
  arg2 = (Dali::WatchApplication *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WatchApplication const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WatchApplication *) &(arg1)->operator =((Dali::WatchApplication const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WatchApplication(void * jarg1) {
  Dali::WatchApplication *arg1 = (Dali::WatchApplication *) 0 ;

  arg1 = (Dali::WatchApplication *)jarg1;
  {
    try {
      delete arg1;
      if( argWatchV )
      {
        //free string data
        for (int i=0; i<argWatchC+1; i++)
        {
          delete [] argWatchV[i];
        }
        delete [] argWatchV;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchApplication_TimeTickSignal(void * jarg1) {
  void * jresult ;
  Dali::WatchApplication *arg1 = (Dali::WatchApplication *) 0 ;
  Dali::WatchApplication::WatchTimeSignal *result = 0 ;

  arg1 = (Dali::WatchApplication *)jarg1;
  {
    try {
      result = (Dali::WatchApplication::WatchTimeSignal *) &(arg1)->TimeTickSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchApplication_AmbientTickSignal(void * jarg1) {
  void * jresult ;
  Dali::WatchApplication *arg1 = (Dali::WatchApplication *) 0 ;
  Dali::WatchApplication::WatchTimeSignal *result = 0 ;

  arg1 = (Dali::WatchApplication *)jarg1;
  {
    try {
      result = (Dali::WatchApplication::WatchTimeSignal *) &(arg1)->AmbientTickSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchApplication_AmbientChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::WatchApplication *arg1 = (Dali::WatchApplication *) 0 ;
  Dali::WatchApplication::WatchBoolSignal *result = 0 ;

  arg1 = (Dali::WatchApplication *)jarg1;
  {
    try {
      result = (Dali::WatchApplication::WatchBoolSignal *) &(arg1)->AmbientChangedSignal();
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WatchTimeSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WatchTimeSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WatchTimeSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *) 0 ;
  void (*arg2)(Dali::Application &,Dali::WatchTime const &) = (void (*)(Dali::Application &,Dali::WatchTime const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *)jarg1;
  arg2 = (void (*)(Dali::Application &,Dali::WatchTime const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WatchTimeSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *) 0 ;
  void (*arg2)(Dali::Application &,Dali::WatchTime const &) = (void (*)(Dali::Application &,Dali::WatchTime const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *)jarg1;
  arg2 = (void (*)(Dali::Application &,Dali::WatchTime const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WatchTimeSignal_Emit(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *) 0 ;
  Dali::Application *arg2 = 0 ;
  Dali::WatchTime *arg3 = 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *)jarg1;
  arg2 = (Dali::Application *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application & type is null", 0);
    return ;
  }
  arg3 = (Dali::WatchTime *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WatchTime const & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_Dali_WatchTime_SS_const_SA__SP__Sg__Emit(arg1,*arg2,(Dali::WatchTime const &)*arg3);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WatchTimeSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *)new Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WatchTimeSignal(void * jarg1) {
  Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,Dali::WatchTime const &) > *)jarg1;
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WatchBoolSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Application &,bool) > *arg1 = (Dali::Signal< void (Dali::Application &,bool) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Application &,bool) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__Empty((Dali::Signal< void (Dali::Application &,bool) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WatchBoolSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Application &,bool) > *arg1 = (Dali::Signal< void (Dali::Application &,bool) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Application &,bool) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Application &,bool) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WatchBoolSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &,bool) > *arg1 = (Dali::Signal< void (Dali::Application &,bool) > *) 0 ;
  void (*arg2)(Dali::Application &,bool) = (void (*)(Dali::Application &,bool)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,bool) > *)jarg1;
  arg2 = (void (*)(Dali::Application &,bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WatchBoolSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Application &,bool) > *arg1 = (Dali::Signal< void (Dali::Application &,bool) > *) 0 ;
  void (*arg2)(Dali::Application &,bool) = (void (*)(Dali::Application &,bool)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,bool) > *)jarg1;
  arg2 = (void (*)(Dali::Application &,bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WatchBoolSignal_Emit(void * jarg1, void * jarg2, unsigned int jarg3) {
  Dali::Signal< void (Dali::Application &,bool) > *arg1 = (Dali::Signal< void (Dali::Application &,bool) > *) 0 ;
  Dali::Application *arg2 = 0 ;
  bool arg3 ;

  arg1 = (Dali::Signal< void (Dali::Application &,bool) > *)jarg1;
  arg2 = (Dali::Application *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application & type is null", 0);
    return ;
  }
  arg3 = jarg3 ? true : false;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_bool_SP__Sg__Emit(arg1,*arg2,arg3);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WatchBoolSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Application &,bool) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Application &,bool) > *)new Dali::Signal< void (Dali::Application &,bool) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WatchBoolSignal(void * jarg1) {
  Dali::Signal< void (Dali::Application &,bool) > *arg1 = (Dali::Signal< void (Dali::Application &,bool) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Application &,bool) > *)jarg1;
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

