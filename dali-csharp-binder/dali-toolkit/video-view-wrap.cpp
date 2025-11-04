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
#include <dali-toolkit/devel-api/controls/video-view/video-view-devel.h>
#include <iostream>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Empty(Dali::Signal<void(Dali::Toolkit::VideoView&)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::Toolkit::VideoView&)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Connect(Dali::Signal<void(Dali::Toolkit::VideoView&)>* self, void (*func)(Dali::Toolkit::VideoView&))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Disconnect(Dali::Signal<void(Dali::Toolkit::VideoView&)>* self, void (*func)(Dali::Toolkit::VideoView&))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Emit(Dali::Signal<void(Dali::Toolkit::VideoView&)>* self, Dali::Toolkit::VideoView& arg)
{
  /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
  /*@SWIG@*/ self->Emit(arg);
}

using namespace Dali;
using namespace Dali::Toolkit;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_VIDEO_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::VideoView::Property::VIDEO;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_LOOPING_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::VideoView::Property::LOOPING;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_MUTED_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::VideoView::Property::MUTED;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_VOLUME_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Toolkit::VideoView::Property::VOLUME;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_UNDERLAY_get()
{
  int result;

  result = (int)Dali::Toolkit::VideoView::Property::UNDERLAY;

  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_0()
{
  void*                    jresult;
  Dali::Toolkit::VideoView result;

  {
    try
    {
      result = Dali::Toolkit::VideoView::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_1(char* jarg1)
{
  void*                    jresult;
  std::string*             arg1 = 0;
  Dali::Toolkit::VideoView result;

  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try
    {
      result = Dali::Toolkit::VideoView::New((std::string const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView&)result);

  // argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_2(bool swCodec)
{
  void*                    jresult;
  Dali::Toolkit::VideoView result;
  {
    try
    {
      result = Dali::Toolkit::VideoView::New(swCodec);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView&)result);

  // argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_3(char* jarg1, bool swCodec)
{
  void*                    jresult;
  std::string*             arg1 = 0;
  Dali::Toolkit::VideoView result;

  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try
    {
      result = Dali::Toolkit::VideoView::New((std::string const&)*arg1, swCodec);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView&)result);

  // argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VideoView(void* jarg1)
{
  Dali::Toolkit::VideoView* arg1 = (Dali::Toolkit::VideoView*)0;

  arg1 = (Dali::Toolkit::VideoView*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Play(void* jarg1)
{
  Dali::Toolkit::VideoView* arg1 = (Dali::Toolkit::VideoView*)0;

  arg1 = (Dali::Toolkit::VideoView*)jarg1;
  {
    try
    {
      (arg1)->Play();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Pause(void* jarg1)
{
  Dali::Toolkit::VideoView* arg1 = (Dali::Toolkit::VideoView*)0;

  arg1 = (Dali::Toolkit::VideoView*)jarg1;
  {
    try
    {
      (arg1)->Pause();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Stop(void* jarg1)
{
  Dali::Toolkit::VideoView* arg1 = (Dali::Toolkit::VideoView*)0;

  arg1 = (Dali::Toolkit::VideoView*)jarg1;
  {
    try
    {
      (arg1)->Stop();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Forward(void* jarg1, int jarg2)
{
  Dali::Toolkit::VideoView* arg1 = (Dali::Toolkit::VideoView*)0;
  int                       arg2;

  arg1 = (Dali::Toolkit::VideoView*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      (arg1)->Forward(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Backward(void* jarg1, int jarg2)
{
  Dali::Toolkit::VideoView* arg1 = (Dali::Toolkit::VideoView*)0;
  int                       arg2;

  arg1 = (Dali::Toolkit::VideoView*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      (arg1)->Backward(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_SetAutoRotationEnabled(void* view, bool enable)
{
  Dali::Toolkit::VideoView* videoView = (Dali::Toolkit::VideoView*)0;

  videoView = (Dali::Toolkit::VideoView*)view;
  {
    try
    {
      Toolkit::DevelVideoView::SetAutoRotationEnabled(*videoView, enable);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_VideoView_IsAutoRotationEnabled(void* view)
{
  Dali::Toolkit::VideoView* videoView = (Dali::Toolkit::VideoView*)0;
  bool                      ret       = false;

  videoView = (Dali::Toolkit::VideoView*)view;
  {
    try
    {
      ret = Toolkit::DevelVideoView::IsAutoRotationEnabled(*videoView);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_SetLetterBoxEnabled(void* view, bool enable)
{
  Dali::Toolkit::VideoView* videoView = (Dali::Toolkit::VideoView*)0;

  videoView = (Dali::Toolkit::VideoView*)view;
  {
    try
    {
      Toolkit::DevelVideoView::SetLetterBoxEnabled(*videoView, enable);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_VideoView_IsLetterBoxEnabled(void* view)
{
  Dali::Toolkit::VideoView* videoView = (Dali::Toolkit::VideoView*)0;
  bool                      ret       = false;

  videoView = (Dali::Toolkit::VideoView*)view;
  {
    try
    {
      ret = Toolkit::DevelVideoView::IsLetterBoxEnabled(*videoView);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_SetFrameInterpolationInterval(void* view, float intervalSeconds)
{
  Dali::Toolkit::VideoView* videoView = (Dali::Toolkit::VideoView*)0;

  videoView = (Dali::Toolkit::VideoView*)view;
  if(videoView == nullptr)
  {
    DALI_LOG_ERROR("VideoView is nullptr!");
    return;
  }
  {
    try
    {
      Toolkit::DevelVideoView::SetFrameInterpolationInterval(*videoView, intervalSeconds);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_VideoView_GetFrameInterpolationInterval(void* view)
{
  Dali::Toolkit::VideoView* videoView = (Dali::Toolkit::VideoView*)0;
  float                     ret       = 0.0f;

  videoView = (Dali::Toolkit::VideoView*)view;
  if(videoView == nullptr)
  {
    DALI_LOG_ERROR("VideoView is nullptr!");
    // Return a default value or indicate an error, for now, return 0.0f
    return 0.0f;
  }
  {
    try
    {
      ret = Toolkit::DevelVideoView::GetFrameInterpolationInterval(*videoView);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_EnableOffscreenFrameRendering(void* view, bool useOffScreenFrame)
{
  Dali::Toolkit::VideoView* videoView = (Dali::Toolkit::VideoView*)0;
  videoView = (Dali::Toolkit::VideoView*)view;
  if(videoView == nullptr)
  {
    DALI_LOG_ERROR("VideoView is nullptr!");
    return;
  }
  {
    try
    {
      Toolkit::DevelVideoView::EnableOffscreenFrameRendering(*videoView, useOffScreenFrame);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_SetVideoFrameBuffer(void* view, void* csNativeImageSource)
{
  Dali::Toolkit::VideoView*  videoView         = (Dali::Toolkit::VideoView*)0;
  Dali::NativeImageSourcePtr nativeImageSource = (Dali::NativeImageSource*)csNativeImageSource;

  videoView = (Dali::Toolkit::VideoView*)view;

  if(videoView == nullptr)
  {
    DALI_LOG_ERROR("VideoView is nullptr!");
    return;
  }
  if(nativeImageSource == nullptr)
  {
    DALI_LOG_ERROR("nativeImageSource is nullptr!");
    return;
  }
  {
    try
    {
      // The nativeImageSource is a handle (e.g., tbm_surface_h or Dali::NativeImageSource*)
      // We wrap it in Dali::Any to pass to the C++ API.
      Toolkit::DevelVideoView::SetVideoFrameBuffer(*videoView, nativeImageSource);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VideoView_FinishedSignal(void* jarg1)
{
  void*                                          jresult;
  Dali::Toolkit::VideoView*                      arg1   = (Dali::Toolkit::VideoView*)0;
  Dali::Toolkit::VideoView::VideoViewSignalType* result = 0;

  arg1 = (Dali::Toolkit::VideoView*)jarg1;
  {
    try
    {
      result = (Dali::Toolkit::VideoView::VideoViewSignalType*)&(arg1)->FinishedSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VideoView_GetNativePlayerHandle(void* jarg1)
{
  Dali::Toolkit::VideoView* arg1 = (Dali::Toolkit::VideoView*)jarg1;
  if(arg1 == nullptr)
  {
    DALI_LOG_ERROR("VideoView is nullptr!");
    return nullptr;
  }
  void* ret = nullptr;
  {
    try
    {
      Dali::Any result = Toolkit::DevelVideoView::GetMediaPlayer(*arg1);
      ret              = Dali::AnyCast<void*>(result);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_VideoViewSignal_Empty(void* jarg1)
{
  bool                                           jresult;
  Dali::Signal<void(Dali::Toolkit::VideoView&)>* arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)0;
  bool                                           result;

  arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Empty((Dali::Signal<void(Dali::Toolkit::VideoView&)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_VideoViewSignal_GetConnectionCount(void* jarg1)
{
  unsigned long                                  jresult;
  Dali::Signal<void(Dali::Toolkit::VideoView&)>* arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)0;
  std::size_t                                    result;

  arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::Toolkit::VideoView&)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoViewSignal_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::VideoView&)>* arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)0;
  void (*arg2)(Dali::Toolkit::VideoView&)             = (void (*)(Dali::Toolkit::VideoView&))0;

  arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)jarg1;
  arg2 = (void (*)(Dali::Toolkit::VideoView&))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoViewSignal_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::VideoView&)>* arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)0;
  void (*arg2)(Dali::Toolkit::VideoView&)             = (void (*)(Dali::Toolkit::VideoView&))0;

  arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)jarg1;
  arg2 = (void (*)(Dali::Toolkit::VideoView&))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoViewSignal_Emit(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Toolkit::VideoView&)>* arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)0;
  Dali::Toolkit::VideoView*                      arg2 = 0;

  arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)jarg1;
  arg2 = (Dali::Toolkit::VideoView*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::VideoView & type is null", 0);
    return;
  }
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Emit(arg1, *arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_VideoViewSignal()
{
  void*                                          jresult;
  Dali::Signal<void(Dali::Toolkit::VideoView&)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)new Dali::Signal<void(Dali::Toolkit::VideoView&)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VideoViewSignal(void* jarg1)
{
  Dali::Signal<void(Dali::Toolkit::VideoView&)>* arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)0;

  arg1 = (Dali::Signal<void(Dali::Toolkit::VideoView&)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
