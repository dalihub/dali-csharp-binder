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

#include <dali-toolkit/public-api/image-loader/image-url-utils.h>
#include <dali-toolkit/public-api/image-loader/image-url.h>

#include <dali-toolkit/dali-toolkit.h>
#include <dali/devel-api/adaptor-framework/native-image-queue.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#include <dali/integration-api/string-utils.h>

using namespace Dali;
using namespace Dali::Toolkit;

using Dali::Integration::ToDaliString;
using Dali::Integration::ToDaliStringView;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PixelData_GenerateUrl(void* nuiHandle)
{
  Dali::PixelData*        pixelData = (Dali::PixelData*)nuiHandle;
  Dali::Toolkit::ImageUrl result;
  void*                   jresult;

  if(!pixelData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl(*pixelData);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PixelData_GenerateUrl_With_PreMultiplied(void* nuiHandle, bool preMultiplied)
{
  Dali::PixelData*        pixelData = (Dali::PixelData*)nuiHandle;
  Dali::Toolkit::ImageUrl result;
  void*                   jresult;

  if(!pixelData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl(*pixelData, preMultiplied);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_FrameBuffer_GenerateUrl(void* jFrameBuffer, int pixelFormat, int width, int height)
{
  void*                   jresult;
  Dali::Toolkit::ImageUrl result;
  Dali::FrameBuffer*      frameBuffer = (Dali::FrameBuffer*)jFrameBuffer;

  if(!frameBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::FrameBuffer is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl((const Dali::FrameBuffer&)*frameBuffer, (Pixel::Format)pixelFormat, (uint32_t)width, (uint32_t)height);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_FrameBuffer_GenerateUrl_Index(void* jFrameBuffer, uint32_t index)
{
  void*                   jresult;
  Dali::Toolkit::ImageUrl result;
  Dali::FrameBuffer*      frameBuffer = (Dali::FrameBuffer*)jFrameBuffer;

  if(!frameBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::FrameBuffer is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl((const Dali::FrameBuffer&)*frameBuffer, index);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_FrameBuffer_GenerateDepthUrl(void* jFrameBuffer)
{
  void*                   jresult;
  Dali::Toolkit::ImageUrl result;
  Dali::FrameBuffer*      frameBuffer = (Dali::FrameBuffer*)jFrameBuffer;

  if(!frameBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::FrameBuffer is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateDepthUrl((const Dali::FrameBuffer&)*frameBuffer);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_EncodedImageBuffer_GenerateUrl(void* nuiEncodedImageBuffer)
{
  void*                     jresult;
  Dali::Toolkit::ImageUrl   result;
  Dali::EncodedImageBuffer* encodedImageBuffer = (Dali::EncodedImageBuffer*)nuiEncodedImageBuffer;

  if(!encodedImageBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::EncodedImageBuffer const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl((const Dali::EncodedImageBuffer&)*encodedImageBuffer);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ImageUrl_Copy(void* csImageUrl)
{
  Dali::Toolkit::ImageUrl* imageUrl = (Dali::Toolkit::ImageUrl*)csImageUrl;
  Dali::Toolkit::ImageUrl* result   = 0;

  if(!imageUrl)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ImageUrl const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Toolkit::ImageUrl*)new Dali::Toolkit::ImageUrl((Dali::Toolkit::ImageUrl const&)*imageUrl);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageInterface_GenerateUrl(void* nuiHandle)
{
  Dali::Toolkit::ImageUrl     result;
  Dali::NativeImageInterface* nativeImage = (Dali::NativeImageInterface*)nuiHandle;
  void*                       jresult;

  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl(nativeImage);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageInterface_GenerateUrl_With_PreMultiplied(void* nuiHandle, bool preMultiplied)
{
  Dali::Toolkit::ImageUrl     result;
  Dali::NativeImageInterface* nativeImage = (Dali::NativeImageInterface*)nuiHandle;
  void*                       jresult;

  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl(nativeImage, preMultiplied);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageSource_GenerateUrl(void* handle)
{
  Dali::Toolkit::ImageUrl result;
  NativeImage*            nativeImage = (NativeImage*)handle;
  void*                   jresult;

  if(!nativeImage)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl(nativeImage);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageSource_GenerateUrl_With_PreMultiplied(void* handle, bool preMultiplied)
{
  Dali::Toolkit::ImageUrl result;
  NativeImage*            nativeImage = (NativeImage*)handle;
  void*                   jresult;

  if(!nativeImage)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl(nativeImage, preMultiplied);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageQueue_GenerateUrl(void* nuiqueue)
{
  Dali::Toolkit::ImageUrl result;
  Dali::NativeImageQueue* queue = (Dali::NativeImageQueue*)nuiqueue;
  void*                   jresult;
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl(queue);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageQueue_GenerateUrl_With_PreMultiplied(void* nuiqueue, bool preMultiplied)
{
  Dali::Toolkit::ImageUrl result;
  Dali::NativeImageQueue* queue = (Dali::NativeImageQueue*)nuiqueue;
  void*                   jresult;
  {
    try
    {
      result = Dali::Toolkit::ImageUrlUtils::GenerateUrl(queue, preMultiplied);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ImageUrl_New(void* csTexture, bool preMultiplied)
{
  Dali::Toolkit::ImageUrl result;

  if(!csTexture)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Texture const & type is null", 0);
    return 0;
  }

  Dali::Texture texture = *(Dali::Texture*)csTexture;
  {
    try
    {
      result = Dali::Toolkit::ImageUrl::New(texture, preMultiplied);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)new Dali::Toolkit::ImageUrl(result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ImageUrl(void* jarg1)
{
  Dali::Toolkit::ImageUrl* imageUrl = (Dali::Toolkit::ImageUrl*)0;

  imageUrl = (Dali::Toolkit::ImageUrl*)jarg1;
  {
    try
    {
      delete imageUrl;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_ImageUrl_Get(void* jarg1)
{
  char*                    jresult;
  const char*              result;
  Dali::Toolkit::ImageUrl* imageUrl = (Dali::Toolkit::ImageUrl*)0;

  imageUrl = (Dali::Toolkit::ImageUrl*)jarg1;
  {
    try
    {
      result = imageUrl->GetUrl().CStr();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = SWIG_csharp_string_callback(result);

  return jresult;
}

#ifdef __cplusplus
}
#endif