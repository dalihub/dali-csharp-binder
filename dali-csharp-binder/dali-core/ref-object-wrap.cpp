/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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

// SWIGINTERN - the relevant parts of the generated code can be seen the below.

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Empty(Dali::Signal<void(Dali::RefObject const*)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::RefObject const*)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Connect(Dali::Signal<void(Dali::RefObject const*)>* self, void (*func)(Dali::RefObject const*))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Disconnect(Dali::Signal<void(Dali::RefObject const*)>* self, void (*func)(Dali::RefObject const*))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_RefObject_SS_const_Sm__SP__Sg__Emit(Dali::Signal<void(Dali::RefObject const*)>* self, Dali::RefObject const* arg)
{
  /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
  /*@SWIG@*/ self->Emit(arg);
}

using namespace Dali;

#ifdef __cplusplus
extern "C" {
#endif

// Creation

SWIGEXPORT Dali::RefObject* SWIGSTDCALL CSharp_Dali_GetRefObjectPtr(Dali::BaseHandle* arg1)
{
  Dali::RefObject* result = NULL;

  if(arg1)
  {
    result = (Dali::RefObject*)((Dali::BaseHandle const*)arg1)->GetObjectPtr();
  }
  return result;
}

// Method

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RefObject_Reference(void* jarg1)
{
  Dali::RefObject* arg1 = (Dali::RefObject*)0;

  arg1 = (Dali::RefObject*)jarg1;
  {
    try
    {
      (arg1)->Reference();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RefObject_Unreference(void* jarg1)
{
  Dali::RefObject* arg1 = (Dali::RefObject*)0;

  arg1 = (Dali::RefObject*)jarg1;
  {
    try
    {
      (arg1)->Unreference();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_RefObject_ReferenceCount(void* jarg1)
{
  int              jresult;
  Dali::RefObject* arg1 = (Dali::RefObject*)0;
  int              result;

  arg1 = (Dali::RefObject*)jarg1;
  {
    try
    {
      result = (int)(arg1)->ReferenceCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

#ifdef __cplusplus
}
#endif
