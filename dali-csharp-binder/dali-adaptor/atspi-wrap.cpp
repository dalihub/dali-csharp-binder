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
#include <dali-csharp-binder/common/common.h>

#define NAMEOF(x) #x

#ifdef __cplusplus
extern "C" {
#endif

using SayCallbackType = void(*)(const char*);

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_say(const char* arg1_text, bool arg2_discardable, SayCallbackType arg3_callback)
{
  Dali::AtspiAccessibility::Say(std::string{arg1_text}, arg2_discardable, [arg3_callback](std::string status) {
    arg3_callback(status.c_str());
  });
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

SWIGEXPORT bool SWIGSTDCALL csharp_dali_accessibility_IsScreenReaderEnabled()
{
  return Dali::AtspiAccessibility::IsScreenReaderEnabled();
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

SWIGEXPORT void SWIGSTDCALL csharp_dali_accessibility_RegisterScreenReaderEnabledDisabledSignalHandler(void (*screenReaderEnabledSignalHandler)(), void (*screenReaderDisabledSignalHandler)())
{
  using Dali::Accessibility::Bridge;

  if (!screenReaderEnabledSignalHandler)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Signal handler is null", NAMEOF(screenReaderEnabledSignalHandler));
    return;
  }

  if (!screenReaderDisabledSignalHandler)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Signal handler is null", NAMEOF(screenReaderDisabledSignalHandler));
    return;
  }

  Bridge::ScreenReaderEnabledSignal().Connect(screenReaderEnabledSignalHandler);
  Bridge::ScreenReaderDisabledSignal().Connect(screenReaderDisabledSignalHandler);
}

#ifdef __cplusplus
}
#endif
