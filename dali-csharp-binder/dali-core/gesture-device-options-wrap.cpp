/*
 * Copyright (c) 2026 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/events/gesture-device-selector.h>
#include <dali/public-api/events/gesture-thresholds.h>
#include <dali/public-api/events/gesture.h>
#include <dali/public-api/events/long-press-gesture-detector.h>
#include <dali/public-api/events/pan-gesture-detector.h>
#include <dali/public-api/events/tap-gesture-detector.h>
#include <dali/public-api/math/radian.h>


// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

/*
 * Per-device gesture recognition options.
 *
 * Value types (GestureDeviceSelector, the detectors' Options, GestureThresholds::*Thresholds) follow
 * the WindowData pattern: the C++ object is heap-allocated, the raw pointer is the managed handle,
 * and the managed side owns it (new/delete pairs). Getters that return a value type return a fresh
 * copy the managed side owns.
 */

namespace
{
#define DALI_BINDER_NULL_CHECK(pointer, typeName, returnValue)                                                            \
  if(!(pointer))                                                                                                          \
  {                                                                                                                       \
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null " typeName, 0); \
    return returnValue;                                                                                                   \
  }
} // namespace

#ifdef __cplusplus
extern "C" {
#endif

// ---------------------------------------------------------------------------------------------------------------------
// GestureDeviceSelector
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_GestureDeviceSelector()
{
  Dali::GestureDeviceSelector* result = nullptr;
  {
    try
    {
      result = new Dali::GestureDeviceSelector();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GestureDeviceSelector_ByDeviceClass(int deviceClass)
{
  Dali::GestureDeviceSelector* result = nullptr;
  {
    try
    {
      result = new Dali::GestureDeviceSelector(Dali::GestureDeviceSelector::ByDeviceClass(static_cast<Dali::Device::Class::Type>(deviceClass)));
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GestureDeviceSelector_ByDeviceClassAndSubclass(int deviceClass, int deviceSubclass)
{
  Dali::GestureDeviceSelector* result = nullptr;
  {
    try
    {
      result = new Dali::GestureDeviceSelector(Dali::GestureDeviceSelector::ByDeviceClassAndSubclass(static_cast<Dali::Device::Class::Type>(deviceClass), static_cast<Dali::Device::Subclass::Type>(deviceSubclass)));
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GestureDeviceSelector_ByDeviceName(char* deviceName)
{
  if(!deviceName)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return nullptr;
  }
  Dali::GestureDeviceSelector* result = nullptr;
  {
    try
    {
      result = new Dali::GestureDeviceSelector(Dali::GestureDeviceSelector::ByDeviceName(Dali::String(deviceName)));
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GestureDeviceSelector(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  {
    try
    {
      delete selector;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GestureDeviceSelector_GetMatchType(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", 0);
  int result = 0;
  {
    try
    {
      result = static_cast<int>(selector->GetMatchType());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GestureDeviceSelector_GetDeviceClass(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", 0);
  int result = 0;
  {
    try
    {
      result = static_cast<int>(selector->GetDeviceClass());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GestureDeviceSelector_GetDeviceSubclass(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", 0);
  int result = 0;
  {
    try
    {
      result = static_cast<int>(selector->GetDeviceSubclass());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_GestureDeviceSelector_GetDeviceName(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", 0);
  Dali::String name;
  {
    try
    {
      name = selector->GetDeviceName();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return SWIG_csharp_string_callback(name.CStr());
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GestureDeviceSelector_Equals(void* nuiSelector, void* nuiOther)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureDeviceSelector* other    = (Dali::GestureDeviceSelector*)nuiOther;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(other, "Dali::GestureDeviceSelector", false);
  bool result = false;
  {
    try
    {
      result = (*selector == *other);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

// ---------------------------------------------------------------------------------------------------------------------
// Gesture
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Gesture_GetDeviceName(void* nuiGesture)
{
  Dali::Gesture* gesture = (Dali::Gesture*)nuiGesture;
  DALI_BINDER_NULL_CHECK(gesture, "Dali::Gesture", 0);
  Dali::String name;
  {
    try
    {
      name = gesture->GetDeviceName();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return SWIG_csharp_string_callback(name.CStr());
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::PanGestureDetector::Options
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_PanGestureDetector_Options()
{
  Dali::PanGestureDetector::Options* result = nullptr;
  {
    try
    {
      result = new Dali::PanGestureDetector::Options();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PanGestureDetector_Options(void* nuiObject)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  {
    try
    {
      delete object;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_SetMinimumTouchesRequired(void* nuiObject, unsigned int value)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  {
    try
    {
      object->SetMinimumTouchesRequired(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_GetMinimumTouchesRequired(void* nuiObject)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMinimumTouchesRequired();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_SetMaximumTouchesRequired(void* nuiObject, unsigned int value)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  {
    try
    {
      object->SetMaximumTouchesRequired(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_GetMaximumTouchesRequired(void* nuiObject)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMaximumTouchesRequired();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_SetMaximumMotionEventAge(void* nuiObject, unsigned int value)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  {
    try
    {
      object->SetMaximumMotionEventAge(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_GetMaximumMotionEventAge(void* nuiObject)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMaximumMotionEventAge();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_AddAngle__SWIG_0(void* nuiObject, void* nuiAngle, void* nuiThreshold)
{
  Dali::PanGestureDetector::Options* object    = (Dali::PanGestureDetector::Options*)nuiObject;
  Dali::Radian*                      angle     = (Dali::Radian*)nuiAngle;
  Dali::Radian*                      threshold = (Dali::Radian*)nuiThreshold;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  DALI_BINDER_NULL_CHECK(angle, "Dali::Radian", );
  DALI_BINDER_NULL_CHECK(threshold, "Dali::Radian", );
  {
    try
    {
      object->AddAngle(*angle, *threshold);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_AddAngle__SWIG_1(void* nuiObject, void* nuiAngle)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  Dali::Radian*                      angle  = (Dali::Radian*)nuiAngle;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  DALI_BINDER_NULL_CHECK(angle, "Dali::Radian", );
  {
    try
    {
      object->AddAngle(*angle);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_AddDirection__SWIG_0(void* nuiObject, void* nuiDirection, void* nuiThreshold)
{
  Dali::PanGestureDetector::Options* object    = (Dali::PanGestureDetector::Options*)nuiObject;
  Dali::Radian*                      direction = (Dali::Radian*)nuiDirection;
  Dali::Radian*                      threshold = (Dali::Radian*)nuiThreshold;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  DALI_BINDER_NULL_CHECK(direction, "Dali::Radian", );
  DALI_BINDER_NULL_CHECK(threshold, "Dali::Radian", );
  {
    try
    {
      object->AddDirection(*direction, *threshold);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_AddDirection__SWIG_1(void* nuiObject, void* nuiDirection)
{
  Dali::PanGestureDetector::Options* object    = (Dali::PanGestureDetector::Options*)nuiObject;
  Dali::Radian*                      direction = (Dali::Radian*)nuiDirection;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  DALI_BINDER_NULL_CHECK(direction, "Dali::Radian", );
  {
    try
    {
      object->AddDirection(*direction);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_GetAngleCount(void* nuiObject)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetAngleCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_GetAngle(void* nuiObject, unsigned int index)
{
  Dali::PanGestureDetector::Options*           object = (Dali::PanGestureDetector::Options*)nuiObject;
  Dali::PanGestureDetector::AngleThresholdPair result(Dali::Radian(0.0f), Dali::Radian(0.0f));
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", 0);
  {
    try
    {
      result = object->GetAngle(index);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return new Dali::PanGestureDetector::AngleThresholdPair(result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_ClearAngles(void* nuiObject)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  {
    try
    {
      object->ClearAngles();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_RemoveAngle(void* nuiObject, void* nuiAngle)
{
  Dali::PanGestureDetector::Options* object = (Dali::PanGestureDetector::Options*)nuiObject;
  Dali::Radian*                      angle  = (Dali::Radian*)nuiAngle;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  DALI_BINDER_NULL_CHECK(angle, "Dali::Radian", );
  {
    try
    {
      object->RemoveAngle(*angle);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_Options_RemoveDirection(void* nuiObject, void* nuiDirection)
{
  Dali::PanGestureDetector::Options* object    = (Dali::PanGestureDetector::Options*)nuiObject;
  Dali::Radian*                      direction = (Dali::Radian*)nuiDirection;
  DALI_BINDER_NULL_CHECK(object, "Dali::PanGestureDetector::Options", );
  DALI_BINDER_NULL_CHECK(direction, "Dali::Radian", );
  {
    try
    {
      object->RemoveDirection(*direction);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::TapGestureDetector::Options
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_TapGestureDetector_Options()
{
  Dali::TapGestureDetector::Options* result = nullptr;
  {
    try
    {
      result = new Dali::TapGestureDetector::Options();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TapGestureDetector_Options(void* nuiObject)
{
  Dali::TapGestureDetector::Options* object = (Dali::TapGestureDetector::Options*)nuiObject;
  {
    try
    {
      delete object;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TapGestureDetector_Options_SetMinimumTapsRequired(void* nuiObject, unsigned int value)
{
  Dali::TapGestureDetector::Options* object = (Dali::TapGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::TapGestureDetector::Options", );
  {
    try
    {
      object->SetMinimumTapsRequired(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TapGestureDetector_Options_GetMinimumTapsRequired(void* nuiObject)
{
  Dali::TapGestureDetector::Options* object = (Dali::TapGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::TapGestureDetector::Options", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMinimumTapsRequired();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TapGestureDetector_Options_SetMaximumTapsRequired(void* nuiObject, unsigned int value)
{
  Dali::TapGestureDetector::Options* object = (Dali::TapGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::TapGestureDetector::Options", );
  {
    try
    {
      object->SetMaximumTapsRequired(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TapGestureDetector_Options_GetMaximumTapsRequired(void* nuiObject)
{
  Dali::TapGestureDetector::Options* object = (Dali::TapGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::TapGestureDetector::Options", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMaximumTapsRequired();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TapGestureDetector_Options_SetReceiveAllTapEventsEnabled(void* nuiObject, bool value)
{
  Dali::TapGestureDetector::Options* object = (Dali::TapGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::TapGestureDetector::Options", );
  {
    try
    {
      object->SetReceiveAllTapEventsEnabled(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TapGestureDetector_Options_IsReceiveAllTapEventsEnabled(void* nuiObject)
{
  Dali::TapGestureDetector::Options* object = (Dali::TapGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::TapGestureDetector::Options", false);
  bool result = false;
  {
    try
    {
      result = object->IsReceiveAllTapEventsEnabled();
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::LongPressGestureDetector::Options
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_LongPressGestureDetector_Options()
{
  Dali::LongPressGestureDetector::Options* result = nullptr;
  {
    try
    {
      result = new Dali::LongPressGestureDetector::Options();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LongPressGestureDetector_Options(void* nuiObject)
{
  Dali::LongPressGestureDetector::Options* object = (Dali::LongPressGestureDetector::Options*)nuiObject;
  {
    try
    {
      delete object;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LongPressGestureDetector_Options_GetMinimumTouchesRequired(void* nuiObject)
{
  Dali::LongPressGestureDetector::Options* object = (Dali::LongPressGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::LongPressGestureDetector::Options", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMinimumTouchesRequired();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LongPressGestureDetector_Options_GetMaximumTouchesRequired(void* nuiObject)
{
  Dali::LongPressGestureDetector::Options* object = (Dali::LongPressGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::LongPressGestureDetector::Options", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMaximumTouchesRequired();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LongPressGestureDetector_Options_SetTouchesRequired__SWIG_0(void* nuiObject, unsigned int touches)
{
  Dali::LongPressGestureDetector::Options* object = (Dali::LongPressGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::LongPressGestureDetector::Options", );
  {
    try
    {
      object->SetTouchesRequired(touches);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LongPressGestureDetector_Options_SetTouchesRequired__SWIG_1(void* nuiObject, unsigned int minTouches, unsigned int maxTouches)
{
  Dali::LongPressGestureDetector::Options* object = (Dali::LongPressGestureDetector::Options*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::LongPressGestureDetector::Options", );
  {
    try
    {
      object->SetTouchesRequired(minTouches, maxTouches);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::PanGestureDetector per-device options
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PanGestureDetector_GetDefaultOptions(void* nuiDetector)
{
  Dali::PanGestureDetector* detector = (Dali::PanGestureDetector*)nuiDetector;
  DALI_BINDER_NULL_CHECK(detector, "Dali::PanGestureDetector", 0);
  Dali::PanGestureDetector::Options* result = nullptr;
  {
    try
    {
      result = new Dali::PanGestureDetector::Options(detector->GetDefaultOptions());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_SetDeviceOptions(void* nuiDetector, void* nuiSelector, void* nuiOptions)
{
  Dali::PanGestureDetector*          detector = (Dali::PanGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector*       selector = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::PanGestureDetector::Options* options  = (Dali::PanGestureDetector::Options*)nuiOptions;
  DALI_BINDER_NULL_CHECK(detector, "Dali::PanGestureDetector", );
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  DALI_BINDER_NULL_CHECK(options, "Dali::PanGestureDetector::Options", );
  {
    try
    {
      detector->SetDeviceOptions(*selector, *options);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_PanGestureDetector_GetDeviceOptions(void* nuiDetector, void* nuiSelector, void* nuiOptions)
{
  Dali::PanGestureDetector*          detector = (Dali::PanGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector*       selector = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::PanGestureDetector::Options* options  = (Dali::PanGestureDetector::Options*)nuiOptions;
  DALI_BINDER_NULL_CHECK(detector, "Dali::PanGestureDetector", false);
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(options, "Dali::PanGestureDetector::Options", false);
  bool result = false;
  {
    try
    {
      result = detector->GetDeviceOptions(*selector, *options);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PanGestureDetector_ClearDeviceOptions(void* nuiDetector, void* nuiSelector)
{
  Dali::PanGestureDetector*    detector = (Dali::PanGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(detector, "Dali::PanGestureDetector", );
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  {
    try
    {
      detector->ClearDeviceOptions(*selector);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::TapGestureDetector per-device options
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_TapGestureDetector_GetDefaultOptions(void* nuiDetector)
{
  Dali::TapGestureDetector* detector = (Dali::TapGestureDetector*)nuiDetector;
  DALI_BINDER_NULL_CHECK(detector, "Dali::TapGestureDetector", 0);
  Dali::TapGestureDetector::Options* result = nullptr;
  {
    try
    {
      result = new Dali::TapGestureDetector::Options(detector->GetDefaultOptions());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TapGestureDetector_SetDeviceOptions(void* nuiDetector, void* nuiSelector, void* nuiOptions)
{
  Dali::TapGestureDetector*          detector = (Dali::TapGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector*       selector = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::TapGestureDetector::Options* options  = (Dali::TapGestureDetector::Options*)nuiOptions;
  DALI_BINDER_NULL_CHECK(detector, "Dali::TapGestureDetector", );
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  DALI_BINDER_NULL_CHECK(options, "Dali::TapGestureDetector::Options", );
  {
    try
    {
      detector->SetDeviceOptions(*selector, *options);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TapGestureDetector_GetDeviceOptions(void* nuiDetector, void* nuiSelector, void* nuiOptions)
{
  Dali::TapGestureDetector*          detector = (Dali::TapGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector*       selector = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::TapGestureDetector::Options* options  = (Dali::TapGestureDetector::Options*)nuiOptions;
  DALI_BINDER_NULL_CHECK(detector, "Dali::TapGestureDetector", false);
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(options, "Dali::TapGestureDetector::Options", false);
  bool result = false;
  {
    try
    {
      result = detector->GetDeviceOptions(*selector, *options);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TapGestureDetector_ClearDeviceOptions(void* nuiDetector, void* nuiSelector)
{
  Dali::TapGestureDetector*    detector = (Dali::TapGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(detector, "Dali::TapGestureDetector", );
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  {
    try
    {
      detector->ClearDeviceOptions(*selector);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::LongPressGestureDetector per-device options
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_LongPressGestureDetector_GetDefaultOptions(void* nuiDetector)
{
  Dali::LongPressGestureDetector* detector = (Dali::LongPressGestureDetector*)nuiDetector;
  DALI_BINDER_NULL_CHECK(detector, "Dali::LongPressGestureDetector", 0);
  Dali::LongPressGestureDetector::Options* result = nullptr;
  {
    try
    {
      result = new Dali::LongPressGestureDetector::Options(detector->GetDefaultOptions());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LongPressGestureDetector_SetDeviceOptions(void* nuiDetector, void* nuiSelector, void* nuiOptions)
{
  Dali::LongPressGestureDetector*          detector = (Dali::LongPressGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector*             selector = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::LongPressGestureDetector::Options* options  = (Dali::LongPressGestureDetector::Options*)nuiOptions;
  DALI_BINDER_NULL_CHECK(detector, "Dali::LongPressGestureDetector", );
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  DALI_BINDER_NULL_CHECK(options, "Dali::LongPressGestureDetector::Options", );
  {
    try
    {
      detector->SetDeviceOptions(*selector, *options);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_LongPressGestureDetector_GetDeviceOptions(void* nuiDetector, void* nuiSelector, void* nuiOptions)
{
  Dali::LongPressGestureDetector*          detector = (Dali::LongPressGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector*             selector = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::LongPressGestureDetector::Options* options  = (Dali::LongPressGestureDetector::Options*)nuiOptions;
  DALI_BINDER_NULL_CHECK(detector, "Dali::LongPressGestureDetector", false);
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(options, "Dali::LongPressGestureDetector::Options", false);
  bool result = false;
  {
    try
    {
      result = detector->GetDeviceOptions(*selector, *options);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LongPressGestureDetector_ClearDeviceOptions(void* nuiDetector, void* nuiSelector)
{
  Dali::LongPressGestureDetector* detector = (Dali::LongPressGestureDetector*)nuiDetector;
  Dali::GestureDeviceSelector*    selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(detector, "Dali::LongPressGestureDetector", );
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  {
    try
    {
      detector->ClearDeviceOptions(*selector);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TapGestureDetector_ReceiveAllTapEvents(void* nuiDetector, bool receive)
{
  Dali::TapGestureDetector* detector = (Dali::TapGestureDetector*)nuiDetector;
  DALI_BINDER_NULL_CHECK(detector, "Dali::TapGestureDetector", );
  {
    try
    {
      detector->ReceiveAllTapEvents(receive);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TapGestureDetector_IsReceiveAllTapEventsEnabled(void* nuiDetector)
{
  Dali::TapGestureDetector* detector = (Dali::TapGestureDetector*)nuiDetector;
  DALI_BINDER_NULL_CHECK(detector, "Dali::TapGestureDetector", false);
  bool result = false;
  {
    try
    {
      result = detector->IsReceiveAllTapEventsEnabled();
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::GestureThresholds::PanThresholds
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_GestureThresholds_PanThresholds()
{
  Dali::GestureThresholds::PanThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::PanThresholds();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GestureThresholds_PanThresholds(void* nuiObject)
{
  Dali::GestureThresholds::PanThresholds* object = (Dali::GestureThresholds::PanThresholds*)nuiObject;
  {
    try
    {
      delete object;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_PanThresholds_SetMinimumDistance(void* nuiObject, int value)
{
  Dali::GestureThresholds::PanThresholds* object = (Dali::GestureThresholds::PanThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PanThresholds", );
  {
    try
    {
      object->SetMinimumDistance(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GestureThresholds_PanThresholds_GetMinimumDistance(void* nuiObject)
{
  Dali::GestureThresholds::PanThresholds* object = (Dali::GestureThresholds::PanThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PanThresholds", 0);
  int result = 0;
  {
    try
    {
      result = object->GetMinimumDistance();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_PanThresholds_SetMinimumPanEvents(void* nuiObject, int value)
{
  Dali::GestureThresholds::PanThresholds* object = (Dali::GestureThresholds::PanThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PanThresholds", );
  {
    try
    {
      object->SetMinimumPanEvents(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GestureThresholds_PanThresholds_GetMinimumPanEvents(void* nuiObject)
{
  Dali::GestureThresholds::PanThresholds* object = (Dali::GestureThresholds::PanThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PanThresholds", 0);
  int result = 0;
  {
    try
    {
      result = object->GetMinimumPanEvents();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GestureThresholds_GetDefaultPanThresholds()
{
  Dali::GestureThresholds::PanThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::PanThresholds(Dali::GestureThresholds::GetDefaultPanThresholds());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_SetPanThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*            selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::PanThresholds* thresholds = (Dali::GestureThresholds::PanThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::PanThresholds", );
  {
    try
    {
      Dali::GestureThresholds::SetPanThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GestureThresholds_GetPanThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*            selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::PanThresholds* thresholds = (Dali::GestureThresholds::PanThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::PanThresholds", false);
  bool result = false;
  {
    try
    {
      result = Dali::GestureThresholds::GetPanThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_ClearPanThresholds(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  {
    try
    {
      Dali::GestureThresholds::ClearPanThresholds(*selector);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::GestureThresholds::TapThresholds
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_GestureThresholds_TapThresholds()
{
  Dali::GestureThresholds::TapThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::TapThresholds();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GestureThresholds_TapThresholds(void* nuiObject)
{
  Dali::GestureThresholds::TapThresholds* object = (Dali::GestureThresholds::TapThresholds*)nuiObject;
  {
    try
    {
      delete object;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_TapThresholds_SetMaximumMultiTapInterval(void* nuiObject, unsigned int value)
{
  Dali::GestureThresholds::TapThresholds* object = (Dali::GestureThresholds::TapThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::TapThresholds", );
  {
    try
    {
      object->SetMaximumMultiTapInterval(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GestureThresholds_TapThresholds_GetMaximumMultiTapInterval(void* nuiObject)
{
  Dali::GestureThresholds::TapThresholds* object = (Dali::GestureThresholds::TapThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::TapThresholds", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMaximumMultiTapInterval();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_TapThresholds_SetMaximumHoldingTime(void* nuiObject, unsigned int value)
{
  Dali::GestureThresholds::TapThresholds* object = (Dali::GestureThresholds::TapThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::TapThresholds", );
  {
    try
    {
      object->SetMaximumHoldingTime(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GestureThresholds_TapThresholds_GetMaximumHoldingTime(void* nuiObject)
{
  Dali::GestureThresholds::TapThresholds* object = (Dali::GestureThresholds::TapThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::TapThresholds", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMaximumHoldingTime();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_TapThresholds_SetMaximumMotionDistance(void* nuiObject, float value)
{
  Dali::GestureThresholds::TapThresholds* object = (Dali::GestureThresholds::TapThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::TapThresholds", );
  {
    try
    {
      object->SetMaximumMotionDistance(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GestureThresholds_TapThresholds_GetMaximumMotionDistance(void* nuiObject)
{
  Dali::GestureThresholds::TapThresholds* object = (Dali::GestureThresholds::TapThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::TapThresholds", 0);
  float result = 0;
  {
    try
    {
      result = object->GetMaximumMotionDistance();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GestureThresholds_GetDefaultTapThresholds()
{
  Dali::GestureThresholds::TapThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::TapThresholds(Dali::GestureThresholds::GetDefaultTapThresholds());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_SetTapThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*            selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::TapThresholds* thresholds = (Dali::GestureThresholds::TapThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::TapThresholds", );
  {
    try
    {
      Dali::GestureThresholds::SetTapThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GestureThresholds_GetTapThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*            selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::TapThresholds* thresholds = (Dali::GestureThresholds::TapThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::TapThresholds", false);
  bool result = false;
  {
    try
    {
      result = Dali::GestureThresholds::GetTapThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_ClearTapThresholds(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  {
    try
    {
      Dali::GestureThresholds::ClearTapThresholds(*selector);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::GestureThresholds::LongPressThresholds
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_GestureThresholds_LongPressThresholds()
{
  Dali::GestureThresholds::LongPressThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::LongPressThresholds();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GestureThresholds_LongPressThresholds(void* nuiObject)
{
  Dali::GestureThresholds::LongPressThresholds* object = (Dali::GestureThresholds::LongPressThresholds*)nuiObject;
  {
    try
    {
      delete object;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_LongPressThresholds_SetMinimumHoldingTime(void* nuiObject, unsigned int value)
{
  Dali::GestureThresholds::LongPressThresholds* object = (Dali::GestureThresholds::LongPressThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::LongPressThresholds", );
  {
    try
    {
      object->SetMinimumHoldingTime(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GestureThresholds_LongPressThresholds_GetMinimumHoldingTime(void* nuiObject)
{
  Dali::GestureThresholds::LongPressThresholds* object = (Dali::GestureThresholds::LongPressThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::LongPressThresholds", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMinimumHoldingTime();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GestureThresholds_GetDefaultLongPressThresholds()
{
  Dali::GestureThresholds::LongPressThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::LongPressThresholds(Dali::GestureThresholds::GetDefaultLongPressThresholds());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_SetLongPressThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*                  selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::LongPressThresholds* thresholds = (Dali::GestureThresholds::LongPressThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::LongPressThresholds", );
  {
    try
    {
      Dali::GestureThresholds::SetLongPressThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GestureThresholds_GetLongPressThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*                  selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::LongPressThresholds* thresholds = (Dali::GestureThresholds::LongPressThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::LongPressThresholds", false);
  bool result = false;
  {
    try
    {
      result = Dali::GestureThresholds::GetLongPressThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_ClearLongPressThresholds(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  {
    try
    {
      Dali::GestureThresholds::ClearLongPressThresholds(*selector);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::GestureThresholds::PinchThresholds
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_GestureThresholds_PinchThresholds()
{
  Dali::GestureThresholds::PinchThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::PinchThresholds();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GestureThresholds_PinchThresholds(void* nuiObject)
{
  Dali::GestureThresholds::PinchThresholds* object = (Dali::GestureThresholds::PinchThresholds*)nuiObject;
  {
    try
    {
      delete object;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_PinchThresholds_SetMinimumDistance(void* nuiObject, float value)
{
  Dali::GestureThresholds::PinchThresholds* object = (Dali::GestureThresholds::PinchThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PinchThresholds", );
  {
    try
    {
      object->SetMinimumDistance(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GestureThresholds_PinchThresholds_GetMinimumDistance(void* nuiObject)
{
  Dali::GestureThresholds::PinchThresholds* object = (Dali::GestureThresholds::PinchThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PinchThresholds", 0);
  float result = 0;
  {
    try
    {
      result = object->GetMinimumDistance();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_PinchThresholds_SetMinimumTouchEvents(void* nuiObject, unsigned int value)
{
  Dali::GestureThresholds::PinchThresholds* object = (Dali::GestureThresholds::PinchThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PinchThresholds", );
  {
    try
    {
      object->SetMinimumTouchEvents(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GestureThresholds_PinchThresholds_GetMinimumTouchEvents(void* nuiObject)
{
  Dali::GestureThresholds::PinchThresholds* object = (Dali::GestureThresholds::PinchThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PinchThresholds", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMinimumTouchEvents();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_PinchThresholds_SetMinimumTouchEventsAfterStart(void* nuiObject, unsigned int value)
{
  Dali::GestureThresholds::PinchThresholds* object = (Dali::GestureThresholds::PinchThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PinchThresholds", );
  {
    try
    {
      object->SetMinimumTouchEventsAfterStart(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GestureThresholds_PinchThresholds_GetMinimumTouchEventsAfterStart(void* nuiObject)
{
  Dali::GestureThresholds::PinchThresholds* object = (Dali::GestureThresholds::PinchThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::PinchThresholds", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMinimumTouchEventsAfterStart();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GestureThresholds_GetDefaultPinchThresholds()
{
  Dali::GestureThresholds::PinchThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::PinchThresholds(Dali::GestureThresholds::GetDefaultPinchThresholds());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_SetPinchThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*              selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::PinchThresholds* thresholds = (Dali::GestureThresholds::PinchThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::PinchThresholds", );
  {
    try
    {
      Dali::GestureThresholds::SetPinchThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GestureThresholds_GetPinchThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*              selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::PinchThresholds* thresholds = (Dali::GestureThresholds::PinchThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::PinchThresholds", false);
  bool result = false;
  {
    try
    {
      result = Dali::GestureThresholds::GetPinchThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_ClearPinchThresholds(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  {
    try
    {
      Dali::GestureThresholds::ClearPinchThresholds(*selector);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ---------------------------------------------------------------------------------------------------------------------
// Dali::GestureThresholds::RotationThresholds
// ---------------------------------------------------------------------------------------------------------------------

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_GestureThresholds_RotationThresholds()
{
  Dali::GestureThresholds::RotationThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::RotationThresholds();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GestureThresholds_RotationThresholds(void* nuiObject)
{
  Dali::GestureThresholds::RotationThresholds* object = (Dali::GestureThresholds::RotationThresholds*)nuiObject;
  {
    try
    {
      delete object;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_RotationThresholds_SetMinimumTouchEvents(void* nuiObject, unsigned int value)
{
  Dali::GestureThresholds::RotationThresholds* object = (Dali::GestureThresholds::RotationThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::RotationThresholds", );
  {
    try
    {
      object->SetMinimumTouchEvents(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GestureThresholds_RotationThresholds_GetMinimumTouchEvents(void* nuiObject)
{
  Dali::GestureThresholds::RotationThresholds* object = (Dali::GestureThresholds::RotationThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::RotationThresholds", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMinimumTouchEvents();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_RotationThresholds_SetMinimumTouchEventsAfterStart(void* nuiObject, unsigned int value)
{
  Dali::GestureThresholds::RotationThresholds* object = (Dali::GestureThresholds::RotationThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::RotationThresholds", );
  {
    try
    {
      object->SetMinimumTouchEventsAfterStart(value);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GestureThresholds_RotationThresholds_GetMinimumTouchEventsAfterStart(void* nuiObject)
{
  Dali::GestureThresholds::RotationThresholds* object = (Dali::GestureThresholds::RotationThresholds*)nuiObject;
  DALI_BINDER_NULL_CHECK(object, "Dali::GestureThresholds::RotationThresholds", 0);
  unsigned int result = 0;
  {
    try
    {
      result = object->GetMinimumTouchEventsAfterStart();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GestureThresholds_GetDefaultRotationThresholds()
{
  Dali::GestureThresholds::RotationThresholds* result = nullptr;
  {
    try
    {
      result = new Dali::GestureThresholds::RotationThresholds(Dali::GestureThresholds::GetDefaultRotationThresholds());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_SetRotationThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*                 selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::RotationThresholds* thresholds = (Dali::GestureThresholds::RotationThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::RotationThresholds", );
  {
    try
    {
      Dali::GestureThresholds::SetRotationThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GestureThresholds_GetRotationThresholds(void* nuiSelector, void* nuiThresholds)
{
  Dali::GestureDeviceSelector*                 selector   = (Dali::GestureDeviceSelector*)nuiSelector;
  Dali::GestureThresholds::RotationThresholds* thresholds = (Dali::GestureThresholds::RotationThresholds*)nuiThresholds;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", false);
  DALI_BINDER_NULL_CHECK(thresholds, "Dali::GestureThresholds::RotationThresholds", false);
  bool result = false;
  {
    try
    {
      result = Dali::GestureThresholds::GetRotationThresholds(*selector, *thresholds);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureThresholds_ClearRotationThresholds(void* nuiSelector)
{
  Dali::GestureDeviceSelector* selector = (Dali::GestureDeviceSelector*)nuiSelector;
  DALI_BINDER_NULL_CHECK(selector, "Dali::GestureDeviceSelector", );
  {
    try
    {
      Dali::GestureThresholds::ClearRotationThresholds(*selector);
    }
    CALL_CATCH_EXCEPTION();
  }
}

#undef DALI_BINDER_NULL_CHECK

#ifdef __cplusplus
}
#endif
