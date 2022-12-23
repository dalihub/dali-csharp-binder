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
#include <dali-toolkit/devel-api/text/spannable-string.h>
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
CSharp_Dali_delete_SpannableString(void *refSpannableString) {
  SpannableString *spannablePtr = (SpannableString *)0;
  spannablePtr = (SpannableString *)refSpannableString;

  {
    try {
      delete spannablePtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SpannableString_New(char *refText) {

  std::string text = std::string(refText);
  SpannableString *spannableStringPtr = 0;
  {
    try {
      spannableStringPtr =
          (SpannableString *)new SpannableString(SpannableString::New(text));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spannableStringPtr;
}

#ifdef __cplusplus
}
#endif