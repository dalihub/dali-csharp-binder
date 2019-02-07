/** Copyright (c) 2017 Samsung Electronics Co., Ltd.
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

#ifndef CSHARP_TEXT_FIELD
#define CSHARP_TEXT_FIELD
#endif

#include "common.h"
#include <dali-toolkit/public-api/controls/text-controls/text-field.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-field-devel.h>

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::TextField) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::TextField) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::TextField) > *self,void (*func)(Dali::Toolkit::TextField)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::TextField) > *self,void (*func)(Dali::Toolkit::TextField)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::TextField) > *self,Dali::Toolkit::TextField arg){
  self->Emit( arg );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_TextField_SWIGUpcast(Dali::Toolkit::TextField *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

/*TextField property binding*/
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_RENDERING_BACKEND_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::RENDERING_BACKEND;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_TEXT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::TEXT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_PLACEHOLDER_TEXT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::PLACEHOLDER_TEXT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_PLACEHOLDER_TEXT_FOCUSED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::PLACEHOLDER_TEXT_FOCUSED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_FONT_FAMILY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::FONT_FAMILY;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_FONT_STYLE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::FONT_STYLE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_POINT_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::POINT_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_MAX_LENGTH_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::MAX_LENGTH;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_EXCEED_POLICY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::EXCEED_POLICY;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_HORIZONTAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::HORIZONTAL_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_VERTICAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::VERTICAL_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_TEXT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::TEXT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_PLACEHOLDER_TEXT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::PLACEHOLDER_TEXT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_PRIMARY_CURSOR_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::PRIMARY_CURSOR_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SECONDARY_CURSOR_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SECONDARY_CURSOR_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_ENABLE_CURSOR_BLINK_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::ENABLE_CURSOR_BLINK;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_CURSOR_BLINK_INTERVAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::CURSOR_BLINK_INTERVAL;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_CURSOR_BLINK_DURATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::CURSOR_BLINK_DURATION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_CURSOR_WIDTH_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::CURSOR_WIDTH;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_GRAB_HANDLE_IMAGE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::GRAB_HANDLE_IMAGE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_GRAB_HANDLE_PRESSED_IMAGE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::GRAB_HANDLE_PRESSED_IMAGE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SCROLL_THRESHOLD_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SCROLL_THRESHOLD;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SCROLL_SPEED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SCROLL_SPEED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SELECTION_HANDLE_IMAGE_LEFT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SELECTION_HANDLE_IMAGE_LEFT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SELECTION_HANDLE_IMAGE_RIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SELECTION_HANDLE_IMAGE_RIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SELECTION_HANDLE_PRESSED_IMAGE_LEFT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SELECTION_HANDLE_PRESSED_IMAGE_LEFT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SELECTION_HANDLE_PRESSED_IMAGE_RIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SELECTION_HANDLE_PRESSED_IMAGE_RIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SELECTION_HANDLE_MARKER_IMAGE_LEFT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SELECTION_HANDLE_MARKER_IMAGE_LEFT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SELECTION_HANDLE_MARKER_IMAGE_RIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SELECTION_HANDLE_MARKER_IMAGE_RIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SELECTION_HIGHLIGHT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SELECTION_HIGHLIGHT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_DECORATION_BOUNDING_BOX_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::DECORATION_BOUNDING_BOX;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_METHOD_SETTINGS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_METHOD_SETTINGS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_ENABLE_MARKUP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::ENABLE_MARKUP;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_FONT_FAMILY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_FONT_FAMILY;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_FONT_STYLE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_FONT_STYLE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_POINT_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_POINT_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_UNDERLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::UNDERLINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_UNDERLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_UNDERLINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_SHADOW_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::SHADOW;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_SHADOW_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_SHADOW;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_EMBOSS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::EMBOSS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_EMBOSS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_EMBOSS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_OUTLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::OUTLINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextField_Property_INPUT_OUTLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::INPUT_OUTLINE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextField_Property_HIDDEN_INPUT_SETTINGS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::HIDDEN_INPUT_SETTINGS;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextField_Property_PIXEL_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::PIXEL_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextField_Property_ENABLE_SELECTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::ENABLE_SELECTION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextField_Property_PLACEHOLDER_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::PLACEHOLDER;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextField_Property_ELLIPSIS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextField::Property::ELLIPSIS;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextField_Property() {
  void * jresult ;
  Dali::Toolkit::TextField::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TextField::Property *)new Dali::Toolkit::TextField::Property();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextField_Property(void * jarg1) {
  Dali::Toolkit::TextField::Property *arg1 = (Dali::Toolkit::TextField::Property *) 0 ;

  arg1 = (Dali::Toolkit::TextField::Property *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextField_InputStyle() {
  void * jresult ;
  Dali::Toolkit::TextField::InputStyle *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TextField::InputStyle *)new Dali::Toolkit::TextField::InputStyle();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextField_InputStyle(void * jarg1) {
  Dali::Toolkit::TextField::InputStyle *arg1 = (Dali::Toolkit::TextField::InputStyle *) 0 ;

  arg1 = (Dali::Toolkit::TextField::InputStyle *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextField_New() {
  void * jresult ;
  Dali::Toolkit::TextField result;

  {
    try {
      result = Dali::Toolkit::TextField::New();
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

  jresult = new Dali::Toolkit::TextField((const Dali::Toolkit::TextField &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextField__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::TextField *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TextField *)new Dali::Toolkit::TextField();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextField__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextField *arg1 = 0 ;
  Dali::Toolkit::TextField *result = 0 ;

  arg1 = (Dali::Toolkit::TextField *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TextField const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TextField *)new Dali::Toolkit::TextField((Dali::Toolkit::TextField const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextField_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::TextField *arg1 = (Dali::Toolkit::TextField *) 0 ;
  Dali::Toolkit::TextField *arg2 = 0 ;
  Dali::Toolkit::TextField *result = 0 ;

  arg1 = (Dali::Toolkit::TextField *)jarg1;
  arg2 = (Dali::Toolkit::TextField *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TextField const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TextField *) &(arg1)->operator =((Dali::Toolkit::TextField const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextField(void * jarg1) {
  Dali::Toolkit::TextField *arg1 = (Dali::Toolkit::TextField *) 0 ;

  arg1 = (Dali::Toolkit::TextField *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextField_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::TextField result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::TextField::DownCast(arg1);
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

  jresult = new Dali::Toolkit::TextField((const Dali::Toolkit::TextField &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextField_TextChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextField *arg1 = (Dali::Toolkit::TextField *) 0 ;
  Dali::Toolkit::TextField::TextChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextField *)jarg1;
  {
    try {
      result = (Dali::Toolkit::TextField::TextChangedSignalType *) &(arg1)->TextChangedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextField_MaxLengthReachedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextField *arg1 = (Dali::Toolkit::TextField *) 0 ;
  Dali::Toolkit::TextField::MaxLengthReachedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextField *)jarg1;
  {
    try {
      result = (Dali::Toolkit::TextField::MaxLengthReachedSignalType *) &(arg1)->MaxLengthReachedSignal();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextField_InputStyleChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextField *arg1 = (Dali::Toolkit::TextField *) 0 ;
  Dali::Toolkit::TextField::InputStyleChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextField *)jarg1;
  {
    try {
      result = (Dali::Toolkit::TextField::InputStyleChangedSignalType *) &(arg1)->InputStyleChangedSignal();
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TextFieldSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Toolkit::TextField) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::TextField) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_TextFieldSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::TextField) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::TextField) > const *)arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextFieldSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextField) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextField) = (void (*)(Dali::Toolkit::TextField)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextField))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextFieldSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextField) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextField) = (void (*)(Dali::Toolkit::TextField)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextField))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextFieldSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextField) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *) 0 ;
  Dali::Toolkit::TextField arg2 ;
  Dali::Toolkit::TextField *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *)jarg1;
  argp2 = (Dali::Toolkit::TextField *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TextField", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextField_SP__Sg__Emit(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextFieldSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::TextField) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::TextField) > *)new Dali::Signal< void (Dali::Toolkit::TextField) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextFieldSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::TextField) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextField) > *)jarg1;
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

SWIGEXPORT int SWIGSTDCALL CSharp_TextField_Property_ENABLE_SHIFT_SELECTION_get()
{
  return (int)Dali::Toolkit::DevelTextField::Property::ENABLE_SHIFT_SELECTION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextField_Property_MATCH_SYSTEM_LANGUAGE_DIRECTION_get() {
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextField::Property::MATCH_SYSTEM_LANGUAGE_DIRECTION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextField_GetInputMethodContext(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextField *arg1 = (Dali::Toolkit::TextField *) 0 ;
  Dali::InputMethodContext result;

  arg1 = (Dali::Toolkit::TextField *)jarg1;
  {
    try {
      result = Dali::Toolkit::DevelTextField::GetInputMethodContext(*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = new Dali::InputMethodContext((const Dali::InputMethodContext &)result);
  return jresult;
}

#ifdef __cplusplus
}
#endif

