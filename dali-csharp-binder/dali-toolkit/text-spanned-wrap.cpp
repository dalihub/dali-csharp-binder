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
#include <dali-toolkit/devel-api/text/spanned.h>
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Spanned(void *refSpanned) {
  Spanned *spannedPtr = (Spanned *)0;
  spannedPtr = (Spanned *)refSpanned;

  {
    try {
      delete spannedPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Spanned_GetAllSpans(void *refSpanned) {

  Spanned *spannedPtr;
  void *result = nullptr;

  spannedPtr = (Spanned *)refSpanned;
  if (!spannedPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException, "Attempt to dereference null Spanned",
        0);
    return 0;
  }

  {
    try {
      result = new std::vector<BaseSpan>(
          (const std::vector<BaseSpan> &)(spannedPtr->GetAllSpans()));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Spanned_RetrieveAllSpansAndRanges(
    void *refSpanned, void *refVectorSpans, void *refVectorRanges) {

  std::vector<BaseSpan> *spanVectorPtr = (std::vector<BaseSpan> *)0;
  spanVectorPtr = (std::vector<BaseSpan> *)refVectorSpans;
  if (!spanVectorPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null vector<BaseSpan>", 0);
    return;
  }

  std::vector<Range> *rangeVectorPtr = (std::vector<Range> *)0;
  rangeVectorPtr = (std::vector<Range> *)refVectorRanges;
  if (!rangeVectorPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null vector<Range>", 0);
    return;
  }

  Spanned *spannedPtr;
  spannedPtr = (Spanned *)refSpanned;
  if (!spannedPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException, "Attempt to dereference null Spanned",
        0);
    return;
  }

  {
    try {
      spannedPtr->RetrieveAllSpansAndRanges(*spanVectorPtr, *rangeVectorPtr);
    }
    CALL_CATCH_EXCEPTION();
  }

  return;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_std_vector_BaseSpan_Create() {
  void *nuiResult;
  std::vector<BaseSpan> *result = 0;

  {
    try {
      result = (std::vector<BaseSpan> *)new std::vector<BaseSpan>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (void *)result;
  return nuiResult;
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_std_vector_BaseSpan_Release(void *refVector) {
  std::vector<BaseSpan> *spanPtr = (std::vector<BaseSpan> *)0;

  spanPtr = (std::vector<BaseSpan> *)refVector;
  {
    try {
      delete spanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_std_vector_BaseSpan_ValueOfIndex(
    void *refVector, unsigned long argIndex) {
  void *nuiResult;
  std::vector<BaseSpan> *spanPtr = (std::vector<BaseSpan> *)0;
  std::vector<BaseSpan>::size_type itemSize;
  std::vector<BaseSpan>::value_type *result = 0;

  spanPtr = (std::vector<BaseSpan> *)refVector;
  itemSize = (std::vector<BaseSpan>::size_type)argIndex;
  {
    try {
      result =
          (std::vector<BaseSpan>::value_type *)&(spanPtr)->operator[](itemSize);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (void *)result;
  return nuiResult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_std_vector_BaseSpan_TypeOfIndex(
    void *refVector, unsigned long argIndex) {

  Dali::Toolkit::Text::SpanType::Value result;
  std::vector<BaseSpan> *item = (std::vector<BaseSpan> *)0;
  std::vector<BaseSpan>::size_type itemSize;
  std::vector<BaseSpan>::value_type *spanPtr = 0;

  item = (std::vector<BaseSpan> *)refVector;
  itemSize = (std::vector<BaseSpan>::size_type)argIndex;
  {
    try {
      spanPtr =
          (std::vector<BaseSpan>::value_type *)&(item)->operator[](itemSize);
      result = spanPtr->GetSpanType();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  int nuiResult = (int)result;
  return nuiResult;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_std_vector_BaseSpan_Size(void *refVector) {
  std::vector<BaseSpan> *spanVectorPtr = (std::vector<BaseSpan> *)0;
  int size;

  spanVectorPtr = (std::vector<BaseSpan> *)refVector;
  {
    try {
      size = (spanVectorPtr)->size();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return size;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_std_vector_Range_Create() {
  void *nuiResult;
  std::vector<Range> *result = 0;

  {
    try {
      result = (std::vector<Range> *)new std::vector<Range>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (void *)result;
  return nuiResult;
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_std_vector_Range_Release(void *refVector) {
  std::vector<Range> *rangePtr = (std::vector<Range> *)0;

  rangePtr = (std::vector<Range> *)refVector;
  {
    try {
      delete rangePtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_std_vector_Range_ValueOfIndex(
    void *refVector, unsigned long argIndex) {
  void *nuiResult;
  std::vector<Range> *rangePtr = (std::vector<Range> *)0;
  std::vector<Range>::size_type itemSize;
  std::vector<Range>::value_type *result = 0;

  rangePtr = (std::vector<Range> *)refVector;
  itemSize = (std::vector<Range>::size_type)argIndex;
  {
    try {
      result =
          (std::vector<Range>::value_type *)&(rangePtr)->operator[](itemSize);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (void *)result;
  return nuiResult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_std_vector_Range_Size(void *refVector) {
  std::vector<Range> *rangePtr = (std::vector<Range> *)0;
  int size;

  rangePtr = (std::vector<Range> *)refVector;
  {
    try {
      size = (rangePtr)->size();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return size;
}

#ifdef __cplusplus
}
#endif
