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
#include <dali-toolkit/dali-toolkit.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-editor-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-field-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-label-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-selection-popup.h>
#include <dali-toolkit/public-api/controls/text-controls/hidden-input-properties.h>
#include <dali-toolkit/public-api/visuals/visual-properties.h>
#include <dali/devel-api/actors/actor-devel.h>
#include <dali/devel-api/rendering/renderer-devel.h>


// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

using namespace Dali;
using namespace Dali::Toolkit;
using signalType = DevelControl::VisualEventSignalType;
using visualSignalType =
    Signal<void(Control, Property::Index, Property::Index)>;
using SignalCallbackFuncType = void (*)(Control, Property::Index,
                                        Property::Index);

SWIGINTERN bool _CSharp_Dali_VisualEventSignal_Empty(signalType const *self) {
  return self->Empty();
}
SWIGINTERN std::size_t
_CSharp_Dali_VisualEventSignal_GetConnectionCount(signalType *self) {
  return self->GetConnectionCount();
}
SWIGINTERN void
_CSharp_Dali_VisualEventSignal_Connect(signalType *self,
                                       SignalCallbackFuncType func) {
  self->Connect(func);
}
SWIGINTERN void
_CSharp_Dali_VisualEventSignal_Disconnect(signalType *self,
                                          SignalCallbackFuncType func) {
  self->Disconnect(func);
}
SWIGINTERN void _CSharp_Dali_VisualEventSignal_Emit(signalType *self,
                                                    Control arg1,
                                                    Property::Index arg2,
                                                    Property::Index arg3) {
  self->Emit(arg1, arg2, arg3);
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_TOOLTIP_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelControl::Property::TOOLTIP;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_STATE_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelControl::Property::STATE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_SUB_STATE_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelControl::Property::SUB_STATE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_LEFT_FOCUSABLE_ACTOR_ID_get() {
  return Dali::Toolkit::DevelControl::Property::LEFT_FOCUSABLE_ACTOR_ID;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_RIGHT_FOCUSABLE_ACTOR_ID_get() {
  return Dali::Toolkit::DevelControl::Property::RIGHT_FOCUSABLE_ACTOR_ID;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_UP_FOCUSABLE_ACTOR_ID_get() {
  return Dali::Toolkit::DevelControl::Property::UP_FOCUSABLE_ACTOR_ID;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_DOWN_FOCUSABLE_ACTOR_ID_get() {
  return Dali::Toolkit::DevelControl::Property::DOWN_FOCUSABLE_ACTOR_ID;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_CLOCKWISE_FOCUSABLE_ACTOR_ID_get() {
  return Dali::Toolkit::DevelControl::Property::CLOCKWISE_FOCUSABLE_ACTOR_ID;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_COUNTER_CLOCKWISE_FOCUSABLE_ACTOR_ID_get() {
  return Dali::Toolkit::DevelControl::Property::COUNTER_CLOCKWISE_FOCUSABLE_ACTOR_ID;
}

SWIGEXPORT int SWIGSTDCALL CSharp_ItemView_Property_LAYOUT_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::LAYOUT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Visual_Property_TRANSFORM_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::Visual::Property::TRANSFORM;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Visual_Property_PREMULTIPLIED_ALPHA_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::Visual::Property::PREMULTIPLIED_ALPHA;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Visual_Property_MIX_COLOR_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::Visual::Property::MIX_COLOR;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_PIXEL_SIZE_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::PIXEL_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_ELLIPSIS_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::ELLIPSIS;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_TextLabel_Property_AUTO_SCROLL_STOP_MODE_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::AUTO_SCROLL_STOP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_TextLabel_Property_AUTO_SCROLL_LOOP_DELAY_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::AUTO_SCROLL_LOOP_DELAY;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_HIDDENINPUT_PROPERTY_MODE_get() {
  int jresult;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::HiddenInput::Property::MODE;
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_HIDDENINPUT_PROPERTY_SUBSTITUTE_CHARACTER_get() {
  int jresult;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::HiddenInput::Property::SUBSTITUTE_CHARACTER;
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_HIDDENINPUT_PROPERTY_SUBSTITUTE_COUNT_get() {
  int jresult;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::HiddenInput::Property::SUBSTITUTE_COUNT;
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_HIDDENINPUT_PROPERTY_SHOW_LAST_CHARACTER_DURATION_get() {
  int jresult;
  int result;

  {
    try {
      result = (int)
          Dali::Toolkit::HiddenInput::Property::SHOW_LAST_CHARACTER_DURATION;
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_LINE_COUNT_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::LINE_COUNT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_LINE_WRAP_MODE_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::LINE_WRAP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_TEXT_DIRECTION_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::TEXT_DIRECTION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_TextLabel_Property_VERTICAL_LINE_ALIGNMENT_get() {
  int jresult;
  int result;

  result =
      (int)Dali::Toolkit::DevelTextLabel::Property::VERTICAL_LINE_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_TextLabel_Property_MATCH_SYSTEM_LANGUAGE_DIRECTION_get() {
  int jresult;
  int result;

  result = (int)
      Dali::Toolkit::DevelTextLabel::Property::MATCH_SYSTEM_LANGUAGE_DIRECTION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_MIN_LINE_SIZE_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::MIN_LINE_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextLabel_Property_RENDERING_BACKEND_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::RENDERING_BACKEND;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_ELLIPSIS_POSITION_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::ELLIPSIS_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_LINE_WRAP_MODE_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::LINE_WRAP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_ELLIPSIS_POSITION_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::ELLIPSIS_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_MIN_LINE_SIZE_get() {
  return (int)Dali::Toolkit::DevelTextEditor::Property::MIN_LINE_SIZE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_ELLIPSIS_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::ELLIPSIS;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextField_Property_ELLIPSIS_POSITION_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextField::Property::ELLIPSIS_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextEditor_Property_STRIKETHROUGH_get() {
  return (int)Dali::Toolkit::DevelTextEditor::Property::STRIKETHROUGH;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_STRIKETHROUGH_get() {
  return (int)Dali::Toolkit::DevelTextField::Property::STRIKETHROUGH;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_STRIKETHROUGH_get() {
  return (int)Dali::Toolkit::DevelTextLabel::Property::STRIKETHROUGH;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextEditor_Property_CHARACTER_SPACING_get() {
  return (int)Dali::Toolkit::DevelTextEditor::Property::CHARACTER_SPACING;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextField_Property_CHARACTER_SPACING_get() {
  return (int)Dali::Toolkit::DevelTextField::Property::CHARACTER_SPACING;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextLabel_Property_CHARACTER_SPACING_get() {
  return (int)Dali::Toolkit::DevelTextLabel::Property::CHARACTER_SPACING;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_POPUP_MAX_SIZE_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::POPUP_MAX_SIZE;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_OPTION_DIVIDER_SIZE_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::OPTION_DIVIDER_SIZE;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_OPTION_DIVIDER_PADDING_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::OPTION_DIVIDER_PADDING;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_LABEL_MINIMUM_SIZE_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::LABEL_MINIMUM_SIZE;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_LABEL_PADDING_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::LABEL_PADDING;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_LABEL_TEXT_VISUAL_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::LABEL_TEXT_VISUAL;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_ENABLE_SCROLL_BAR_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::ENABLE_SCROLL_BAR;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_POPUP_DIVIDER_COLOR_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::POPUP_DIVIDER_COLOR;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_POPUP_PRESSED_COLOR_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::POPUP_PRESSED_COLOR;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_POPUP_PRESSED_CORNER_RADIUS_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::POPUP_PRESSED_CORNER_RADIUS;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_POPUP_FADE_IN_DURATION_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::POPUP_FADE_IN_DURATION;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_POPUP_FADE_OUT_DURATION_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::POPUP_FADE_OUT_DURATION;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_BACKGROUND_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::BACKGROUND;
}

SWIGEXPORT int SWIGSTDCALL
CSharp_Dali_TextSelectionPopup_Property_BACKGROUND_BORDER_get() {
  return (int)Dali::Toolkit::TextSelectionPopup::Property::BACKGROUND_BORDER;
}

SWIGEXPORT unsigned int SWIGSTDCALL
CSharp_Dali_VisualEventSignal_Empty(void *jarg1) {
  unsigned int jresult;
  signalType *arg1 = (signalType *)0;
  bool result;

  arg1 = (signalType *)jarg1;
  {
    try {
      result = (bool)_CSharp_Dali_VisualEventSignal_Empty((signalType *)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL
CSharp_Dali_VisualEventSignal_GetConnectionCount(void *jarg1) {
  unsigned long jresult;
  signalType *arg1 = (signalType *)0;
  std::size_t result;

  arg1 = (signalType *)jarg1;
  {
    try {
      result =
          _CSharp_Dali_VisualEventSignal_GetConnectionCount((signalType *)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualEventSignal_Connect(void *jarg1,
                                                                  void *jarg2) {
  signalType *arg1 = (signalType *)0;
  SignalCallbackFuncType arg2 = (SignalCallbackFuncType)0;

  arg1 = (signalType *)jarg1;
  arg2 = (SignalCallbackFuncType)jarg2;
  {
    try {
      _CSharp_Dali_VisualEventSignal_Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_VisualEventSignal_Disconnect(void *jarg1, void *jarg2) {
  signalType *arg1 = (signalType *)0;
  SignalCallbackFuncType arg2 = (SignalCallbackFuncType)0;

  arg1 = (signalType *)jarg1;
  arg2 = (SignalCallbackFuncType)jarg2;
  {
    try {
      _CSharp_Dali_VisualEventSignal_Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualEventSignal_Emit(void *jarg1,
                                                               void *jarg2,
                                                               int jarg3,
                                                               int jarg4) {
  signalType *arg1 = (signalType *)0;
  Control *arg2 = (Control *)0;
  Dali::Property::Index arg3 = 0;
  Dali::Property::Index arg4 = 0;

  arg1 = (signalType *)jarg1;
  arg2 = (Control *)jarg2;
  arg3 = (Dali::Property::Index)jarg3;
  arg4 = (Dali::Property::Index)jarg4;
  {
    try {
      _CSharp_Dali_VisualEventSignal_Emit(arg1, *arg2, arg3, arg4);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_VisualEventSignal() {
  void *jresult;
  signalType *result = 0;

  {
    try {
      result = (signalType *)new Dali::Signal<signalType>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VisualEventSignal(void *jarg1) {
  signalType *arg1 = (signalType *)0;

  arg1 = (signalType *)jarg1;
  {
    try {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_View_VisualEventSignal(void *jarg1) {
  void *jresult;
  Control *arg1 = (Dali::Toolkit::Control *)0;
  visualSignalType *result;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      result = (visualSignalType *)&(DevelControl::VisualEventSignal(*arg1));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)(result);
  return jresult;
}

#ifdef __cplusplus
}
#endif
