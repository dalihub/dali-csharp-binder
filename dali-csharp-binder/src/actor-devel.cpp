/** Copyright (c) 2017 Samsung Electronics Co., Ltd.
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

#ifndef CSHARP_ACTOR_DEVEL
#define CSHARP_ACTOR_DEVEL
#endif

#include "common.h"
#include <dali/dali.h>
#include <dali/devel-api/actors/actor-devel.h>

#ifdef __cplusplus
extern "C" {
#endif
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_UPDATE_SIZE_HINT_get() {
  int jresult ;
  int result;

  result = (int)Dali::DevelActor::Property::UPDATE_SIZE_HINT;
  jresult = (int)result;
  return jresult;
}

#ifdef __cplusplus
}
#endif

