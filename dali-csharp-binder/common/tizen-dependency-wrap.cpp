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
#include <dali/dali.h>
#include <dali/devel-api/adaptor-framework/native-image-source-devel.h>
#include <dali/devel-api/adaptor-framework/native-image-source-queue.h>

// Tizen dependency header
#include <tbm_surface.h>
#include <tbm_surface_queue.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Texture_TbmSurface(tbm_surface_h tbm_surface)
{
  Dali::NativeImageSourcePtr mNativeImageSrc;
  Dali::Texture              mNativeTexture;
  void*                      jresult;

  if(!tbm_surface)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "tbm surface is null", 0);
    return 0;
  }

  try
  {
    Dali::Any source(tbm_surface);
    mNativeImageSrc = Dali::NativeImageSource::New(source);
    mNativeTexture  = Dali::Texture::New(*mNativeImageSrc);
  }
  CALL_CATCH_EXCEPTION(0);

  jresult = new Dali::Texture((const Dali::Texture&)mNativeTexture);
  return (void*)jresult;
}

struct NativeImageSourcePtrHandle
{
  Dali::NativeImageSourcePtr Ptr;
};

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageSource_New_Handle_With_TbmSurface(tbm_surface_h csTbmSurface)
{
  void*                       jresult;
  NativeImageSourcePtrHandle* handle     = new NativeImageSourcePtrHandle();
  Dali::Any                   tbmSurface = (Dali::Any)csTbmSurface;
  {
    try
    {
      handle->Ptr = Dali::NativeImageSource::New(tbmSurface);
    }
    CALL_CATCH_EXCEPTION_WITH_FUNCTION(0, [](NativeImageSourcePtrHandle* ptr)
    { delete ptr; }, handle);
  }
  jresult = (void*)handle;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_NativeImageSource_SetSource(void* jarg1, tbm_surface_h csTbmSurface)
{
  Dali::NativeImageSource* pImage     = (Dali::NativeImageSource*)jarg1;
  Dali::Any                tbmSurface = (Dali::Any)csTbmSurface;

  try
  {
    pImage->SetSource(tbmSurface);
  }
  CALL_CATCH_EXCEPTION();
}

struct NativeImageSourceQueuePtrHandle
{
  Dali::NativeImageSourceQueuePtr Ptr;
};

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageQueuePtr_New_Handle_With_TbmQueue(tbm_surface_queue_h csTbmQueue)
{
  void*                            jresult;
  NativeImageSourceQueuePtrHandle* queue    = new NativeImageSourceQueuePtrHandle();
  Dali::Any                        tbmQueue = (Dali::Any)csTbmQueue;
  {
    try
    {
      queue->Ptr = Dali::NativeImageSourceQueue::New(tbmQueue);
    }
    CALL_CATCH_EXCEPTION_WITH_FUNCTION(0, [](NativeImageSourceQueuePtrHandle* ptr)
    { delete ptr; }, queue);
  }
  jresult = (void*)queue;
  return jresult;
}

#ifdef __cplusplus
}
#endif
