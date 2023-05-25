/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/common/type-traits.h>
#include <dali/devel-api/text-abstraction/font-metrics.h>
#include <dali/devel-api/text-abstraction/font-list.h>
#include <dali/devel-api/text-abstraction/glyph-buffer-data.h>
#include <dali/devel-api/text-abstraction/glyph-info.h>
#include <dali/devel-api/text-abstraction/text-abstraction-definitions.h>
#include <dali/devel-api/text-abstraction/font-client.h>

// INTERNAL INCLUDES
#include "common.h"

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


typedef std::string FontPath;
typedef std::string FontFamily;
typedef std::string FontStyle;
typedef std::vector<FontPath>   FontPathList;
typedef std::vector<FontFamily> FontFamilyList;
typedef std::vector<Dali::TextAbstraction::FontDescription> FontList;

typedef uint32_t FontId;
typedef uint32_t PointSize26Dot6;
typedef uint32_t FaceIndex;
typedef uint32_t GlyphIndex;
typedef uint32_t Character;
typedef uint32_t CharacterIndex;
typedef uint32_t Length;
typedef uint32_t BidiInfoIndex;
typedef char     LineBreakInfo;
typedef char     WordBreakInfo;
typedef bool     CharacterDirection;


#ifdef __cplusplus
extern "C" {
#endif


SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_FontClient_SWIGUpcast(Dali::TextAbstraction::FontClient *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_PreCache(char ** fallbackFamilyArray, int fallbackFamilySize, char ** extraFamilyArray, int extraFamilySize, char * localeFamilyString, bool useThread, bool syncCreation) {
  FontFamilyList fallbackFamilyList;
  FontFamilyList extraFamilyList;
  FontFamily localeFamily = localeFamilyString ? localeFamilyString : "";

  if(fallbackFamilyArray)
  {
    fallbackFamilyList.assign(fallbackFamilyArray, fallbackFamilyArray + fallbackFamilySize);
  }

  if(extraFamilyArray)
  {
    extraFamilyList.assign(extraFamilyArray, extraFamilyArray + extraFamilySize);
  }

  Dali::TextAbstraction::FontClientPreCache(fallbackFamilyList, extraFamilyList, localeFamily, useThread, syncCreation);
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_FontPreLoad(char ** fontPathArray, int fontPathSize, char ** memoryFontPathArray, int memoryFontPathSize, bool useThread, bool syncCreation) {
  FontPathList fontPathList;
  FontPathList memoryFontPathList;

  if(fontPathArray)
  {
    fontPathList.assign(fontPathArray, fontPathArray + fontPathSize);
  }

  if(memoryFontPathArray)
  {
    memoryFontPathList.assign(memoryFontPathArray, memoryFontPathArray + memoryFontPathSize);
  }

  Dali::TextAbstraction::FontClientFontPreLoad(fontPathList, memoryFontPathList, useThread, syncCreation);
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FontWidthName_get() {
  void * jresult ;
  char **result = 0 ;

  result = (char **)(char **)Dali::TextAbstraction::FontWidth::Name;
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FontWeightName_get() {
  void * jresult ;
  char **result = 0 ;

  result = (char **)(char **)Dali::TextAbstraction::FontWeight::Name;
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FontSlantName_get() {
  void * jresult ;
  char **result = 0 ;

  result = (char **)(char **)Dali::TextAbstraction::FontSlant::Name;
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FontDescription() {
  void * jresult ;
  Dali::TextAbstraction::FontDescription *result = 0 ;

  {
    try {
      result = (Dali::TextAbstraction::FontDescription *)new Dali::TextAbstraction::FontDescription();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FontDescription(void * jarg1) {
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontDescription_path_set(void * jarg1, char * jarg2) {
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontPath *arg2 = 0 ;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  Dali::TextAbstraction::FontPath arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->path = *arg2;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_FontDescription_path_get(void * jarg1) {
  char * jresult ;
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontPath *result = 0 ;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  result = (Dali::TextAbstraction::FontPath *) & ((arg1)->path);
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontDescription_family_set(void * jarg1, char * jarg2) {
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontFamily *arg2 = 0 ;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  Dali::TextAbstraction::FontFamily arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->family = *arg2;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_FontDescription_family_get(void * jarg1) {
  char * jresult ;
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontFamily *result = 0 ;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  result = (Dali::TextAbstraction::FontFamily *) & ((arg1)->family);
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontDescription_width_set(void * jarg1, int jarg2) {
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontWidth::Type arg2 ;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  arg2 = (Dali::TextAbstraction::FontWidth::Type)jarg2;
  if (arg1) (arg1)->width = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FontDescription_width_get(void * jarg1) {
  int jresult ;
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontWidth::Type result;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  result = (Dali::TextAbstraction::FontWidth::Type) ((arg1)->width);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontDescription_weight_set(void * jarg1, int jarg2) {
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontWeight::Type arg2 ;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  arg2 = (Dali::TextAbstraction::FontWeight::Type)jarg2;
  if (arg1) (arg1)->weight = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FontDescription_weight_get(void * jarg1) {
  int jresult ;
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontWeight::Type result;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  result = (Dali::TextAbstraction::FontWeight::Type) ((arg1)->weight);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontDescription_slant_set(void * jarg1, int jarg2) {
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontSlant::Type arg2 ;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  arg2 = (Dali::TextAbstraction::FontSlant::Type)jarg2;
  if (arg1) (arg1)->slant = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FontDescription_slant_get(void * jarg1) {
  int jresult ;
  Dali::TextAbstraction::FontDescription *arg1 = (Dali::TextAbstraction::FontDescription *) 0 ;
  Dali::TextAbstraction::FontSlant::Type result;

  arg1 = (Dali::TextAbstraction::FontDescription *)jarg1;
  result = (Dali::TextAbstraction::FontSlant::Type) ((arg1)->slant);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FontMetrics__SWIG_0() {
  void * jresult ;
  Dali::TextAbstraction::FontMetrics *result = 0 ;

  {
    try {
      result = (Dali::TextAbstraction::FontMetrics *)new Dali::TextAbstraction::FontMetrics();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FontMetrics__SWIG_1(float jarg1, float jarg2, float jarg3, float jarg4, float jarg5) {
  void * jresult ;
  float arg1 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  Dali::TextAbstraction::FontMetrics *result = 0 ;

  arg1 = (float)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  arg5 = (float)jarg5;
  {
    try {
      result = (Dali::TextAbstraction::FontMetrics *)new Dali::TextAbstraction::FontMetrics(arg1,arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontMetrics_ascender_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->ascender = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FontMetrics_ascender_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  result = (float) ((arg1)->ascender);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontMetrics_descender_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->descender = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FontMetrics_descender_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  result = (float) ((arg1)->descender);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontMetrics_height_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->height = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FontMetrics_height_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  result = (float) ((arg1)->height);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontMetrics_underlinePosition_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->underlinePosition = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FontMetrics_underlinePosition_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  result = (float) ((arg1)->underlinePosition);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontMetrics_underlineThickness_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->underlineThickness = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FontMetrics_underlineThickness_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  result = (float) ((arg1)->underlineThickness);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FontMetrics(void * jarg1) {
  Dali::TextAbstraction::FontMetrics *arg1 = (Dali::TextAbstraction::FontMetrics *) 0 ;

  arg1 = (Dali::TextAbstraction::FontMetrics *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LINE_MUST_BREAK_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::TextAbstraction::LINE_MUST_BREAK;
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LINE_ALLOW_BREAK_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::TextAbstraction::LINE_ALLOW_BREAK;
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LINE_NO_BREAK_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::TextAbstraction::LINE_NO_BREAK;
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WORD_BREAK_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::TextAbstraction::WORD_BREAK;
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WORD_NO_BREAK_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::TextAbstraction::WORD_NO_BREAK;
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorBlob_r_set(void * jarg1, unsigned char jarg2) {
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;
  unsigned char arg2 ;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  arg2 = (unsigned char)jarg2;
  if (arg1) (arg1)->r = arg2;
}


SWIGEXPORT unsigned char SWIGSTDCALL CSharp_Dali_VectorBlob_r_get(void * jarg1) {
  unsigned char jresult ;
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;
  unsigned char result;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  result = (unsigned char) ((arg1)->r);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorBlob_g_set(void * jarg1, unsigned char jarg2) {
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;
  unsigned char arg2 ;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  arg2 = (unsigned char)jarg2;
  if (arg1) (arg1)->g = arg2;
}


SWIGEXPORT unsigned char SWIGSTDCALL CSharp_Dali_VectorBlob_g_get(void * jarg1) {
  unsigned char jresult ;
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;
  unsigned char result;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  result = (unsigned char) ((arg1)->g);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorBlob_b_set(void * jarg1, unsigned char jarg2) {
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;
  unsigned char arg2 ;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  arg2 = (unsigned char)jarg2;
  if (arg1) (arg1)->b = arg2;
}


SWIGEXPORT unsigned char SWIGSTDCALL CSharp_Dali_VectorBlob_b_get(void * jarg1) {
  unsigned char jresult ;
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;
  unsigned char result;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  result = (unsigned char) ((arg1)->b);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorBlob_a_set(void * jarg1, unsigned char jarg2) {
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;
  unsigned char arg2 ;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  arg2 = (unsigned char)jarg2;
  if (arg1) (arg1)->a = arg2;
}


SWIGEXPORT unsigned char SWIGSTDCALL CSharp_Dali_VectorBlob_a_get(void * jarg1) {
  unsigned char jresult ;
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;
  unsigned char result;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  result = (unsigned char) ((arg1)->a);
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VectorBlob() {
  void * jresult ;
  Dali::TextAbstraction::VectorBlob *result = 0 ;

  {
    try {
      result = (Dali::TextAbstraction::VectorBlob *)new Dali::TextAbstraction::VectorBlob();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VectorBlob(void * jarg1) {
  Dali::TextAbstraction::VectorBlob *arg1 = (Dali::TextAbstraction::VectorBlob *) 0 ;

  arg1 = (Dali::TextAbstraction::VectorBlob *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_GlyphInfo__SWIG_0() {
  void * jresult ;
  Dali::TextAbstraction::GlyphInfo *result = 0 ;

  {
    try {
      result = (Dali::TextAbstraction::GlyphInfo *)new Dali::TextAbstraction::GlyphInfo();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_GlyphInfo__SWIG_1(unsigned int jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::TextAbstraction::FontId arg1 ;
  Dali::TextAbstraction::GlyphIndex arg2 ;
  Dali::TextAbstraction::GlyphInfo *result = 0 ;

  arg1 = (Dali::TextAbstraction::FontId)jarg1;
  arg2 = (Dali::TextAbstraction::GlyphIndex)jarg2;
  {
    try {
      result = (Dali::TextAbstraction::GlyphInfo *)new Dali::TextAbstraction::GlyphInfo(arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlyphInfo_fontId_set(void * jarg1, unsigned int jarg2) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  if (arg1) (arg1)->fontId = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlyphInfo_fontId_get(void * jarg1) {
  unsigned int jresult ;
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  result =  ((arg1)->fontId);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlyphInfo_index_set(void * jarg1, unsigned int jarg2) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  Dali::TextAbstraction::GlyphIndex arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  arg2 = (Dali::TextAbstraction::GlyphIndex)jarg2;
  if (arg1) (arg1)->index = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlyphInfo_index_get(void * jarg1) {
  unsigned int jresult ;
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  Dali::TextAbstraction::GlyphIndex result;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  result =  ((arg1)->index);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlyphInfo_width_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->width = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GlyphInfo_width_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  result = (float) ((arg1)->width);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlyphInfo_height_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->height = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GlyphInfo_height_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  result = (float) ((arg1)->height);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlyphInfo_xBearing_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->xBearing = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GlyphInfo_xBearing_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  result = (float) ((arg1)->xBearing);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlyphInfo_yBearing_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->yBearing = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GlyphInfo_yBearing_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  result = (float) ((arg1)->yBearing);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlyphInfo_advance_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->advance = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GlyphInfo_advance_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  result = (float) ((arg1)->advance);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlyphInfo_scaleFactor_set(void * jarg1, float jarg2) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->scaleFactor = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GlyphInfo_scaleFactor_get(void * jarg1) {
  float jresult ;
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  float result;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  result = (float) ((arg1)->scaleFactor);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GlyphInfo(void * jarg1) {
  Dali::TextAbstraction::GlyphInfo *arg1 = (Dali::TextAbstraction::GlyphInfo *) 0 ;

  arg1 = (Dali::TextAbstraction::GlyphInfo *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_DEFAULT_POINT_SIZE_get() {
  unsigned int jresult ;
  Dali::TextAbstraction::PointSize26Dot6 result;

  result = (Dali::TextAbstraction::PointSize26Dot6)Dali::TextAbstraction::FontClient::DEFAULT_POINT_SIZE;
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FontClient_GlyphBufferData() {
  void * jresult ;
  Dali::TextAbstraction::GlyphBufferData *result = 0 ;

  {
    try {
      result = (Dali::TextAbstraction::GlyphBufferData *)new Dali::TextAbstraction::GlyphBufferData();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FontClient_GlyphBufferData(void * jarg1) {
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

/*
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GlyphBufferData_buffer_set(void * jarg1, unsigned char* jarg2) {
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  arg2 = jarg2;
  if (arg1) (arg1)->buffer = arg2;


}


SWIGEXPORT unsigned char* SWIGSTDCALL CSharp_Dali_FontClient_GlyphBufferData_buffer_get(void * jarg1) {
  unsigned char* jresult ;
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;
  unsigned char *result = 0 ;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  result = (unsigned char *) ((arg1)->buffer);
  jresult = (void *)result;
  return jresult;
}
*/

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GlyphBufferData_width_set(void * jarg1, unsigned int jarg2) {
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->width = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GlyphBufferData_width_get(void * jarg1) {
  unsigned int jresult ;
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;
  unsigned int result;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  result = (unsigned int) ((arg1)->width);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GlyphBufferData_height_set(void * jarg1, unsigned int jarg2) {
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->height = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GlyphBufferData_height_get(void * jarg1) {
  unsigned int jresult ;
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;
  unsigned int result;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  result = (unsigned int) ((arg1)->height);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GlyphBufferData_format_set(void * jarg1, int jarg2) {
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;
  Dali::Pixel::Format arg2 ;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  arg2 = (Dali::Pixel::Format)jarg2;
  if (arg1) (arg1)->format = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FontClient_GlyphBufferData_format_get(void * jarg1) {
  int jresult ;
  Dali::TextAbstraction::GlyphBufferData *arg1 = (Dali::TextAbstraction::GlyphBufferData *) 0 ;
  Dali::Pixel::Format result;

  arg1 = (Dali::TextAbstraction::GlyphBufferData *)jarg1;
  result = (Dali::Pixel::Format) ((arg1)->format);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FontClient_Get() {
  void * jresult ;
  Dali::TextAbstraction::FontClient result;

  {
    try {
      result = Dali::TextAbstraction::FontClient::Get();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::TextAbstraction::FontClient((const Dali::TextAbstraction::FontClient &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FontClient__SWIG_0() {
  void * jresult ;
  Dali::TextAbstraction::FontClient *result = 0 ;

  {
    try {
      result = (Dali::TextAbstraction::FontClient *)new Dali::TextAbstraction::FontClient();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FontClient(void * jarg1) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FontClient__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::TextAbstraction::FontClient *arg1 = 0 ;
  Dali::TextAbstraction::FontClient *result = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontClient const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::TextAbstraction::FontClient *)new Dali::TextAbstraction::FontClient((Dali::TextAbstraction::FontClient const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FontClient_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontClient *arg2 = 0 ;
  Dali::TextAbstraction::FontClient *result = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontClient *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontClient const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::TextAbstraction::FontClient *) &(arg1)->operator =((Dali::TextAbstraction::FontClient const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_SetDpi(void * jarg1, unsigned int jarg2, unsigned int jarg3) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  unsigned int arg2 ;
  unsigned int arg3 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int)jarg3;
  {
    try {
      (arg1)->SetDpi(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GetDpi(void * jarg1, void * jarg2, void * jarg3) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  unsigned int *arg2 = 0 ;
  unsigned int *arg3 = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (unsigned int *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "unsigned int & type is null", 0);
    return ;
  }
  arg3 = (unsigned int *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "unsigned int & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetDpi(*arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FontClient_GetDefaultFontSize(void * jarg1) {
  int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  int result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  {
    try {
      result = (int)(arg1)->GetDefaultFontSize();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_ResetSystemDefaults(void * jarg1) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  {
    try {
      (arg1)->ResetSystemDefaults();
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GetDefaultFonts(void * jarg1, void * jarg2) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontList *arg2 = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontList *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontList & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetDefaultFonts(*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GetDefaultPlatformFontDescription(void * jarg1, void * jarg2) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontDescription *arg2 = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontDescription *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetDefaultPlatformFontDescription(*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FontClient_GetSystemFonts(void* fontClient) {
  void* jresult;
  Dali::Property::Array *array = 0;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0;

  arg1 = (Dali::TextAbstraction::FontClient *)fontClient;
  {
    try {
      FontList fontList;
      (arg1)->GetSystemFonts(fontList);

      Dali::Property::Array systemFonts;
      for(size_t i = 0; i < fontList.size(); i++)
      {
        Dali::Property::Map font;
        font.Add("family", fontList[i].family);
        font.Add("path", fontList[i].path);
        font.Add("width", fontList[i].width);
        font.Add("weight", fontList[i].weight);
        font.Add("slant", fontList[i].slant);
        systemFonts.PushBack(font);
      }

      array = (Dali::Property::Array *)new Dali::Property::Array((Dali::Property::Array const &)systemFonts);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)array;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GetDescription(void * jarg1, unsigned int jarg2, void * jarg3) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::FontDescription *arg3 = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  arg3 = (Dali::TextAbstraction::FontDescription *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetDescription(arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetPointSize(void * jarg1, unsigned int jarg2) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::PointSize26Dot6 result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  {
    try {
      result = (arg1)->GetPointSize(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_IsCharacterSupportedByFont(void * jarg1, unsigned int jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::Character arg3 ;
  bool result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  arg3 = (Dali::TextAbstraction::Character)jarg3;
  {
    try {
      result = (bool)(arg1)->IsCharacterSupportedByFont(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_FindDefaultFont__SWIG_0(void * jarg1, unsigned int jarg2, unsigned int jarg3, unsigned int jarg4) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::Character arg2 ;
  Dali::TextAbstraction::PointSize26Dot6 arg3 ;
  bool arg4 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::Character)jarg2;
  arg3 = (Dali::TextAbstraction::PointSize26Dot6)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = (arg1)->FindDefaultFont(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_FindDefaultFont__SWIG_1(void * jarg1, unsigned int jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::Character arg2 ;
  Dali::TextAbstraction::PointSize26Dot6 arg3 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::Character)jarg2;
  arg3 = (Dali::TextAbstraction::PointSize26Dot6)jarg3;
  {
    try {
      result = (arg1)->FindDefaultFont(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_FindDefaultFont__SWIG_2(void * jarg1, unsigned int jarg2) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::Character arg2 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::Character)jarg2;
  {
    try {
      result = (arg1)->FindDefaultFont(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_FindFallbackFont__SWIG_0(void * jarg1, unsigned int jarg2, void * jarg3, unsigned int jarg4, unsigned int jarg5) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::Character arg2 ;
  Dali::TextAbstraction::FontDescription *arg3 = 0 ;
  Dali::TextAbstraction::PointSize26Dot6 arg4 ;
  bool arg5 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::Character)jarg2;
  arg3 = (Dali::TextAbstraction::FontDescription *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription const & type is null", 0);
    return 0;
  }
  arg4 = (Dali::TextAbstraction::PointSize26Dot6)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = (arg1)->FindFallbackFont(arg2,(Dali::TextAbstraction::FontDescription const &)*arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_FindFallbackFont__SWIG_1(void * jarg1, unsigned int jarg2, void * jarg3, unsigned int jarg4) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::Character arg2 ;
  Dali::TextAbstraction::FontDescription *arg3 = 0 ;
  Dali::TextAbstraction::PointSize26Dot6 arg4 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::Character)jarg2;
  arg3 = (Dali::TextAbstraction::FontDescription *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription const & type is null", 0);
    return 0;
  }
  arg4 = (Dali::TextAbstraction::PointSize26Dot6)jarg4;
  {
    try {
      result = (arg1)->FindFallbackFont(arg2,(Dali::TextAbstraction::FontDescription const &)*arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_FindFallbackFont__SWIG_2(void * jarg1, unsigned int jarg2, void * jarg3) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::Character arg2 ;
  Dali::TextAbstraction::FontDescription *arg3 = 0 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::Character)jarg2;
  arg3 = (Dali::TextAbstraction::FontDescription *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (arg1)->FindFallbackFont(arg2,(Dali::TextAbstraction::FontDescription const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetFontId__SWIG_0(void * jarg1, char * jarg2, unsigned int jarg3, unsigned int jarg4) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontPath *arg2 = 0 ;
  Dali::TextAbstraction::PointSize26Dot6 arg3 ;
  Dali::TextAbstraction::FaceIndex arg4 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  Dali::TextAbstraction::FontPath arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::TextAbstraction::PointSize26Dot6)jarg3;
  arg4 = (Dali::TextAbstraction::FaceIndex)jarg4;
  {
    try {
      result = (arg1)->GetFontId((Dali::TextAbstraction::FontPath const &)*arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetFontId__SWIG_1(void * jarg1, char * jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontPath *arg2 = 0 ;
  Dali::TextAbstraction::PointSize26Dot6 arg3 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  Dali::TextAbstraction::FontPath arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::TextAbstraction::PointSize26Dot6)jarg3;
  {
    try {
      result = (arg1)->GetFontId((Dali::TextAbstraction::FontPath const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetFontId__SWIG_2(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontPath *arg2 = 0 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  Dali::TextAbstraction::FontPath arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (arg1)->GetFontId((Dali::TextAbstraction::FontPath const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetFontId__SWIG_3(void * jarg1, void * jarg2, unsigned int jarg3, unsigned int jarg4) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontDescription *arg2 = 0 ;
  Dali::TextAbstraction::PointSize26Dot6 arg3 ;
  Dali::TextAbstraction::FaceIndex arg4 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontDescription *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription const & type is null", 0);
    return 0;
  }
  arg3 = (Dali::TextAbstraction::PointSize26Dot6)jarg3;
  arg4 = (Dali::TextAbstraction::FaceIndex)jarg4;
  {
    try {
      result = (arg1)->GetFontId((Dali::TextAbstraction::FontDescription const &)*arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetFontId__SWIG_4(void * jarg1, void * jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontDescription *arg2 = 0 ;
  Dali::TextAbstraction::PointSize26Dot6 arg3 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontDescription *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription const & type is null", 0);
    return 0;
  }
  arg3 = (Dali::TextAbstraction::PointSize26Dot6)jarg3;
  {
    try {
      result = (arg1)->GetFontId((Dali::TextAbstraction::FontDescription const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetFontId__SWIG_5(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontDescription *arg2 = 0 ;
  Dali::TextAbstraction::FontId result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontDescription *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (arg1)->GetFontId((Dali::TextAbstraction::FontDescription const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_IsScalable__SWIG_0(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontPath *arg2 = 0 ;
  bool result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  Dali::TextAbstraction::FontPath arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (bool)(arg1)->IsScalable((Dali::TextAbstraction::FontPath const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_IsScalable__SWIG_1(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontDescription *arg2 = 0 ;
  bool result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontDescription *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)(arg1)->IsScalable((Dali::TextAbstraction::FontDescription const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GetFixedSizes__SWIG_0(void * jarg1, char * jarg2, void * jarg3) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontPath *arg2 = 0 ;
  Dali::Vector< Dali::TextAbstraction::PointSize26Dot6,Dali::TypeTraits< Dali::TextAbstraction::PointSize26Dot6 >::IS_TRIVIAL_TYPE==true > *arg3 = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  Dali::TextAbstraction::FontPath arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Vector< Dali::TextAbstraction::PointSize26Dot6,Dali::TypeTraits< Dali::TextAbstraction::PointSize26Dot6 >::IS_TRIVIAL_TYPE==true > *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< Dali::TextAbstraction::PointSize26Dot6,Dali::TypeTraits< Dali::TextAbstraction::PointSize26Dot6 >::IS_TRIVIAL_TYPE==true > & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetFixedSizes((Dali::TextAbstraction::FontPath const &)*arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GetFixedSizes__SWIG_1(void * jarg1, void * jarg2, void * jarg3) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontDescription *arg2 = 0 ;
  Dali::Vector< Dali::TextAbstraction::PointSize26Dot6,Dali::TypeTraits< Dali::TextAbstraction::PointSize26Dot6 >::IS_TRIVIAL_TYPE==true > *arg3 = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontDescription *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontDescription const & type is null", 0);
    return ;
  }
  arg3 = (Dali::Vector< Dali::TextAbstraction::PointSize26Dot6,Dali::TypeTraits< Dali::TextAbstraction::PointSize26Dot6 >::IS_TRIVIAL_TYPE==true > *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< Dali::TextAbstraction::PointSize26Dot6,Dali::TypeTraits< Dali::TextAbstraction::PointSize26Dot6 >::IS_TRIVIAL_TYPE==true > & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetFixedSizes((Dali::TextAbstraction::FontDescription const &)*arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_GetFontMetrics(void * jarg1, unsigned int jarg2, void * jarg3) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::FontMetrics *arg3 = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  arg3 = (Dali::TextAbstraction::FontMetrics *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::FontMetrics & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetFontMetrics(arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetGlyphIndex(void * jarg1, unsigned int jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::Character arg3 ;
  Dali::TextAbstraction::GlyphIndex result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  arg3 = (Dali::TextAbstraction::Character)jarg3;
  {
    try {
      result = (arg1)->GetGlyphIndex(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetGlyphMetrics__SWIG_0(void * jarg1, void * jarg2, unsigned int jarg3, int jarg4, unsigned int jarg5) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::GlyphInfo *arg2 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  uint32_t arg3 ;
  Dali::TextAbstraction::GlyphType arg4 ;
  bool arg5 ;
  bool result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::GlyphInfo *)jarg2;
  arg3 = (uint32_t)jarg3;
  arg4 = (Dali::TextAbstraction::GlyphType)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = (bool)(arg1)->GetGlyphMetrics(arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_GetGlyphMetrics__SWIG_1(void * jarg1, void * jarg2, unsigned int jarg3, int jarg4) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::GlyphInfo *arg2 = (Dali::TextAbstraction::GlyphInfo *) 0 ;
  uint32_t arg3 ;
  Dali::TextAbstraction::GlyphType arg4 ;
  bool result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::GlyphInfo *)jarg2;
  arg3 = (uint32_t)jarg3;
  arg4 = (Dali::TextAbstraction::GlyphType)jarg4;
  {
    try {
      result = (bool)(arg1)->GetGlyphMetrics(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_CreateBitmap__SWIG_0(void * jarg1, unsigned int jarg2, unsigned int jarg3, bool jarg4, bool jarg5, void * jarg6, int jarg7) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::GlyphIndex arg3 ;
  bool arg4;
  bool arg5;
  Dali::TextAbstraction::GlyphBufferData *arg6 = 0 ;
  int arg7 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  arg3 = (Dali::TextAbstraction::GlyphIndex)jarg3;
  arg4 = jarg4;
  arg5 = jarg5;
  arg6 = (Dali::TextAbstraction::GlyphBufferData *)jarg6;
  if (!arg6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::GlyphBufferData & type is null", 0);
    return ;
  }
  arg7 = (int)jarg7;
  {
    try {
      (arg1)->CreateBitmap(arg2,arg3,arg4,arg5,*arg6,arg7);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FontClient_CreateBitmap__SWIG_1(void * jarg1, unsigned int jarg2, unsigned int jarg3, int jarg4) {
  void * jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::GlyphIndex arg3 ;
  int arg4 ;
  Dali::PixelData result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  arg3 = (Dali::TextAbstraction::GlyphIndex)jarg3;
  arg4 = (int)jarg4;
  {
    try {
      result = (arg1)->CreateBitmap(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::PixelData((const Dali::PixelData &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FontClient_CreateVectorBlob(void * jarg1, unsigned int jarg2, unsigned int jarg3, void * jarg4, void * jarg5, void * jarg6, void * jarg7) {
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::GlyphIndex arg3 ;
  Dali::TextAbstraction::VectorBlob **arg4 = 0 ;
  unsigned int *arg5 = 0 ;
  unsigned int *arg6 = 0 ;
  unsigned int *arg7 = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  arg3 = (Dali::TextAbstraction::GlyphIndex)jarg3;
  arg4 = (Dali::TextAbstraction::VectorBlob **)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TextAbstraction::VectorBlob *& type is null", 0);
    return ;
  }
  arg5 = (unsigned int *)jarg5;
  if (!arg5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "unsigned int & type is null", 0);
    return ;
  }
  arg6 = (unsigned int *)jarg6;
  if (!arg6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "unsigned int & type is null", 0);
    return ;
  }
  arg7 = (unsigned int *)jarg7;
  if (!arg7) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "unsigned int & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->CreateVectorBlob(arg2,arg3,*arg4,*arg5,*arg6,*arg7);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FontClient_GetEllipsisGlyph(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::PointSize26Dot6 arg2 ;
  Dali::TextAbstraction::GlyphInfo *result = 0 ;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::PointSize26Dot6)jarg2;
  {
    try {
      result = (Dali::TextAbstraction::GlyphInfo *) &(arg1)->GetEllipsisGlyph(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_IsColorGlyph(void * jarg1, unsigned int jarg2, unsigned int jarg3) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontId arg2 ;
  Dali::TextAbstraction::GlyphIndex arg3 ;
  bool result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  arg2 = (Dali::TextAbstraction::FontId)jarg2;
  arg3 = (Dali::TextAbstraction::GlyphIndex)jarg3;
  {
    try {
      result = (bool)(arg1)->IsColorGlyph(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FontClient_AddCustomFontDirectory(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  Dali::TextAbstraction::FontClient *arg1 = (Dali::TextAbstraction::FontClient *) 0 ;
  Dali::TextAbstraction::FontPath *arg2 = 0 ;
  bool result;

  arg1 = (Dali::TextAbstraction::FontClient *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  Dali::TextAbstraction::FontPath arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (bool)(arg1)->AddCustomFontDirectory((Dali::TextAbstraction::FontPath const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

#ifdef __cplusplus
}
#endif

