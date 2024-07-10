/*
 * Copyright (c) 2024 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/dali-toolkit.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_New__SWIG_0() {
  Dali::Toolkit::BackgroundBlurEffect blurEffect;
  {
    try {
      blurEffect = Dali::Toolkit::BackgroundBlurEffect::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::BackgroundBlurEffect((const Dali::Toolkit::BackgroundBlurEffect &)blurEffect);
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_New__SWIG_1(unsigned int pixelRadius) {

  Dali::Toolkit::BackgroundBlurEffect blurEffect;
  {
    try {
      blurEffect = Dali::Toolkit::BackgroundBlurEffect::New(0.4f, pixelRadius);
    } CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::BackgroundBlurEffect((const Dali::Toolkit::BackgroundBlurEffect &)blurEffect);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_BackgroundBlurEffect(void * handle) {
  Dali::Toolkit::BackgroundBlurEffect *blurEffect = (Dali::Toolkit::BackgroundBlurEffect *)handle;
  {
    try {
      delete blurEffect;
    } CALL_CATCH_EXCEPTION();
  }
}


#ifdef __cplusplus
}
#endif
