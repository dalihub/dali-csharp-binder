/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/public-api/image-loader/image.h>
#include <dali-toolkit/public-api/image-loader/image-url.h>
#include <dali/public-api/adaptor-framework/encoded-image-buffer.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define CALL_CATCH_EXCEPTION(ret)                                          \
  catch (std::out_of_range & e)                                            \
  {                                                                        \
    SWIG_CSharpException(SWIG_IndexError, const_cast<char *>(e.what()));   \
    return ret;                                                            \
  }                                                                        \
  catch (std::exception & e)                                               \
  {                                                                        \
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char *>(e.what())); \
    return ret;                                                            \
  }                                                                        \
  catch (Dali::DaliException e)                                            \
  {                                                                        \
    SWIG_CSharpException(SWIG_UnknownError, e.condition);                  \
    return ret;                                                            \
  }                                                                        \
  catch (...)                                                              \
  {                                                                        \
    SWIG_CSharpException(SWIG_UnknownError, "unknown error");              \
    return ret;                                                            \
  }

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
