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

// EXTERNAL INCLUDES
#include <dali/dali.h>
#include <dali/devel-api/adaptor-framework/native-image-source-devel.h>
#include <tbm_surface.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Texture_TbmSurface(tbm_surface_h tbm_surface) {
  Dali::NativeImageSourcePtr mNativeImageSrc;
  Dali::Texture mNativeTexture;
  void * jresult ;

  if (!tbm_surface) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "tbm surface is null", 0);
    return 0;
  }

  try {
    Dali::Any source(tbm_surface);
    mNativeImageSrc = Dali::NativeImageSource::New(source);
    mNativeTexture = Dali::Texture::New( *mNativeImageSrc );
    } CALL_CATCH_EXCEPTION(0);

  jresult = new Dali::Texture((const Dali::Texture &)mNativeTexture);
  return (void*)jresult;
}

#ifdef __cplusplus
}
#endif

