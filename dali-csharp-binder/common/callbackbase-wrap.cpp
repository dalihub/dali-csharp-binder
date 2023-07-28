/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
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
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MakeCallback(void * jarg1) {
  void * jresult ;
  void (*arg1)(void) = (void (*)(void)) 0 ;
  Dali::CallbackBase *result = 0 ;

  arg1 = (void (*)(void))jarg1;
  {
    try {
      result = (Dali::CallbackBase *)Dali::MakeCallback(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }


  jresult = (void *)result;

  return jresult;
}

#ifdef __cplusplus
}
#endif

