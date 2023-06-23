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
#include <dali-scene3d/public-api/model-motion/motion-data.h>
#include <dali-scene3d/public-api/model-motion/motion-index/motion-index.h>
#include <dali-scene3d/public-api/model-motion/motion-value.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionData_New_SWIG_0()
{
  Dali::Scene3D::MotionData result;

  {
    try
    {
      result = Dali::Scene3D::MotionData::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionData((const Dali::Scene3D::MotionData&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionData_New_SWIG_1(float durationSeconds)
{
  Dali::Scene3D::MotionData result;

  {
    try
    {
      result = Dali::Scene3D::MotionData::New(durationSeconds);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionData((const Dali::Scene3D::MotionData&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionData_SWIG_0()
{
  Dali::Scene3D::MotionData* result = 0;

  {
    try
    {
      result = (Dali::Scene3D::MotionData*)new Dali::Scene3D::MotionData();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_MotionData_SWIG_1(void* csMotionData)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;
  Dali::Scene3D::MotionData* result     = 0;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionData const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionData*)new Dali::Scene3D::MotionData((Dali::Scene3D::MotionData const&)*motionData);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MotionData(void* csMotionData)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;
  {
    try
    {
      delete motionData;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionData_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::MotionData* destination = (Dali::Scene3D::MotionData*)csDestination;
  Dali::Scene3D::MotionData* source      = (Dali::Scene3D::MotionData*)csSource;
  Dali::Scene3D::MotionData* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::MotionData const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::MotionData*)&(destination)->operator=((Dali::Scene3D::MotionData const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionData_DownCast(void* csHandle)
{
  Dali::BaseHandle*         handle = (Dali::BaseHandle*)csHandle;
  Dali::Scene3D::MotionData result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Model", 0);
    return 0;
  }
  {
    try
    {
      result = Dali::Scene3D::MotionData::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionData((const Dali::Scene3D::MotionData&)result);
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MotionData_GetMotionCount(void* csMotionData)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;
  unsigned int               result;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return 0;
  }
  {
    try
    {
      result = static_cast<unsigned int>(motionData->GetMotionCount());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionData_GetIndex(void* csMotionData, unsigned int index)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;
  Dali::Scene3D::MotionIndex result;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return 0;
  }
  {
    try
    {
      result = motionData->GetIndex(static_cast<uint32_t>(index));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionIndex((const Dali::Scene3D::MotionIndex&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MotionData_GetValue(void* csMotionData, unsigned int index)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;
  Dali::Scene3D::MotionValue result;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return 0;
  }
  {
    try
    {
      result = motionData->GetValue(static_cast<uint32_t>(index));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::MotionValue((const Dali::Scene3D::MotionValue&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionData_Add(void* csMotionData, void* csMotionIndex, void* csMotionValue)
{
  Dali::Scene3D::MotionData*  motionData  = (Dali::Scene3D::MotionData*)csMotionData;
  Dali::Scene3D::MotionIndex* motionIndex = (Dali::Scene3D::MotionIndex*)csMotionIndex;
  Dali::Scene3D::MotionValue* motionValue = (Dali::Scene3D::MotionValue*)csMotionValue;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return;
  }
  if(!motionIndex)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionIndex", 0);
    return;
  }
  if(!motionValue)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionValue", 0);
    return;
  }

  {
    try
    {
      motionData->Add(*motionIndex, *motionValue);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionData_Clear(void* csMotionData)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return;
  }

  {
    try
    {
      motionData->Clear();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionData_SetDuration(void* csMotionData, float durationSeconds)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return;
  }

  {
    try
    {
      motionData->SetDuration(durationSeconds);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_MotionData_GetDuration(void* csMotionData)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;
  float                      result;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return 0.0f;
  }

  {
    try
    {
      result = motionData->GetDuration();
    }
    CALL_CATCH_EXCEPTION(0.0f);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionData_LoadBvh(void* csMotionData, char* csFileName, void* csScale, bool csSynchronousLoad)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return;
  }
  if(!csFileName)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string for filename", 0);
    return;
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
      motionData->LoadBvh(filename, scale, csSynchronousLoad);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionData_LoadBvhFromBuffer(void* csMotionData, char* csBuffer, int csBufferLength, void* csScale, bool csSynchronousLoad)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return;
  }
  if(!csBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string for buffer", 0);
    return;
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
      motionData->LoadBvhFromBuffer(rawBuffer, csBufferLength, scale, csSynchronousLoad);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionData_LoadFacialAnimation(void* csMotionData, char* csFileName, bool csSynchronousLoad)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return;
  }
  if(!csFileName)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string for filename", 0);
    return;
  }

  std::string filename(csFileName);
  {
    try
    {
      motionData->LoadFacialAnimation(filename, csSynchronousLoad);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MotionData_LoadFacialAnimationFromBuffer(void* csMotionData, char* csBuffer, int csBufferLength, bool csSynchronousLoad)
{
  Dali::Scene3D::MotionData* motionData = (Dali::Scene3D::MotionData*)csMotionData;

  if(!motionData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::MotionData", 0);
    return;
  }
  if(!csBuffer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string for buffer", 0);
    return;
  }

  const uint8_t* rawBuffer = reinterpret_cast<const uint8_t*>(csBuffer);
  {
    try
    {
      motionData->LoadFacialAnimationFromBuffer(rawBuffer, csBufferLength, csSynchronousLoad);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// Signals
GENERATE_SIGNAL(Dali::Scene3D::MotionData*, void(*)(Dali::Scene3D::MotionData), Dali_MotionData, LoadCompletedSignal);
// CSharp_Dali_MotionData_LoadCompletedSignal_Connect
// CSharp_Dali_MotionData_LoadCompletedSignal_Disconnect

#ifdef __cplusplus
}
#endif
