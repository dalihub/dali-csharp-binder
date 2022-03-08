/*
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/adaptor-framework/accessibility-bridge.h>
#include <dali/devel-api/adaptor-framework/atspi-accessibility.h>

// INTERNAL INCLUDES
#include "common.h"

#define NAMEOF(x) #x

#ifdef __cplusplus
extern "C" {
#endif

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

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_say(char* arg1_text, bool arg2_discardable, void *arg3_callback)
{
  callBack = (callbackFuncType)arg3_callback;

  Dali::AtspiAccessibility::Say(std::string{arg1_text}, arg2_discardable, sayTestCallback);
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_pause_resume(bool arg1_pause)
{
  if(arg1_pause)
  {
    Dali::AtspiAccessibility::Pause();
  }
  else
  {
    Dali::AtspiAccessibility::Resume();
  }
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_stop_reading(bool arg1_alsoNonDiscardable)
{
  Dali::AtspiAccessibility::StopReading(arg1_alsoNonDiscardable);
}

SWIGEXPORT bool SWIGSTDCALL csharp_dali_accessibility_suppress_screen_reader(bool arg1_suppress)
{
  return Dali::AtspiAccessibility::SuppressScreenReader(arg1_suppress);
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_BridgeEnableAutoInit()
{
  Dali::Accessibility::Bridge::EnableAutoInit();
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_BridgeDisableAutoInit()
{
  Dali::Accessibility::Bridge::DisableAutoInit();
}

SWIGEXPORT bool SWIGSTDCALL csharp_dali_accessibility_IsEnabled()
{
  return Dali::AtspiAccessibility::IsEnabled();
}

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_RegisterEnabledDisabledSignalHandler(void (*enabledSignalHandler)(), void (*disabledSignalHandler)())
{
  using Dali::Accessibility::Bridge;

  if (!enabledSignalHandler)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Signal handler is null", NAMEOF(enabledSignalHandler));
    return;
  }

  if (!disabledSignalHandler)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Signal handler is null", NAMEOF(disabledSignalHandler));
    return;
  }

  Bridge::EnabledSignal().Connect(enabledSignalHandler);
  Bridge::DisabledSignal().Connect(disabledSignalHandler);
}

#ifdef __cplusplus
}
#endif
