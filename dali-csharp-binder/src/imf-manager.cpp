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

#ifndef CSHARP_IMF_MANAGER
#define CSHARP_IMF_MANAGER
#endif

#include "common.h"
#include <dali/devel-api/adaptor-framework/imf-manager.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Empty(Dali::Signal< void (Dali::ImfManager &) > const *self){
         return self->Empty();
      }
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::ImfManager &) > const *self){
        return self->GetConnectionCount();
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Connect(Dali::Signal< void (Dali::ImfManager &) > *self,void (*func)(Dali::ImfManager &)){
          self->Connect( func );
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::ImfManager &) > *self,void (*func)(Dali::ImfManager &)){
          self->Disconnect( func );
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Emit(Dali::Signal< void (Dali::ImfManager &) > *self,Dali::ImfManager &arg){
          self->Emit( arg );
      }
SWIGINTERN bool Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__Empty(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > const *self){
         return self->Empty();
      }
SWIGINTERN std::size_t Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > const *self){
        return self->GetConnectionCount();
      }
SWIGINTERN void Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__Connect(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *self,Dali::ImfManager::ImfCallbackData (*func)(Dali::ImfManager &,Dali::ImfManager::ImfEventData const &)){
        self->Connect( func );
      }
SWIGINTERN void Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *self,Dali::ImfManager::ImfCallbackData (*func)(Dali::ImfManager &,Dali::ImfManager::ImfEventData const &)){
        self->Disconnect( func );
      }
SWIGINTERN Dali::ImfManager::ImfCallbackData Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__Emit(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *self,Dali::ImfManager &arg1,Dali::ImfManager::ImfEventData const &arg2){
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
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__Empty(Dali::Signal< void (Dali::ImfManager::KeyboardType) > const *self){
         return self->Empty();
      }
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::ImfManager::KeyboardType) > const *self){
        return self->GetConnectionCount();
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__Connect(Dali::Signal< void (Dali::ImfManager::KeyboardType) > *self,void (*func)(Dali::ImfManager::KeyboardType)){
          self->Connect( func );
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__Disconnect(Dali::Signal< void (Dali::ImfManager::KeyboardType) > *self,void (*func)(Dali::ImfManager::KeyboardType)){
          self->Disconnect( func );
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__Emit(Dali::Signal< void (Dali::ImfManager::KeyboardType) > *self,Dali::ImfManager::KeyboardType arg){
          self->Emit( arg );
      }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_ImfManager_SWIGUpcast(Dali::ImfManager *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImfManager_ImfEventData__SWIG_0() {
  void * jresult ;
  Dali::ImfManager::ImfEventData *result = 0 ;

  {
    try {
      result = (Dali::ImfManager::ImfEventData *)new Dali::ImfManager::ImfEventData();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImfManager_ImfEventData__SWIG_1(int jarg1, char * jarg2, int jarg3, int jarg4) {
  void * jresult ;
  Dali::ImfManager::ImfEvent arg1 ;
  std::string *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  Dali::ImfManager::ImfEventData *result = 0 ;

  arg1 = (Dali::ImfManager::ImfEvent)jarg1;
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
      result = (Dali::ImfManager::ImfEventData *)new Dali::ImfManager::ImfEventData(arg1,(std::string const &)*arg2,arg3,arg4);
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

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ImfEventData_predictiveString_set(void * jarg1, char * jarg2) {
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->predictiveString = *arg2;

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_ImfManager_ImfEventData_predictiveString_get(void * jarg1) {
  char * jresult ;
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
  result = (std::string *) & ((arg1)->predictiveString);
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ImfEventData_eventName_set(void * jarg1, int jarg2) {
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;
  Dali::ImfManager::ImfEvent arg2 ;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
  arg2 = (Dali::ImfManager::ImfEvent)jarg2;
  if (arg1) (arg1)->eventName = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImfManager_ImfEventData_eventName_get(void * jarg1) {
  int jresult ;
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;
  Dali::ImfManager::ImfEvent result;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
  result = (Dali::ImfManager::ImfEvent) ((arg1)->eventName);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ImfEventData_cursorOffset_set(void * jarg1, int jarg2) {
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;
  int arg2 ;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->cursorOffset = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImfManager_ImfEventData_cursorOffset_get(void * jarg1) {
  int jresult ;
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;
  int result;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
  result = (int) ((arg1)->cursorOffset);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ImfEventData_numberOfChars_set(void * jarg1, int jarg2) {
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;
  int arg2 ;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->numberOfChars = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImfManager_ImfEventData_numberOfChars_get(void * jarg1) {
  int jresult ;
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;
  int result;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
  result = (int) ((arg1)->numberOfChars);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ImfManager_ImfEventData(void * jarg1) {
  Dali::ImfManager::ImfEventData *arg1 = (Dali::ImfManager::ImfEventData *) 0 ;

  arg1 = (Dali::ImfManager::ImfEventData *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImfManager_ImfCallbackData__SWIG_0() {
  void * jresult ;
  Dali::ImfManager::ImfCallbackData *result = 0 ;

  {
    try {
      result = (Dali::ImfManager::ImfCallbackData *)new Dali::ImfManager::ImfCallbackData();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImfManager_ImfCallbackData__SWIG_1(unsigned int jarg1, int jarg2, char * jarg3, unsigned int jarg4) {
  void * jresult ;
  bool arg1 ;
  int arg2 ;
  std::string *arg3 = 0 ;
  bool arg4 ;
  Dali::ImfManager::ImfCallbackData *result = 0 ;

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
      result = (Dali::ImfManager::ImfCallbackData *)new Dali::ImfManager::ImfCallbackData(arg1,arg2,(std::string const &)*arg3,arg4);
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

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ImfCallbackData_currentText_set(void * jarg1, char * jarg2) {
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->currentText = *arg2;

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_ImfManager_ImfCallbackData_currentText_get(void * jarg1) {
  char * jresult ;
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
  result = (std::string *) & ((arg1)->currentText);
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ImfCallbackData_cursorPosition_set(void * jarg1, int jarg2) {
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;
  int arg2 ;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->cursorPosition = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImfManager_ImfCallbackData_cursorPosition_get(void * jarg1) {
  int jresult ;
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;
  int result;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
  result = (int) ((arg1)->cursorPosition);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ImfCallbackData_update_set(void * jarg1, unsigned int jarg2) {
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;
  bool arg2 ;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
  arg2 = jarg2 ? true : false;
  if (arg1) (arg1)->update = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ImfManager_ImfCallbackData_update_get(void * jarg1) {
  unsigned int jresult ;
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;
  bool result;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
  result = (bool) ((arg1)->update);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ImfCallbackData_preeditResetRequired_set(void * jarg1, unsigned int jarg2) {
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;
  bool arg2 ;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
  arg2 = jarg2 ? true : false;
  if (arg1) (arg1)->preeditResetRequired = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ImfManager_ImfCallbackData_preeditResetRequired_get(void * jarg1) {
  unsigned int jresult ;
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;
  bool result;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
  result = (bool) ((arg1)->preeditResetRequired);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ImfManager_ImfCallbackData(void * jarg1) {
  Dali::ImfManager::ImfCallbackData *arg1 = (Dali::ImfManager::ImfCallbackData *) 0 ;

  arg1 = (Dali::ImfManager::ImfCallbackData *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfManager_Get() {
  void * jresult ;
  Dali::ImfManager result;

  {
    try {
      result = Dali::ImfManager::Get();
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
  jresult = new Dali::ImfManager((const Dali::ImfManager &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_Activate(void * jarg1) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_Deactivate(void * jarg1) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ImfManager_RestoreAfterFocusLost(void * jarg1) {
  unsigned int jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  bool result;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (bool)((Dali::ImfManager const *)arg1)->RestoreAfterFocusLost();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_SetRestoreAfterFocusLost(void * jarg1, unsigned int jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  bool arg2 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_Reset(void * jarg1) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_NotifyCursorPosition(void * jarg1) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_SetCursorPosition(void * jarg1, unsigned int jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ImfManager_GetCursorPosition(void * jarg1) {
  unsigned int jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  unsigned int result;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::ImfManager const *)arg1)->GetCursorPosition();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_SetSurroundingText(void * jarg1, char * jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_ImfManager_GetSurroundingText(void * jarg1) {
  char * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (std::string *) &((Dali::ImfManager const *)arg1)->GetSurroundingText();
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
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_NotifyTextInputMultiLine(void * jarg1, unsigned int jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  bool arg2 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImfManager_GetTextDirection(void * jarg1) {
  int jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::TextDirection result;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::TextDirection)(arg1)->GetTextDirection();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfManager_GetInputMethodArea(void * jarg1) {
  void * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::Rect< int > result;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = new Dali::Rect< int >((const Dali::Rect< int > &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ApplyOptions(void * jarg1, void * jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::InputMethodOptions *arg2 = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_SetInputPanelUserData(void * jarg1, char * jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetInputPanelUserData((std::string const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_GetInputPanelUserData(void * jarg1, char** jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;

  //typemap in
  std::string temp;
  arg2 = &temp;

  {
    try {
      (arg1)->GetInputPanelUserData(*arg2);
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

  //Typemap argout in c++ file.
  //This will convert c++ string to c# string
  *jarg2 = SWIG_csharp_string_callback(arg2->c_str());

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImfManager_GetInputPanelState(void * jarg1) {
  int jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::State result;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::State)(arg1)->GetInputPanelState();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_SetReturnKeyState(void * jarg1, unsigned int jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  bool arg2 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_AutoEnableInputPanel(void * jarg1, unsigned int jarg2) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  bool arg2 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_ShowInputPanel(void * jarg1) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfManager_HideInputPanel(void * jarg1) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImfManager_GetKeyboardType(void * jarg1) {
  int jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::KeyboardType result;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::KeyboardType)(arg1)->GetKeyboardType();
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


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_ImfManager_GetInputPanelLocale(void * jarg1) {
  char * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  std::string result;

  arg1 = (Dali::ImfManager *)jarg1;
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfManager_ActivatedSignal(void * jarg1) {
  void * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::ImfManagerSignalType *result = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::ImfManagerSignalType *) &(arg1)->ActivatedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfManager_EventReceivedSignal(void * jarg1) {
  void * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::ImfEventSignalType *result = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::ImfEventSignalType *) &(arg1)->EventReceivedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfManager_StatusChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::StatusSignalType *result = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::StatusSignalType *) &(arg1)->StatusChangedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfManager_ResizedSignal(void * jarg1) {
  void * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::VoidSignalType *result = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::VoidSignalType *) &(arg1)->ResizedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfManager_LanguageChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::VoidSignalType *result = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::VoidSignalType *) &(arg1)->LanguageChangedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfManager_KeyboardTypeChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;
  Dali::ImfManager::KeyboardTypeSignalType *result = 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
  {
    try {
      result = (Dali::ImfManager::KeyboardTypeSignalType *) &(arg1)->KeyboardTypeChangedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImfManager() {
  void * jresult ;
  Dali::ImfManager *result = 0 ;

  {
    try {
      result = (Dali::ImfManager *)new Dali::ImfManager();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ImfManager(void * jarg1) {
  Dali::ImfManager *arg1 = (Dali::ImfManager *) 0 ;

  arg1 = (Dali::ImfManager *)jarg1;
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



// ActivatedSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::ImfManager &) > *arg1 = (Dali::Signal< void (Dali::ImfManager &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::ImfManager &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Empty((Dali::Signal< void (Dali::ImfManager &) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ActivatedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::ImfManager &) > *arg1 = (Dali::Signal< void (Dali::ImfManager &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::ImfManager &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::ImfManager &) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::ImfManager &) > *arg1 = (Dali::Signal< void (Dali::ImfManager &) > *) 0 ;
  void (*arg2)(Dali::ImfManager &) = (void (*)(Dali::ImfManager &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager &) > *)jarg1;
  arg2 = (void (*)(Dali::ImfManager &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::ImfManager &) > *arg1 = (Dali::Signal< void (Dali::ImfManager &) > *) 0 ;
  void (*arg2)(Dali::ImfManager &) = (void (*)(Dali::ImfManager &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager &) > *)jarg1;
  arg2 = (void (*)(Dali::ImfManager &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::ImfManager &) > *arg1 = (Dali::Signal< void (Dali::ImfManager &) > *) 0 ;
  Dali::ImfManager *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager &) > *)jarg1;
  arg2 = (Dali::ImfManager *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::ImfManager & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Emit(arg1,*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ActivatedSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::ImfManager &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::ImfManager &) > *)new Dali::Signal< void (Dali::ImfManager &) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ActivatedSignalType(void * jarg1) {
  Dali::Signal< void (Dali::ImfManager &) > *arg1 = (Dali::Signal< void (Dali::ImfManager &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager &) > *)jarg1;
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

// ImfEventSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ImfEventSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__Empty((Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ImfEventSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfEventSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *) 0 ;
  Dali::ImfManager::ImfCallbackData (*arg2)(Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) = (Dali::ImfManager::ImfCallbackData (*)(Dali::ImfManager &,Dali::ImfManager::ImfEventData const &)) 0 ;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *)jarg1;
  arg2 = (Dali::ImfManager::ImfCallbackData (*)(Dali::ImfManager &,Dali::ImfManager::ImfEventData const &))jarg2;
  {
    try {
      Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfEventSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *) 0 ;
  Dali::ImfManager::ImfCallbackData (*arg2)(Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) = (Dali::ImfManager::ImfCallbackData (*)(Dali::ImfManager &,Dali::ImfManager::ImfEventData const &)) 0 ;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *)jarg1;
  arg2 = (Dali::ImfManager::ImfCallbackData (*)(Dali::ImfManager &,Dali::ImfManager::ImfEventData const &))jarg2;
  {
    try {
      Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImfEventSignalType_Emit(void * jarg1, void * jarg2, void * jarg3) {
  void * jresult ;
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *) 0 ;
  Dali::ImfManager *arg2 = 0 ;
  Dali::ImfManager::ImfEventData *arg3 = 0 ;
  Dali::ImfManager::ImfCallbackData result;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *)jarg1;
  arg2 = (Dali::ImfManager *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::ImfManager & type is null", 0);
    return 0;
  }
  arg3 = (Dali::ImfManager::ImfEventData *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::ImfManager::ImfEventData const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali_Signal_Sl_Dali_ImfManager_ImfCallbackData_Sp_Dali_ImfManager_SA__Sc_Dali_ImfManager_ImfEventData_SS_const_SA__SP__Sg__Emit(arg1,*arg2,(Dali::ImfManager::ImfEventData const &)*arg3);
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
  jresult = new Dali::ImfManager::ImfCallbackData((const Dali::ImfManager::ImfCallbackData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImfEventSignalType() {
  void * jresult ;
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *)new Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ImfEventSignalType(void * jarg1) {
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *) 0 ;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager &,Dali::ImfManager::ImfEventData const &) > *)jarg1;
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


// ImfVoidSignalType
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImfVoidSignalType() {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ImfVoidSignalType(void * jarg1) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ImfVoidSignalType_Empty(void * jarg1) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ImfVoidSignalType_GetConnectionCount(void * jarg1) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfVoidSignalType_Connect__SWIG_0(void * jarg1, void * jarg2) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfVoidSignalType_Disconnect(void * jarg1, void * jarg2) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfVoidSignalType_Connect__SWIG_4(void * jarg1, void * jarg2, void * jarg3) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfVoidSignalType_Emit(void * jarg1) {
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
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
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}

//KeyboardTypeSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::ImfManager::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__Empty((Dali::Signal< void (Dali::ImfManager::KeyboardType) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::ImfManager::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::ImfManager::KeyboardType) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::ImfManager::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *) 0 ;
  void (*arg2)(Dali::ImfManager::KeyboardType) = (void (*)(Dali::ImfManager::KeyboardType)) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *)jarg1;
  arg2 = (void (*)(Dali::ImfManager::KeyboardType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::ImfManager::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *) 0 ;
  void (*arg2)(Dali::ImfManager::KeyboardType) = (void (*)(Dali::ImfManager::KeyboardType)) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *)jarg1;
  arg2 = (void (*)(Dali::ImfManager::KeyboardType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Emit(void * jarg1, int jarg2) {
  Dali::Signal< void (Dali::ImfManager::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *) 0 ;
  Dali::ImfManager::KeyboardType arg2 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *)jarg1;
  arg2 = (Dali::ImfManager::KeyboardType)jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_KeyboardType_SP__Sg__Emit(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_KeyboardTypeSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::ImfManager::KeyboardType) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *)new Dali::Signal< void (Dali::ImfManager::KeyboardType) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardTypeSignalType(void * jarg1) {
  Dali::Signal< void (Dali::ImfManager::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager::KeyboardType) > *)jarg1;
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

