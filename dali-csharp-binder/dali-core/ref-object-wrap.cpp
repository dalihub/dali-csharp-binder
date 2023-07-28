/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/object/ref-object.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

// SWIGINTERN - the relevant parts of the generated code can be seen the below.

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Empty(Dali::Signal< void (Dali::RefObject const *) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::RefObject const *) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Connect(Dali::Signal< void (Dali::RefObject const *) > *self,void (*func)(Dali::RefObject const *))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Disconnect(Dali::Signal< void (Dali::RefObject const *) > *self,void (*func)(Dali::RefObject const *))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Emit(Dali::Signal< void (Dali::RefObject const *) > *self,Dali::RefObject const *arg)
{
          /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit(arg);
}

using namespace Dali;

#ifdef __cplusplus
extern "C" {
#endif


// Creation

SWIGEXPORT Dali::RefObject * SWIGSTDCALL CSharp_Dali_BaseObject_SWIGUpcast(Dali::BaseObject *jarg1) {
    return (Dali::RefObject *)jarg1;
}


SWIGEXPORT Dali::RefObject * SWIGSTDCALL CSharp_Dali_GetRefObjectPtr(Dali::BaseHandle *arg1) {
  Dali::RefObject *result = NULL;

  if (arg1)
  {
    result = (Dali::RefObject *)((Dali::BaseHandle const *)arg1)->GetObjectPtr();
  }
  return result;
}


// Method

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RefObject_Reference(void * jarg1) {
  Dali::RefObject *arg1 = (Dali::RefObject *) 0 ;

  arg1 = (Dali::RefObject *)jarg1;
  {
    try {
      (arg1)->Reference();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RefObject_Unreference(void * jarg1) {
  Dali::RefObject *arg1 = (Dali::RefObject *) 0 ;

  arg1 = (Dali::RefObject *)jarg1;
  {
    try {
      (arg1)->Unreference();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_RefObject_ReferenceCount(void * jarg1) {
  int jresult ;
  Dali::RefObject *arg1 = (Dali::RefObject *) 0 ;
  int result;

  arg1 = (Dali::RefObject *)jarg1;
  {
    try {
      result = (int)(arg1)->ReferenceCount();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


// Signals

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ObjectDestroyedSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::RefObject const *) > *arg1 = (Dali::Signal< void (Dali::RefObject const *) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::RefObject const *) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Empty((Dali::Signal< void (Dali::RefObject const *) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ObjectDestroyedSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::RefObject const *) > *arg1 = (Dali::Signal< void (Dali::RefObject const *) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::RefObject const *) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::RefObject const *) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ObjectDestroyedSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::RefObject const *) > *arg1 = (Dali::Signal< void (Dali::RefObject const *) > *) 0 ;
  void (*arg2)(Dali::RefObject const *) = (void (*)(Dali::RefObject const *)) 0 ;

  arg1 = (Dali::Signal< void (Dali::RefObject const *) > *)jarg1;
  arg2 = (void (*)(Dali::RefObject const *))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ObjectDestroyedSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::RefObject const *) > *arg1 = (Dali::Signal< void (Dali::RefObject const *) > *) 0 ;
  void (*arg2)(Dali::RefObject const *) = (void (*)(Dali::RefObject const *)) 0 ;

  arg1 = (Dali::Signal< void (Dali::RefObject const *) > *)jarg1;
  arg2 = (void (*)(Dali::RefObject const *))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ObjectDestroyedSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::RefObject const *) > *arg1 = (Dali::Signal< void (Dali::RefObject const *) > *) 0 ;
  Dali::RefObject *arg2 = (Dali::RefObject *) 0 ;

  arg1 = (Dali::Signal< void (Dali::RefObject const *) > *)jarg1;
  arg2 = (Dali::RefObject *)jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Emit(arg1,(Dali::RefObject const *)arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ObjectDestroyedSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::RefObject const *) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::RefObject const *) > *)new Dali::Signal< void (Dali::RefObject const *) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ObjectDestroyedSignal(void * jarg1) {
  Dali::Signal< void (Dali::RefObject const *) > *arg1 = (Dali::Signal< void (Dali::RefObject const *) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::RefObject const *) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

#ifdef __cplusplus
}
#endif
