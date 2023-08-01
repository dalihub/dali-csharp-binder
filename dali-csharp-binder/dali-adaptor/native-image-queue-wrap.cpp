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

// EXTERNAL INCLUDES
#include <dali/devel-api/adaptor-framework/native-image-source-queue.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

struct NativeImageSourceQueuePtrHandle
{
  Dali::NativeImageSourceQueuePtr Ptr;
};

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_NativeImageQueuePtr(unsigned int width, unsigned int height, int colorFormat)
{
  void* jresult;
  NativeImageSourceQueuePtrHandle* queue = new NativeImageSourceQueuePtrHandle();
  {
    try {
      queue->Ptr = Dali::NativeImageSourceQueue::New(width, height, (Dali::NativeImageSourceQueue::ColorFormat)colorFormat);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)queue;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageQueue_GetPtr(void* nuiqueue)
{
  void* jresult;
  NativeImageSourceQueuePtrHandle* queue = (NativeImageSourceQueuePtrHandle*)nuiqueue;
  jresult = (void*)(queue->Ptr.Get());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_NativeImageQueuePtr(void* nuiqueue)
{
  NativeImageSourceQueuePtrHandle* queue = (NativeImageSourceQueuePtrHandle*)nuiqueue;
  {
    try {
      delete queue;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_NativeImageQueue_CanDequeueBuffer(void* nuiqueue)
{
  bool jresult;
  Dali::NativeImageSourceQueue* queue = (Dali::NativeImageSourceQueue*)nuiqueue;
  {
    try {
      jresult = queue->CanDequeueBuffer();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageQueue_DequeueBuffer(void* nuiqueue, int* jwidth, int* jheight, int* jstride)
{
  void* jresult;
  Dali::NativeImageSourceQueue* queue = (Dali::NativeImageSourceQueue*)nuiqueue;
  uint32_t* width = (uint32_t*)(jwidth);
  uint32_t* height = (uint32_t*)(jheight);
  uint32_t* stride = (uint32_t*)(jstride);
  {
    try {
      jresult = (void *)queue->DequeueBuffer( *width, *height, *stride );
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_NativeImageQueue_EnqueueBuffer(void* nuiqueue, void* jbuffer)
{
  bool jresult;
  Dali::NativeImageSourceQueue* queue = (Dali::NativeImageSourceQueue*)nuiqueue;
  uint8_t* buffer = (uint8_t*)jbuffer;
  {
    try {
      jresult = queue->EnqueueBuffer(buffer);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return jresult;
}

#ifdef __cplusplus
}
#endif

