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

#ifndef CSHARP_CAPTURE
#define CSHARP_CAPTURE
#endif

#include <string.h>
#include "common.h"
#include <dali/public-api/capture/capture.h>
#include <dali/integration-api/debug.h>
#include <dali-toolkit/public-api/image-loader/image.h>

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

SWIGEXPORT Dali::BaseHandle* SWIGSTDCALL CSharp_Dali_Capture_Upcast(Dali::Capture* jarg1)
{
  return (Dali::BaseHandle*)jarg1;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Capture()
{
  void* jresult;
  Dali::Capture* result = 0;

  {
    try
    {
      result = (Dali::Capture*)new Dali::Capture();
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Capture_New()
{
  void* jresult;
  Dali::Capture result;

  {
    try
    {
      result = Dali::Capture::New();
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
  }

  jresult = new Dali::Capture((const Dali::Capture&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Capture_DownCast(void* jarg1)
{
  void* jresult;
  Dali::BaseHandle arg1;
  Dali::BaseHandle* argp1;
  Dali::Capture result;

  argp1 = (Dali::BaseHandle*)jarg1;
  if (!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try
    {
      result = Dali::Capture::DownCast(arg1);
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
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
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return;
    }
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Capture_New_With_CameraActor(void* jarg1)
{
  void* jresult;
  Dali::CameraActor* arg1 = 0;
  Dali::Capture result;

  arg1 = (Dali::CameraActor*)jarg1;
  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::CameraActor is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Capture::New(*arg1);
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
  }

  jresult = new Dali::Capture((const Dali::Capture&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Capture_Assign(void* jarg1, void* jarg2)
{
  void* jresult;
  Dali::Capture* arg1 = (Dali::Capture*) 0;
  Dali::Capture* arg2 = 0;
  Dali::Capture* result = 0;

  arg1 = (Dali::Capture*)jarg1;
  arg2 = (Dali::Capture*)jarg2;

  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Capture const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Capture*) & (arg1)->operator =((Dali::Capture const&) * arg2);
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Capture_Start_1(void* jarg0, void* jarg1, void* jarg2, char* jarg3, void* jarg4)
{
  Dali::Capture* arg0 = (Dali::Capture*)0;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  Dali::Vector2* arg2 = (Dali::Vector2*)0;
  std::string* arg3;
  std::string arg3_str(jarg3);
  Dali::Vector4* arg4 = (Dali::Vector4*)0;

  arg0 = (Dali::Capture*)jarg0;
  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector2*)jarg2;
  arg3 = &arg3_str;
  arg4 = (Dali::Vector4*)jarg4;

  if (!arg0 || !arg1 || !arg2 || !arg3 || !arg4)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return;
  }

  {
    try
    {
      (arg0)->Start(*arg1, (const Dali::Vector2&) * arg2, (const std::string&) * arg3, (const Dali::Vector4&) * arg4);
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return;
    }
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
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return;
    }
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
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
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
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
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
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return;
    }
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
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return;
    }
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
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return;
    }
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Capture_Signal()
{
  Dali::Capture::CaptureFinishedSignalType* result = 0;

  {
    try
    {
      result = (Dali::Capture::CaptureFinishedSignalType*)new Dali::Capture::CaptureFinishedSignalType();
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Capture_Signal(void* jarg1)
{
  Dali::Capture::CaptureFinishedSignalType* arg1 = (Dali::Capture::CaptureFinishedSignalType*)jarg1;

  {
    try
    {
      delete arg1;
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return;
    }
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
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
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

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Capture_GenerateUrl(void* nuiCapture)
{
  Dali::Capture* capture = (Dali::Capture*)nuiCapture;
  std::string url = "";

  if (!capture)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return 0;
  }
  {
    try
    {
      url = Dali::Toolkit::Image::GenerateUrl(capture->GetNativeImageSource());
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      return 0;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition);
      return 0;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      return 0;
    }
  }
  return SWIG_csharp_string_callback( (const char *)url.c_str() );
}

#ifdef __cplusplus
}
#endif
