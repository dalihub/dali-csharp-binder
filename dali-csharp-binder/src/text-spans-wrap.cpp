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
#include <dali-toolkit/devel-api/text/spans/character-spacing-span.h>
#include <dali-toolkit/devel-api/text/spans/background-color-span.h>
#include <dali-toolkit/devel-api/text/spans/italic-span.h>
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

// CharacterSpacing span

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_CharacterSpacingSpan(void *refSpan){
  CharacterSpacingSpan *spanPtr = (CharacterSpacingSpan *)0;
  spanPtr = (CharacterSpacingSpan *)refSpan;
  {
    try {
      delete spanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CharacterSpacingSpan_New(float argCharSpacing){
  float charSpacingPtr = (float) argCharSpacing;

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

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_CharacterSpacingSpan_GetCharacterSpacing(void *refSpan) {

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

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_CharacterSpacingSpan_IsCharacterSpacingDefined(void *refSpan) {
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

//Italic span

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItalicSpan(void *refSpan)
{
  ItalicSpan *spanPtr = (ItalicSpan *)0;
  spanPtr = (ItalicSpan *)refSpan;

  {
    try
    {
      delete spanPtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ItalicSpan_New()
{
  ItalicSpan *spanPtr = 0;

  {
    try
    {
      spanPtr = (ItalicSpan *)new ItalicSpan(ItalicSpan::New());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void *)spanPtr;
}

#ifdef __cplusplus
}
#endif
