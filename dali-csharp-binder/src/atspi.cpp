/** Copyright (c) 2019 Samsung Electronics Co., Ltd.
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

#ifndef CSHARP_ATSPI
#define CSHARP_ATSPI
#endif

#include "common.h"
#include <dali/devel-api/adaptor-framework/atspi-accessibility.h>
#include <dali/integration-api/debug.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL csharp_dali_accessibility_GetStatus(void *jarg1)
{
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *)jarg1;
  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control is null", 0);
    return -1;
  }
  return Dali::AtspiAccessibility::GetStatus();
}

using callbackFuncType = void(*)(int);
callbackFuncType callBack;
void sayTestCallback(std::string result)
{
  DALI_LOG_ERROR("sayTestCallback() result=%s ", result.c_str());

  if(callBack)
  {
    if(result == "ReadingCancelled")
    {
      callBack(1);
    }
    else if(result == "ReadingStopped")
    {
      callBack(2);
    }
    else if(result == "ReadingSkipped")
    {
      callBack(3);
    }
    else if(result == "ReadingPaused")
    {
      callBack(4);
    }
    else if(result == "ReadingResumed")
    {
      callBack(5);
    }
    else
    {
      callBack(-1);
    }
  }
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_say(void *jarg1, char* jarg2, bool jarg3, void *jarg4)
{
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *)jarg1;
  std::string arg2(jarg2);
  bool arg3 = jarg3;
  callBack = (callbackFuncType)jarg4;

  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control is null", 0);
    return;
  }

  Dali::AtspiAccessibility::Say(arg2, jarg3, sayTestCallback);

  DALI_LOG_ERROR("csharp_dali_accessibility_say() arg3=%d", arg3);
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_pause_resume(void *jarg1, bool jarg2)
{
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *)jarg1;
  bool arg2 = jarg2;

  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control is null", 0);
    return;
  }

  if(arg2 == true)
  {
    Dali::AtspiAccessibility::Pause();
  }
  else
  {
    Dali::AtspiAccessibility::Resume();
  }

  DALI_LOG_ERROR("csharp_dali_accessibility_pause_resume() arg2=%d", arg2);
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_stop_reading(void *jarg1, bool jarg2)
{
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *)jarg1;
  bool arg2 = jarg2;

  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control is null", 0);
    return;
  }

  Dali::AtspiAccessibility::StopReading(arg2);

  DALI_LOG_ERROR("csharp_dali_accessibility_stop_reading() arg2=%d", arg2);
}

SWIGEXPORT bool SWIGSTDCALL csharp_dali_accessibility_suppress_screen_reader(void *jarg1, bool jarg2)
{
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *)jarg1;
  bool arg2 = jarg2;

  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control is null", 0);
    return false;
  }

  return Dali::AtspiAccessibility::SuppressScreenReader(arg2);
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_Enable(void *jarg1, bool jarg2)
{
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *)jarg1;

  if (!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control is null", 0);
    return;
  }

  Dali::AtspiAccessibility::SetForcefully(jarg2);

  DALI_LOG_ERROR("csharp_dali_accessibility_Enable() jarg2=%d \n", jarg2);
}

#ifdef __cplusplus
}
#endif
