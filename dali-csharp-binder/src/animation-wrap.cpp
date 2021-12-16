/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/animation/animation.h>
#include <dali/devel-api/animation/animation-devel.h>

// INTERNAL INCLUDES
#include "common.h"

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Animation &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Animation &) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Animation &) > *self,void (*func)(Dali::Animation &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Animation &) > *self,void (*func)(Dali::Animation &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Animation &) > *self,Dali::Animation &arg){
  self->Emit( arg );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_Animation_SWIGUpcast(Dali::Animation *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Animation__SWIG_0() {
  void * jresult ;
  Dali::Animation *result = 0 ;

  {
    try {
      result = (Dali::Animation *)new Dali::Animation();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Animation_New(float jarg1) {
  void * jresult ;
  float arg1 ;
  Dali::Animation result;

  arg1 = (float)jarg1;
  {
    try {
      result = Dali::Animation::New(arg1);
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = new Dali::Animation((const Dali::Animation &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Animation_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Animation result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Animation::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = new Dali::Animation((const Dali::Animation &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Animation(void * jarg1) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Animation__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Animation *arg1 = 0 ;
  Dali::Animation *result = 0 ;

  arg1 = (Dali::Animation *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Animation *)new Dali::Animation((Dali::Animation const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Animation_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Animation *arg2 = 0 ;
  Dali::Animation *result = 0 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (Dali::Animation *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Animation *) &(arg1)->operator =((Dali::Animation const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetDuration(void * jarg1, float jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  float arg2 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetDuration(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Animation_GetDuration(void * jarg1) {
  float jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  float result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (float)((Dali::Animation const *)arg1)->GetDuration();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetLooping(void * jarg1, unsigned int jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetLooping(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetLoopCount(void * jarg1, int jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  int arg2 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      (arg1)->SetLoopCount(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Animation_GetLoopCount(void * jarg1) {
  int jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  int result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (int)(arg1)->GetLoopCount();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Animation_GetCurrentLoop(void * jarg1) {
  int jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  int result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (int)(arg1)->GetCurrentLoop();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Animation_IsLooping(void * jarg1) {
  unsigned int jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  bool result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (bool)((Dali::Animation const *)arg1)->IsLooping();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetEndAction(void * jarg1, int jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Animation::EndAction arg2 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (Dali::Animation::EndAction)jarg2;
  {
    try {
      (arg1)->SetEndAction(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Animation_GetEndAction(void * jarg1) {
  int jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Animation::EndAction result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (Dali::Animation::EndAction)((Dali::Animation const *)arg1)->GetEndAction();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetDisconnectAction(void * jarg1, int jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Animation::EndAction arg2 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (Dali::Animation::EndAction)jarg2;
  {
    try {
      (arg1)->SetDisconnectAction(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Animation_GetDisconnectAction(void * jarg1) {
  int jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Animation::EndAction result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (Dali::Animation::EndAction)((Dali::Animation const *)arg1)->GetDisconnectAction();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetDefaultAlphaFunction(void * jarg1, void * jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::AlphaFunction arg2 ;
  Dali::AlphaFunction *argp2 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::AlphaFunction *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetDefaultAlphaFunction(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Animation_GetDefaultAlphaFunction(void * jarg1) {
  void * jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::AlphaFunction result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = ((Dali::Animation const *)arg1)->GetDefaultAlphaFunction();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = new Dali::AlphaFunction((const Dali::AlphaFunction &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetCurrentProgress(void * jarg1, float jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  float arg2 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetCurrentProgress(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Animation_GetCurrentProgress(void * jarg1) {
  float jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  float result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (float)(arg1)->GetCurrentProgress();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetSpeedFactor(void * jarg1, float jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  float arg2 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetSpeedFactor(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Animation_GetSpeedFactor(void * jarg1) {
  float jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  float result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (float)((Dali::Animation const *)arg1)->GetSpeedFactor();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetPlayRange(void * jarg1, void * jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Vector2 *arg2 = 0 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetPlayRange((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Animation_GetPlayRange(void * jarg1) {
  void * jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = ((Dali::Animation const *)arg1)->GetPlayRange();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Play(void * jarg1) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      (arg1)->Play();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_PlayFrom(void * jarg1, float jarg2) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  float arg2 ;

  arg1 = (Dali::Animation *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->PlayFrom(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Pause(void * jarg1) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      (arg1)->Pause();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Animation_GetState(void * jarg1) {
  int jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Animation::State result;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (Dali::Animation::State)((Dali::Animation const *)arg1)->GetState();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Stop(void * jarg1) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      (arg1)->Stop();
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_SetProgressNotification(void* jarg1, float jarg2) {
  Dali::Animation* argp1 = (Dali::Animation *) jarg1 ;

  Dali::Animation arg1 = *argp1;
  float arg2 = (float)jarg2;

  {
    try {
      Dali::DevelAnimation::SetProgressNotification(arg1, arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Animation_GetProgressNotification(void * jarg1) {
  float jresult ;
  Dali::Animation* argp1 = (Dali::Animation *) jarg1 ;
  float result;

  Dali::Animation arg1 = *argp1;
  {
    try {
      result = (float)Dali::DevelAnimation::GetProgressNotification(arg1);
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Clear(void * jarg1) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      (arg1)->Clear();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Animation_FinishedSignal(void * jarg1) {
  void * jresult ;
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Animation::AnimationSignalType *result = 0 ;

  arg1 = (Dali::Animation *)jarg1;
  {
    try {
      result = (Dali::Animation::AnimationSignalType *) &(arg1)->FinishedSignal();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Animation_ProgressReachedSignal(void * jarg1) {
  void * jresult ;
  Dali::Animation* argp1 = (Dali::Animation*) jarg1 ;
  Dali::Animation::AnimationSignalType *result = 0 ;

  Dali::Animation arg1 = *argp1;
  {
    try {
      result = (Dali::Animation::AnimationSignalType* ) &Dali::DevelAnimation::ProgressReachedSignal(arg1);
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_PlayAfter(void * jarg1, float jarg2) {
  Dali::Animation arg1 ;
  float arg2 ;
  Dali::Animation *argp1 ;

  argp1 = (Dali::Animation *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Animation", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = (float)jarg2;
  {
    try {
      arg1.PlayAfter(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBy__SWIG_0(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::Property::Value arg3 ;
  Dali::Property *argp2 ;
  Dali::Property::Value *argp3 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Property::Value *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property::Value", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->AnimateBy(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBy__SWIG_1(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::Property::Value arg3 ;
  Dali::AlphaFunction arg4 ;
  Dali::Property *argp2 ;
  Dali::Property::Value *argp3 ;
  Dali::AlphaFunction *argp4 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Property::Value *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property::Value", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      (arg1)->AnimateBy(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBy__SWIG_2(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::Property::Value arg3 ;
  SwigValueWrapper< Dali::TimePeriod > arg4 ;
  Dali::Property *argp2 ;
  Dali::Property::Value *argp3 ;
  Dali::TimePeriod *argp4 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Property::Value *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property::Value", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::TimePeriod *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      (arg1)->AnimateBy(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBy__SWIG_3(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::Property::Value arg3 ;
  Dali::AlphaFunction arg4 ;
  SwigValueWrapper< Dali::TimePeriod > arg5 ;
  Dali::Property *argp2 ;
  Dali::Property::Value *argp3 ;
  Dali::AlphaFunction *argp4 ;
  Dali::TimePeriod *argp5 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Property::Value *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property::Value", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::TimePeriod *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg5 = *argp5;
  {
    try {
      (arg1)->AnimateBy(arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateTo__SWIG_0(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::Property::Value arg3 ;
  Dali::Property *argp2 ;
  Dali::Property::Value *argp3 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Property::Value *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property::Value", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->AnimateTo(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateTo__SWIG_1(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::Property::Value arg3 ;
  Dali::AlphaFunction arg4 ;
  Dali::Property *argp2 ;
  Dali::Property::Value *argp3 ;
  Dali::AlphaFunction *argp4 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Property::Value *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property::Value", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      (arg1)->AnimateTo(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateTo__SWIG_2(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::Property::Value arg3 ;
  SwigValueWrapper< Dali::TimePeriod > arg4 ;
  Dali::Property *argp2 ;
  Dali::Property::Value *argp3 ;
  Dali::TimePeriod *argp4 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Property::Value *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property::Value", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::TimePeriod *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      (arg1)->AnimateTo(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateTo__SWIG_3(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::Property::Value arg3 ;
  Dali::AlphaFunction arg4 ;
  SwigValueWrapper< Dali::TimePeriod > arg5 ;
  Dali::Property *argp2 ;
  Dali::Property::Value *argp3 ;
  Dali::AlphaFunction *argp4 ;
  Dali::TimePeriod *argp5 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Property::Value *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property::Value", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::TimePeriod *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg5 = *argp5;
  {
    try {
      (arg1)->AnimateTo(arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBetween__SWIG_0(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::KeyFrames *arg3 = 0 ;
  Dali::Property *argp2 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::KeyFrames *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->AnimateBetween(arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBetween__SWIG_1(void * jarg1, void * jarg2, void * jarg3, int jarg4) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::KeyFrames *arg3 = 0 ;
  Dali::Animation::Interpolation arg4 ;
  Dali::Property *argp2 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::KeyFrames *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames & type is null", 0);
    return ;
  }
  arg4 = (Dali::Animation::Interpolation)jarg4;
  {
    try {
      (arg1)->AnimateBetween(arg2,*arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBetween__SWIG_2(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::KeyFrames *arg3 = 0 ;
  Dali::AlphaFunction arg4 ;
  Dali::Property *argp2 ;
  Dali::AlphaFunction *argp4 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::KeyFrames *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames & type is null", 0);
    return ;
  }
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      (arg1)->AnimateBetween(arg2,*arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBetween__SWIG_3(void * jarg1, void * jarg2, void * jarg3, void * jarg4, int jarg5) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::KeyFrames *arg3 = 0 ;
  Dali::AlphaFunction arg4 ;
  Dali::Animation::Interpolation arg5 ;
  Dali::Property *argp2 ;
  Dali::AlphaFunction *argp4 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::KeyFrames *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames & type is null", 0);
    return ;
  }
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  arg5 = (Dali::Animation::Interpolation)jarg5;
  {
    try {
      (arg1)->AnimateBetween(arg2,*arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBetween__SWIG_4(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::KeyFrames *arg3 = 0 ;
  SwigValueWrapper< Dali::TimePeriod > arg4 ;
  Dali::Property *argp2 ;
  Dali::TimePeriod *argp4 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::KeyFrames *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames & type is null", 0);
    return ;
  }
  argp4 = (Dali::TimePeriod *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      (arg1)->AnimateBetween(arg2,*arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBetween__SWIG_5(void * jarg1, void * jarg2, void * jarg3, void * jarg4, int jarg5) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::KeyFrames *arg3 = 0 ;
  SwigValueWrapper< Dali::TimePeriod > arg4 ;
  Dali::Animation::Interpolation arg5 ;
  Dali::Property *argp2 ;
  Dali::TimePeriod *argp4 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::KeyFrames *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames & type is null", 0);
    return ;
  }
  argp4 = (Dali::TimePeriod *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg4 = *argp4;
  arg5 = (Dali::Animation::Interpolation)jarg5;
  {
    try {
      (arg1)->AnimateBetween(arg2,*arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBetween__SWIG_6(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::KeyFrames *arg3 = 0 ;
  Dali::AlphaFunction arg4 ;
  SwigValueWrapper< Dali::TimePeriod > arg5 ;
  Dali::Property *argp2 ;
  Dali::AlphaFunction *argp4 ;
  Dali::TimePeriod *argp5 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::KeyFrames *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames & type is null", 0);
    return ;
  }
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::TimePeriod *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg5 = *argp5;
  {
    try {
      (arg1)->AnimateBetween(arg2,*arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_AnimateBetween__SWIG_7(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5, int jarg6) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  SwigValueWrapper< Dali::Property > arg2 ;
  Dali::KeyFrames *arg3 = 0 ;
  Dali::AlphaFunction arg4 ;
  SwigValueWrapper< Dali::TimePeriod > arg5 ;
  Dali::Animation::Interpolation arg6 ;
  Dali::Property *argp2 ;
  Dali::AlphaFunction *argp4 ;
  Dali::TimePeriod *argp5 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Property *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Property", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::KeyFrames *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames & type is null", 0);
    return ;
  }
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::TimePeriod *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg5 = *argp5;
  arg6 = (Dali::Animation::Interpolation)jarg6;
  {
    try {
      (arg1)->AnimateBetween(arg2,*arg3,arg4,arg5,arg6);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Animate__SWIG_0(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Actor arg2 ;
  Dali::Path arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  Dali::Actor *argp2 ;
  Dali::Path *argp3 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Path *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Path", 0);
    return ;
  }
  arg3 = *argp3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Animate(arg2,arg3,(Dali::Vector3 const &)*arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Animate__SWIG_1(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Actor arg2 ;
  Dali::Path arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  Dali::AlphaFunction arg5 ;
  Dali::Actor *argp2 ;
  Dali::Path *argp3 ;
  Dali::AlphaFunction *argp5 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Path *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Path", 0);
    return ;
  }
  arg3 = *argp3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  argp5 = (Dali::AlphaFunction *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg5 = *argp5;
  {
    try {
      (arg1)->Animate(arg2,arg3,(Dali::Vector3 const &)*arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Animate__SWIG_2(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Actor arg2 ;
  Dali::Path arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  SwigValueWrapper< Dali::TimePeriod > arg5 ;
  Dali::Actor *argp2 ;
  Dali::Path *argp3 ;
  Dali::TimePeriod *argp5 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Path *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Path", 0);
    return ;
  }
  arg3 = *argp3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  argp5 = (Dali::TimePeriod *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg5 = *argp5;
  {
    try {
      (arg1)->Animate(arg2,arg3,(Dali::Vector3 const &)*arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Animate__SWIG_3(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5, void * jarg6) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Actor arg2 ;
  Dali::Path arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  Dali::AlphaFunction arg5 ;
  SwigValueWrapper< Dali::TimePeriod > arg6 ;
  Dali::Actor *argp2 ;
  Dali::Path *argp3 ;
  Dali::AlphaFunction *argp5 ;
  Dali::TimePeriod *argp6 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Path *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Path", 0);
    return ;
  }
  arg3 = *argp3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  argp5 = (Dali::AlphaFunction *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg5 = *argp5;
  argp6 = (Dali::TimePeriod *)jarg6;
  if (!argp6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::TimePeriod", 0);
    return ;
  }
  arg6 = *argp6;
  {
    try {
      (arg1)->Animate(arg2,arg3,(Dali::Vector3 const &)*arg4,arg5,arg6);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Show(void * jarg1, void * jarg2, float jarg3) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Actor arg2 ;
  float arg3 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->Show(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Animation_Hide(void * jarg1, void * jarg2, float jarg3) {
  Dali::Animation *arg1 = (Dali::Animation *) 0 ;
  Dali::Actor arg2 ;
  float arg3 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Animation *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->Hide(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AnimationSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Animation &) > *arg1 = (Dali::Signal< void (Dali::Animation &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Animation &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Animation &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_AnimationSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Animation &) > *arg1 = (Dali::Signal< void (Dali::Animation &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Animation &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Animation &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AnimationSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Animation &) > *arg1 = (Dali::Signal< void (Dali::Animation &) > *) 0 ;
  void (*arg2)(Dali::Animation &) = (void (*)(Dali::Animation &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Animation &) > *)jarg1;
  arg2 = (void (*)(Dali::Animation &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AnimationSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Animation &) > *arg1 = (Dali::Signal< void (Dali::Animation &) > *) 0 ;
  void (*arg2)(Dali::Animation &) = (void (*)(Dali::Animation &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Animation &) > *)jarg1;
  arg2 = (void (*)(Dali::Animation &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AnimationSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Animation &) > *arg1 = (Dali::Signal< void (Dali::Animation &) > *) 0 ;
  Dali::Animation *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::Animation &) > *)jarg1;
  arg2 = (Dali::Animation *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Animation_SA__SP__Sg__Emit(arg1,*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AnimationSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Animation &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Animation &) > *)new Dali::Signal< void (Dali::Animation &) >();
    } CALL_CATCH_EXCEPTION(0);

  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AnimationSignal(void * jarg1) {
  Dali::Signal< void (Dali::Animation &) > *arg1 = (Dali::Signal< void (Dali::Animation &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Animation &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


#ifdef __cplusplus
}
#endif

