/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/update/frame-callback-interface.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

// SWIGINTERN - the relevant parts of the generated code can be seen the below.


using namespace Dali;

#ifdef __cplusplus
extern "C" {
#endif


/* Property */


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Property_INVALID_INDEX_get() {
  int jresult ;
  int result;

  result = (int)(int)Dali::Property::INVALID_INDEX;
  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Property_INVALID_KEY_get() {
  int jresult ;
  int result;

  result = (int)(int)Dali::Property::INVALID_KEY;
  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Property_INVALID_COMPONENT_INDEX_get() {
  int jresult ;
  int result;

  result = (int)(int)Dali::Property::INVALID_COMPONENT_INDEX;
  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WEIGHT_get() {
  int jresult ;
  Dali::Property::Index result;

  result = (Dali::Property::Index)(Dali::Property::Index)Dali::WeightObject::WEIGHT;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginTop_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::ParentOrigin::TOP;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginBottom_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::ParentOrigin::BOTTOM;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginLeft_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::ParentOrigin::LEFT;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginRight_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::ParentOrigin::RIGHT;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginMiddle_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::ParentOrigin::MIDDLE;
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginTopLeft_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::TOP_LEFT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginTopCenter_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::TOP_CENTER;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginTopRight_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::TOP_RIGHT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginCenterLeft_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::CENTER_LEFT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginCenter_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::CENTER;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginCenterRight_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::CENTER_RIGHT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginBottomLeft_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::BOTTOM_LEFT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginBottomCenter_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::BOTTOM_CENTER;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ParentOriginBottomRight_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::ParentOrigin::BOTTOM_RIGHT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointTop_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::AnchorPoint::TOP;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointBottom_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::AnchorPoint::BOTTOM;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointLeft_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::AnchorPoint::LEFT;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointRight_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::AnchorPoint::RIGHT;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointMiddle_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::AnchorPoint::MIDDLE;
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointTopLeft_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::TOP_LEFT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointTopCenter_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::TOP_CENTER;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointTopRight_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::TOP_RIGHT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointCenterLeft_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::CENTER_LEFT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointCenter_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::CENTER;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointCenterRight_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::CENTER_RIGHT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointBottomLeft_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::BOTTOM_LEFT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointBottomCenter_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::BOTTOM_CENTER;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AnchorPointBottomRight_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::AnchorPoint::BOTTOM_RIGHT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ALICE_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::ALICE_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ANTIQUE_WHITE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::ANTIQUE_WHITE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AQUA_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::AQUA;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AQUA_MARINE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::AQUA_MARINE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AZURE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::AZURE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BEIGE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::BEIGE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BISQUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::BISQUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BLACK_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::BLACK;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BLANCHE_DALMOND_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::BLANCHE_DALMOND;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BLUE_VIOLET_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::BLUE_VIOLET;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BROWN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::BROWN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BURLY_WOOD_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::BURLY_WOOD;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CADET_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::CADET_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CHARTREUSE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::CHARTREUSE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CHOCOLATE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::CHOCOLATE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CORAL_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::CORAL;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CORNFLOWER_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::CORNFLOWER_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CORNSILK_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::CORNSILK;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CRIMSON_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::CRIMSON;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CYAN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::CYAN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_CYAN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_CYAN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_GOLDENROD_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_GOLDENROD;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_GRAY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_GRAY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_GREY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_GREY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_KHAKI_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_KHAKI;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_MAGENTA_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_MAGENTA;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_OLIVE_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_OLIVE_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_ORANGE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_ORANGE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_ORCHID_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_ORCHID;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_RED_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_RED;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_SALMON_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_SALMON;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_SEA_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_SEA_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_SLATE_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_SLATE_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_SLATE_GRAY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_SLATE_GRAY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_SLATE_GREY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_SLATE_GREY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_TURQUOISE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_TURQUOISE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DARK_VIOLET_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DARK_VIOLET;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DEEP_PINK_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DEEP_PINK;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DEEP_SKY_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DEEP_SKY_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DIM_GRAY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DIM_GRAY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DIM_GREY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DIM_GREY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DODGER_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::DODGER_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FIRE_BRICK_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::FIRE_BRICK;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FLORAL_WHITE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::FLORAL_WHITE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FOREST_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::FOREST_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FUCHSIA_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::FUCHSIA;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GAINSBORO_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::GAINSBORO;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GHOST_WHITE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::GHOST_WHITE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GOLD_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::GOLD;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GOLDEN_ROD_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::GOLDEN_ROD;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GRAY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::GRAY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GREEN_YELLOW_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::GREEN_YELLOW;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GREY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::GREY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_HONEYDEW_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::HONEYDEW;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_HOT_PINK_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::HOT_PINK;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_INDIANRED_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::INDIANRED;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_INDIGO_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::INDIGO;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_IVORY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::IVORY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_KHAKI_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::KHAKI;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LAVENDER_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LAVENDER;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LAVENDER_BLUSH_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LAVENDER_BLUSH;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LAWN_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LAWN_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LEMON_CHIFFON_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LEMON_CHIFFON;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_CORAL_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_CORAL;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_CYAN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_CYAN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_GOLDEN_ROD_YELLOW_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_GOLDEN_ROD_YELLOW;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_GRAY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_GRAY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_GREY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_GREY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_PINK_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_PINK;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_SALMON_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_SALMON;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_SEA_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_SEA_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_SKY_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_SKY_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_SLATE_GRAY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_SLATE_GRAY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_SLATE_GREY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_SLATE_GREY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_STEEL_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_STEEL_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIGHT_YELLOW_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIGHT_YELLOW;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIME_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIME;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LIME_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LIME_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LINEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::LINEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MAGENTA_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MAGENTA;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MAROON_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MAROON;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_AQUA_MARINE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_AQUA_MARINE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_ORCHID_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_ORCHID;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_PURPLE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_PURPLE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_SEA_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_SEA_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_SLATE_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_SLATE_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_SPRING_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_SPRING_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_TURQUOISE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_TURQUOISE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MEDIUM_VIOLETRED_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MEDIUM_VIOLETRED;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MIDNIGHT_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MIDNIGHT_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MINT_CREAM_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MINT_CREAM;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MISTY_ROSE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MISTY_ROSE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MOCCASIN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::MOCCASIN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_NAVAJO_WHITE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::NAVAJO_WHITE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_NAVY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::NAVY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_OLD_LACE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::OLD_LACE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_OLIVE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::OLIVE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_OLIVE_DRAB_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::OLIVE_DRAB;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ORANGE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::ORANGE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ORANGE_RED_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::ORANGE_RED;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ORCHID_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::ORCHID;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PALE_GOLDEN_ROD_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PALE_GOLDEN_ROD;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PALE_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PALE_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PALE_TURQUOISE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PALE_TURQUOISE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PALE_VIOLET_RED_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PALE_VIOLET_RED;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PAPAYA_WHIP_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PAPAYA_WHIP;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PEACH_PUFF_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PEACH_PUFF;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PERU_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PERU;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PINK_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PINK;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PLUM_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PLUM;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_POWDER_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::POWDER_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PURPLE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::PURPLE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RED_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::RED;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ROSY_BROWN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::ROSY_BROWN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ROYAL_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::ROYAL_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SADDLE_BROWN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SADDLE_BROWN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SALMON_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SALMON;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SANDY_BROWN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SANDY_BROWN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SEA_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SEA_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SEA_SHELL_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SEA_SHELL;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SIENNA_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SIENNA;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SILVER_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SILVER;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SKY_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SKY_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SLATE_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SLATE_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SLATE_GRAY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SLATE_GRAY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SLATE_GREY_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SLATE_GREY;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SNOW_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SNOW;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_SPRING_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::SPRING_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_STEEL_BLUE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::STEEL_BLUE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TAN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::TAN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TEAL_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::TEAL;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_THISTLE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::THISTLE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TOMATO_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::TOMATO;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TRANSPARENT_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::TRANSPARENT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TURQUOISE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::TURQUOISE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VIOLET_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::VIOLET;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WHEAT_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::WHEAT;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WHITE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::WHITE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WHITE_SMOKE_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::WHITE_SMOKE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_YELLOW_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::YELLOW;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_YELLOW_GREEN_get() {
  void * jresult;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Color::YELLOW_GREEN;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_MACHINE_EPSILON_0_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::MACHINE_EPSILON_0;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_MACHINE_EPSILON_1_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::MACHINE_EPSILON_1;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_MACHINE_EPSILON_10_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::MACHINE_EPSILON_10;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_MACHINE_EPSILON_100_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::MACHINE_EPSILON_100;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_MACHINE_EPSILON_1000_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::MACHINE_EPSILON_1000;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_MACHINE_EPSILON_10000_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::MACHINE_EPSILON_10000;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_PI_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::PI;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_PI_2_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::PI_2;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_PI_4_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::PI_4;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_PI_OVER_180_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::PI_OVER_180;
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ONE80_OVER_PI_get() {
  float jresult ;
  float result;

  result = (float)(float)Dali::Math::ONE80_OVER_PI;
  jresult = result;
  return jresult;
}



// Method

// Any

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Any__SWIG_0() {
  void * jresult ;
  Dali::Any *result = 0 ;

  {
    try {
      result = (Dali::Any *)new Dali::Any();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Any(void * jarg1) {
  Dali::Any *arg1 = (Dali::Any *) 0 ;

  arg1 = (Dali::Any *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Any_AssertAlways(char * jarg1) {
  char *arg1 = (char *) 0 ;

  arg1 = (char *)jarg1;
  {
    try {
      Dali::Any::AssertAlways((char const *)arg1);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Any__SWIG_2(void * jarg1) {
  void * jresult ;
  Dali::Any *arg1 = 0 ;
  Dali::Any *result = 0 ;

  arg1 = (Dali::Any *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Any const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Any *)new Dali::Any((Dali::Any const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Any_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Any *arg1 = (Dali::Any *) 0 ;
  Dali::Any *arg2 = 0 ;
  Dali::Any *result = 0 ;

  arg1 = (Dali::Any *)jarg1;
  arg2 = (Dali::Any *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Any const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Any *) &(arg1)->operator =((Dali::Any const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Any_GetType(void * jarg1) {
  void * jresult ;
  Dali::Any *arg1 = (Dali::Any *) 0 ;
  std::type_info *result = 0 ;

  arg1 = (Dali::Any *)jarg1;
  {
    try {
      result = (std::type_info *) &((Dali::Any const *)arg1)->GetType();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Any_Empty(void * jarg1) {
  bool jresult ;
  Dali::Any *arg1 = (Dali::Any *) 0 ;
  bool result;

  arg1 = (Dali::Any *)jarg1;
  {
    try {
      result = (bool)((Dali::Any const *)arg1)->Empty();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}



// Vector

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VectorVector2_BaseType_get() {
  int jresult ;
  int result;

  result = (int)Dali::Vector< Dali::Vector2 >::BaseType;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VectorVector2__SWIG_0() {
  void * jresult ;
  Dali::Vector< Dali::Vector2 > *result = 0 ;

  {
    try {
      result = (Dali::Vector< Dali::Vector2 > *)new Dali::Vector< Dali::Vector2 >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VectorVector2(void * jarg1) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VectorVector2__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Vector< Dali::Vector2 > *arg1 = 0 ;
  Dali::Vector< Dali::Vector2 > *result = 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< Dali::Vector2 > const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector< Dali::Vector2 > *)new Dali::Vector< Dali::Vector2 >((Dali::Vector< Dali::Vector2 > const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VectorVector2_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 > *arg2 = 0 ;
  Dali::Vector< Dali::Vector2 > *result = 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< Dali::Vector2 > const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector< Dali::Vector2 > *) &(arg1)->operator =((Dali::Vector< Dali::Vector2 > const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VectorVector2_Begin(void * jarg1) {
  void * jresult ;
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator result;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  {
    try {
      result = (Dali::Vector< Dali::Vector2 >::Iterator)((Dali::Vector< Dali::Vector2 > const *)arg1)->Begin();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VectorVector2_End(void * jarg1) {
  void * jresult ;
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator result;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  {
    try {
      result = (Dali::Vector< Dali::Vector2 >::Iterator)((Dali::Vector< Dali::Vector2 > const *)arg1)->End();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VectorVector2_ValueOfIndex__SWIG_0(void * jarg1, unsigned long jarg2) {
  void * jresult ;
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::SizeType arg2 ;
  Dali::Vector< Dali::Vector2 >::ItemType *result = 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::SizeType)jarg2;
  {
    try {
      result = (Dali::Vector< Dali::Vector2 >::ItemType *) &(arg1)->operator [](arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_PushBack(void * jarg1, void * jarg2) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::ItemType *arg2 = 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::ItemType *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< Dali::Vector2 >::ItemType const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->PushBack((Dali::Vector< Dali::Vector2 >::ItemType const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Insert__SWIG_0(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator arg2 = (Dali::Vector< Dali::Vector2 >::Iterator) 0 ;
  Dali::Vector< Dali::Vector2 >::ItemType *arg3 = 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::Iterator)jarg2;
  arg3 = (Dali::Vector< Dali::Vector2 >::ItemType *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< Dali::Vector2 >::ItemType const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Insert(arg2,(Dali::Vector< Dali::Vector2 >::ItemType const &)*arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Insert__SWIG_1(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator arg2 = (Dali::Vector< Dali::Vector2 >::Iterator) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator arg3 = (Dali::Vector< Dali::Vector2 >::Iterator) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator arg4 = (Dali::Vector< Dali::Vector2 >::Iterator) 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::Iterator)jarg2;
  arg3 = (Dali::Vector< Dali::Vector2 >::Iterator)jarg3;
  arg4 = (Dali::Vector< Dali::Vector2 >::Iterator)jarg4;
  {
    try {
      (arg1)->Insert(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Reserve(void * jarg1, unsigned long jarg2) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::SizeType arg2 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::SizeType)jarg2;
  {
    try {
      (arg1)->Reserve(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Resize__SWIG_0(void * jarg1, unsigned long jarg2) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::SizeType arg2 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::SizeType)jarg2;
  {
    try {
      (arg1)->Resize(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Resize__SWIG_1(void * jarg1, unsigned long jarg2, void * jarg3) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::SizeType arg2 ;
  Dali::Vector< Dali::Vector2 >::ItemType *arg3 = 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::SizeType)jarg2;
  arg3 = (Dali::Vector< Dali::Vector2 >::ItemType *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< Dali::Uint16Pair >::ItemType const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Resize(arg2,(Dali::Vector< Dali::Vector2 >::ItemType const &)*arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VectorVector2_Erase__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator arg2 = (Dali::Vector< Dali::Vector2 >::Iterator) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator result;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::Iterator)jarg2;
  {
    try {
      result = (Dali::Vector< Dali::Vector2 >::Iterator)(arg1)->Erase(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VectorVector2_Erase__SWIG_1(void * jarg1, void * jarg2, void * jarg3) {
  void * jresult ;
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator arg2 = (Dali::Vector< Dali::Vector2 >::Iterator) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator arg3 = (Dali::Vector< Dali::Vector2 >::Iterator) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator result;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::Iterator)jarg2;
  arg3 = (Dali::Vector< Dali::Vector2 >::Iterator)jarg3;
  {
    try {
      result = (Dali::Vector< Dali::Vector2 >::Iterator)(arg1)->Erase(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Remove(void * jarg1, void * jarg2) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 >::Iterator arg2 = (Dali::Vector< Dali::Vector2 >::Iterator) 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 >::Iterator)jarg2;
  {
    try {
      (arg1)->Remove(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Swap(void * jarg1, void * jarg2) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  Dali::Vector< Dali::Vector2 > *arg2 = 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  arg2 = (Dali::Vector< Dali::Vector2 > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< Dali::Vector2 > & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Swap(*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Clear(void * jarg1) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  {
    try {
      (arg1)->Clear();
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorVector2_Release(void * jarg1) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  {
    try {
      (arg1)->Release();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VectorVector2_Size(void * jarg1) {
  Dali::Vector< Dali::Vector2 > *arg1 = (Dali::Vector< Dali::Vector2 > *) 0 ;
  int size;

  arg1 = (Dali::Vector< Dali::Vector2 > *)jarg1;
  {
    try {
      size = (arg1)->Size();
    } CALL_CATCH_EXCEPTION(0);
  }

  return size;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VectorUnsignedInteger_BaseType_get() {
  int jresult;
  int result;

  result = (int)Dali::Vector<uint32_t>::BaseType;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_VectorUnsignedInteger__SWIG_0() {
  void *jresult;
  Dali::Vector<uint32_t> *result = 0;

  {
    try {
      result = (Dali::Vector<uint32_t> *)new Dali::Vector<uint32_t>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_delete_VectorUnsignedInteger(void *jarg1) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  {
    try {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_new_VectorUnsignedInteger__SWIG_1(void *jarg1) {
  void *jresult;
  Dali::Vector<uint32_t> *arg1 = 0;
  Dali::Vector<uint32_t> *result = 0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Dali::Vector< uint32_t > const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector<uint32_t> *)new Dali::Vector<uint32_t>(
          (Dali::Vector<uint32_t> const &)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_Assign(void *jarg1, void *jarg2) {
  void *jresult;
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t> *arg2 = 0;
  Dali::Vector<uint32_t> *result = 0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = (Dali::Vector<uint32_t> *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Dali::Vector< uint32_t > const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector<uint32_t> *)&(arg1)->operator=(
          (Dali::Vector<uint32_t> const &)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_Begin(void *jarg1) {
  void *jresult;
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::Iterator result;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  {
    try {
      result = (Dali::Vector<uint32_t>::Iterator)(
                   (Dali::Vector<uint32_t> const *)arg1)
                   ->Begin();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_End(void *jarg1) {
  void *jresult;
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::Iterator result;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  {
    try {
      result = (Dali::Vector<uint32_t>::Iterator)(
                   (Dali::Vector<uint32_t> const *)arg1)
                   ->End();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_ValueOfIndex__SWIG_0(void *jarg1,
                                                       unsigned long jarg2) {
  void *jresult;
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::SizeType arg2;
  Dali::Vector<uint32_t>::ItemType *result = 0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = (Dali::Vector<uint32_t>::SizeType)jarg2;
  {
    try {
      result = (Dali::Vector<uint32_t>::ItemType *)&(arg1)->operator[](arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_PushBack(void *jarg1, uint32_t jarg2) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::ItemType *arg2 = 0;
  Dali::Vector<uint32_t>::ItemType temp2;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  temp2 = (Dali::Vector<uint32_t>::ItemType)jarg2;
  arg2 = &temp2;
  {
    try {
      (arg1)->PushBack((Dali::Vector<uint32_t>::ItemType const &)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorUnsignedInteger_Insert__SWIG_0(
    void *jarg1, uint32_t *jarg2, uint32_t jarg3) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::Iterator arg2 = (Dali::Vector<uint32_t>::Iterator)0;
  Dali::Vector<uint32_t>::ItemType *arg3 = 0;
  Dali::Vector<uint32_t>::ItemType temp3;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = jarg2;
  temp3 = (Dali::Vector<uint32_t>::ItemType)jarg3;
  arg3 = &temp3;
  {
    try {
      (arg1)->Insert(arg2, (Dali::Vector<uint32_t>::ItemType const &)*arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorUnsignedInteger_Insert__SWIG_1(
    void *jarg1, uint32_t *jarg2, void *jarg3, void *jarg4) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::Iterator arg2 = (Dali::Vector<uint32_t>::Iterator)0;
  Dali::Vector<uint32_t>::Iterator arg3 = (Dali::Vector<uint32_t>::Iterator)0;
  Dali::Vector<uint32_t>::Iterator arg4 = (Dali::Vector<uint32_t>::Iterator)0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = jarg2;
  arg3 = (Dali::Vector<uint32_t>::Iterator)jarg3;
  arg4 = (Dali::Vector<uint32_t>::Iterator)jarg4;
  {
    try {
      (arg1)->Insert(arg2, arg3, arg4);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_Reserve(void *jarg1, unsigned long jarg2) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::SizeType arg2;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = (Dali::Vector<uint32_t>::SizeType)jarg2;
  {
    try {
      (arg1)->Reserve(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorUnsignedInteger_Resize__SWIG_0(
    void *jarg1, unsigned long jarg2) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::SizeType arg2;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = (Dali::Vector<uint32_t>::SizeType)jarg2;
  {
    try {
      (arg1)->Resize(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VectorUnsignedInteger_Resize__SWIG_1(
    void *jarg1, unsigned long jarg2, uint32_t jarg3) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::SizeType arg2;
  Dali::Vector<uint32_t>::ItemType *arg3 = 0;
  Dali::Vector<uint32_t>::ItemType temp3;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = (Dali::Vector<uint32_t>::SizeType)jarg2;
  temp3 = (Dali::Vector<uint32_t>::ItemType)jarg3;
  arg3 = &temp3;
  {
    try {
      (arg1)->Resize(arg2, (Dali::Vector<uint32_t>::ItemType const &)*arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_Erase__SWIG_0(void *jarg1, uint32_t *jarg2) {
  void *jresult;
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::Iterator arg2 = (Dali::Vector<uint32_t>::Iterator)0;
  Dali::Vector<uint32_t>::Iterator result;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = jarg2;
  {
    try {
      result = (Dali::Vector<uint32_t>::Iterator)(arg1)->Erase(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;

  return jresult;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_VectorUnsignedInteger_Erase__SWIG_1(
    void *jarg1, uint32_t *jarg2, void *jarg3) {
  void *jresult;
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::Iterator arg2 = (Dali::Vector<uint32_t>::Iterator)0;
  Dali::Vector<uint32_t>::Iterator arg3 = (Dali::Vector<uint32_t>::Iterator)0;
  Dali::Vector<uint32_t>::Iterator result;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = jarg2;
  arg3 = (Dali::Vector<uint32_t>::Iterator)jarg3;
  {
    try {
      result = (Dali::Vector<uint32_t>::Iterator)(arg1)->Erase(arg2, arg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_Remove(void *jarg1, uint32_t *jarg2) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t>::Iterator arg2 = (Dali::Vector<uint32_t>::Iterator)0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = jarg2;
  {
    try {
      (arg1)->Remove(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_Swap(void *jarg1, void *jarg2) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;
  Dali::Vector<uint32_t> *arg2 = 0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  arg2 = (Dali::Vector<uint32_t> *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Dali::Vector< uint32_t > & type is null", 0);
    return;
  }
  {
    try {
      (arg1)->Swap(*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_Clear(void *jarg1) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  {
    try {
      (arg1)->Clear();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_VectorUnsignedInteger_Release(void *jarg1) {
  Dali::Vector<uint32_t> *arg1 = (Dali::Vector<uint32_t> *)0;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  {
    try {
      (arg1)->Release();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VectorUnsignedInteger_Size(void *jarg1) {
  Dali::Vector< uint32_t > *arg1 = (Dali::Vector< uint32_t > *) 0 ;
  int size;

  arg1 = (Dali::Vector<uint32_t> *)jarg1;
  {
    try {
      size = (arg1)->Size();
    } CALL_CATCH_EXCEPTION(0);
  }

  return size;
}


#ifdef __cplusplus
}
#endif
