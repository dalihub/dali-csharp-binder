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
#include <dali-toolkit/devel-api/text/spans/background-color-span.h>
#include <dali-toolkit/devel-api/text/spans/base-span.h>
#include <dali-toolkit/devel-api/text/spans/bold-span.h>
#include <dali-toolkit/devel-api/text/spans/character-spacing-span.h>
#include <dali-toolkit/devel-api/text/spans/font-span.h>
#include <dali-toolkit/devel-api/text/spans/foreground-color-span.h>
#include <dali-toolkit/devel-api/text/spans/italic-span.h>
#include <dali-toolkit/devel-api/text/spans/strikethrough-span.h>
#include <dali-toolkit/devel-api/text/spans/underline-span.h>
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_BaseSpan_GetSpanType(void *refBaseSpan) {

  Dali::Toolkit::Text::SpanType::Value result;

  BaseSpan *spanPtr = (BaseSpan *)0;
  spanPtr = (BaseSpan *)refBaseSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null BaseSpan", 0);
    return 0;
  }

  {
    try {
      result = spanPtr->GetSpanType();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  int nuiResult = (int)result;
  return nuiResult;
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

// CharacterSpacing span

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_delete_CharacterSpacingSpan(void *refSpan) {
  CharacterSpacingSpan *spanPtr = (CharacterSpacingSpan *)0;
  spanPtr = (CharacterSpacingSpan *)refSpan;
  {
    try {
      delete spanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_CharacterSpacingSpan_New(float argCharSpacing) {
  float charSpacingPtr = (float)argCharSpacing;

  CharacterSpacingSpan *spanPtr = 0;
  {
    try {
      spanPtr = (CharacterSpacingSpan *)new CharacterSpacingSpan(
          CharacterSpacingSpan::New(charSpacingPtr));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT float SWIGSTDCALL
CSharp_Dali_CharacterSpacingSpan_GetCharacterSpacing(void *refSpan) {

  CharacterSpacingSpan *spanPtr;
  float result = 0;

  spanPtr = (CharacterSpacingSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null CharacterSpacingSpan", 0);
    return 0;
  }

  {
    try {
      result = spanPtr->GetCharacterSpacing();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_CharacterSpacingSpan_IsCharacterSpacingDefined(void *refSpan) {
  CharacterSpacingSpan *spanPtr;
  bool result = false;

  spanPtr = (CharacterSpacingSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null CharacterSpacingSpan", 0);
    return 0;
  }

  {
    try {
      result = spanPtr->IsCharacterSpacingDefined();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

// BackgroundColorSpan

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_delete_BackgroundColorSpan(void *refSpan) {
  BackgroundColorSpan *spanPtr = (BackgroundColorSpan *)0;
  spanPtr = (BackgroundColorSpan *)refSpan;

  {
    try {
      delete spanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_BackgroundColorSpan_New(void *argColor) {

  Dali::Vector4 *colorPtr = 0;
  colorPtr = (Dali::Vector4 *)argColor;
  if (!colorPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Vector4", 0);
    return 0;
  }

  BackgroundColorSpan *spanPtr = 0;
  {
    try {
      spanPtr = (BackgroundColorSpan *)new BackgroundColorSpan(
          BackgroundColorSpan::New((Dali::Vector4 const &)*colorPtr));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_BackgroundColorSpan_GetBackgroundColor(void *refSpan) {

  BackgroundColorSpan *spanPtr;
  Dali::Vector4 result;

  spanPtr = (BackgroundColorSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null BackgroundColorSpan", 0);
    return 0;
  }

  {
    try {
      result = spanPtr->GetBackgroundColor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Vector4((const Dali::Vector4 &)result);
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_BackgroundColorSpan_IsBackgroundColorDefined(void *refSpan) {

  BackgroundColorSpan *spanPtr;
  bool result = false;

  spanPtr = (BackgroundColorSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null BackgroundColorSpan", 0);
    return 0;
  }

  {
    try {
      result = spanPtr->IsBackgroundColorDefined();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

// Italic span

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItalicSpan(void *refSpan) {
  ItalicSpan *spanPtr = (ItalicSpan *)0;
  spanPtr = (ItalicSpan *)refSpan;

  {
    try {
      delete spanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ItalicSpan_New() {
  ItalicSpan *spanPtr = 0;

  {
    try {
      spanPtr = (ItalicSpan *)new ItalicSpan(ItalicSpan::New());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

// Bold span

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_BoldSpan(void *refSpan) {

  BoldSpan *spanPtr = (BoldSpan *)0;
  spanPtr = (BoldSpan *)refSpan;

  {
    try {
      delete spanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_BoldSpan_New() {
  BoldSpan *spanPtr = 0;

  {
    try {
      spanPtr = (BoldSpan *)new BoldSpan(BoldSpan::New());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

// FontSpan
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FontSpan(void *refSpan) {

  FontSpan *spanPtr = (FontSpan *)0;
  spanPtr = (FontSpan *)refSpan;

  {
    try {
      delete spanPtr;
    }

    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_FontSpan_New(char *argFamilyName,
                                                      float argSize,
                                                      int argWeight,
                                                      int argWidth,
                                                      int argSlant) {

  std::string *familyName = 0;
  if (!argFamilyName) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "null string", 0);

    return 0;
  }

  std::string argFamilyName_str(argFamilyName);
  familyName = &argFamilyName_str;
  float size = (float)argSize;

  Dali::TextAbstraction::FontWeight::Type weight;
  weight = (Dali::TextAbstraction::FontWeight::Type)argWeight;
  Dali::TextAbstraction::FontWidth::Type width;
  width = (Dali::TextAbstraction::FontWidth::Type)argWidth;
  Dali::TextAbstraction::FontSlant::Type slant;
  slant = (Dali::TextAbstraction::FontSlant::Type)argSlant;

  FontSpan *spanPtr = 0;
  {
    try {
      spanPtr = (FontSpan *)new FontSpan(FontSpan::New(
          (std::string const &)*familyName, size, weight, width, slant));
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_FontSpan_GetFamilyName(void *refSpan) {

  FontSpan *spanPtr;
  std::string result;
  spanPtr = (FontSpan *)refSpan;

  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->GetFamilyName();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  char *nuiResult = SWIG_csharp_string_callback(result.c_str());

  return nuiResult;
}

SWIGEXPORT bool SWIGSTDCALL

CSharp_Dali_FontSpan_IsFamilyNameDefined(void *refSpan) {

  FontSpan *spanPtr;
  bool result = false;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsFamilyNameDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FontSpan_GetWeight(void *refSpan) {

  FontSpan *spanPtr;
  Dali::TextAbstraction::FontWeight::Type result;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {

    try {
      result = (Dali::TextAbstraction::FontWeight::Type)spanPtr->GetWeight();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  int nuiResult = (int)result;
  return nuiResult;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_FontSpan_IsWeightDefined(void *refSpan) {

  FontSpan *spanPtr;
  bool result = false;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsWeightDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FontSpan_GetWidth(void *refSpan) {

  FontSpan *spanPtr;

  Dali::TextAbstraction::FontWidth::Type result;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {
    try {
      result = (Dali::TextAbstraction::FontWidth::Type)spanPtr->GetWidth();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  int nuiResult = (int)result;
  return nuiResult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FontSpan_IsWidthDefined(void *refSpan) {

  FontSpan *spanPtr;
  bool result = false;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsWidthDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FontSpan_GetSlant(void *refSpan) {

  FontSpan *spanPtr;
  Dali::TextAbstraction::FontSlant::Type result;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {

    try {
      result = (Dali::TextAbstraction::FontSlant::Type)spanPtr->GetSlant();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  int nuiResult = (int)result;
  return nuiResult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FontSpan_IsSlantDefined(void *refSpan) {

  FontSpan *spanPtr;
  bool result = false;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsSlantDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FontSpan_GetSize(void *refSpan) {

  FontSpan *spanPtr;
  float result;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->GetSize();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FontSpan_IsSizeDefined(void *refSpan) {

  FontSpan *spanPtr;
  bool result = false;

  spanPtr = (FontSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null FontSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsSizeDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

// UnderlineSpan

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_UnderlineSpan(void *refSpan) {

  UnderlineSpan *spanPtr = (UnderlineSpan *)0;
  spanPtr = (UnderlineSpan *)refSpan;
  {
    try {
      delete spanPtr;
    }

    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_UnderlineSpan_New() {

  UnderlineSpan *spanPtr = 0;

  {
    try {
      spanPtr = (UnderlineSpan *)new UnderlineSpan(UnderlineSpan::New());
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_UnderlineSpan_NewSolid(void *argColor, float argHeight) {

  float height = (float)argHeight;
  Dali::Vector4 *colorPtr = 0;
  colorPtr = (Dali::Vector4 *)argColor;

  if (!colorPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Vector4", 0);

    return 0;
  }

  UnderlineSpan *spanPtr = 0;
  {
    try {
      spanPtr = (UnderlineSpan *)new UnderlineSpan(
          UnderlineSpan::NewSolid((Dali::Vector4 const &)*colorPtr, height));
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_UnderlineSpan_NewDashed(
    void *argColor, float argHeight, float argDashGap, float argDashWidth) {

  float height = (float)argHeight;
  float dashGap = (float)argDashGap;
  float dashWidth = (float)argDashWidth;

  Dali::Vector4 *colorPtr = 0;
  colorPtr = (Dali::Vector4 *)argColor;

  if (!colorPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Vector4", 0);

    return 0;
  }

  UnderlineSpan *spanPtr = 0;
  {
    try {
      spanPtr = (UnderlineSpan *)new UnderlineSpan(UnderlineSpan::NewDashed(
          (Dali::Vector4 const &)*colorPtr, height, dashGap, dashWidth));
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_UnderlineSpan_NewDouble(void *argColor, float argHeight) {

  float height = (float)argHeight;
  Dali::Vector4 *colorPtr = 0;
  colorPtr = (Dali::Vector4 *)argColor;

  if (!colorPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Vector4", 0);

    return 0;
  }

  UnderlineSpan *spanPtr = 0;
  {
    try {
      spanPtr = (UnderlineSpan *)new UnderlineSpan(
          UnderlineSpan::NewDouble((Dali::Vector4 const &)*colorPtr, height));
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_UnderlineSpan_GetColor(void *refSpan) {

  UnderlineSpan *spanPtr;
  Dali::Vector4 result;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->GetColor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Vector4((const Dali::Vector4 &)result);
}

SWIGEXPORT bool SWIGSTDCALL

CSharp_Dali_UnderlineSpan_IsColorDefined(void *refSpan) {

  UnderlineSpan *spanPtr;
  bool result = false;
  spanPtr = (UnderlineSpan *)refSpan;

  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsColorDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_UnderlineSpan_GetType(void *refSpan) {

  UnderlineSpan *spanPtr;
  Dali::Toolkit::Text::Underline::Type result;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = (Dali::Toolkit::Text::Underline::Type)spanPtr->GetType();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  int nuiResult = (int)result;
  return nuiResult;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_UnderlineSpan_IsTypeDefined(void *refSpan) {

  UnderlineSpan *spanPtr;
  bool result = false;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsTypeDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT float SWIGSTDCALL
CSharp_Dali_UnderlineSpan_GetHeight(void *refSpan) {

  UnderlineSpan *spanPtr;
  float result;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->GetHeight();
    }

    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_UnderlineSpan_IsHeightDefined(void *refSpan) {

  UnderlineSpan *spanPtr;
  bool result = false;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsHeightDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT float SWIGSTDCALL
CSharp_Dali_UnderlineSpan_GetDashGap(void *refSpan) {

  UnderlineSpan *spanPtr;
  float result;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->GetDashGap();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_UnderlineSpan_IsDashGapDefined(void *refSpan) {

  UnderlineSpan *spanPtr;
  bool result = false;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsDashGapDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT float SWIGSTDCALL
CSharp_Dali_UnderlineSpan_GetDashWidth(void *refSpan) {

  UnderlineSpan *spanPtr;
  float result;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->GetDashWidth();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_UnderlineSpan_IsDashWidthDefined(void *refSpan) {

  UnderlineSpan *spanPtr;
  bool result = false;

  spanPtr = (UnderlineSpan *)refSpan;
  if (!spanPtr) {

    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null UnderlineSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsDashWidthDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

// StrikethroughSpan

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_delete_StrikethroughSpan(void *refSpan) {

  StrikethroughSpan *spanPtr = (StrikethroughSpan *)0;
  spanPtr = (StrikethroughSpan *)refSpan;
  {
    try {
      delete spanPtr;
    }

    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_StrikethroughSpan_New() {

  StrikethroughSpan *spanPtr = 0;
  {
    try {
      spanPtr =
          (StrikethroughSpan *)new StrikethroughSpan(StrikethroughSpan::New());
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_StrikethroughSpan_New_color_height(
    void *argColor, float argHeight) {

  float height = (float)argHeight;
  Dali::Vector4 *colorPtr = 0;
  colorPtr = (Dali::Vector4 *)argColor;

  if (!colorPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Vector4", 0);

    return 0;
  }

  StrikethroughSpan *spanPtr = 0;
  {
    try {
      spanPtr = (StrikethroughSpan *)new StrikethroughSpan(
          StrikethroughSpan::New((Dali::Vector4 const &)*colorPtr, height));
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_StrikethroughSpan_GetColor(void *refSpan) {

  StrikethroughSpan *spanPtr;
  Dali::Vector4 result;

  spanPtr = (StrikethroughSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null StrikethroughSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->GetColor();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Vector4((const Dali::Vector4 &)result);
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_StrikethroughSpan_IsColorDefined(void *refSpan) {

  StrikethroughSpan *spanPtr;
  bool result = false;

  spanPtr = (StrikethroughSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null StrikethroughSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsColorDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT float SWIGSTDCALL
CSharp_Dali_StrikethroughSpan_GetHeight(void *refSpan) {

  StrikethroughSpan *spanPtr;
  float result;

  spanPtr = (StrikethroughSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null StrikethroughSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->GetHeight();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_StrikethroughSpan_IsHeightDefined(void *refSpan) {

  StrikethroughSpan *spanPtr;
  bool result = false;

  spanPtr = (StrikethroughSpan *)refSpan;
  if (!spanPtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null StrikethroughSpan", 0);

    return 0;
  }

  {
    try {
      result = spanPtr->IsHeightDefined();
    }

    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

#ifdef __cplusplus
}
#endif
