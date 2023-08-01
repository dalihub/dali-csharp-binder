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
#include <dali-toolkit/devel-api/text/spannable.h>
#include <dali/dali.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

/* Callback for returning strings to C# without leaking memory */
typedef char *(SWIGSTDCALL *SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

using namespace Dali::Toolkit::Text;

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Spannable(void *refSpannable) {
  Spannable *spannablePtr = (Spannable *)0;
  spannablePtr = (Spannable *)refSpannable;

  {
    try {
      delete spannablePtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Spannable_AttachSpan(void *refSpannable,
                                                             void *refSpan,
                                                             void *refRange) {

  bool result = false;

  BaseSpan *baseSpanPtr;
  baseSpanPtr = (BaseSpan *)refSpan;
  if (!baseSpanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null BaseSpan", 0);
    return result;
  }

  Range *rangePtr;
  rangePtr = (Range *)refRange;
  if (!rangePtr) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Attempt to dereference null Range",
                                           0);
    return result;
  }

  Spannable *spannablePtr;
  spannablePtr = (Spannable *)refSpannable;
  if (!spannablePtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Spannable", 0);
    return result;
  }

  {
    try {
      result = spannablePtr->AttachSpan(*baseSpanPtr, *rangePtr);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Spannable_DetachSpan(void *refSpannable,
                                                             void *refSpan) {

  bool result = false;

  BaseSpan *baseSpanPtr;
  baseSpanPtr = (BaseSpan *)refSpan;
  if (!baseSpanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null BaseSpan", 0);
    return result;
  }

  Spannable *spannablePtr;
  spannablePtr = (Spannable *)refSpannable;
  if (!spannablePtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Spannable", 0);
    return result;
  }

  {
    try {
      result = spannablePtr->DetachSpan(*baseSpanPtr);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

#ifdef __cplusplus
}
#endif
