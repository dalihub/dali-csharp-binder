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
#include <dali-toolkit/devel-api/controls/text-controls/text-spannable.h>
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

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_TextLabel_SetSpannedText(void *refTextLabel, void *refSpanned) {

  Dali::Toolkit::TextLabel *textLabelPtr = (Dali::Toolkit::TextLabel *)0;
  textLabelPtr = (Dali::Toolkit::TextLabel *)refTextLabel;
  if (!textLabelPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null TextLabel", 0);
    return;
  }

  Spanned *spannedPtr = (Spanned *)0;
  spannedPtr = (Spanned *)refSpanned;
  if (!spannedPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException, "Attempt to dereference null Spanned",
        0);
    return;
  }

  {
    try {
      SetSpannedText(*textLabelPtr, *spannedPtr);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_TextField_SetSpannedText(void *refTextField, void *refSpanned) {

  Dali::Toolkit::TextField *textFieldPtr = (Dali::Toolkit::TextField *)0;
  textFieldPtr = (Dali::Toolkit::TextField *)refTextField;
  if (!textFieldPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null TextField", 0);
    return;
  }

  Spanned *spannedPtr = (Spanned *)0;
  spannedPtr = (Spanned *)refSpanned;
  if (!spannedPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException, "Attempt to dereference null Spanned",
        0);
    return;
  }

  {
    try {
      SetSpannedText(*textFieldPtr, *spannedPtr);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_TextEditor_SetSpannedText(void *refTextEditor, void *refSpanned) {

  Dali::Toolkit::TextEditor *textEditorPtr = (Dali::Toolkit::TextEditor *)0;
  textEditorPtr = (Dali::Toolkit::TextEditor *)refTextEditor;
  if (!textEditorPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null TextEditor", 0);
    return;
  }

  Spanned *spannedPtr = (Spanned *)0;
  spannedPtr = (Spanned *)refSpanned;
  if (!spannedPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException, "Attempt to dereference null Spanned",
        0);
    return;
  }

  {
    try {
      SetSpannedText(*textEditorPtr, *spannedPtr);
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif