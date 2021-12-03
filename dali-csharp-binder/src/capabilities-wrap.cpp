
/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
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

#include "common.h"
#include <dali/devel-api/common/capabilities.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_IsBlendEquationSupported( int blendEquation ) {
  bool jresult;

  {
    try {
      jresult = Dali::Capabilities::IsBlendEquationSupported( static_cast<Dali::DevelBlendEquation::Type>(blendEquation) );
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return jresult;
}

#ifdef __cplusplus
}
#endif