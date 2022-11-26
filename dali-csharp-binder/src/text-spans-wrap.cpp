/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/devel-api/text/spans/base-span.h>
#include <dali-toolkit/devel-api/text/spans/foreground-color-span.h>
#include <dali/dali.h>

// INTERNAL INCLUDES
#include "common.h"

/* Callback for returning strings to C# without leaking memory */
typedef char *(SWIGSTDCALL *SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

using namespace Dali::Toolkit::Text;

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_BaseSpan(void *refBaseSpan) {
  BaseSpan *baseSpanPtr = (BaseSpan *)0;
  baseSpanPtr = (BaseSpan *)refBaseSpan;

  {
    try {
      delete baseSpanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

// ForegroundColorSpan

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_delete_ForegroundColorSpan(void *refSpan) {
  ForegroundColorSpan *spanPtr = (ForegroundColorSpan *)0;
  spanPtr = (ForegroundColorSpan *)refSpan;

  {
    try {
      delete spanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_ForegroundColorSpan_New(void *argColor) {

  Dali::Vector4 *colorPtr = 0;
  colorPtr = (Dali::Vector4 *)argColor;
  if (!colorPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Vector4", 0);
    return 0;
  }

  ForegroundColorSpan *spanPtr = 0;
  {
    try {
      spanPtr = (ForegroundColorSpan *)new ForegroundColorSpan(
          ForegroundColorSpan::New((Dali::Vector4 const &)*colorPtr));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_ForegroundColorSpan_GetForegroundColor(void *refSpan) {

  ForegroundColorSpan *spanPtr;
  Dali::Vector4 result;

  spanPtr = (ForegroundColorSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null ForegroundColorSpan", 0);
    return 0;
  }

  {
    try {
      result = spanPtr->GetForegroundColor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Vector4((const Dali::Vector4 &)result);
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_ForegroundColorSpan_IsForegroundColorDefined(void *refSpan) {

  ForegroundColorSpan *spanPtr;
  bool result = false;

  spanPtr = (ForegroundColorSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null ForegroundColorSpan", 0);
    return 0;
  }

  {
    try {
      result = spanPtr->IsForegroundColorDefined();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

#ifdef __cplusplus
}
#endif
