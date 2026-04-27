/*
 * Copyright (c) 2026 Samsung Electronics Co., Ltd.
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
#include <dali/integration-api/adaptor-framework/adaptor.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Empty(Dali::Signal<void(Dali::Adaptor&)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::Adaptor&)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Connect(Dali::Signal<void(Dali::Adaptor&)>* self, void (*func)(Dali::Adaptor&))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Disconnect(Dali::Signal<void(Dali::Adaptor&)>* self, void (*func)(Dali::Adaptor&))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Emit(Dali::Signal<void(Dali::Adaptor&)>* self, Dali::Adaptor& arg)
{
  self->Emit(arg);
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Adaptor(void* adaptor)
{
  {
    try
    {
      delete static_cast<Dali::Adaptor*>(adaptor);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_SetRenderRefreshRate(void* adaptor, unsigned int refreshRate)
{
  {
    try
    {
      static_cast<Dali::Adaptor*>(adaptor)->SetRenderRefreshRate(refreshRate);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_SetMaximumRenderFrameRate(void* adaptor, float frameRate)
{
  {
    try
    {
      static_cast<Dali::Adaptor*>(adaptor)->SetMaximumRenderFrameRate(frameRate);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Adaptor_Get()
{
  Dali::Adaptor* result = nullptr;

  {
    try
    {
      result = &Dali::Adaptor::Get();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_FeedWheelEvent(void* adaptor, void* wheelEvent)
{
  Dali::WheelEvent* event = static_cast<Dali::WheelEvent*>(wheelEvent);

  if(!event)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WheelEvent & type is null", 0);
    return;
  }
  {
    try
    {
      static_cast<Dali::Adaptor*>(adaptor)->FeedWheelEvent(*event);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_FeedKeyEvent(void* adaptor, void* keyEvent)
{
  Dali::KeyEvent* event = static_cast<Dali::KeyEvent*>(keyEvent);

  if(!event)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyEvent & type is null", 0);
    return;
  }
  {
    try
    {
      static_cast<Dali::Adaptor*>(adaptor)->FeedKeyEvent(*event);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Adaptor_GetRenderThreadId(void* adaptor)
{
  int32_t result = 0;

  {
    try
    {
      result = static_cast<Dali::Adaptor*>(adaptor)->GetRenderThreadId();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

#ifdef __cplusplus
}
#endif
