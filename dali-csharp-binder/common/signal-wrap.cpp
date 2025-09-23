/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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

// INTERNAL INCLUDES
#include <dali-csharp-binder/dali-toolkit/control-devel-wrap.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Implementation Signal <void(std::string &)> is used in signals:
 *     AccessibilityGetName
 *     AccessibilityGetDescription
 */

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_GetResult(void* arg1)
{
  GUARD_ON_NULL_RET0(arg1);
  std::string* data = (std::string*)arg1;
  return SWIG_csharp_string_callback(data->c_str());
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_SetResult(void* arg1, char* arg2)
{
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch(([&]()
  {
    auto result = (std::string*)arg1;
    (*result)   = arg2;
  }));
}

/*
 * Implementation Signal <void(std::pair<Dali::Accessibility::GestureInfo, bool>&)> is used in signals:
 *     AccessibilityDoGestureSignalType
 */

using GesturePair = std::pair<Dali::Accessibility::GestureInfo, bool>;

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_GetSizeOfGestureInfo(void)
{
  return sizeof(Dali::Accessibility::GestureInfo);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_GetResult(void* arg1)
{
  bool result = false;
  GUARD_ON_NULL_RET0(arg1);
  try_catch(([&]()
  {
    auto gesturePair = (GesturePair*)arg1;
    result           = (bool)gesturePair->second;
  }));
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_SetResult(void* arg1, bool arg2)
{
  bool result = arg2;
  GUARD_ON_NULL_RET(arg1);
  try_catch(([&]()
  {
    auto gesturePair    = (GesturePair*)arg1;
    gesturePair->second = result;
  }));
}

/*
 * AccessibilityActionSignalType
 */
using ActionInfoFunc = bool (*)(const Dali::Accessibility::ActionInfo&);

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_AccessibilityActionSignal_Connect(void* arg1, void* arg2)
{
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch(([&]()
  {
    auto object = (Dali::Toolkit::DevelControl::AccessibilityActionSignalType*)arg1;
    auto func   = (ActionInfoFunc)arg2;
    object->Connect(func);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_AccessibilityActionSignal_Disconnect(void* arg1, void* arg2)
{
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch(([&]()
  {
    auto object = (Dali::Toolkit::DevelControl::AccessibilityActionSignalType*)arg1;
    auto func   = (ActionInfoFunc)arg2;
    object->Disconnect(func);
  }));
}

#ifdef __cplusplus
}
#endif
