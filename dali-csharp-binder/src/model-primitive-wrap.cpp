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
#include <dali-scene3d/public-api/model-components/model-primitive.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Primitive_New_SWIG_0()
{
  Dali::Scene3D::ModelPrimitive result;

  {
    try
    {
      result = Dali::Scene3D::ModelPrimitive::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::ModelPrimitive((const Dali::Scene3D::ModelPrimitive&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Model_Primitive_SWIG_0()
{
  Dali::Scene3D::ModelPrimitive* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::ModelPrimitive*)new Dali::Scene3D::ModelPrimitive();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Model_Primitive_SWIG_1(void* csModel)
{
  Dali::Scene3D::ModelPrimitive* model  = (Dali::Scene3D::ModelPrimitive*)csModel;
  Dali::Scene3D::ModelPrimitive* result = 0;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::ModelPrimitive const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::ModelPrimitive*)new Dali::Scene3D::ModelPrimitive((Dali::Scene3D::ModelPrimitive const&)*model);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Model_Primitive(void* csModel)
{
  Dali::Scene3D::ModelPrimitive* model = (Dali::Scene3D::ModelPrimitive*)csModel;
  {
    try
    {
      delete model;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Primitive_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::ModelPrimitive* destination = (Dali::Scene3D::ModelPrimitive*)csDestination;
  Dali::Scene3D::ModelPrimitive* source      = (Dali::Scene3D::ModelPrimitive*)csSource;
  Dali::Scene3D::ModelPrimitive* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::ModelPrimitive const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::ModelPrimitive*)&(destination)->operator=((Dali::Scene3D::ModelPrimitive const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Primitive_DownCast(void* csHandle)
{
  Dali::BaseHandle*    handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::ModelPrimitive result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelPrimitive", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::ModelPrimitive::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::ModelPrimitive((const Dali::Scene3D::ModelPrimitive&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_Primitive_SetGeometry(void* csModelPrimitive, void* csGeometry)
{
  Dali::Scene3D::ModelPrimitive* modelPrimitive = (Dali::Scene3D::ModelPrimitive*)csModelPrimitive;
  Dali::Geometry* geometry = (Dali::Geometry*)csGeometry;

  if(!modelPrimitive)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelPrimitive", 0);
    return;
  }
  {
    try
    {
      modelPrimitive->SetGeometry(*geometry);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Primitive_GetGeometry(void* csModelPrimitive)
{
  Dali::Scene3D::ModelPrimitive* modelPrimitive = (Dali::Scene3D::ModelPrimitive*)csModelPrimitive;
  Dali::Geometry result;

  if(!modelPrimitive)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelPrimitive", 0);
    return nullptr;
  }
  {
    try
    {
      result = modelPrimitive->GetGeometry();
    }
    CALL_CATCH_EXCEPTION(nullptr);
  }
  return new Dali::Geometry((const Dali::Geometry&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_Primitive_SetMaterial(void* csModelPrimitive, void* csMaterial)
{
   Dali::Scene3D::ModelPrimitive* modelPrimitive = (Dali::Scene3D::ModelPrimitive*)csModelPrimitive;
   Dali::Scene3D::Material* material = (Dali::Scene3D::Material*)csMaterial;

   if(!modelPrimitive)
   {
     SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
     return;
   }

   try
   {
     modelPrimitive->SetMaterial(*material);
   }
   CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Primitive_GetMaterial(void* csModelPrimitive)
{
  Dali::Scene3D::ModelPrimitive* modelPrimitive = (Dali::Scene3D::ModelPrimitive*)csModelPrimitive;
  Dali::Scene3D::Material result;

  if(!modelPrimitive)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelPrimitive", 0);
    return nullptr;
  }
  {
    try
    {
      result = modelPrimitive->GetMaterial();
    }
    CALL_CATCH_EXCEPTION(nullptr);
  }
  return new Dali::Scene3D::Material((const Dali::Scene3D::Material&)result);
}


#ifdef __cplusplus
}
#endif
