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

#ifndef CSHARP_DEVEL_PROPERTY
#define CSHARP_DEVEL_PROPERTY
#endif

#include "common.h"

#include <dali/devel-api/actors/actor-devel.h>
#include <dali/devel-api/rendering/renderer-devel.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/controls/buttons/button-devel.h>
#include <dali-toolkit/devel-api/controls/buttons/button-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-editor-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-field-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-label-devel.h>
#include <dali-toolkit/public-api/visuals/visual-properties.h>
#include <dali-toolkit/devel-api/controls/text-controls/hidden-input-properties.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_SIBLING_ORDER_get() {

  return Dali::DevelActor::Property::SIBLING_ORDER;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_OPACITY_get() {

  return Dali::DevelActor::Property::OPACITY;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_SCREEN_POSITION_get() {

  return Dali::DevelActor::Property::SCREEN_POSITION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_POSITION_USES_ANCHOR_POINT_get() {

  return Dali::DevelActor::Property::POSITION_USES_ANCHOR_POINT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_INHERIT_LAYOUT_DIRECTION_get() {
  return Dali::DevelActor::Property::INHERIT_LAYOUT_DIRECTION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_LAYOUT_DIRECTION_get() {
  return Dali::DevelActor::Property::LAYOUT_DIRECTION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_TOOLTIP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelControl::Property::TOOLTIP;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_STATE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelControl::Property::STATE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_View_Property_SUB_STATE_get() {
  int jresult ;
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

SWIGEXPORT int SWIGSTDCALL CSharp_ItemView_Property_LAYOUT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::LAYOUT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_UNSELECTED_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::UNSELECTED_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_SELECTED_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::SELECTED_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_DISABLED_SELECTED_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::DISABLED_SELECTED_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_DISABLED_UNSELECTED_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::DISABLED_UNSELECTED_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_UNSELECTED_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::UNSELECTED_BACKGROUND_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_SELECTED_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::SELECTED_BACKGROUND_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_DISABLED_UNSELECTED_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::DISABLED_UNSELECTED_BACKGROUND_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_DISABLED_SELECTED_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::DISABLED_SELECTED_BACKGROUND_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_LABEL_RELATIVE_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::LABEL_RELATIVE_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_LABEL_PADDING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::LABEL_PADDING;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_VISUAL_PADDING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelButton::Property::VISUAL_PADDING;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Visual_Property_TRANSFORM_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Visual::Property::TRANSFORM;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Visual_Property_PREMULTIPLIED_ALPHA_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Visual::Property::PREMULTIPLIED_ALPHA;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Visual_Property_MIX_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Visual::Property::MIX_COLOR;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_PIXEL_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::PIXEL_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_ELLIPSIS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::ELLIPSIS;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_AUTO_SCROLL_STOP_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::AUTO_SCROLL_STOP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_AUTO_SCROLL_LOOP_DELAY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::AUTO_SCROLL_LOOP_DELAY;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_HIDDENINPUT_PROPERTY_MODE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::HiddenInput::Property::MODE;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_HIDDENINPUT_PROPERTY_SUBSTITUTE_CHARACTER_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::HiddenInput::Property::SUBSTITUTE_CHARACTER;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_HIDDENINPUT_PROPERTY_SUBSTITUTE_COUNT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::HiddenInput::Property::SUBSTITUTE_COUNT;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_HIDDENINPUT_PROPERTY_SHOW_DURATION_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::HiddenInput::Property::SHOW_DURATION;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_LINE_COUNT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::LINE_COUNT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_LINE_WRAP_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::LINE_WRAP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_LINE_WRAP_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::LINE_WRAP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_LINE_COUNT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::LINE_COUNT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_LINE_WRAP_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::LINE_WRAP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_LINE_WRAP_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextEditor::Property::LINE_WRAP_MODE;
  jresult = (int)result;
  return jresult;
}

#ifdef __cplusplus
}
#endif

