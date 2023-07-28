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
#include <dali-scene3d/public-api/model-motion/motion-index/blend-shape-index.h>
#include <dali-scene3d/public-api/model-motion/motion-index/motion-index.h>
#include <dali-scene3d/public-api/model-motion/motion-index/motion-property-index.h>
#include <dali-scene3d/public-api/model-motion/motion-index/motion-transform-index.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

// MotionIndex

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionIndex_SWIG_0()
{
  Dali::Scene3D::MotionIndex* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::MotionIndex*)new Dali::Scene3D::MotionIndex();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionIndex_SWIG_1(void* csMotionIndex)
{
  Dali::Scene3D::MotionIndex* motionIndex = (Dali::Scene3D::MotionIndex*)csMotionIndex;
  Dali::Scene3D::MotionIndex* result     = 0;

  if(!motionIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionIndex*)new Dali::Scene3D::MotionIndex((Dali::Scene3D::MotionIndex const&)*motionIndex);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MotionIndex(void* csMotionIndex)
{
  Dali::Scene3D::MotionIndex* motionIndex = (Dali::Scene3D::MotionIndex*)csMotionIndex;
  {
    try
    {
      delete motionIndex;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionIndex_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::MotionIndex* destination = (Dali::Scene3D::MotionIndex*)csDestination;
  Dali::Scene3D::MotionIndex* source      = (Dali::Scene3D::MotionIndex*)csSource;
  Dali::Scene3D::MotionIndex* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionIndex*)&(destination)->operator=((Dali::Scene3D::MotionIndex const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionIndex_DownCast(void* csHandle)
{
  Dali::BaseHandle*          handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::MotionIndex result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionIndex::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionIndex((const Dali::Scene3D::MotionIndex&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionIndex_SetModelNodeId(void* csMotionIndex, void* csPropertyKey)
{
  Dali::Scene3D::MotionIndex* motionIndex = (Dali::Scene3D::MotionIndex*)csMotionIndex;
  Dali::Property::Key*        propertyKey = (Dali::Property::Key*)csPropertyKey;

  if(!motionIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionIndex", 0);
    return;
  }
  if(!propertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Key const & type is null", 0);
    return;
  }
  {
    try
    {
      motionIndex->SetModelNodeId(*propertyKey);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionIndex_GetModelNodeId(void* csMotionIndex)
{
  Dali::Scene3D::MotionIndex* motionIndex = (Dali::Scene3D::MotionIndex*)csMotionIndex;
  Dali::Property::Key         result      = Dali::Property::INVALID_KEY;

  if(!motionIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionIndex", 0);
    return 0;
  }
  {
    try
    {
      result = motionIndex->GetModelNodeId();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Property::Key((Dali::Property::Key const &)result);
}

// BlendShapeIndex

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_BlendShapeIndex_New_SWIG_0()
{
  Dali::Scene3D::BlendShapeIndex result;

  {
    try
    {
      result = Dali::Scene3D::BlendShapeIndex::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::BlendShapeIndex((const Dali::Scene3D::BlendShapeIndex&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_BlendShapeIndex_New_SWIG_1(void* csBlendShapePropertyKey)
{
  Dali::Property::Key*           blendShapePropertyKey = (Dali::Property::Key*)csBlendShapePropertyKey;
  Dali::Scene3D::BlendShapeIndex result;

  if(!blendShapePropertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Key const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::BlendShapeIndex::New(*blendShapePropertyKey);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::BlendShapeIndex((const Dali::Scene3D::BlendShapeIndex&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_BlendShapeIndex_New_SWIG_2(void* csModelNodePropertKey, void* csBlendShapePropertyKey)
{
  Dali::Property::Key*           modelNodePropertyKey  = (Dali::Property::Key*)csModelNodePropertKey;
  Dali::Property::Key*           blendShapePropertyKey = (Dali::Property::Key*)csBlendShapePropertyKey;
  Dali::Scene3D::BlendShapeIndex result;

  if(!modelNodePropertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "modelNodePropertyKey Dali::Property::Key const & type is null", 0);
    return 0;
  }
  if(!blendShapePropertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "blendShapePropertyKey Dali::Property::Key const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::BlendShapeIndex::New(*modelNodePropertyKey, *blendShapePropertyKey);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::BlendShapeIndex((const Dali::Scene3D::BlendShapeIndex&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_BlendShapeIndex_SWIG_0()
{
  Dali::Scene3D::BlendShapeIndex* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::BlendShapeIndex*)new Dali::Scene3D::BlendShapeIndex();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_BlendShapeIndex_SWIG_1(void* csBlendShapeIndex)
{
  Dali::Scene3D::BlendShapeIndex* blendShapeIndex = (Dali::Scene3D::BlendShapeIndex*)csBlendShapeIndex;
  Dali::Scene3D::BlendShapeIndex* result     = 0;

  if(!blendShapeIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::BlendShapeIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::BlendShapeIndex*)new Dali::Scene3D::BlendShapeIndex((Dali::Scene3D::BlendShapeIndex const&)*blendShapeIndex);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_BlendShapeIndex(void* csBlendShapeIndex)
{
  Dali::Scene3D::BlendShapeIndex* blendShapeIndex = (Dali::Scene3D::BlendShapeIndex*)csBlendShapeIndex;
  {
    try
    {
      delete blendShapeIndex;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_BlendShapeIndex_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::BlendShapeIndex* destination = (Dali::Scene3D::BlendShapeIndex*)csDestination;
  Dali::Scene3D::BlendShapeIndex* source      = (Dali::Scene3D::BlendShapeIndex*)csSource;
  Dali::Scene3D::BlendShapeIndex* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::BlendShapeIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::BlendShapeIndex*)&(destination)->operator=((Dali::Scene3D::BlendShapeIndex const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_BlendShapeIndex_DownCast(void* csHandle)
{
  Dali::BaseHandle*              handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::BlendShapeIndex result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::BlendShapeIndex::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::BlendShapeIndex((const Dali::Scene3D::BlendShapeIndex&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BlendShapeIndex_SetBlendShapeId(void* csBlendShapeIndex, void* csBlendShapePropertyKey)
{
  Dali::Scene3D::BlendShapeIndex* blendShapeIndex       = (Dali::Scene3D::BlendShapeIndex*)csBlendShapeIndex;
  Dali::Property::Key*            blendShapePropertyKey = (Dali::Property::Key*)csBlendShapePropertyKey;

  if(!blendShapeIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::BlendShapeIndex const & type is null", 0);
    return;
  }
  if(!blendShapePropertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Key const & type is null", 0);
    return;
  }
  {
    try
    {
      blendShapeIndex->SetBlendShapeId(*blendShapePropertyKey);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_BlendShapeIndex_GetBlendShapeId(void* csBlendShapeIndex)
{
  Dali::Scene3D::BlendShapeIndex* blendShapeIndex = (Dali::Scene3D::BlendShapeIndex*)csBlendShapeIndex;
  Dali::Property::Key             result          = Dali::Property::INVALID_KEY;

  if(!blendShapeIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::BlendShapeIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = blendShapeIndex->GetBlendShapeId();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Property::Key((Dali::Property::Key const &)result);
}

// MotionPropertyIndex

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionPropertyIndex_New_SWIG_0()
{
  Dali::Scene3D::MotionPropertyIndex result;

  {
    try
    {
      result = Dali::Scene3D::MotionPropertyIndex::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionPropertyIndex((const Dali::Scene3D::MotionPropertyIndex&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionPropertyIndex_New_SWIG_1(void* csModelNodePropertKey, void* csPropertyKey)
{
  Dali::Property::Key*               modelNodePropertyKey  = (Dali::Property::Key*)csModelNodePropertKey;
  Dali::Property::Key*               propertyKey           = (Dali::Property::Key*)csPropertyKey;
  Dali::Scene3D::MotionPropertyIndex result;

  if(!modelNodePropertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "modelNodePropertyKey Dali::Property::Key const & type is null", 0);
    return 0;
  }
  if(!propertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "propertyKey Dali::Property::Key const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionPropertyIndex::New(*modelNodePropertyKey, *propertyKey);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionPropertyIndex((const Dali::Scene3D::MotionPropertyIndex&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionPropertyIndex_SWIG_0()
{
  Dali::Scene3D::MotionPropertyIndex* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::MotionPropertyIndex*)new Dali::Scene3D::MotionPropertyIndex();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionPropertyIndex_SWIG_1(void* csMotionPropertyIndex)
{
  Dali::Scene3D::MotionPropertyIndex* motionPropertyIndex = (Dali::Scene3D::MotionPropertyIndex*)csMotionPropertyIndex;
  Dali::Scene3D::MotionPropertyIndex* result              = 0;

  if(!motionPropertyIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionPropertyIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionPropertyIndex*)new Dali::Scene3D::MotionPropertyIndex((Dali::Scene3D::MotionPropertyIndex const&)*motionPropertyIndex);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MotionPropertyIndex(void* csMotionPropertyIndex)
{
  Dali::Scene3D::MotionPropertyIndex* motionPropertyIndex = (Dali::Scene3D::MotionPropertyIndex*)csMotionPropertyIndex;
  {
    try
    {
      delete motionPropertyIndex;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionPropertyIndex_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::MotionPropertyIndex* destination = (Dali::Scene3D::MotionPropertyIndex*)csDestination;
  Dali::Scene3D::MotionPropertyIndex* source      = (Dali::Scene3D::MotionPropertyIndex*)csSource;
  Dali::Scene3D::MotionPropertyIndex* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionPropertyIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionPropertyIndex*)&(destination)->operator=((Dali::Scene3D::MotionPropertyIndex const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionPropertyIndex_DownCast(void* csHandle)
{
  Dali::BaseHandle*                  handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::MotionPropertyIndex result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionPropertyIndex::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionPropertyIndex((const Dali::Scene3D::MotionPropertyIndex&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionPropertyIndex_SetPropertyId(void* csMotionPropertyIndex, void* csPropertyKey)
{
  Dali::Scene3D::MotionPropertyIndex* motionPropertyIndex = (Dali::Scene3D::MotionPropertyIndex*)csMotionPropertyIndex;
  Dali::Property::Key*                propertyKey         = (Dali::Property::Key*)csPropertyKey;

  if(!motionPropertyIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionPropertyIndex const & type is null", 0);
    return;
  }
  if(!propertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Key const & type is null", 0);
    return;
  }
  {
    try
    {
      motionPropertyIndex->SetPropertyId(*propertyKey);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionPropertyIndex_GetPropertyId(void* csMotionPropertyIndex)
{
  Dali::Scene3D::MotionPropertyIndex* motionPropertyIndex = (Dali::Scene3D::MotionPropertyIndex*)csMotionPropertyIndex;
  Dali::Property::Key                 result              = Dali::Property::INVALID_KEY;

  if(!motionPropertyIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionPropertyIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = motionPropertyIndex->GetPropertyId();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Property::Key((Dali::Property::Key const &)result);
}

// MotionTransformIndex

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionTransformIndex_New_SWIG_0()
{
  Dali::Scene3D::MotionTransformIndex result;

  {
    try
    {
      result = Dali::Scene3D::MotionTransformIndex::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionTransformIndex((const Dali::Scene3D::MotionTransformIndex&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionTransformIndex_New_SWIG_1(void* csModelNodePropertKey, int csTransformType)
{
  Dali::Property::Key*                modelNodePropertyKey  = (Dali::Property::Key*)csModelNodePropertKey;
  Dali::Scene3D::MotionTransformIndex result;

  if(!modelNodePropertyKey)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "modelNodePropertyKey Dali::Property::Key const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionTransformIndex::New(*modelNodePropertyKey, static_cast<Dali::Scene3D::MotionTransformIndex::TransformType>(csTransformType));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionTransformIndex((const Dali::Scene3D::MotionTransformIndex&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionTransformIndex_SWIG_0()
{
  Dali::Scene3D::MotionTransformIndex* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::MotionTransformIndex*)new Dali::Scene3D::MotionTransformIndex();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionTransformIndex_SWIG_1(void* csMotionTransformIndex)
{
  Dali::Scene3D::MotionTransformIndex* motionTransformIndex = (Dali::Scene3D::MotionTransformIndex*)csMotionTransformIndex;
  Dali::Scene3D::MotionTransformIndex* result              = 0;

  if(!motionTransformIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionTransformIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionTransformIndex*)new Dali::Scene3D::MotionTransformIndex((Dali::Scene3D::MotionTransformIndex const&)*motionTransformIndex);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MotionTransformIndex(void* csMotionTransformIndex)
{
  Dali::Scene3D::MotionTransformIndex* motionTransformIndex = (Dali::Scene3D::MotionTransformIndex*)csMotionTransformIndex;
  {
    try
    {
      delete motionTransformIndex;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionTransformIndex_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::MotionTransformIndex* destination = (Dali::Scene3D::MotionTransformIndex*)csDestination;
  Dali::Scene3D::MotionTransformIndex* source      = (Dali::Scene3D::MotionTransformIndex*)csSource;
  Dali::Scene3D::MotionTransformIndex* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionTransformIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionTransformIndex*)&(destination)->operator=((Dali::Scene3D::MotionTransformIndex const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionTransformIndex_DownCast(void* csHandle)
{
  Dali::BaseHandle*                   handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::MotionTransformIndex result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionTransformIndex::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionTransformIndex((const Dali::Scene3D::MotionTransformIndex&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionTransformIndex_SetTransformType(void* csMotionTransformIndex, int csTransformType)
{
  Dali::Scene3D::MotionTransformIndex* motionTransformIndex = (Dali::Scene3D::MotionTransformIndex*)csMotionTransformIndex;

  if(!motionTransformIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionTransformIndex const & type is null", 0);
    return;
  }
  {
    try
    {
      motionTransformIndex->SetTransformType(static_cast<Dali::Scene3D::MotionTransformIndex::TransformType>(csTransformType));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MotionTransformIndex_GetTransformType(void* csMotionTransformIndex)
{
  Dali::Scene3D::MotionTransformIndex* motionTransformIndex = (Dali::Scene3D::MotionTransformIndex*)csMotionTransformIndex;
  int                                  result;

  if(!motionTransformIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionTransformIndex const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = static_cast<int>(motionTransformIndex->GetTransformType());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

#ifdef __cplusplus
}
#endif
