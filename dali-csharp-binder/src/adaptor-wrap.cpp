/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
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
#include <dali/integration-api/adaptor-framework/adaptor.h>
// #include <dali/public-api/adaptor-framework/application-configuration.h>


SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Adaptor &) > const *self){
    return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Adaptor &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Adaptor &) > *self,void (*func)(Dali::Adaptor &)){
    self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Adaptor &) > *self,void (*func)(Dali::Adaptor &)){
    self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Adaptor &) > *self,Dali::Adaptor &arg){
    self->Emit( arg );
}

#ifdef __cplusplus
extern "C" {
#endif


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Adaptor(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_SetRenderRefreshRate(void * jarg1, unsigned int jarg2) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->SetRenderRefreshRate(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_Get() {
  void * jresult ;
  Dali::Adaptor *result = 0 ;

  {
    try {
      result = (Dali::Adaptor *) &Dali::Adaptor::Get();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_FeedWheelEvent(void * jarg1, void * jarg2) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::WheelEvent *arg2 = 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (Dali::WheelEvent *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WheelEvent & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->FeedWheelEvent(*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_FeedKeyEvent(void * jarg1, void * jarg2) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::KeyEvent *arg2 = 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (Dali::KeyEvent *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyEvent & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->FeedKeyEvent(*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


#ifdef __cplusplus
}
#endif
