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
#include <dali/devel-api/update/update-proxy.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C"
{
#endif



SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetPosition(void * updateProxy, unsigned int id,  void* position) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)position;
  return proxy->GetPosition(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetPosition(void * updateProxy, unsigned int id, void* position) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)position;
  return proxy->SetPosition(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakePosition(void * updateProxy, unsigned int id, void* position) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)position;
  return proxy->BakePosition(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetOrientation(void * updateProxy, unsigned int id,  void* orientation) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Quaternion* quaternion = (Dali::Quaternion *)orientation;
  return proxy->GetOrientation(id, *quaternion);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetOrientation(void * updateProxy, unsigned int id, void* orientation) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Quaternion* quaternion = (Dali::Quaternion *)orientation;
  return proxy->SetOrientation(id, *quaternion);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeOrientation(void * updateProxy, unsigned int id, void* orientation) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Quaternion* quaternion = (Dali::Quaternion *)orientation;
  return proxy->BakeOrientation(id, *quaternion);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetSize(void * updateProxy, unsigned int id, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)size;
  return proxy->GetSize(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetSize(void * updateProxy, unsigned int id, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)size;
  return proxy->SetSize(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeSize(void * updateProxy, unsigned int id, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)size;
  return proxy->BakeSize(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetPositionAndSize(void * updateProxy, unsigned int id, void* position, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3_pos = (Dali::Vector3 *)position;
  Dali::Vector3* vector3_size = (Dali::Vector3 *)size;
  return proxy->GetPositionAndSize(id, *vector3_pos, *vector3_size);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetWorldPositionScaleAndSize(void * updateProxy, unsigned int id, void* position, void* scale, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3_pos = (Dali::Vector3 *)position;
  Dali::Vector3* vector3_scale = (Dali::Vector3 *)scale;
  Dali::Vector3* vector3_size = (Dali::Vector3 *)size;
  return proxy->GetWorldPositionScaleAndSize(id, *vector3_pos, *vector3_scale, *vector3_size);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetWorldTransformAndSize(void * updateProxy, unsigned int id, void* position, void* scale, void* orientation, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3_pos = (Dali::Vector3 *)position;
  Dali::Vector3* vector3_scale = (Dali::Vector3 *)scale;
  Dali::Quaternion* quaternion_orientation = (Dali::Quaternion *)orientation;
  Dali::Vector3* vector3_size = (Dali::Vector3 *)size;
  return proxy->GetWorldTransformAndSize(id, *vector3_pos, *vector3_scale, *quaternion_orientation, *vector3_size);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetScale(void * updateProxy, unsigned int id, void* scale) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)scale;
  return proxy->GetScale(id,* vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetScale(void * updateProxy, unsigned int id, void* scale) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)scale;
  return proxy->SetScale(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeScale(void * updateProxy, unsigned int id, void* scale) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)scale;
  return proxy->BakeScale(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetColor(void * updateProxy, unsigned int id, void* color) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4* vector4 = (Dali::Vector4 *)color;
  return proxy->GetColor(id, *vector4);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetColor(void * updateProxy, unsigned int id, void* color) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4* vector4 = (Dali::Vector4 *)color;
  return proxy->SetColor(id, *vector4);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeColor(void * updateProxy, unsigned int id, void* color) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4* vector4 = (Dali::Vector4 *)color;
  return proxy->BakeColor(id, *vector4);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetIgnored(void * updateProxy, unsigned int id, bool ignored) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  return proxy->SetIgnored(id, ignored);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetIgnored(void * updateProxy, unsigned int id, bool* ignored) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  return proxy->GetIgnored(id, *ignored);
}

/// UIVector2 and UIColor
SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetPositionVector2Componentwise(void * updateProxy, unsigned int id,  float* x, float* y) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3 vector3;
  bool ret = proxy->GetPosition(id, vector3);
  *x = vector3.x;
  *y = vector3.y;
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakePositionVector2Componentwise(void * updateProxy, unsigned int id, float x, float y) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  return proxy->BakePosition(id, Dali::Vector3(x, y, 0.0f));
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetSizeVector2Componentwise(void * updateProxy, unsigned int id, float* x, float* y) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3 vector3;
  bool ret = proxy->GetSize(id, vector3);
  *x = vector3.x;
  *y = vector3.y;
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeSizeVector2Componentwise(void * updateProxy, unsigned int id, float x, float y) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  return proxy->BakeSize(id, Dali::Vector3(x, y, 0.0f));
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetScaleVector2Componentwise(void * updateProxy, unsigned int id, float* x, float* y) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3 vector3;
  bool ret = proxy->GetScale(id, vector3);
  *x = vector3.x;
  *y = vector3.y;
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeScaleVector2Componentwise(void * updateProxy, unsigned int id, float x, float y) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  return proxy->BakeScale(id, Dali::Vector3(x, y, 1.0f));
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetColorVector4Componentwise(void * updateProxy, unsigned int id, float* r, float* g, float* b, float* a) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4 vector4;
  bool ret = proxy->GetColor(id, vector4);
  *r = vector4.r;
  *g = vector4.g;
  *b = vector4.b;
  *a = vector4.a;
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeColorVector4Componentwise(void * updateProxy, unsigned int id, float r, float g, float b, float a) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  return proxy->BakeColor(id, Dali::Vector4(r, g, b, a));
}

#ifdef __cplusplus
}
#endif
