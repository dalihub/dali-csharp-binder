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
#include <dali-scene3d/public-api/model-components/material.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Material_New_SWIG_0()
{
  Dali::Scene3D::Material result;

  {
    try
    {
      result = Dali::Scene3D::Material::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::Material((const Dali::Scene3D::Material&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Material_SWIG_0()
{
  Dali::Scene3D::Material* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::Material*)new Dali::Scene3D::Material();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Material_SWIG_1(void* csModel)
{
  Dali::Scene3D::Material* model  = (Dali::Scene3D::Material*)csModel;
  Dali::Scene3D::Material* result = 0;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::Material const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::Material*)new Dali::Scene3D::Material((Dali::Scene3D::Material const&)*model);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Material(void* csModel)
{
  Dali::Scene3D::Material* model = (Dali::Scene3D::Material*)csModel;
  {
    try
    {
      delete model;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Material_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::Material* destination = (Dali::Scene3D::Material*)csDestination;
  Dali::Scene3D::Material* source      = (Dali::Scene3D::Material*)csSource;
  Dali::Scene3D::Material* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::Material const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::Material*)&(destination)->operator=((Dali::Scene3D::Material const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Material_DownCast(void* csHandle)
{
  Dali::BaseHandle*       handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::Material result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Material", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::Material::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::Material((const Dali::Scene3D::Material&)result);
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_NAME_get()
{
  return (int)Dali::Scene3D::Material::Property::NAME;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_BASE_COLOR_URL_get()
{
  return (int)Dali::Scene3D::Material::Property::BASE_COLOR_URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_BASE_COLOR_FACTOR_get()
{
  return (int)Dali::Scene3D::Material::Property::BASE_COLOR_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_METALLIC_ROUGHNESS_URL_get()
{
  return (int)Dali::Scene3D::Material::Property::METALLIC_ROUGHNESS_URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_METALLIC_FACTOR_get()
{
  return (int)Dali::Scene3D::Material::Property::METALLIC_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_ROUGHNESS_FACTOR_get()
{
  return (int)Dali::Scene3D::Material::Property::ROUGHNESS_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_NORMAL_URL_get()
{
  return (int)Dali::Scene3D::Material::Property::NORMAL_URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_NORMAL_SCALE_get()
{
  return (int)Dali::Scene3D::Material::Property::NORMAL_SCALE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_OCCLUSION_URL_get()
{
  return (int)Dali::Scene3D::Material::Property::OCCLUSION_URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_OCCLUSION_STRENGTH_get()
{
  return (int)Dali::Scene3D::Material::Property::OCCLUSION_STRENGTH;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_EMISSIVE_URL_get()
{
  return (int)Dali::Scene3D::Material::Property::EMISSIVE_URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_EMISSIVE_FACTOR_get()
{
  return (int)Dali::Scene3D::Material::Property::EMISSIVE_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_ALPHA_MODE_get()
{
  return (int)Dali::Scene3D::Material::Property::ALPHA_MODE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_ALPHA_CUTOFF_get()
{
  return (int)Dali::Scene3D::Material::Property::ALPHA_CUTOFF;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_DOUBLE_SIDED_get()
{
  return (int)Dali::Scene3D::Material::Property::DOUBLE_SIDED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_IOR_get()
{
  return (int)Dali::Scene3D::Material::Property::IOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_SPECULAR_URL_get()
{
  return (int)Dali::Scene3D::Material::Property::SPECULAR_URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_SPECULAR_FACTOR_get()
{
  return (int)Dali::Scene3D::Material::Property::SPECULAR_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_SPECULAR_COLOR_URL_get()
{
  return (int)Dali::Scene3D::Material::Property::SPECULAR_COLOR_URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Material_property_SPECULAR_COLOR_FACTOR_get()
{
  return (int)Dali::Scene3D::Material::Property::SPECULAR_COLOR_FACTOR;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Material_SetProperty(void* csMaterial, int index, void* csPropertyValue)
{
  Dali::Scene3D::Material* material      = (Dali::Scene3D::Material*)csMaterial;
  Dali::Property::Value*   propertyValue = (Dali::Property::Value*)csPropertyValue;

  if(!material)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Material", 0);
    return;
  }
  {
    try
    {
      material->SetProperty((Dali::Property::Index)index, *propertyValue);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Material_GetProperty(void* csMaterial, int index)
{
  Dali::Scene3D::Material* material = (Dali::Scene3D::Material*)csMaterial;
  Dali::Property::Value    result;

  if(!material)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Material", 0);
    return nullptr;
  }
  {
    try
    {
      result = material->GetProperty((Dali::Property::Index)index);
    }
    CALL_CATCH_EXCEPTION(nullptr);
  }
  return new Dali::Property::Value((const Dali::Property::Value&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Material_SetTexture(void* csMaterial, unsigned int index, void* csTexture)
{
  Dali::Scene3D::Material* material = (Dali::Scene3D::Material*)csMaterial;
  Dali::Texture*           texture  = (Dali::Texture*)csTexture;

  if(!material)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Material", 0);
    return;
  }

  if(!texture)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Texture", 0);
    return;
  }

  try
  {
    material->SetTexture((Dali::Scene3D::Material::TextureType)index, *texture);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Material_GetTexture(void* csMaterial, unsigned int index)
{
  Dali::Scene3D::Material* material = (Dali::Scene3D::Material*)csMaterial;
  Dali::Texture            result;

  if(!material)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Material", 0);
    return nullptr;
  }

  try
  {
    result = material->GetTexture((Dali::Scene3D::Material::TextureType)index);
  }
  CALL_CATCH_EXCEPTION(nullptr);

  return new Dali::Texture((const Dali::Texture&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Material_SetSampler(void* csMaterial, unsigned int index, void* csSampler)
{
  Dali::Scene3D::Material* material = (Dali::Scene3D::Material*)csMaterial;
  Dali::Sampler*           sampler  = (Dali::Sampler*)csSampler;

  if(!material)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Material", 0);
    return;
  }

  try
  {
    material->SetSampler((Dali::Scene3D::Material::TextureType)index, *sampler);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Material_GetSampler(void* csMaterial, unsigned int index)
{
  Dali::Scene3D::Material* material = (Dali::Scene3D::Material*)csMaterial;
  Dali::Sampler            result;

  if(!material)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Material", 0);
    return nullptr;
  }

  try
  {
    result = material->GetSampler((Dali::Scene3D::Material::TextureType)index);
  }
  CALL_CATCH_EXCEPTION(nullptr);
  return new Dali::Sampler((const Dali::Sampler&)result);
}

#ifdef __cplusplus
}
#endif
