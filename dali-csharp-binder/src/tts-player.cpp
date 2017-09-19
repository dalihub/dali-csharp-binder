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

#ifndef CSHARP_TTS_PLAYER
#define CSHARP_TTS_PLAYER
#endif

#include "common.h"
#include <dali/public-api/adaptor-framework/tts-player.h>

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__Empty(Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__Connect(Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *self,void (*func)(Dali::TtsPlayer::State const,Dali::TtsPlayer::State const)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__Disconnect(Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *self,void (*func)(Dali::TtsPlayer::State const,Dali::TtsPlayer::State const)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__Emit(Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *self,Dali::TtsPlayer::State const arg1,Dali::TtsPlayer::State const arg2){
  self->Emit( arg1, arg2 );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_TtsPlayer_SWIGUpcast(Dali::TtsPlayer *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TtsPlayer__SWIG_0() {
  void * jresult ;
  Dali::TtsPlayer *result = 0 ;

  {
    try {
      result = (Dali::TtsPlayer *)new Dali::TtsPlayer();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TtsPlayer_Get__SWIG_0(int jarg1) {
  void * jresult ;
  Dali::TtsPlayer::Mode arg1 ;
  Dali::TtsPlayer result;

  arg1 = (Dali::TtsPlayer::Mode)jarg1;
  {
    try {
      result = Dali::TtsPlayer::Get(arg1);
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
  jresult = new Dali::TtsPlayer((const Dali::TtsPlayer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TtsPlayer_Get__SWIG_1() {
  void * jresult ;
  Dali::TtsPlayer result;

  {
    try {
      result = Dali::TtsPlayer::Get();
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
  jresult = new Dali::TtsPlayer((const Dali::TtsPlayer &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TtsPlayer(void * jarg1) {
  Dali::TtsPlayer *arg1 = (Dali::TtsPlayer *) 0 ;

  arg1 = (Dali::TtsPlayer *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TtsPlayer__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::TtsPlayer *arg1 = 0 ;
  Dali::TtsPlayer *result = 0 ;

  arg1 = (Dali::TtsPlayer *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TtsPlayer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::TtsPlayer *)new Dali::TtsPlayer((Dali::TtsPlayer const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TtsPlayer_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::TtsPlayer *arg1 = (Dali::TtsPlayer *) 0 ;
  Dali::TtsPlayer *arg2 = 0 ;
  Dali::TtsPlayer *result = 0 ;

  arg1 = (Dali::TtsPlayer *)jarg1;
  arg2 = (Dali::TtsPlayer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TtsPlayer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::TtsPlayer *) &(arg1)->operator =((Dali::TtsPlayer const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TtsPlayer_Play(void * jarg1, char * jarg2) {
  Dali::TtsPlayer *arg1 = (Dali::TtsPlayer *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::TtsPlayer *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->Play((std::string const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TtsPlayer_Stop(void * jarg1) {
  Dali::TtsPlayer *arg1 = (Dali::TtsPlayer *) 0 ;

  arg1 = (Dali::TtsPlayer *)jarg1;
  {
    try {
      (arg1)->Stop();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TtsPlayer_Pause(void * jarg1) {
  Dali::TtsPlayer *arg1 = (Dali::TtsPlayer *) 0 ;

  arg1 = (Dali::TtsPlayer *)jarg1;
  {
    try {
      (arg1)->Pause();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TtsPlayer_Resume(void * jarg1) {
  Dali::TtsPlayer *arg1 = (Dali::TtsPlayer *) 0 ;

  arg1 = (Dali::TtsPlayer *)jarg1;
  {
    try {
      (arg1)->Resume();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TtsPlayer_GetState(void * jarg1) {
  int jresult ;
  Dali::TtsPlayer *arg1 = (Dali::TtsPlayer *) 0 ;
  Dali::TtsPlayer::State result;

  arg1 = (Dali::TtsPlayer *)jarg1;
  {
    try {
      result = (Dali::TtsPlayer::State)(arg1)->GetState();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TtsPlayer_StateChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::TtsPlayer *arg1 = (Dali::TtsPlayer *) 0 ;
  Dali::TtsPlayer::StateChangedSignalType *result = 0 ;

  arg1 = (Dali::TtsPlayer *)jarg1;
  {
    try {
      result = (Dali::TtsPlayer::StateChangedSignalType *) &(arg1)->StateChangedSignal();
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_StateChangedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__Empty((Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_StateChangedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StateChangedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *) 0 ;
  void (*arg2)(Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) = (void (*)(Dali::TtsPlayer::State const,Dali::TtsPlayer::State const)) 0 ;

  arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *)jarg1;
  arg2 = (void (*)(Dali::TtsPlayer::State const,Dali::TtsPlayer::State const))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StateChangedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *) 0 ;
  void (*arg2)(Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) = (void (*)(Dali::TtsPlayer::State const,Dali::TtsPlayer::State const)) 0 ;

  arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *)jarg1;
  arg2 = (void (*)(Dali::TtsPlayer::State const,Dali::TtsPlayer::State const))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StateChangedSignalType_Emit(void * jarg1, int jarg2, int jarg3) {
  Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *) 0 ;
  Dali::TtsPlayer::State arg2 ;
  Dali::TtsPlayer::State arg3 ;

  arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *)jarg1;
  arg2 = (Dali::TtsPlayer::State)jarg2;
  arg3 = (Dali::TtsPlayer::State)jarg3;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_TtsPlayer_State_SS_const_Sc_Dali_TtsPlayer_State_SS_const_SP__Sg__Emit(arg1,arg2,arg3);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_StateChangedSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *)new Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_StateChangedSignalType(void * jarg1) {
  Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::TtsPlayer::State const,Dali::TtsPlayer::State const) > *)jarg1;
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

