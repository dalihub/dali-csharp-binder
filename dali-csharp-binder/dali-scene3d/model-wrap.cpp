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
#include <dali-scene3d/public-api/controls/model/model.h>
#include <dali-scene3d/public-api/loader/bvh-loader.h>
#include <dali-scene3d/public-api/loader/facial-animation-loader.h>
#include <dali-scene3d/public-api/model-motion/motion-data.h>
#include <dali/devel-api/animation/key-frames-devel.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

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

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_New_SWIG_1()
{
  Dali::Scene3D::Model result;

  {
    try
    {
      result = Dali::Scene3D::Model::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::Model((const Dali::Scene3D::Model&)result);
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


SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_GetModelRoot(void* csModel)
{
  Dali::Scene3D::Model*    model = (Dali::Scene3D::Model*)csModel;
  Dali::Scene3D::ModelNode result;

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

  return new Dali::Scene3D::ModelNode((const Dali::Scene3D::ModelNode&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_AddModelNode(void* csModel, void* csModelNode)
{
  Dali::Scene3D::Model*     model     = (Dali::Scene3D::Model*)csModel;
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return;
  }

  try
  {
    model->AddModelNode(*modelNode);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_RemoveModelNode(void* csModel, void* csModelNode)
{
  Dali::Scene3D::Model*     model     = (Dali::Scene3D::Model*)csModel;
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return;
  }

  try
  {
    model->RemoveModelNode(*modelNode);
  }
  CALL_CATCH_EXCEPTION();
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

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Model_GetCameraCount(void* csModel)
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
      result = model->GetCameraCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_GenerateCamera(void* csModel, unsigned int index)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  Dali::CameraActor     result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = model->GenerateCamera(index);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::CameraActor((const Dali::CameraActor&)result);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Model_ApplyCamera(void* csModel, unsigned int index, void* csCameraActor)
{
  Dali::Scene3D::Model* model       = (Dali::Scene3D::Model*)csModel;
  Dali::CameraActor*    cameraActor = (Dali::CameraActor*)csCameraActor;
  bool                  result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  if(!cameraActor)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::CameraActor", 0);
    return 0;
  }
  {
    try
    {
      result = model->ApplyCamera(index, *cameraActor);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_FindChildModelNodeByName(void* csModel, char* nodeName)
{
  Dali::Scene3D::Model*    model = (Dali::Scene3D::Model*)csModel;
  Dali::Scene3D::ModelNode result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return nullptr;
  }

  try
  {
    result = model->FindChildModelNodeByName(std::string_view(nodeName));
  }
  CALL_CATCH_EXCEPTION(nullptr);

  return new Dali::Scene3D::ModelNode((const Dali::Scene3D::ModelNode&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_GenerateMotionDataAnimation(void* csModel, void* csMotionData)
{
  Dali::Scene3D::Model*      model      = (Dali::Scene3D::Model*)csModel;
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;
  Dali::Animation            result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return nullptr;
  }
  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return nullptr;
  }

  try
  {
    result = model->GenerateMotionDataAnimation(*motionData);
  }
  CALL_CATCH_EXCEPTION(nullptr);

  return new Dali::Animation((const Dali::Animation&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_SetMotionData(void* csModel, void* csMotionData)
{
  Dali::Scene3D::Model*      model      = (Dali::Scene3D::Model*)csModel;
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return;
  }
  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return;
  }

  try
  {
    model->SetMotionData(*motionData);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_CastShadow(void* csModel, bool csCastShadow)
{
  Dali::Scene3D::Model*      model      = (Dali::Scene3D::Model*)csModel;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return;
  }

  try
  {
    model->CastShadow(csCastShadow);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Model_IsShadowCasting(void* csModel)
{
  Dali::Scene3D::Model*      model      = (Dali::Scene3D::Model*)csModel;
  bool                       result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }

  try
  {
    result = model->IsShadowCasting();
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_ReceiveShadow(void* csModel, bool csReceiveShadow)
{
  Dali::Scene3D::Model*      model      = (Dali::Scene3D::Model*)csModel;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return;
  }

  try
  {
    model->ReceiveShadow(csReceiveShadow);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Model_IsShadowReceiving(void* csModel)
{
  Dali::Scene3D::Model*      model      = (Dali::Scene3D::Model*)csModel;
  bool                       result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }

  try
  {
    result = model->IsShadowReceiving();
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_LoadBvhAnimation_1(void* csModel, char* csFileName, void* csScale, bool csUseRootNodeTranslate)
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
    scale = Dali::Vector3(*static_cast<const Dali::Vector3*>(csScale));
  }

  std::string filename(csFileName);
  {
    try
    {
      Dali::Scene3D::Loader::AnimationDefinition animationDefinition = Dali::Scene3D::Loader::LoadBvh(filename, "LoadedBvhAnimation", false, scale);

      if(csUseRootNodeTranslate && animationDefinition.GetPropertyCount() > 0u)
      {
        // We can assume that 0's property is for root translate
        auto& property = animationDefinition.GetPropertyAt(0u);
        auto& keyFrames = property.mKeyFrames;

        // Let we check that we can change animatable property
        // TODO : If AnimateBetweenBy feature prepared, we can remove below logic.
        if(keyFrames)
        {
          auto rootNode = model->FindChildByName(property.mNodeName);
          if(rootNode)
          {
            // Get root node's current position and apply it into property animation.
            auto rootNodePosition = rootNode.GetProperty<Dali::Vector3>(Dali::Actor::Property::POSITION);

            auto frameCount = Dali::DevelKeyFrames::GetKeyFrameCount(keyFrames);
            for(auto i = 0u; i < frameCount; ++i)
            {
              float                 keyFrameProgress;
              Dali::Property::Value keyFrameValue;
              Dali::Vector3         valuePosition;

              Dali::DevelKeyFrames::GetKeyFrame(keyFrames, i, keyFrameProgress, keyFrameValue);
              if(DALI_LIKELY(keyFrameValue.Get(valuePosition)))
              {
                Dali::DevelKeyFrames::SetKeyFrameValue(keyFrames, i, rootNodePosition + valuePosition);
              }
            }
          }
        }
      }

      Dali::Scene3D::Loader::AnimatedProperty::GetActor getActor = [&model](const Dali::Scene3D::Loader::AnimatedProperty& property) -> Dali::Actor {
        return model->FindChildByName(property.mNodeName);
      };
      result = animationDefinition.ReAnimate(getActor);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Animation((const Dali::Animation&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_LoadBvhAnimation_2(void* csModel, char* csBuffer, int csBufferLength, void* csScale, bool csUseRootNodeTranslate)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  Dali::Animation       result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  if(!csBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string for buffer", 0);
    return 0;
  }

  Dali::Vector3 scale = Dali::Vector3::ONE;
  // csScale is option.
  if(csScale != nullptr)
  {
    scale = Dali::Vector3(*static_cast<const Dali::Vector3*>(csScale));
  }

  const uint8_t* rawBuffer = reinterpret_cast<const uint8_t*>(csBuffer);
  {
    try
    {
      Dali::Scene3D::Loader::AnimationDefinition animationDefinition = Dali::Scene3D::Loader::LoadBvhFromBuffer(rawBuffer, csBufferLength, "LoadedBvhAnimation", false, scale);

      if(csUseRootNodeTranslate && animationDefinition.GetPropertyCount() > 0u)
      {
        // We can assume that 0's property is for root translate
        auto& property = animationDefinition.GetPropertyAt(0u);
        auto& keyFrames = property.mKeyFrames;

        // Let we check that we can change animatable property
        // TODO : If AnimateBetweenBy feature prepared, we can remove below logic.
        if(keyFrames)
        {
          auto rootNode = model->FindChildByName(property.mNodeName);
          if(rootNode)
          {
            // Get root node's current position and apply it into property animation.
            auto rootNodePosition = rootNode.GetProperty<Dali::Vector3>(Dali::Actor::Property::POSITION);

            auto frameCount = Dali::DevelKeyFrames::GetKeyFrameCount(keyFrames);
            for(auto i = 0u; i < frameCount; ++i)
            {
              float                 keyFrameProgress;
              Dali::Property::Value keyFrameValue;
              Dali::Vector3         valuePosition;
              Dali::DevelKeyFrames::GetKeyFrame(keyFrames, i, keyFrameProgress, keyFrameValue);
              if(DALI_LIKELY(keyFrameValue.Get(valuePosition)))
              {
                Dali::DevelKeyFrames::SetKeyFrameValue(keyFrames, i, rootNodePosition + valuePosition);
              }
            }
          }
        }
      }

      Dali::Scene3D::Loader::AnimatedProperty::GetActor getActor = [&model](const Dali::Scene3D::Loader::AnimatedProperty& property) -> Dali::Actor {
        return model->FindChildByName(property.mNodeName);
      };
      result = animationDefinition.ReAnimate(getActor);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Animation((const Dali::Animation&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_LoadFacialAnimation_1(void* csModel, char* csFileName)
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

  std::string filename(csFileName);
  {
    try
    {
      Dali::Scene3D::Loader::AnimationDefinition        animationDefinition = Dali::Scene3D::Loader::LoadFacialAnimation(filename);
      Dali::Scene3D::Loader::AnimatedProperty::GetActor getActor            = [&model](const Dali::Scene3D::Loader::AnimatedProperty& property) -> Dali::Actor {
        return model->FindChildByName(property.mNodeName);
      };
      result = animationDefinition.ReAnimate(getActor);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Animation((const Dali::Animation&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_LoadFacialAnimation_2(void* csModel, char* csBuffer, int csBufferLength)
{
  Dali::Scene3D::Model* model = (Dali::Scene3D::Model*)csModel;
  Dali::Animation       result;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  if(!csBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string for buffer", 0);
    return 0;
  }

  const uint8_t* rawBuffer = reinterpret_cast<const uint8_t*>(csBuffer);
  {
    try
    {
      Dali::Scene3D::Loader::AnimationDefinition        animationDefinition = Dali::Scene3D::Loader::LoadFacialAnimationFromBuffer(rawBuffer, csBufferLength);
      Dali::Scene3D::Loader::AnimatedProperty::GetActor getActor            = [&model](const Dali::Scene3D::Loader::AnimatedProperty& property) -> Dali::Actor {
        return model->FindChildByName(property.mNodeName);
      };
      result = animationDefinition.ReAnimate(getActor);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Animation((const Dali::Animation&)result);
}

GENERATE_SIGNAL(Dali::Scene3D::Model*, bool (*)(Dali::Scene3D::Model, Dali::Scene3D::ModelNode), Dali_Model, MeshHitSignal);

#ifdef __cplusplus
}
#endif
