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

#ifndef CSHARP_DEVEL_PROPERTY
#define CSHARP_DEVEL_PROPERTY
#endif

#include "common.h"

#include <dali/devel-api/actors/actor-devel.h>
#include <dali/devel-api/rendering/renderer-devel.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/controls/buttons/button-devel.h>
#include <dali-toolkit/devel-api/controls/buttons/button-devel.h>
#include <dali-toolkit/public-api/visuals/visual-properties.h>
#include <dali-toolkit/public-api/controls/text-controls/hidden-input-properties.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-label-devel.h>
#include <dali-toolkit/devel-api/visuals/image-visual-actions-devel.h>
#include <dali-toolkit/devel-api/visuals/animated-image-visual-actions-devel.h>


using namespace Dali;
using namespace Dali::Toolkit;
using signalType = DevelControl::VisualEventSignalType;
using visualSignalType = Signal< void(Control, Property::Index, Property::Index) >;
using SignalCallbackFuncType = void(*)(Control, Property::Index, Property::Index);

SWIGINTERN bool _CSharp_Dali_VisualEventSignal_Empty(signalType const *self) {
  return self->Empty();
}
SWIGINTERN std::size_t _CSharp_Dali_VisualEventSignal_GetConnectionCount(signalType *self) {
  return self->GetConnectionCount();
}
SWIGINTERN void _CSharp_Dali_VisualEventSignal_Connect(signalType *self, SignalCallbackFuncType func) {
  self->Connect(func);
}
SWIGINTERN void _CSharp_Dali_VisualEventSignal_Disconnect(signalType *self, SignalCallbackFuncType func) {
  self->Disconnect(func);
}
SWIGINTERN void _CSharp_Dali_VisualEventSignal_Emit(signalType *self, Control arg1, Property::Index arg2, Property::Index arg3) {
  self->Emit(arg1, arg2, arg3);
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_SIBLING_ORDER_get() {

  return Dali::DevelActor::Property::SIBLING_ORDER;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_CAPTURE_ALL_TOUCH_AFTER_START_get() {

  return Dali::DevelActor::Property::CAPTURE_ALL_TOUCH_AFTER_START;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_BLEND_EQUATION_get() {

  return Dali::DevelActor::Property::BLEND_EQUATION;
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

  result = (int)Dali::Toolkit::Button::Property::UNSELECTED_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_SELECTED_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Button::Property::SELECTED_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_DISABLED_SELECTED_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Button::Property::DISABLED_SELECTED_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_DISABLED_UNSELECTED_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Button::Property::DISABLED_UNSELECTED_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_UNSELECTED_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Button::Property::UNSELECTED_BACKGROUND_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_SELECTED_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Button::Property::SELECTED_BACKGROUND_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_DISABLED_UNSELECTED_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Button::Property::DISABLED_UNSELECTED_BACKGROUND_VISUAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Button_Property_DISABLED_SELECTED_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Button::Property::DISABLED_SELECTED_BACKGROUND_VISUAL;
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

  result = (int)Dali::Toolkit::TextLabel::Property::PIXEL_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_ELLIPSIS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::ELLIPSIS;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_AUTO_SCROLL_STOP_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::AUTO_SCROLL_STOP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_AUTO_SCROLL_LOOP_DELAY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::AUTO_SCROLL_LOOP_DELAY;
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
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

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
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

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
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_HIDDENINPUT_PROPERTY_SHOW_LAST_CHARACTER_DURATION_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::HiddenInput::Property::SHOW_LAST_CHARACTER_DURATION;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_LINE_COUNT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::LINE_COUNT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_LINE_WRAP_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::LINE_WRAP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_TEXT_DIRECTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::TEXT_DIRECTION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_VERTICAL_LINE_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::VERTICAL_LINE_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_MATCH_SYSTEM_LANGUAGE_DIRECTION_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::MATCH_SYSTEM_LANGUAGE_DIRECTION;
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_RENDERING_BACKEND_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::RENDERING_BACKEND;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextEditor_Property_LINE_WRAP_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextEditor::Property::LINE_WRAP_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_ImageView_IMAGE_VISUAL_ACTION_RELOAD_get()
{
  return (int)Dali::Toolkit::DevelImageVisual::Action::RELOAD;
}

SWIGEXPORT int SWIGSTDCALL CSharp_ImageView_IMAGE_VISUAL_ACTION_PLAY_get()
{
  return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::PLAY;
}

SWIGEXPORT int SWIGSTDCALL CSharp_ImageView_IMAGE_VISUAL_ACTION_PAUSE_get()
{
  return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::PAUSE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_ImageView_IMAGE_VISUAL_ACTION_STOP_get()
{
  return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::STOP;
}



SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_VisualEventSignal_Empty(void * jarg1) {
  unsigned int jresult;
  signalType *arg1 = (signalType *)0;
  bool result;

  arg1 = (signalType *)jarg1;
  {
    try {
      result = (bool)_CSharp_Dali_VisualEventSignal_Empty((signalType *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_VisualEventSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult;
  signalType *arg1 = (signalType *)0;
  std::size_t result;

  arg1 = (signalType *)jarg1;
  {
    try {
      result = _CSharp_Dali_VisualEventSignal_GetConnectionCount((signalType *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualEventSignal_Connect(void * jarg1, void * jarg2) {
  signalType *arg1 = (signalType *)0;
  SignalCallbackFuncType arg2 = (SignalCallbackFuncType)0;

  arg1 = (signalType *)jarg1;
  arg2 = (SignalCallbackFuncType)jarg2;
  {
    try {
      _CSharp_Dali_VisualEventSignal_Connect(arg1, arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualEventSignal_Disconnect(void * jarg1, void * jarg2) {
  signalType *arg1 = (signalType *)0;
  SignalCallbackFuncType arg2 = (SignalCallbackFuncType)0;

  arg1 = (signalType *)jarg1;
  arg2 = (SignalCallbackFuncType)jarg2;
  {
    try {
      _CSharp_Dali_VisualEventSignal_Disconnect(arg1, arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualEventSignal_Emit(void * jarg1, void * jarg2, int jarg3, int jarg4) {
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
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VisualEventSignal() {
  void * jresult;
  signalType *result = 0;

  {
    try {
      result = (signalType *)new Dali::Signal< signalType >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VisualEventSignal(void * jarg1) {
  signalType *arg1 = (signalType *)0;

  arg1 = (signalType *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_VisualEventSignal(void * jarg1) {
  void * jresult;
  Control *arg1 = (Dali::Toolkit::Control *) 0;
  visualSignalType *result;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      result = (visualSignalType*)&(DevelControl::VisualEventSignal(*arg1));
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)(result);
  return jresult;
}


#ifdef __cplusplus
}
#endif
