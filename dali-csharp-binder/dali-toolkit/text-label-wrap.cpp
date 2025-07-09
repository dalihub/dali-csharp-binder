/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/public-api/controls/text-controls/text-label.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-label-devel.h>
#include <dali/public-api/object/property.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::TextLabel) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::TextLabel) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::TextLabel) > *self,void (*func)(Dali::Toolkit::TextLabel)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::TextLabel) > *self,void (*func)(Dali::Toolkit::TextLabel)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::TextLabel) > *self,Dali::Toolkit::TextLabel arg){
  self->Emit( arg );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_TEXT_FIT_get()
{
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::TEXT_FIT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_FONT_SIZE_SCALE_get()
{
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::FONT_SIZE_SCALE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_ENABLE_FONT_SIZE_SCALE_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::ENABLE_FONT_SIZE_SCALE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_RELATIVE_LINE_SIZE_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::RELATIVE_LINE_SIZE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_ANCHOR_COLOR_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::ANCHOR_COLOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_ANCHOR_CLICKED_COLOR_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::ANCHOR_CLICKED_COLOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_REMOVE_FRONT_INSET_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::REMOVE_FRONT_INSET;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_REMOVE_BACK_INSET_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::REMOVE_BACK_INSET;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_CUTOUT_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::CUTOUT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_RENDER_MODE_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::RENDER_MODE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_LAYOUT_DIRECTION_POLICY_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::LAYOUT_DIRECTION_POLICY;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_ELLIPSIS_MODE_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::ELLIPSIS_MODE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_IS_SCROLLING_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::IS_SCROLLING;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_RENDER_SCALE_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::RENDER_SCALE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_PIXEL_SNAP_FACTOR_get()
{
  return (int)Dali::Toolkit::TextLabel::Property::PIXEL_SNAP_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_MANUAL_RENDERED_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::MANUAL_RENDERED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_ASYNC_LINE_COUNT_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::ASYNC_LINE_COUNT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_NEED_REQUEST_ASYNC_RENDER_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::NEED_REQUEST_ASYNC_RENDER;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_FONT_VARIATIONS_get()
{
  return (int)Dali::Toolkit::DevelTextLabel::Property::FONT_VARIATIONS;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_GetTextSize(void * pTextLabel, unsigned int start, unsigned int end)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  void* sizeList;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try {
      sizeList = new Dali::Vector< Dali::Vector2, Dali::TypeTraits< Dali::Vector2 >::IS_TRIVIAL_TYPE==true >
      ((const Dali::Vector< Dali::Vector2, Dali::TypeTraits< Dali::Vector2 >::IS_TRIVIAL_TYPE==true > &)(Dali::Toolkit::DevelTextLabel::GetTextSize( *textLabel, start, end )));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return sizeList;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_GetTextPosition(void * pTextLabel, unsigned int start, unsigned int end)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  void* sizeList;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try {
      sizeList = new Dali::Vector< Dali::Vector2, Dali::TypeTraits< Dali::Vector2 >::IS_TRIVIAL_TYPE==true >
      ((const Dali::Vector< Dali::Vector2, Dali::TypeTraits< Dali::Vector2 >::IS_TRIVIAL_TYPE==true > &)(Dali::Toolkit::DevelTextLabel::GetTextPosition( *textLabel, start, end )));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return sizeList;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_TextGeometry_TextLabel_GetTextBoundingRectangle(void * pTextLabel, uint32_t startIndex, uint32_t endIndex)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  void* boundingRect;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try {
      boundingRect = new Dali::Rect<>
      ((const Dali::Rect<> &)(Dali::Toolkit::DevelTextLabel::GetTextBoundingRectangle( *textLabel,  startIndex, endIndex)));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return boundingRect;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabel_SetTextFitArray(void * argTextLabel, bool argEnable, uint32_t argArraySize, float * argPointSizeArray, float * argMinLineSizeArray)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  textLabel = (Dali::Toolkit::TextLabel *)argTextLabel;
  {
    try
    {
      std::vector<Dali::Toolkit::DevelTextLabel::FitOption> fitOptions;
      for(size_t i = 0u; i < argArraySize; i++)
      {
        fitOptions.push_back(Dali::Toolkit::DevelTextLabel::FitOption(argPointSizeArray[i], argMinLineSizeArray[i]));
      }
      Dali::Toolkit::DevelTextLabel::SetTextFitArray(*textLabel, argEnable, fitOptions);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_GetTextFitArray(void * argTextLabel)
{
  void* result;
  Dali::Property::Map *map = 0;
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  textLabel = (Dali::Toolkit::TextLabel *)argTextLabel;
  {
    try
    {
      Dali::Property::Map textFitArray;
      bool enable = Dali::Toolkit::DevelTextLabel::IsTextFitArrayEnabled(*textLabel);
      textFitArray.Add("enable", enable);

      std::vector<Dali::Toolkit::DevelTextLabel::FitOption> fitOptions = Dali::Toolkit::DevelTextLabel::GetTextFitArray(*textLabel);
      Dali::Property::Array pointSizeArray;
      Dali::Property::Array minLineSizeArray;
      for(Dali::Toolkit::DevelTextLabel::FitOption& option : fitOptions)
      {
        pointSizeArray.PushBack(option.GetPointSize());
        minLineSizeArray.PushBack(option.GetMinLineSize());
      }

      textFitArray.Add("pointSizeArray", pointSizeArray);
      textFitArray.Add("minLineSizeArray", minLineSizeArray);

      map = (Dali::Property::Map *)new Dali::Property::Map((Dali::Property::Map const &)textFitArray);
    } CALL_CATCH_EXCEPTION(0);
  }
  result = (void *)map;
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabel_RequestAsyncRenderWithFixedSize(void * pTextLabel, float width, float height)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      Dali::Toolkit::DevelTextLabel::RequestAsyncRenderWithFixedSize(*textLabel, width, height);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabel_RequestAsyncRenderWithFixedWidth(void * pTextLabel, float width, float heightConstraint)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      Dali::Toolkit::DevelTextLabel::RequestAsyncRenderWithFixedWidth(*textLabel, width, heightConstraint);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabel_RequestAsyncRenderWithFixedHeight(void * pTextLabel, float widthConstraint, float height)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      Dali::Toolkit::DevelTextLabel::RequestAsyncRenderWithFixedHeight(*textLabel, widthConstraint, height);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabel_RequestAsyncRenderWithConstraint(void * pTextLabel, float widthConstraint, float heightConstraint)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      Dali::Toolkit::DevelTextLabel::RequestAsyncRenderWithConstraint(*textLabel, widthConstraint, heightConstraint);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabel_RequestAsyncNaturalSize(void * pTextLabel)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      Dali::Toolkit::DevelTextLabel::RequestAsyncNaturalSize(*textLabel);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabel_RequestAsyncHeightForWidth(void * pTextLabel, float width)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      Dali::Toolkit::DevelTextLabel::RequestAsyncHeightForWidth(*textLabel, width);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int32_t SWIGSTDCALL CSharp_Dali_TextLabel_RegisterFontVariationProperty(void * pTextLabel, char * pTag)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;

  if (!pTag)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "pTag is null string", 0);
    return Dali::Property::INVALID_INDEX;
  }

  std::string tag_string = std::string(pTag);
  Dali::Property::Index result = Dali::Property::INVALID_INDEX;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      auto index = Dali::Toolkit::DevelTextLabel::RegisterFontVariationProperty(*textLabel, tag_string);
      result = index;

    } CALL_CATCH_EXCEPTION(Dali::Property::INVALID_INDEX);
  }

  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_GetLineCount(void * pTextLabel, float width)
{
  int jresult;
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  int result;
  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      result = (int)Dali::Toolkit::DevelTextLabel::GetLineCount(*textLabel, width);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabel_SetMaskEffect(void * pTextLabel, Dali::BaseHandle* control)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try
    {
      Dali::Toolkit::Control maskControl = Dali::Toolkit::Control::DownCast(*control);
      Dali::Toolkit::DevelTextLabel::SetMaskEffect(*textLabel, maskControl);
    } CALL_CATCH_EXCEPTION();
  }
}

// Signals
#ifndef GENERATE_DEVEL_TEXT_LABEL_SIGNAL
#define GENERATE_DEVEL_TEXT_LABEL_SIGNAL(HType, SignalName) GENERATE_DEVEL_SIGNAL(Dali::Toolkit::TextLabel*, HType, Dali::Toolkit::DevelTextLabel, Dali_TextLabel, SignalName)
#endif
#ifndef GENERATE_TEXT_LABEL_SIGNAL
#define GENERATE_TEXT_LABEL_SIGNAL(HType, SignalName) GENERATE_SIGNAL(Dali::Toolkit::TextLabel*, HType, Dali_TextLabel, SignalName)
#endif

// TODO: Other signals also need to be redefined using macros.

GENERATE_DEVEL_TEXT_LABEL_SIGNAL(void(*)(Dali::Toolkit::TextLabel, float, float), AsyncTextRenderedSignal)
// CSharp_Dali_TextLabel_AsyncTextRenderedSignal_Connect
// CSharp_Dali_TextLabel_AsyncTextRenderedSignal_Disconnect

GENERATE_DEVEL_TEXT_LABEL_SIGNAL(void(*)(Dali::Toolkit::TextLabel, float, float), AsyncNaturalSizeComputedSignal)
// CSharp_Dali_TextLabel_AsyncNaturalSizeComputedSignal_Connect
// CSharp_Dali_TextLabel_AsyncNaturalSizeComputedSignal_Disconnect

GENERATE_DEVEL_TEXT_LABEL_SIGNAL(void(*)(Dali::Toolkit::TextLabel, float, float), AsyncHeightForWidthComputedSignal)
// CSharp_Dali_TextLabel_AsyncHeightForWidthComputedSignal_Connect
// CSharp_Dali_TextLabel_AsyncHeightForWidthComputedSignal_Disconnect


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_AnchorClickedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextLabel *arg1 = (Dali::Toolkit::TextLabel *) 0 ;
  Dali::Toolkit::DevelTextLabel::AnchorClickedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextLabel *)jarg1;
  {
    try {
      result = (Dali::Toolkit::DevelTextLabel::AnchorClickedSignalType *)&Dali::Toolkit::DevelTextLabel::AnchorClickedSignal(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_TextFitChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextLabel *arg1 = (Dali::Toolkit::TextLabel *) 0 ;
  Dali::Toolkit::DevelTextLabel::TextFitChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextLabel *)jarg1;
  {
    try {
      result = (Dali::Toolkit::DevelTextLabel::TextFitChangedSignalType *) &Dali::Toolkit::DevelTextLabel::TextFitChangedSignal(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TextLabelSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::TextLabel) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_TextLabelSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::TextLabel) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabelSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextLabel) = (void (*)(Dali::Toolkit::TextLabel)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextLabel))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabelSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextLabel) = (void (*)(Dali::Toolkit::TextLabel)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextLabel))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabelSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  Dali::Toolkit::TextLabel arg2 ;
  Dali::Toolkit::TextLabel *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  argp2 = (Dali::Toolkit::TextLabel *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TextLabel", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextLabelSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)new Dali::Signal< void (Dali::Toolkit::TextLabel) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextLabelSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


#ifdef __cplusplus
}
#endif

