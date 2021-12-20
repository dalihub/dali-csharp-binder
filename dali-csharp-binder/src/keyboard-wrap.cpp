/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
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
#include <dali/dali.h>
#include <dali/public-api/common/dali-common.h>
#include <dali/devel-api/adaptor-framework/keyboard.h>
#include <dali-toolkit/dali-toolkit.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef TIZEN_BUILD
#ifdef ECORE_WL2
#include <Ecore_Wl2.h>
#else
#include <Ecore_Wayland.h>
#endif
#endif

#undef LOG
//#define LOG DALI_LOG_ERROR
#define LOG(a...)


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Keyboard_SetRepeatInfo(float rate, float delay)
{
  bool ret;

  LOG("CSharp_Dali_Keyboard_SetRepeatInfo() [DP1] rate=%f, delay=%f", rate, delay);

  {
    try {
      ret = Dali::Keyboard::SetRepeatInfo(rate, delay);
    } CALL_CATCH_EXCEPTION(0);
  }


  LOG("CSharp_Dali_Keyboard_SetRepeatInfo() [DP2] ret=%d", ret);

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Keyboard_GetRepeatInfo(float& rate, float& delay)
{
  bool ret;

  LOG("CSharp_Dali_Keyboard_GetRepeatInfo() [DP1] rate=%f, delay=%f", rate, delay);

  {
    try {
      ret = Dali::Keyboard::GetRepeatInfo(rate, delay);
    } CALL_CATCH_EXCEPTION(0);
  }


  LOG("CSharp_Dali_Keyboard_GetRepeatInfo() [DP2] ret=%d", ret);

  return ret;
}


#ifdef __cplusplus
}
#endif

