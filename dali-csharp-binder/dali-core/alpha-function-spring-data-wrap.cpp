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

// EXTERNAL INCLUDES
#include <dali/public-api/animation/spring-data.h>
#include <cstdint>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AlphaFunctionSpringData_GetDuration(float stiffness, float damping, float mass)
{
  float duration = 0.0f;

  Dali::SpringData springData(stiffness, damping, mass);
  {
    try
    {
      duration = springData.GetDuration();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return duration;
}

#ifdef __cplusplus
}
#endif
