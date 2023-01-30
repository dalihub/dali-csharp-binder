/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
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
#include <dali-scene3d/public-api/controls/model/model.h>
#include <dali-scene3d/public-api/loader/bvh-loader.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_New_SWIG_0(char* csModelPath, char* csResourcePath)
{
  Dali::Scene3D::Model result;

  if(!csModelPath)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string modelPath(csModelPath);

  if(!csResourcePath)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string resourcePath(csResourcePath);

  {
    try
    {
      result = Dali::Scene3D::Model::New(modelPath, resourcePath);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::Model((const Dali::Scene3D::Model&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Model_SWIG_0()
{
  Dali::Scene3D::Model* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::Model*)new Dali::Scene3D::Model();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Model_SWIG_1(void* csModel)
{
  Dali::Scene3D::Model* model  = (Dali::Scene3D::Model*)csModel;
  Dali::Scene3D::Model* result = 0;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::Model const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::Model*)new Dali::Scene3D::Model((Dali::Scene3D::Model const&)*model);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Model(void* csModel)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  {
    try
    {
      delete model;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::Model* destination = (Dali::Scene3D::Model*)csDestination;
  Dali::Scene3D::Model* source      = (Dali::Scene3D::Model*)csSource;
  Dali::Scene3D::Model* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::Model const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::Model*)&(destination)->operator=((Dali::Scene3D::Model const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_DownCast(void* csHandle)
{
  Dali::BaseHandle*    handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::Model result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::Model::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::Model((const Dali::Scene3D::Model&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_GetModelRoot(void* csModel)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  Dali::Actor           result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = model->GetModelRoot();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Actor((const Dali::Actor&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_SetChildrenSensitive(void* csModel, bool enable)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return;
  }
  {
    try
    {
      model->SetChildrenSensitive(enable);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Model_GetChildrenSensitive(void* csModel)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  bool                  result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return false;
  }
  {
    try
    {
      result = model->GetChildrenSensitive();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_SetImageBasedLightSource(void* csModel, char* csDiffuseUrl, char* csSpecularUrl, float scaleFactor)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return;
  }
  if(!csDiffuseUrl)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string diffuseUrl(csDiffuseUrl);
  if(!csSpecularUrl)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string specularUrl(csSpecularUrl);
  {
    try
    {
      model->SetImageBasedLightSource(diffuseUrl, specularUrl, scaleFactor);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_SetImageBasedLightScaleFactor(void* csModel, float scaleFactor)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return;
  }
  {
    try
    {
      model->SetImageBasedLightScaleFactor(scaleFactor);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Model_GetImageBasedLightScaleFactor(void* csModel)
{
  Dali::Scene3D::Model* model       = (Dali::Scene3D::Model*)csModel;
  float                 scaleFactor = 1.0f;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return scaleFactor;
  }
  {
    try
    {
      scaleFactor = model->GetImageBasedLightScaleFactor();
    }
    CALL_CATCH_EXCEPTION(0.0f);
  }
  return scaleFactor;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Model_GetAnimationCount(void* csModel)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  unsigned int          result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = model->GetAnimationCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_GetAnimation_1(void* csModel, unsigned int index)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  Dali::Animation       result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = model->GetAnimation(index);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Animation((const Dali::Animation&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_GetAnimation_2(void* csModel, char* csName)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  Dali::Animation       result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  if(!csName)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string name(csName);
  {
    try
    {
      result = model->GetAnimation(name);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Animation((const Dali::Animation&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_LoadBvhAnimation_1(void* csModel, char* csFileName, void* csScale)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  Dali::Animation       result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  if(!csFileName)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string for filename", 0);
    return 0;
  }

  Dali::Vector3 scale = Dali::Vector3::ONE;
  // csScale is option.
  if(csScale != nullptr)
  {
    scale = Dali::Vector3(*static_cast<const Dali::Vector3 *>(csScale));
  }
  std::string filename(csFileName);
  {
    try
    {
      Dali::Scene3D::Loader::AnimationDefinition animationDefinition = Dali::Scene3D::Loader::LoadBvh(filename, "LoadedBvhAnimation", scale);
      Dali::Scene3D::Loader::AnimatedProperty::GetActor getActor = [&model](const Dali::Scene3D::Loader::AnimatedProperty& property)->Dali::Actor{
        return model->FindChildByName(property.mNodeName);
      };
      result = animationDefinition.ReAnimate(getActor);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Animation((const Dali::Animation&)result);
}

#ifdef __cplusplus
}
#endif
