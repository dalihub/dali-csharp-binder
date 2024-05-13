/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/public-api/controls/text-controls/text-editor.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-editor-devel.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::TextEditor) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::TextEditor) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::TextEditor) > *self,void (*func)(Dali::Toolkit::TextEditor)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::TextEditor) > *self,void (*func)(Dali::Toolkit::TextEditor)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::TextEditor) > *self,Dali::Toolkit::TextEditor arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_void_TextEditor_Scroll_Type__Empty(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_void_TextEditor_Scroll_Type__GetConnectionCount(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_void_TextEditor_Scroll_Type__Connect(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *self,void (*func)(Dali::Toolkit::TextEditor,Dali::Toolkit::TextEditor::Scroll::Type)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_void_TextEditor_Scroll_Type__Disconnect(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *self,void (*func)(Dali::Toolkit::TextEditor,Dali::Toolkit::TextEditor::Scroll::Type)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_void_TextEditor_Scroll_Type__Emit(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *self,Dali::Toolkit::TextEditor arg1,Dali::Toolkit::TextEditor::Scroll::Type arg2){
  self->Emit( arg1, arg2 );
}

#ifdef __cplusplus
extern "C" {
#endif


/*TextEditor Property binding*/


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_TEXT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::TEXT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_TEXT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::TEXT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_FONT_FAMILY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::FONT_FAMILY;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_FONT_STYLE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::FONT_STYLE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_POINT_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::POINT_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_HORIZONTAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::HORIZONTAL_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_VERTICAL_ALIGNMENT_get() {

  return (int)Dali::Toolkit::DevelTextEditor::Property::VERTICAL_ALIGNMENT;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SCROLL_THRESHOLD_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SCROLL_THRESHOLD;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SCROLL_SPEED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SCROLL_SPEED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_PRIMARY_CURSOR_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::PRIMARY_CURSOR_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SECONDARY_CURSOR_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SECONDARY_CURSOR_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_ENABLE_CURSOR_BLINK_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::ENABLE_CURSOR_BLINK;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_CURSOR_BLINK_INTERVAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::CURSOR_BLINK_INTERVAL;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_CURSOR_BLINK_DURATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::CURSOR_BLINK_DURATION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_CURSOR_WIDTH_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::CURSOR_WIDTH;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_GRAB_HANDLE_IMAGE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::GRAB_HANDLE_IMAGE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_GRAB_HANDLE_PRESSED_IMAGE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::GRAB_HANDLE_PRESSED_IMAGE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTION_HANDLE_IMAGE_LEFT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SELECTION_HANDLE_IMAGE_LEFT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTION_HANDLE_IMAGE_RIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SELECTION_HANDLE_IMAGE_RIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTION_HANDLE_PRESSED_IMAGE_LEFT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SELECTION_HANDLE_PRESSED_IMAGE_LEFT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTION_HANDLE_PRESSED_IMAGE_RIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SELECTION_HANDLE_PRESSED_IMAGE_RIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTION_HANDLE_MARKER_IMAGE_LEFT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SELECTION_HANDLE_MARKER_IMAGE_LEFT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTION_HANDLE_MARKER_IMAGE_RIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SELECTION_HANDLE_MARKER_IMAGE_RIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTION_HIGHLIGHT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SELECTION_HIGHLIGHT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_DECORATION_BOUNDING_BOX_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::DECORATION_BOUNDING_BOX;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_ENABLE_MARKUP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::ENABLE_MARKUP;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_FONT_FAMILY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_FONT_FAMILY;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_FONT_STYLE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_FONT_STYLE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_POINT_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_POINT_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_LINE_SPACING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::LINE_SPACING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_LINE_SPACING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_LINE_SPACING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_RELATIVE_LINE_SIZE_get() {

  return (int)Dali::Toolkit::DevelTextEditor::Property::RELATIVE_LINE_SIZE;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_UNDERLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::UNDERLINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_UNDERLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_UNDERLINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SHADOW_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SHADOW;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_SHADOW_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_SHADOW;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_EMBOSS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::EMBOSS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_EMBOSS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_EMBOSS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_OUTLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::OUTLINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_OUTLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::INPUT_OUTLINE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_SMOOTH_SCROLL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SMOOTH_SCROLL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_SMOOTH_SCROLL_DURATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SMOOTH_SCROLL_DURATION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_ENABLE_SCROLL_BAR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::ENABLE_SCROLL_BAR;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_SCROLL_BAR_SHOW_DURATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SCROLL_BAR_SHOW_DURATION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_SCROLL_BAR_FADE_DURATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::SCROLL_BAR_FADE_DURATION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_PIXEL_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::PIXEL_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_LINE_COUNT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::LINE_COUNT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_PLACEHOLDER_TEXT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::PLACEHOLDER_TEXT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_PLACEHOLDER_TEXT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::PLACEHOLDER_TEXT_COLOR;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_ENABLE_SELECTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::ENABLE_SELECTION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_PLACEHOLDER_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::PLACEHOLDER;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTED_TEXT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::SELECTED_TEXT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTED_TEXT_START_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::SELECTED_TEXT_START;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTED_TEXT_END_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::SELECTED_TEXT_END;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_HORIZONTAL_SCROLL_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::HORIZONTAL_SCROLL_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_VERTICAL_SCROLL_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::VERTICAL_SCROLL_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_PRIMARY_CURSOR_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::PRIMARY_CURSOR_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_GRAB_HANDLE_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::GRAB_HANDLE_COLOR;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_FILTER_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::INPUT_FILTER;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_SELECTION_POPUP_STYLE_get()
{
  return (int)Dali::Toolkit::DevelTextEditor::Property::SELECTION_POPUP_STYLE;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextEditor_ScrollBy(void * jarg1, void * jarg2) {
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0;
  Dali::Vector2 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;

  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 type is null", 0);
    return ;
  }

  {
    try {
      Dali::Toolkit::DevelTextEditor::ScrollBy( *arg1 , *arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_ENABLE_EDITING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::ENABLE_EDITING;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_FONT_SIZE_SCALE_get()
{
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::FONT_SIZE_SCALE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_ENABLE_FONT_SIZE_SCALE_get()
{
  return (int)Dali::Toolkit::DevelTextEditor::Property::ENABLE_FONT_SIZE_SCALE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_ENABLE_GRAB_HANDLE_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::ENABLE_GRAB_HANDLE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_ENABLE_GRAB_HANDLE_POPUP_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::ENABLE_GRAB_HANDLE_POPUP;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_INPUT_METHOD_SETTINGS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::INPUT_METHOD_SETTINGS;
  jresult = (int)result;
  return jresult;
}











SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_New_With_Style(bool hasStyle) {
  void * jresult ;
  Dali::Toolkit::TextEditor result;

  {
    try {
      if (hasStyle) {
        result = Dali::Toolkit::TextEditor::New(Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS);
      } else {
        result = Dali::Toolkit::TextEditor::New();
      }
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TextEditor((const Dali::Toolkit::TextEditor &)result);
  return jresult;
}








SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextEditor(void * jarg1) {
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0 ;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}




SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_TextChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::TextEditor::TextChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  {
    try {
      result = (Dali::Toolkit::TextEditor::TextChangedSignalType *) &(arg1)->TextChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_InputStyleChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::TextEditor::InputStyleChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  {
    try {
      result = (Dali::Toolkit::TextEditor::InputStyleChangedSignalType *) &(arg1)->InputStyleChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_AnchorClickedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::DevelTextEditor::AnchorClickedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  {
    try {
      result = (Dali::Toolkit::DevelTextEditor::AnchorClickedSignalType *)&Dali::Toolkit::DevelTextEditor::AnchorClickedSignal(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_InputFilteredSignal(void * pTextEditor) {
  void * jresult ;
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::DevelTextEditor::InputFilteredSignalType *result = 0 ;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      result = (Dali::Toolkit::DevelTextEditor::InputFilteredSignalType *)&Dali::Toolkit::DevelTextEditor::InputFilteredSignal(*textEditor);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextEditor_SelectWholeText(void * jarg1) {
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  {
    try {
      Dali::Toolkit::DevelTextEditor::SelectWholeText( *arg1 );
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextEditor_SelectText(void * pTextEditor, unsigned int start, unsigned int end) {
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      Dali::Toolkit::DevelTextEditor::SelectText( *textEditor, start, end );
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextEditor_SelectNone(void * jarg1) {
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  {
    try {
      Dali::Toolkit::DevelTextEditor::SelectNone( *arg1 );
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_GetTextSize(void * pTextEditor, unsigned int start, unsigned int end)
{
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0;
  void* sizeList;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      sizeList = new Dali::Vector< Dali::Vector2, Dali::TypeTraits< Dali::Vector2 >::IS_TRIVIAL_TYPE==true >
      ((const Dali::Vector< Dali::Vector2, Dali::TypeTraits< Dali::Vector2 >::IS_TRIVIAL_TYPE==true > &)(Dali::Toolkit::DevelTextEditor::GetTextSize( *textEditor, start, end )));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return sizeList;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_GetTextPosition(void * pTextEditor, unsigned int start, unsigned int end)
{
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0;
  void* sizeList;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      sizeList = new Dali::Vector< Dali::Vector2, Dali::TypeTraits< Dali::Vector2 >::IS_TRIVIAL_TYPE==true >
      ((const Dali::Vector< Dali::Vector2, Dali::TypeTraits< Dali::Vector2 >::IS_TRIVIAL_TYPE==true > &)(Dali::Toolkit::DevelTextEditor::GetTextPosition( *textEditor, start, end )));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return sizeList;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_TextGeometry_TextEditor_GetTextBoundingRectangle(void * pTextEditor, uint32_t startIndex, uint32_t endIndex)
{
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0;
  void* boundingRect;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      boundingRect = new Dali::Rect<>
      ((const Dali::Rect<> &)(Dali::Toolkit::DevelTextEditor::GetTextBoundingRectangle( *textEditor, startIndex, endIndex)));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return boundingRect;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_TextEditor_CopyText(void *pTextEditor)
{
  char *csCopiedText;
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *)0;
  std::string copiedText;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      copiedText = Dali::Toolkit::DevelTextEditor::CopyText(*textEditor);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  csCopiedText = SWIG_csharp_string_callback((&copiedText)->c_str());
  return csCopiedText;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_TextEditor_CutText(void *pTextEditor)
{
  char *csCutText;
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *)0;
  std::string cutText;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      cutText = Dali::Toolkit::DevelTextEditor::CutText(*textEditor);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  csCutText = SWIG_csharp_string_callback((&cutText)->c_str());
  return csCutText;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextEditor_PasteText(void *pTextEditor)
{
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *)0;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      Dali::Toolkit::DevelTextEditor::PasteText(*textEditor);
    }
    CALL_CATCH_EXCEPTION();
  }
}

/*TextEditorSignal*/
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TextEditorSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Toolkit::TextEditor) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::TextEditor) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_TextEditorSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::TextEditor) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::TextEditor) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextEditorSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextEditor) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextEditor) = (void (*)(Dali::Toolkit::TextEditor)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextEditor))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextEditorSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextEditor) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextEditor) = (void (*)(Dali::Toolkit::TextEditor)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextEditor))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextEditorSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextEditor) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *) 0 ;
  Dali::Toolkit::TextEditor arg2 ;
  Dali::Toolkit::TextEditor *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *)jarg1;
  argp2 = (Dali::Toolkit::TextEditor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TextEditor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextEditor_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextEditorSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::TextEditor) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *)new Dali::Signal< void (Dali::Toolkit::TextEditor) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextEditorSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::TextEditor) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextEditor) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

/*ScrollStateChangedSignal*/
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_ScrollStateChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextEditor *arg1 = 0 ;
  Dali::Toolkit::TextEditor::ScrollStateChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TextEditor & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TextEditor::ScrollStateChangedSignalType *) &arg1->ScrollStateChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_void_TextEditor_Scroll_Type__Empty((Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *)jarg1;
  {
    try {
      result = Dali_Signal_void_TextEditor_Scroll_Type__GetConnectionCount((Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextEditor,Dali::Toolkit::TextEditor::Scroll::Type) = (void (*)(Dali::Toolkit::TextEditor,Dali::Toolkit::TextEditor::Scroll::Type)) 0 ;

  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextEditor,Dali::Toolkit::TextEditor::Scroll::Type))jarg2;
  {
    try {
      Dali_Signal_void_TextEditor_Scroll_Type__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextEditor,Dali::Toolkit::TextEditor::Scroll::Type) = (void (*)(Dali::Toolkit::TextEditor,Dali::Toolkit::TextEditor::Scroll::Type)) 0 ;

  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextEditor,Dali::Toolkit::TextEditor::Scroll::Type))jarg2;
  {
    try {
      Dali_Signal_void_TextEditor_Scroll_Type__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_Emit(void * jarg1, void * jarg2, int jarg3) {
  Dali::Signal< void ( Dali::Toolkit::TextEditor,  Dali::Toolkit::TextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor,  Dali::Toolkit::TextEditor::Scroll::Type ) > *) 0 ;
  Dali::Toolkit::TextEditor arg2 ;
  Dali::Toolkit::TextEditor::Scroll::Type arg3;
  Dali::Toolkit::TextEditor *argp2 ;

  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *)jarg1;
  argp2 = (Dali::Toolkit::TextEditor *)jarg2;
  arg3 = (Dali::Toolkit::TextEditor::Scroll::Type)jarg3;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TextEditor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_void_TextEditor_Scroll_Type__Emit(arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollStateChangedSignal() {
  void * jresult ;
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *)new Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollStateChangedSignal(void * jarg1) {
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *) 0 ;

  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::TextEditor::Scroll::Type ) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_ENABLE_SHIFT_SELECTION_get()
{
  return (int)Dali::Toolkit::DevelTextEditor::Property::ENABLE_SHIFT_SELECTION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_MATCH_SYSTEM_LANGUAGE_DIRECTION_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::MATCH_SYSTEM_LANGUAGE_DIRECTION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_MAX_LENGTH_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::MAX_LENGTH;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_GetInputMethodContext(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::InputMethodContext result;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  {
    try {
      result = Dali::Toolkit::DevelTextEditor::GetInputMethodContext(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::InputMethodContext((const Dali::InputMethodContext &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_CursorPositionChangedSignal(void * pTextEditor) {
  void * jresult ;
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::DevelTextEditor::CursorPositionChangedSignalType *result = 0 ;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      result = (Dali::Toolkit::DevelTextEditor::CursorPositionChangedSignalType *)&Dali::Toolkit::DevelTextEditor::CursorPositionChangedSignal(*textEditor);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_MaxLengthReachedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextEditor *arg1 = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::DevelTextEditor::MaxLengthReachedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  {
    try {
      result = (Dali::Toolkit::DevelTextEditor::MaxLengthReachedSignalType *)&Dali::Toolkit::DevelTextEditor::MaxLengthReachedSignal(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_SelectionClearedSignal(void * pTextEditor) {
  void * jresult ;
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::DevelTextEditor::SelectionClearedSignalType *result = 0 ;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      result = (Dali::Toolkit::DevelTextEditor::SelectionClearedSignalType *)&Dali::Toolkit::DevelTextEditor::SelectionClearedSignal(*textEditor);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_SelectionStartedSignal(void * pTextEditor) {
  void * jresult ;
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::DevelTextEditor::SelectionStartedSignalType *result = 0 ;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      result = (Dali::Toolkit::DevelTextEditor::SelectionStartedSignalType *)&Dali::Toolkit::DevelTextEditor::SelectionStartedSignal(*textEditor);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_SelectionChangedSignal(void * pTextEditor) {
  void * jresult ;
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0 ;
  Dali::Toolkit::DevelTextEditor::SelectionChangedSignalType *result = 0 ;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      result = (Dali::Toolkit::DevelTextEditor::SelectionChangedSignalType *)&Dali::Toolkit::DevelTextEditor::SelectionChangedSignal(*textEditor);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_REMOVE_FRONT_INSET_get()
{
  return (int)Dali::Toolkit::DevelTextEditor::Property::REMOVE_FRONT_INSET;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_REMOVE_BACK_INSET_get()
{
  return (int)Dali::Toolkit::DevelTextEditor::Property::REMOVE_BACK_INSET;
}

#ifdef __cplusplus
}
#endif

