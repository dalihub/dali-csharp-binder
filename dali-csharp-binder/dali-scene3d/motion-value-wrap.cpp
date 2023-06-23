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
#include <dali/public-api/animation/key-frames.h>
#include <dali/public-api/object/property-value.h>
#include <dali-scene3d/public-api/model-motion/motion-value.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionValue_New_SWIG_0()
{
  Dali::Scene3D::MotionValue result;

  {
    try
    {
      result = Dali::Scene3D::MotionValue::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionValue((const Dali::Scene3D::MotionValue&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionValue_New_SWIG_1(void* csPropertyValue)
{
  Dali::Property::Value*     propertyValue = (Dali::Property::Value*)csPropertyValue;
  Dali::Scene3D::MotionValue result;

  if(!propertyValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Value const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionValue::New(*propertyValue);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionValue((const Dali::Scene3D::MotionValue&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionValue_New_SWIG_2(void* csKeyFrames)
{
  Dali::KeyFrames*           keyFrames = (Dali::KeyFrames*)csKeyFrames;
  Dali::Scene3D::MotionValue result;

  if(!keyFrames)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionValue::New(*keyFrames);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionValue((const Dali::Scene3D::MotionValue&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionValue_SWIG_0()
{
  Dali::Scene3D::MotionValue* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::MotionValue*)new Dali::Scene3D::MotionValue();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionValue_SWIG_1(void* csMotionValue)
{
  Dali::Scene3D::MotionValue* motionValue = (Dali::Scene3D::MotionValue*)csMotionValue;
  Dali::Scene3D::MotionValue* result     = 0;

  if(!motionValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionValue const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionValue*)new Dali::Scene3D::MotionValue((Dali::Scene3D::MotionValue const&)*motionValue);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MotionValue(void* csMotionValue)
{
  Dali::Scene3D::MotionValue* motionValue = (Dali::Scene3D::MotionValue*)csMotionValue;
  {
    try
    {
      delete motionValue;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionValue_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::MotionValue* destination = (Dali::Scene3D::MotionValue*)csDestination;
  Dali::Scene3D::MotionValue* source      = (Dali::Scene3D::MotionValue*)csSource;
  Dali::Scene3D::MotionValue* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionValue const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionValue*)&(destination)->operator=((Dali::Scene3D::MotionValue const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionValue_DownCast(void* csHandle)
{
  Dali::BaseHandle*          handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::MotionValue result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionValue::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionValue((const Dali::Scene3D::MotionValue&)result);
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MotionValue_GetValueType(void* csMotionValue)
{
  Dali::Scene3D::MotionValue* motionValue = (Dali::Scene3D::MotionValue*)csMotionValue;
  int                         result;

  if(!motionValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionValue", 0);
    return 0;
  }
  {
    try
    {
      result = static_cast<int>(motionValue->GetValueType());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionValue_SetValue_PropertyValue(void* csMotionValue, void* csPropertyValue)
{
  Dali::Scene3D::MotionValue* motionValue   = (Dali::Scene3D::MotionValue*)csMotionValue;
  Dali::Property::Value*      propertyValue = (Dali::Property::Value*)csPropertyValue;

  if(!motionValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionValue", 0);
    return;
  }
  if(!propertyValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Value const & type is null", 0);
    return;
  }
  {
    try
    {
      motionValue->SetValue(*propertyValue);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionValue_SetValue_KeyFrames(void* csMotionValue, void* csKeyFrames)
{
  Dali::Scene3D::MotionValue* motionValue = (Dali::Scene3D::MotionValue*)csMotionValue;
  Dali::KeyFrames*            keyFrames   = (Dali::KeyFrames*)csKeyFrames;

  if(!motionValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionValue", 0);
    return;
  }
  if(!keyFrames)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyFrames const & type is null", 0);
    return;
  }
  {
    try
    {
      motionValue->SetValue(*keyFrames);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionValue_Clear(void* csMotionValue)
{
  Dali::Scene3D::MotionValue* motionValue = (Dali::Scene3D::MotionValue*)csMotionValue;

  if(!motionValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionValue", 0);
    return;
  }
  {
    try
    {
      motionValue->Clear();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionValue_GetPropertyValue(void* csMotionValue)
{
  Dali::Scene3D::MotionValue* motionValue = (Dali::Scene3D::MotionValue*)csMotionValue;
  Dali::Property::Value       result;

  if(!motionValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionValue", 0);
    return 0;
  }
  {
    try
    {
      result = motionValue->GetPropertyValue();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Property::Value((Dali::Property::Value const &)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionValue_GetKeyFrames(void* csMotionValue)
{
  Dali::Scene3D::MotionValue* motionValue = (Dali::Scene3D::MotionValue*)csMotionValue;
  Dali::KeyFrames             result;

  if(!motionValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionValue", 0);
    return 0;
  }
  {
    try
    {
      result = motionValue->GetKeyFrames();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::KeyFrames((Dali::KeyFrames const &)result);
}

#ifdef __cplusplus
}
#endif
