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

#include "common.h"

#include <dali/integration-api/debug.h>

#include <dali/devel-api/adaptor-framework/imf-manager.h>


#undef LOG
//#define LOG DALI_LOG_ERROR
#define LOG(a...)


#ifdef __cplusplus
extern "C" {
#endif


SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Empty(Dali::Signal< void (Dali::ImfManager&) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::ImfManager&) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Connect(Dali::Signal< void (Dali::ImfManager&) > *self, void (*func)(Dali::ImfManager &)){
    self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::ImfManager&) > *self, void (*func)(Dali::ImfManager &)){
    self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Emit(Dali::Signal< void (Dali::ImfManager&) > *self, Dali::ImfManager &arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__Empty(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > const *self){
   return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__GetConnectionCount(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > const *self){
   return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__Connect(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *self,Dali::ImfManager::ImfCallbackData (*func)(Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &)){
  return self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__Disonnect(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *self, Dali::ImfManager::ImfCallbackData (*func)(Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &)){
    self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__Emit(Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *self, Dali::ImfManager &arg1,Dali::ImfManager::ImfCallbackData const &arg2){
  self->Emit( arg1, arg2 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__Empty(Dali::Signal< void () > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__GetConnectionCount(Dali::Signal< void () > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__Connect(Dali::Signal< void () > *self, void (*func)()){
    self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__Disconnect(Dali::Signal< void () > *self, void (*func)()){
    self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__Emit(Dali::Signal< void () > *self){
  self->Emit();
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__Empty(Dali::Signal< void (bool) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (bool) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__Connect(Dali::Signal< void (bool) > *self, void (*func)(bool)){
    self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__Disconnect(Dali::Signal< void (bool) > *self, void (*func)(bool)){
    self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__Emit(Dali::Signal< void (bool) > *self, bool arg){
  self->Emit( arg );
}


// ActivatedSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::ImfManager&) > *arg1 = (Dali::Signal< void (Dali::ImfManager&) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::ImfManager&) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__Empty((Dali::Signal< void (Dali::ImfManager&) > const *)arg1);
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
  Dali::Signal< void (Dali::ImfManager&) > *arg1 = (Dali::Signal< void (Dali::ImfManager&) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::ImfManager&) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_ImfManager_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::ImfManager&) > const *)arg1);
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
  Dali::Signal< void (Dali::ImfManager&) > *arg1 = (Dali::Signal< void (Dali::ImfManager&) > *) 0 ;
  void (*arg2)(Dali::ImfManager&) = (void (*)(Dali::ImfManager&)) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager&) > *)jarg1;
  arg2 = (void (*)(Dali::ImfManager&))jarg2;
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
  Dali::Signal< void (Dali::ImfManager&) > *arg1 = (Dali::Signal< void (Dali::ImfManager&) > *) 0 ;
  void (*arg2)(Dali::ImfManager&) = (void (*)(Dali::ImfManager&)) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager&) > *)jarg1;
  arg2 = (void (*)(Dali::ImfManager&))jarg2;
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
  Dali::Signal< void (Dali::ImfManager&) > *arg1 = (Dali::Signal< void (Dali::ImfManager&) > *) 0 ;
  Dali::ImfManager *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager&) > *)jarg1;
  arg2 = (Dali::ImfManager *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::ImfManager& type is null", 0);
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
  Dali::Signal< void (Dali::ImfManager&) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::ImfManager&) > *)new Dali::Signal< void (Dali::ImfManager&) >();
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
  Dali::Signal< void (Dali::ImfManager&) > *arg1 = (Dali::Signal< void (Dali::ImfManager&) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::ImfManager&) > *)jarg1;
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
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__Empty((Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > const *)arg1);
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
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__GetConnectionCount((Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > const *)arg1);
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
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *) 0 ;
  Dali::ImfManager::ImfCallbackData (*arg2)(Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) = (Dali::ImfManager::ImfCallbackData (*)(Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &)) 0 ;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *)jarg1;
  arg2 = (Dali::ImfManager::ImfCallbackData (*)(Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__Connect(arg1,arg2);
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
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *) 0 ;
  Dali::ImfManager::ImfCallbackData (*arg2)(Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) = (Dali::ImfManager::ImfCallbackData (*)(Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &)) 0 ;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *)jarg1;
  arg2 = (Dali::ImfManager::ImfCallbackData (*)(Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__Disonnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfEventSignalType_Emit(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *) 0 ;
  Dali::ImfManager *arg2 = 0 ;
  Dali::ImfManager::ImfCallbackData *arg3 = 0;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *)jarg1;
  arg2 = (Dali::ImfManager *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::ImfManager& type is null", 0);
    return ;
  }
  arg3 = (Dali::ImfManager::ImfCallbackData *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::ImfManager::ImfCallbackData const & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Event_SA__SP__Sg__Emit(arg1,*arg2,*arg3);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImfEventSignalType() {
  void * jresult ;
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *)new Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) >();
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
  Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *) 0 ;

  arg1 = (Dali::Signal< Dali::ImfManager::ImfCallbackData (Dali::ImfManager&,Dali::ImfManager::ImfCallbackData const &) > *)jarg1;
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
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ImfVoidSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void () > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__Empty((Dali::Signal< void () > const *)arg1);
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
      result = Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__GetConnectionCount((Dali::Signal< void () > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImfVoidSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  void (*arg2)() = (void (*)()) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  arg2 = (void (*)())jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__Connect(arg1,arg2);
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
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__Disconnect(arg1,arg2);
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
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Void_SA__SP__Sg__Emit(arg1);
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


// StatusSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_StatusSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__Empty((Dali::Signal< void (bool) > const *)arg1);
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
      result = Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (bool) > const *)arg1);
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
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__Connect(arg1,arg2);
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
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  bool arg2;
  bool *argp2;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  argp2 = (bool *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null bool", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_ImfManager_Status_SA__SP__Sg__Emit(arg1,arg2);
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



#ifdef __cplusplus
}
#endif

