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
#include <dali/public-api/adaptor-framework/encoded-image-buffer.h>
#include <dali-toolkit/public-api/image-loader/image.h>
#include <dali-toolkit/public-api/image-loader/image-url.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C"
{
#endif

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_EncodedImageBuffer__SWIG_0()
{
  void *jresult;
  Dali::EncodedImageBuffer *result = 0;

  {
    try
    {
      result = new Dali::EncodedImageBuffer();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_EncodedImageBuffer__SWIG_1(void *nuiEncodedImageBuffer)
{
  void *jresult;
  Dali::EncodedImageBuffer *result = (Dali::EncodedImageBuffer *)0;
  Dali::EncodedImageBuffer *encodedImageBuffer = (Dali::EncodedImageBuffer *)nuiEncodedImageBuffer;;

  if (!encodedImageBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::EncodedImageBuffer const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = new Dali::EncodedImageBuffer((Dali::EncodedImageBuffer const &)*encodedImageBuffer);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

// note: nuiRawBuffer is same as Dali::Vector<unsigned char>, which created by CSharp_Dali_new_VectorUnsignedChar__SWIG_0
SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_EncodedImageBuffer_New(void *nuiRawBuffer)
{
  void *jresult;
  Dali::EncodedImageBuffer::RawBufferType *buffer = (Dali::EncodedImageBuffer::RawBufferType *)nuiRawBuffer;
  Dali::EncodedImageBuffer result;

  if (!buffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null buffer", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::EncodedImageBuffer::New((const Dali::EncodedImageBuffer::RawBufferType &)*buffer);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::EncodedImageBuffer((const Dali::EncodedImageBuffer &)result);
  return jresult;
}

// note: nuiRawBuffer is same as Dali::Vector<unsigned char>, which created by CSharp_Dali_new_VectorUnsignedChar__SWIG_0
SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_EncodedImageBuffer_New__SWIG_1(void *nuiRawBuffer, int nuiImageType)
{
  void *jresult;
  Dali::EncodedImageBuffer::RawBufferType *buffer = (Dali::EncodedImageBuffer::RawBufferType *)nuiRawBuffer;
  Dali::EncodedImageBuffer result;

  if (!buffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null buffer", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::EncodedImageBuffer::New((const Dali::EncodedImageBuffer::RawBufferType &)*buffer, static_cast<Dali::EncodedImageBuffer::ImageType>(nuiImageType));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::EncodedImageBuffer((const Dali::EncodedImageBuffer &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_EncodedImageBuffer(void *nuiEncodedImageBuffer)
{
  Dali::EncodedImageBuffer *encodedImageBuffer = (Dali::EncodedImageBuffer *)nuiEncodedImageBuffer;;
  {
    try
    {
      delete encodedImageBuffer;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_EncodedImageBuffer_SetImageType(void *nuiEncodedImageBuffer, int nuiImageType)
{
  Dali::EncodedImageBuffer *encodedImageBuffer = (Dali::EncodedImageBuffer *)nuiEncodedImageBuffer;;

  if (!encodedImageBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::EncodedImageBuffer & type is null", 0);
  }
  {
    try
    {
      encodedImageBuffer->SetImageType(static_cast<Dali::EncodedImageBuffer::ImageType>(nuiImageType));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_EncodedImageBuffer_GetImageType(void *nuiEncodedImageBuffer)
{
  Dali::EncodedImageBuffer::ImageType result;
  Dali::EncodedImageBuffer *encodedImageBuffer = (Dali::EncodedImageBuffer *)nuiEncodedImageBuffer;;

  if (!encodedImageBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::EncodedImageBuffer const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = ((const Dali::EncodedImageBuffer*)encodedImageBuffer)->GetImageType();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return static_cast<int>(result);
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_EncodedImageBuffer_GetRawBuffer(void *nuiEncodedImageBuffer)
{
  void *jresult;
  Dali::EncodedImageBuffer::RawBufferType *result = (Dali::EncodedImageBuffer::RawBufferType *)0;
  Dali::EncodedImageBuffer *encodedImageBuffer = (Dali::EncodedImageBuffer *)nuiEncodedImageBuffer;;

  if (!encodedImageBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::EncodedImageBuffer const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = const_cast<Dali::EncodedImageBuffer::RawBufferType *>(&(encodedImageBuffer->GetRawBuffer()));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_EncodedImageBuffer_GenerateUrl(void *nuiEncodedImageBuffer)
{
  void *jresult;
  Dali::Toolkit::ImageUrl result;
  Dali::EncodedImageBuffer *encodedImageBuffer = (Dali::EncodedImageBuffer *)nuiEncodedImageBuffer;;

  if (!encodedImageBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::EncodedImageBuffer const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Toolkit::Image::GenerateUrl((const Dali::EncodedImageBuffer &)*encodedImageBuffer);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageUrl((const Dali::Toolkit::ImageUrl &)result);
  return jresult;
}

#ifdef __cplusplus
}
#endif
