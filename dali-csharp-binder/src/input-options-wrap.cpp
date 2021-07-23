#ifndef CSHARP_INPUT_OPTIONS
#define CSHARP_INPUT_OPTIONS
#endif

/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
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

#include <string.h>
#include "common.h"
#include <dali/integration-api/input-options.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define CALL_CATCH_EXCEPTION(ret)                                          \
  catch (std::out_of_range & e)                                            \
  {                                                                        \
    SWIG_CSharpException(SWIG_IndexError, const_cast<char *>(e.what()));   \
    return ret;                                                            \
  }                                                                        \
  catch (std::exception & e)                                               \
  {                                                                        \
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char *>(e.what())); \
    return ret;                                                            \
  }                                                                        \
  catch (Dali::DaliException e)                                            \
  {                                                                        \
    SWIG_CSharpException(SWIG_UnknownError, e.condition);                  \
    return ret;                                                            \
  }                                                                        \
  catch (...)                                                              \
  {                                                                        \
    SWIG_CSharpException(SWIG_UnknownError, "unknown error");              \
    return ret;                                                            \
  }

using namespace Dali;

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGesturePredictionMode(int mode) {
  {
    try {
      Integration::SetPanGesturePredictionMode(mode);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGesturePredictionAmount(unsigned int amount) {
  {
    try {
      Integration::SetPanGesturePredictionAmount(amount);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureMaximumPredictionAmount(unsigned int amount) {
  {
    try {
      Integration::SetPanGestureMaximumPredictionAmount(amount);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureMinimumPredictionAmount(unsigned int amount) {
  {
    try {
      Integration::SetPanGestureMinimumPredictionAmount(amount);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGesturePredictionAmountAdjustment(unsigned int amount) {
  {
    try {
      Integration::SetPanGesturePredictionAmountAdjustment(amount);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureSmoothingMode(int mode) {
  {
    try {
      Integration::SetPanGestureSmoothingMode(mode);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureSmoothingAmount(float amount) {
  {
    try {
      Integration::SetPanGestureSmoothingAmount(amount);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureUseActualTimes(bool enable) {
  {
    try {
      Integration::SetPanGestureUseActualTimes(enable);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureInterpolationTimeRange(int range) {
  {
    try {
      Integration::SetPanGestureInterpolationTimeRange(range);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureScalarOnlyPredictionEnabled(bool enable) {
  {
    try {
      Integration::SetPanGestureScalarOnlyPredictionEnabled(enable);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureTwoPointPredictionEnabled(bool enable) {
  {
    try {
      Integration::SetPanGestureTwoPointPredictionEnabled(enable);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureTwoPointInterpolatePastTime(int time) {
  {
    try {
      Integration::SetPanGestureTwoPointInterpolatePastTime(time);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureTwoPointVelocityBias(float velocity) {
  {
    try {
      Integration::SetPanGestureTwoPointVelocityBias(velocity);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureTwoPointAccelerationBias(float acceleration) {
  {
    try {
      Integration::SetPanGestureTwoPointAccelerationBias(acceleration);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureMultitapSmoothingRange(int range) {
  {
    try {
      Integration::SetPanGestureMultitapSmoothingRange(range);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureMinimumDistance(int distance) {
  {
    try {
      Integration::SetPanGestureMinimumDistance(distance);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPanGestureMinimumPanEvents(int number) {
  {
    try {
      Integration::SetPanGestureMinimumPanEvents(number);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPinchGestureMinimumDistance(float distance) {
  {
    try {
      Integration::SetPinchGestureMinimumDistance(distance);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPinchGestureMinimumTouchEvents(unsigned int number) {
  {
    try {
      Integration::SetPinchGestureMinimumTouchEvents(number);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetPinchGestureMinimumTouchEventsAfterStart(unsigned int number) {
  {
    try {
      Integration::SetPinchGestureMinimumTouchEventsAfterStart(number);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetRotationGestureMinimumTouchEvents(unsigned int number) {
  {
    try {
      Integration::SetRotationGestureMinimumTouchEvents(number);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetRotationGestureMinimumTouchEventsAfterStart(unsigned int number) {
  {
    try {
      Integration::SetRotationGestureMinimumTouchEventsAfterStart(number);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetLongPressMinimumHoldingTime(unsigned int time) {
  {
    try {
      Integration::SetLongPressMinimumHoldingTime(time);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GestureOptions_SetTapMaximumAllowedTime(uint32_t time) {
  {
    try {
      Integration::SetTapMaximumAllowedTime(time);
    } CALL_CATCH_EXCEPTION();
  }
  return;
}

#ifdef __cplusplus
}
#endif
