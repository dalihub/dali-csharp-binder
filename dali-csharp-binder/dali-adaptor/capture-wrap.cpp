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

// EXTERNAL INCLUDES
#include <dali/public-api/capture/capture.h>
#include <dali/devel-api/adaptor-framework/capture-devel.h>
#include <dali-toolkit/public-api/image-loader/image.h>
#include <dali-toolkit/public-api/image-loader/image-url.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

SWIGINTERN bool Dali_Capture_Signal_Empty(Dali::Capture::CaptureFinishedSignalType const* self)
{
  return self->Empty();
}

SWIGINTERN std::size_t Dali_Capture_Signal_GetConnectionCount(Dali::Capture::CaptureFinishedSignalType const* self)
{
  return self->GetConnectionCount();
}

SWIGINTERN void Dali_Capture_Signal_Connect(Dali::Capture::CaptureFinishedSignalType* self, void (*func)(Dali::Capture, Dali::Capture::FinishState))
{
  self->Connect(func);
}

SWIGINTERN void Dali_Capture_Signal_Disconnect(Dali::Capture::CaptureFinishedSignalType* self, void (*func)(Dali::Capture, Dali::Capture::FinishState))
{
  self->Disconnect(func);
}

SWIGINTERN void Dali_Capture_Signal_Emit(Dali::Capture::CaptureFinishedSignalType* self, Dali::Capture arg1, Dali::Capture::FinishState arg2)
{
  self->Emit(arg1, arg2);
}

#ifdef __cplusplus
extern "C" {
#endif



SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Capture_New()
{
  void* jresult;
  Dali::Capture result;

  {
    try
    {
      result = Dali::Capture::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Capture((const Dali::Capture&)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Capture(void* jarg1)
{
  Dali::Capture* arg1 = (Dali::Capture*) 0;

  arg1 = (Dali::Capture*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}



SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_Start_1(void* nuiCapture, void* nuiSource, void* nuiSize, char* nuiPath, void* nuiClearColor)
{
  Dali::Capture* capture = (Dali::Capture*)0;
  Dali::Actor* source = (Dali::Actor*)0;
  Dali::Vector2* size = (Dali::Vector2*)0;
  std::string* path;
  std::string path_str(nuiPath);
  Dali::Vector4* clearColor = (Dali::Vector4*)0;

  capture = (Dali::Capture*)nuiCapture;
  source = (Dali::Actor*)nuiSource;
  size = (Dali::Vector2*)nuiSize;
  path = &path_str;
  clearColor = (Dali::Vector4*)nuiClearColor;

  if (!capture || !source || !size || !path || !clearColor)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return;
  }

  {
    try
    {
      (capture)->Start(*source, (const Dali::Vector2&)*size, (const std::string&)*path, (const Dali::Vector4&) * clearColor);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_Start_2(void* nuiCapture, void* nuiSource, void* nuiSize, char* nuiPath)
{
  Dali::Capture* capture = (Dali::Capture*)0;
  Dali::Actor* source = (Dali::Actor*)0;
  Dali::Vector2* size = (Dali::Vector2*)0;
  std::string* path;
  std::string path_str(nuiPath);

  capture = (Dali::Capture*)nuiCapture;
  source = (Dali::Actor*)nuiSource;
  size = (Dali::Vector2*)nuiSize;
  path = &path_str;

  if (!capture || !source || !size || !path)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return;
  }

  {
    try
    {
      (capture)->Start(*source, (const Dali::Vector2&)*size, (const std::string&)*path);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_Start_3(void* nuiCapture, void* nuiSource, void* nuiSize, char* nuiPath, void* nuiClearColor, uint32_t nuiQuality)
{
  Dali::Capture* capture = (Dali::Capture*)0;
  Dali::Actor* source = (Dali::Actor*)0;
  Dali::Vector2* size = (Dali::Vector2*)0;
  std::string* path;
  std::string path_str(nuiPath);
  Dali::Vector4* clearColor = (Dali::Vector4*)0;
  uint32_t quality;

  capture = (Dali::Capture*)nuiCapture;
  source = (Dali::Actor*)nuiSource;
  size = (Dali::Vector2*)nuiSize;
  path = &path_str;
  clearColor = (Dali::Vector4*)nuiClearColor;
  quality = nuiQuality;

  if (!capture || !source || !size || !path || !clearColor)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return;
  }

  {
    try
    {
      (capture)->Start(*source, (const Dali::Vector2&)*size, (const std::string&)*path, (const Dali::Vector4&) * clearColor, quality);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_Start_4( void* nuiCapture, void* nuiSource, void* nuiPosition, void* nuiSize, char* nuiPath, void* nuiClearColor )
{
  Dali::Capture* capture = (Dali::Capture*)0;
  Dali::Actor* source = (Dali::Actor*)0;
  Dali::Vector2* position = (Dali::Vector2*)0;
  Dali::Vector2* size = (Dali::Vector2*)0;
  std::string* path;
  std::string path_str(nuiPath);
  Dali::Vector4* clearColor = (Dali::Vector4*)0;

  capture = (Dali::Capture*)nuiCapture;
  source = (Dali::Actor*)nuiSource;
  position = (Dali::Vector2*)nuiPosition;
  size = (Dali::Vector2*)nuiSize;
  path = &path_str;
  clearColor = (Dali::Vector4*)nuiClearColor;

  if (!capture || !source || !size || !position || !path || !clearColor)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return;
  }

  {
    try
    {
      (capture)->Start(*source, (const Dali::Vector2&)*position, (const Dali::Vector2&)*size, (const std::string&)*path, (const Dali::Vector4&) * clearColor);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_SetImageQuality( void* nuiCapture, uint32_t nuiQuality )
{
  Dali::Capture* capture = (Dali::Capture*)0;
  uint32_t quality = nuiQuality;

  capture = (Dali::Capture*)nuiCapture;

  if ( !capture )
  {
    SWIG_CSharpSetPendingExceptionArgument( SWIG_CSharpArgumentNullException, "some argument is null", 0 );
    return;
  }

  {
    try
    {
      ( capture )->SetImageQuality( quality );
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Capture_Signal_Empty(void* jarg1)
{
  Dali::Capture::CaptureFinishedSignalType* arg1 = (Dali::Capture::CaptureFinishedSignalType*)jarg1;
  bool result;

  {
    try
    {
      result = Dali_Capture_Signal_Empty(arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT std::size_t SWIGSTDCALL CSharp_Dali_Capture_Signal_GetConnectionCount(void* jarg1)
{
  Dali::Capture::CaptureFinishedSignalType* arg1 = (Dali::Capture::CaptureFinishedSignalType*)jarg1;
  std::size_t result;

  {
    try
    {
      result = Dali_Capture_Signal_GetConnectionCount((Dali::Capture::CaptureFinishedSignalType const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_Signal_Connect(void* jarg1, void* jarg2)
{
  Dali::Capture::CaptureFinishedSignalType* arg1 = (Dali::Capture::CaptureFinishedSignalType*)jarg1;
  void (*arg2)(Dali::Capture, Dali::Capture::FinishState) = (void (*)(Dali::Capture, Dali::Capture::FinishState))jarg2;

  {
    try
    {
      Dali_Capture_Signal_Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_Signal_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Capture::CaptureFinishedSignalType* arg1 = (Dali::Capture::CaptureFinishedSignalType*)jarg1;
  void (*arg2)(Dali::Capture, Dali::Capture::FinishState) = (void (*)(Dali::Capture, Dali::Capture::FinishState))jarg2;

  {
    try
    {
      Dali_Capture_Signal_Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_Signal_Emit(void* jarg1, void* jarg2, int jarg3)
{
  Dali::Capture::CaptureFinishedSignalType* arg1 = (Dali::Capture::CaptureFinishedSignalType*)jarg1;
  Dali::Capture* arg2 = (Dali::Capture*)jarg2;
  Dali::Capture::FinishState arg3;

  if (jarg3 == 0)
  {
    arg3 = Dali::Capture::FinishState::SUCCEEDED;
  }
  else {
    arg3 = Dali::Capture::FinishState::FAILED;
  }

  {
    try
    {
      Dali_Capture_Signal_Emit(arg1, *arg2, arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}



SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Capture_Signal_Get(void* jarg1)
{
  Dali::Capture* arg1 = (Dali::Capture*)jarg1;
  Dali::Capture::CaptureFinishedSignalType* result;
  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return 0;
  }
  {
    try
    {
      result = &(arg1->FinishedSignal());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

struct NativeImageSourcePtrHandle
{
  Dali::NativeImageSourcePtr Ptr;
};

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Capture_GetNativeImageSource(void* jarg1)
{
  Dali::Capture* arg1 = (Dali::Capture*)jarg1;
  NativeImageSourcePtrHandle* handle = new NativeImageSourcePtrHandle();

  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    delete handle;
    return 0;
  }
  {
    try
    {
      handle->Ptr = arg1->GetNativeImageSource();
    }
    catch (std::out_of_range &e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      delete handle;
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      delete handle;
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      delete handle;
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      delete handle;
      return 0;
    }
  }
  return (void*)handle;
}

typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Capture_GetCapturedBuffer(void *nuiCapture)
{
  Dali::Capture *capture = (Dali::Capture *)nuiCapture;
  Dali::Devel::PixelBuffer pixelBuffer;

  if (!capture)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return 0;
  }
  {
    try
    {
      pixelBuffer = Dali::DevelCapture::GetCapturedBuffer(*capture);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  Dali::Devel::PixelBuffer *result = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)pixelBuffer);
  return result;
}

#ifdef __cplusplus
}
#endif
