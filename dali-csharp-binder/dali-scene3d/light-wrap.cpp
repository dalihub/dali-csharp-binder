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
#include <dali-scene3d/public-api/light/light.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Light_New_SWIG_0()
{
  Dali::Scene3D::Light result;

  {
    try
    {
      result = Dali::Scene3D::Light::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::Light((const Dali::Scene3D::Light&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Light_SWIG_0()
{
  Dali::Scene3D::Light* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::Light*)new Dali::Scene3D::Light();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Light_SWIG_1(void* csLight)
{
  Dali::Scene3D::Light* light  = (Dali::Scene3D::Light*)csLight;
  Dali::Scene3D::Light* result = 0;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::Light const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::Light*)new Dali::Scene3D::Light((Dali::Scene3D::Light const&)*light);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Light(void* csLight)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;
  {
    try
    {
      delete light;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Light_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::Light* destination = (Dali::Scene3D::Light*)csDestination;
  Dali::Scene3D::Light* source      = (Dali::Scene3D::Light*)csSource;
  Dali::Scene3D::Light* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::Light const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::Light*)&(destination)->operator=((Dali::Scene3D::Light const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Light_DownCast(void* csHandle)
{
  Dali::BaseHandle*    handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::Light result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::Light::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::Light((const Dali::Scene3D::Light&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Light_Enable(void* csLight, bool enable)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return;
  }

  try
  {
    light->Enable(enable);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Light_IsEnabled(void* csLight)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;
  bool                  result;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return false;
  }

  try
  {
    result = light->IsEnabled();
  }
  CALL_CATCH_EXCEPTION(0);

  return result;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_Light_GetMaximumEnabledLightCount()
{
  uint32_t result = 0u;
  try
  {
    result = static_cast<uint32_t>(Dali::Scene3D::Light::GetMaximumEnabledLightCount());
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Light_EnableShadow(void* csLight, bool enable)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return;
  }

  try
  {
    light->EnableShadow(enable);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Light_IsShadowEnabled(void* csLight)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;
  bool                  result;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return false;
  }

  try
  {
    result = light->IsShadowEnabled();
  }
  CALL_CATCH_EXCEPTION(0);

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Light_EnableShadowSoftFiltering(void* csLight, bool enable)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return;
  }

  try
  {
    light->EnableShadowSoftFiltering(enable);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Light_IsShadowSoftFilteringEnabled(void* csLight)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;
  bool                  result;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return false;
  }

  try
  {
    result = light->IsShadowSoftFilteringEnabled();
  }
  CALL_CATCH_EXCEPTION(0);

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Light_SetShadowIntensity(void* csLight, float shadowIntensity)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return;
  }

  try
  {
    light->SetShadowIntensity(shadowIntensity);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Light_GetShadowIntensity(void* csLight)
{
  float result = 0.0f;

  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return 0.0f;
  }

  try
  {
    result = light->GetShadowIntensity();
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Light_SetShadowBias(void* csLight, float shadowBias)
{
  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return;
  }

  try
  {
    light->SetShadowBias(shadowBias);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Light_GetShadowBias(void* csLight)
{
  float result = 0.0f;

  Dali::Scene3D::Light* light = (Dali::Scene3D::Light*)csLight;

  if(!light)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Light", 0);
    return 0.0f;
  }

  try
  {
    result = light->GetShadowBias();
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

#ifdef __cplusplus
}
#endif
