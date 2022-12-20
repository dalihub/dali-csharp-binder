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
#include <dali-toolkit/devel-api/text/range.h>
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Range(void *refRange) {
  Range *rangePtr = (Range *)0;
  rangePtr = (Range *)refRange;

  {
    try {
      delete rangePtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Range_New(unsigned int argStartIndex,
                                                   unsigned int argEndIndex) {

  Range *rangePtr = 0;
  {
    try {
      rangePtr = (Range *)new Range(Range::New(argStartIndex, argEndIndex));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)rangePtr;
}

SWIGEXPORT unsigned int SWIGSTDCALL
CSharp_Dali_Range_GetStartIndex(void *refRange) {

  Range *rangePtr;
  unsigned int result = false;

  rangePtr = (Range *)refRange;
  if (!rangePtr) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Attempt to dereference null Range",
                                           0);
    return 0;
  }

  {
    try {
      result = rangePtr->GetStartIndex();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL
CSharp_Dali_Range_GetEndIndex(void *refRange) {

  Range *rangePtr;
  unsigned int result = false;

  rangePtr = (Range *)refRange;
  if (!rangePtr) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Attempt to dereference null Range",
                                           0);
    return 0;
  }

  {
    try {
      result = rangePtr->GetEndIndex();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL
CSharp_Dali_Range_GetNumberOfIndices(void *refRange) {

  Range *rangePtr;
  unsigned int result = false;

  rangePtr = (Range *)refRange;
  if (!rangePtr) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Attempt to dereference null Range",
                                           0);
    return 0;
  }

  {
    try {
      result = rangePtr->GetNumberOfIndices();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

#ifdef __cplusplus
}
#endif