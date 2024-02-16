/*
 * Copyright (c) 2024 Samsung Electronics Co., Ltd.
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

#include <dali-toolkit/devel-api/accessibility-manager/accessibility-manager.h>
#include <dali-toolkit/devel-api/builder/builder.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/controls/control-depth-index-ranges.h>
#include <dali-toolkit/devel-api/controls/gaussian-blur-view/gaussian-blur-view.h>
#include <dali-toolkit/devel-api/controls/page-turn-view/page-factory.h>
#include <dali-toolkit/devel-api/controls/page-turn-view/page-turn-view.h>
#include <dali-toolkit/devel-api/controls/page-turn-view/page-turn-landscape-view.h>
#include <dali-toolkit/devel-api/controls/page-turn-view/page-turn-portrait-view.h>
#include <dali-toolkit/devel-api/controls/alignment/alignment.h>
#include <dali-toolkit/devel-api/controls/scroll-bar/scroll-bar.h>
#include <dali-toolkit/devel-api/controls/table-view/table-view.h>
#include <dali-toolkit/devel-api/controls/tooltip/tooltip-properties.h>
#include <dali-toolkit/devel-api/controls/video-view/video-view-devel.h>
#include <dali-toolkit/devel-api/focus-manager/keyinput-focus-manager.h>
#include <dali-toolkit/devel-api/visual-factory/visual-base.h>
#include <dali-toolkit/devel-api/visual-factory/visual-factory.h>
#include <dali-toolkit/devel-api/visual-factory/transition-data.h>
#include <dali-toolkit/devel-api/visuals/image-visual-properties-devel.h>
#include <dali-toolkit/devel-api/text/rendering-backend.h>

#include <dali-toolkit/devel-api/focus-manager/keyboard-focus-manager-devel.h>

#include <dali-toolkit/public-api/controls/scrollable/item-view/item-view-declarations.h>
#include <dali-toolkit/public-api/visuals/visual-properties.h>
#include <dali-toolkit/public-api/visuals/text-visual-properties.h>
#include <dali-toolkit/public-api/visuals/image-visual-properties.h>
#include <dali-toolkit/public-api/image-loader/image.h>
#include <dali-toolkit/public-api/image-loader/image-url.h>

#include <dali/devel-api/update/update-proxy.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>
#include <dali-csharp-binder/common/slim-custom-view-impl.h>

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

// SWIGINTERN - the relevant parts of the generated code can be seen the below.

SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__Empty(Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__GetConnectionCount(Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__Connect(Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *self,bool (*func)(Dali::Toolkit::AccessibilityManager &))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__Disconnect(Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *self,bool (*func)(Dali::Toolkit::AccessibilityManager &))
{
  self->Disconnect( func );
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__Emit(Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *self,Dali::Toolkit::AccessibilityManager &arg)
{
  return self->Emit( arg );
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__Empty(Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__Connect(Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *self,void (*func)(Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__Disconnect(Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *self,void (*func)(Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection))
{
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__Emit(Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *self,Dali::Actor arg1,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection arg2)
{
        /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg1, arg2 );
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *self,void (*func)(Dali::Toolkit::StyleManager,Dali::StyleChange::Type))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *self,void (*func)(Dali::Toolkit::StyleManager,Dali::StyleChange::Type))
{
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *self,Dali::Toolkit::StyleManager arg1,Dali::StyleChange::Type arg2)
{
        /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg1, arg2 );
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *self,void (*func)(Dali::Toolkit::GaussianBlurView))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *self,void (*func)(Dali::Toolkit::GaussianBlurView))
{
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *self,Dali::Toolkit::GaussianBlurView arg)
{
          /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg );
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *self,void (*func)(Dali::Toolkit::PageTurnView,unsigned int,bool))
{
  return self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *self,void (*func)(Dali::Toolkit::PageTurnView,unsigned int,bool))
{
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *self,Dali::Toolkit::PageTurnView arg1,unsigned int arg2,bool arg3)
{
          /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg1, arg2, arg3 );
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::PageTurnView) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::PageTurnView) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::PageTurnView) > *self,void (*func)(Dali::Toolkit::PageTurnView))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::PageTurnView) > *self,void (*func)(Dali::Toolkit::PageTurnView))
{
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::PageTurnView) > *self,Dali::Toolkit::PageTurnView arg)
{
          /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg );
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *self,void (*func)(Dali::Toolkit::ScrollView::SnapEvent const &))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *self,void (*func)(Dali::Toolkit::ScrollView::SnapEvent const &))
{
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *self,Dali::Toolkit::ScrollView::SnapEvent const &arg)
{
          /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg );
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__Empty(Dali::Signal< bool (Dali::Toolkit::Control,Dali::KeyEvent const &) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< bool (Dali::Toolkit::Control,Dali::KeyEvent const &) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__Connect(Dali::Signal< bool (Dali::Toolkit::Control,Dali::KeyEvent const &) > *self,bool (*func)(Dali::Toolkit::Control,Dali::KeyEvent const &))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< bool (Dali::Toolkit::Control,Dali::KeyEvent const &) > *self,bool (*func)(Dali::Toolkit::Control,Dali::KeyEvent const &))
{
  self->Disconnect( func );
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Toolkit_Control_Sc_Dali_KeyEvent_SS_const_SA__SP__Sg__Emit(Dali::Signal< bool (Dali::Toolkit::Control,Dali::KeyEvent const &) > *self,Dali::Toolkit::Control arg1,Dali::KeyEvent const &arg2)
{
  return self->Emit( arg1, arg2 );
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::Control) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::Control) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::Control) > *self,void (*func)(Dali::Toolkit::Control))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::Control) > *self,void (*func)(Dali::Toolkit::Control))
{
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::Control) > *self,Dali::Toolkit::Control arg)
{
          /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg );
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::VideoView &) > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::VideoView &) > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::VideoView &) > *self,void (*func)(Dali::Toolkit::VideoView &))
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::VideoView &) > *self,void (*func)(Dali::Toolkit::VideoView &))
{
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::VideoView &) > *self,Dali::Toolkit::VideoView &arg)
{
          /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Vector2 const &) > const *self){
         return self->Empty();
      }
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Vector2 const &) > const *self){
        return self->GetConnectionCount();
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Vector2 const &) > *self,void (*func)(Dali::Vector2 const &)){
          self->Connect( func );
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Vector2 const &) > *self,void (*func)(Dali::Vector2 const &)){
          self->Disconnect( func );
      }
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Vector2 const &) > *self,Dali::Vector2 const &arg){
          /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
/*@SWIG@*/ self->Emit( arg );
      }


using namespace Dali;
using namespace Dali::Toolkit;

#ifdef __cplusplus
extern "C" {
#endif


// Property

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VISUAL_PROPERTY_TYPE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Visual::Property::TYPE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VISUAL_PROPERTY_SHADER_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Visual::Property::SHADER;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VISUAL_SHADER_VERTEX_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Visual::Shader::Property::VERTEX_SHADER;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VISUAL_SHADER_FRAGMENT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Visual::Shader::Property::FRAGMENT_SHADER;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VISUAL_SHADER_SUBDIVIDE_GRID_X_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Visual::Shader::Property::SUBDIVIDE_GRID_X;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VISUAL_SHADER_SUBDIVIDE_GRID_Y_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Visual::Shader::Property::SUBDIVIDE_GRID_Y;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VISUAL_SHADER_HINTS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Visual::Shader::Property::HINTS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_BORDER_VISUAL_COLOR_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::BorderVisual::Property::COLOR;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_BORDER_VISUAL_SIZE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::BorderVisual::Property::SIZE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_BORDER_VISUAL_ANTI_ALIASING_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::BorderVisual::Property::ANTI_ALIASING;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_COLOR_VISUAL_MIX_COLOR_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ColorVisual::Property::MIX_COLOR;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GRADIENT_VISUAL_START_POSITION_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::GradientVisual::Property::START_POSITION;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GRADIENT_VISUAL_END_POSITION_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::GradientVisual::Property::END_POSITION;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GRADIENT_VISUAL_CENTER_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::GradientVisual::Property::CENTER;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GRADIENT_VISUAL_RADIUS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::GradientVisual::Property::RADIUS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GRADIENT_VISUAL_STOP_OFFSET_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::GradientVisual::Property::STOP_OFFSET;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GRADIENT_VISUAL_STOP_COLOR_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::GradientVisual::Property::STOP_COLOR;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GRADIENT_VISUAL_UNITS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::GradientVisual::Property::UNITS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GRADIENT_VISUAL_SPREAD_METHOD_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::GradientVisual::Property::SPREAD_METHOD;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_URL_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::URL;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_ALPHA_MASK_URL_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::ALPHA_MASK_URL;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_BATCH_SIZE_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::ImageVisual::Property::BATCH_SIZE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_CACHE_SIZE_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::ImageVisual::Property::CACHE_SIZE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_FRAME_DELAY_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::ImageVisual::Property::FRAME_DELAY;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_LOOP_COUNT_get() {
  return (int)Dali::Toolkit::DevelImageVisual::Property::LOOP_COUNT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_MASK_CONTENT_SCALE_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::ImageVisual::Property::MASK_CONTENT_SCALE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_CROP_TO_MASK_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::ImageVisual::Property::CROP_TO_MASK;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_FITTING_MODE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::FITTING_MODE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_SAMPLING_MODE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::SAMPLING_MODE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_RELEASE_POLICY_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::ImageVisual::Property::RELEASE_POLICY;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_LOAD_POLICY_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::ImageVisual::Property::LOAD_POLICY;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_ORIENTATION_CORRECTION_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::ImageVisual::Property::ORIENTATION_CORRECTION;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_AUXILIARY_IMAGE_URL_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::DevelImageVisual::Property::AUXILIARY_IMAGE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_AUXILIARY_IMAGE_ALPHA_get() {
  int jresult ;
  int result;
  {
    try
    {
      result = (int)Dali::Toolkit::DevelImageVisual::Property::AUXILIARY_IMAGE_ALPHA;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}



SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_DESIRED_WIDTH_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::DESIRED_WIDTH;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_DESIRED_HEIGHT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::DESIRED_HEIGHT;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_SYNCHRONOUS_LOADING_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::SYNCHRONOUS_LOADING;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_BORDER_ONLY_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::BORDER_ONLY;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_PIXEL_AREA_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::PIXEL_AREA;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_WRAP_MODE_U_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::WRAP_MODE_U;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_WRAP_MODE_V_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::WRAP_MODE_V;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_IMAGE_VISUAL_USE_FIXED_CACHE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::DevelImageVisual::Property::USE_FIXED_CACHE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Image_Visual_BORDER_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::ImageVisual::Property::BORDER;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MESH_VISUAL_OBJECT_URL_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::MeshVisual::Property::OBJECT_URL;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MESH_VISUAL_MATERIAL_URL_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::MeshVisual::Property::MATERIAL_URL;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MESH_VISUAL_TEXTURES_PATH_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::MeshVisual::Property::TEXTURES_PATH;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MESH_VISUAL_SHADING_MODE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::MeshVisual::Property::SHADING_MODE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MESH_VISUAL_USE_MIPMAPPING_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::MeshVisual::Property::USE_MIPMAPPING;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MESH_VISUAL_USE_SOFT_NORMALS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::MeshVisual::Property::USE_SOFT_NORMALS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MESH_VISUAL_LIGHT_POSITION_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::MeshVisual::Property::LIGHT_POSITION;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_SHAPE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::SHAPE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_MIX_COLOR_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::MIX_COLOR;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_SLICES_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::SLICES;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_STACKS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::STACKS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_SCALE_TOP_RADIUS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::SCALE_TOP_RADIUS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_SCALE_BOTTOM_RADIUS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::SCALE_BOTTOM_RADIUS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_SCALE_HEIGHT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::SCALE_HEIGHT;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_SCALE_RADIUS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::SCALE_RADIUS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_SCALE_DIMENSIONS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::SCALE_DIMENSIONS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_BEVEL_PERCENTAGE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::BEVEL_PERCENTAGE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_BEVEL_SMOOTHNESS_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::BEVEL_SMOOTHNESS;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PRIMITIVE_VISUAL_LIGHT_POSITION_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::PrimitiveVisual::Property::LIGHT_POSITION;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_TEXT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::TEXT;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_FONT_FAMILY_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::FONT_FAMILY;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_FONT_STYLE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::FONT_STYLE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_POINT_SIZE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::POINT_SIZE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_MULTI_LINE_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::MULTI_LINE;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_HORIZONTAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::HORIZONTAL_ALIGNMENT;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_VERTICAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::VERTICAL_ALIGNMENT;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_TEXT_COLOR_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::TEXT_COLOR;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TEXT_VISUAL_ENABLE_MARKUP_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::TextVisual::Property::ENABLE_MARKUP;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_CONTENT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::CONTENT;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_LAYOUT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::LAYOUT;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_WAIT_TIME_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::WAIT_TIME;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_BACKGROUND_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::BACKGROUND;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_TAIL_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::TAIL;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_POSITION_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::POSITION;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_HOVER_POINT_OFFSET_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::HOVER_POINT_OFFSET;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_MOVEMENT_THRESHOLD_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::MOVEMENT_THRESHOLD;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_DISAPPEAR_ON_MOVEMENT_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Property::DISAPPEAR_ON_MOVEMENT;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_BACKGROUND_VISUAL_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Background::Property::VISUAL;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_BACKGROUND_BORDER_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Background::Property::BORDER;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_TAIL_VISIBILITY_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Tail::Property::VISIBILITY;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_TAIL_ABOVE_VISUAL_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Tail::Property::ABOVE_VISUAL;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TOOLTIP_TAIL_BELOW_VISUAL_get() {
  int jresult ;
  int result;

  {
    try {
      result = (int)Dali::Toolkit::Tooltip::Tail::Property::BELOW_VISUAL;
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_STYLE_NAME_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Control::Property::STYLE_NAME;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_KEY_INPUT_FOCUS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Control::Property::KEY_INPUT_FOCUS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_BACKGROUND_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Control::Property::BACKGROUND;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_MARGIN_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Control::Property::MARGIN;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_PADDING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Control::Property::PADDING;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_SHADOW_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DevelControl::Property::SHADOW;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_ACCESSIBILITY_NAME_get() {
  return (int)Dali::Toolkit::DevelControl::Property::ACCESSIBILITY_NAME;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_ACCESSIBILITY_DESCRIPTION_get() {
  return (int)Dali::Toolkit::DevelControl::Property::ACCESSIBILITY_DESCRIPTION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_ACCESSIBILITY_TRANSLATION_DOMAIN_get() {
  return (int)Dali::Toolkit::DevelControl::Property::ACCESSIBILITY_TRANSLATION_DOMAIN;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_ACCESSIBILITY_ROLE_get() {
  return (int)Dali::Toolkit::DevelControl::Property::ACCESSIBILITY_ROLE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_ACCESSIBILITY_HIGHLIGHTABLE_get() {
  return (int)Dali::Toolkit::DevelControl::Property::ACCESSIBILITY_HIGHLIGHTABLE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_ACCESSIBILITY_ATTRIBUTES_get() {
  return (int)Dali::Toolkit::DevelControl::Property::ACCESSIBILITY_ATTRIBUTES;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_Property_ACCESSIBILITY_HIDDEN_get() {
  return (int)Dali::Toolkit::DevelControl::Property::ACCESSIBILITY_HIDDEN;
}

SWIGEXPORT int SWIGSTDCALL  CSharp_Dali_View_Property_AUTOMATION_ID_get() {
  return (int)Dali::Toolkit::DevelControl::Property::AUTOMATION_ID;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_Property_CONTENT_DIRECTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::Property::CONTENT_DIRECTION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_Property_FLEX_DIRECTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::Property::FLEX_DIRECTION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_Property_FLEX_WRAP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::Property::FLEX_WRAP;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_Property_JUSTIFY_CONTENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::Property::JUSTIFY_CONTENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_Property_ALIGN_ITEMS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::Property::ALIGN_ITEMS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_Property_ALIGN_CONTENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::Property::ALIGN_CONTENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FlexContainer_Property() {
  void * jresult ;
  Dali::Toolkit::FlexContainer::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::FlexContainer::Property *)new Dali::Toolkit::FlexContainer::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FlexContainer_Property(void * jarg1) {
  Dali::Toolkit::FlexContainer::Property *arg1 = (Dali::Toolkit::FlexContainer::Property *) 0 ;

  arg1 = (Dali::Toolkit::FlexContainer::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_ChildProperty_FLEX_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::ChildProperty::FLEX;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_ChildProperty_ALIGN_SELF_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::ChildProperty::ALIGN_SELF;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexContainer_ChildProperty_FLEX_MARGIN_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexContainer::ChildProperty::FLEX_MARGIN;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImageView_Property_IMAGE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ImageView::Property::IMAGE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImageView_Property_PRE_MULTIPLIED_ALPHA_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ImageView::Property::PRE_MULTIPLIED_ALPHA;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImageView_Property_PIXEL_AREA_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ImageView::Property::PIXEL_AREA;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImageView_Property_PLACEHOLDER_IMAGE_get() {
  int jresult;
  int result;
  result = (int)Dali::Toolkit::ImageView::Property::PLACEHOLDER_IMAGE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ImageView_Property_TRANSITION_EFFECT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ImageView::Property::ENABLE_TRANSITION_EFFECT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_SCROLL_DIRECTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::SCROLL_DIRECTION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_INDICATOR_HEIGHT_POLICY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::INDICATOR_HEIGHT_POLICY;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_INDICATOR_FIXED_HEIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::INDICATOR_FIXED_HEIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_INDICATOR_SHOW_DURATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::INDICATOR_SHOW_DURATION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_INDICATOR_HIDE_DURATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::INDICATOR_HIDE_DURATION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_SCROLL_POSITION_INTERVALS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::SCROLL_POSITION_INTERVALS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_INDICATOR_MINIMUM_HEIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::INDICATOR_MINIMUM_HEIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_INDICATOR_START_PADDING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::INDICATOR_START_PADDING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_Property_INDICATOR_END_PADDING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollBar::Property::INDICATOR_END_PADDING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_OVERSHOOT_EFFECT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::OVERSHOOT_EFFECT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_OVERSHOOT_ANIMATION_SPEED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::OVERSHOOT_ANIMATION_SPEED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_OVERSHOOT_ENABLED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::OVERSHOOT_ENABLED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_OVERSHOOT_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::OVERSHOOT_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_SCROLL_TO_ALPHA_FUNCTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::SCROLL_TO_ALPHA_FUNCTION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_SCROLL_RELATIVE_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::SCROLL_RELATIVE_POSITION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_SCROLL_POSITION_MIN_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::SCROLL_POSITION_MIN;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_SCROLL_POSITION_MIN_X_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::SCROLL_POSITION_MIN_X;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_SCROLL_POSITION_MIN_Y_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::SCROLL_POSITION_MIN_Y;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_SCROLL_POSITION_MAX_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::SCROLL_POSITION_MAX;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_SCROLL_POSITION_MAX_X_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::SCROLL_POSITION_MAX_X;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_SCROLL_POSITION_MAX_Y_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::SCROLL_POSITION_MAX_Y;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_CAN_SCROLL_VERTICAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::CAN_SCROLL_VERTICAL;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Scrollable_Property_CAN_SCROLL_HORIZONTAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::Scrollable::Property::CAN_SCROLL_HORIZONTAL;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_MINIMUM_SWIPE_SPEED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::MINIMUM_SWIPE_SPEED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_MINIMUM_SWIPE_DISTANCE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::MINIMUM_SWIPE_DISTANCE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_WHEEL_SCROLL_DISTANCE_STEP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::WHEEL_SCROLL_DISTANCE_STEP;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_SNAP_TO_ITEM_ENABLED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::SNAP_TO_ITEM_ENABLED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_REFRESH_INTERVAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::REFRESH_INTERVAL;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_LAYOUT_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::LAYOUT_POSITION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_SCROLL_SPEED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::SCROLL_SPEED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_OVERSHOOT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::OVERSHOOT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_SCROLL_DIRECTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::SCROLL_DIRECTION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_LAYOUT_ORIENTATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::LAYOUT_ORIENTATION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_SCROLL_CONTENT_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::SCROLL_CONTENT_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_WRAP_ENABLED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::WRAP_ENABLED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_PANNING_ENABLED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::PANNING_ENABLED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_AXIS_AUTO_LOCK_ENABLED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::AXIS_AUTO_LOCK_ENABLED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_WHEEL_SCROLL_DISTANCE_STEP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::WHEEL_SCROLL_DISTANCE_STEP;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_MODE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_POSITION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_PRE_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_PRE_POSITION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_PRE_POSITION_X_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_PRE_POSITION_X;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_PRE_POSITION_Y_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_PRE_POSITION_Y;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_PRE_POSITION_MAX_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_PRE_POSITION_MAX;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_PRE_POSITION_MAX_X_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_PRE_POSITION_MAX_X;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_PRE_POSITION_MAX_Y_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_PRE_POSITION_MAX_Y;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_OVERSHOOT_X_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::OVERSHOOT_X;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_OVERSHOOT_Y_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::OVERSHOOT_Y;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_FINAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_FINAL;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_FINAL_X_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_FINAL_X;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_FINAL_Y_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_FINAL_Y;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_WRAP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::WRAP;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_PANNING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::PANNING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLLING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLLING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_DOMAIN_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_DOMAIN_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_DOMAIN_SIZE_X_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_DOMAIN_SIZE_X;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_DOMAIN_SIZE_Y_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_DOMAIN_SIZE_Y;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_DOMAIN_OFFSET_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_DOMAIN_OFFSET;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_SCROLL_POSITION_DELTA_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::SCROLL_POSITION_DELTA;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_Property_START_PAGE_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ScrollView::Property::START_PAGE_POSITION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_Property_ROWS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::Property::ROWS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_Property_COLUMNS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::Property::COLUMNS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_Property_CELL_PADDING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::Property::CELL_PADDING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_Property_LAYOUT_ROWS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::Property::LAYOUT_ROWS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_Property_LAYOUT_COLUMNS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::Property::LAYOUT_COLUMNS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_ChildProperty_CELL_INDEX_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::ChildProperty::CELL_INDEX;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_ChildProperty_ROW_SPAN_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::ChildProperty::ROW_SPAN;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_ChildProperty_COLUMN_SPAN_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::ChildProperty::COLUMN_SPAN;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_ChildProperty_CELL_HORIZONTAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::ChildProperty::CELL_HORIZONTAL_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TableView_ChildProperty_CELL_VERTICAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TableView::ChildProperty::CELL_VERTICAL_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_DEFAULT_RENDERING_BACKEND_get() {
  unsigned int jresult ;
  unsigned int result;

  result = (unsigned int)(unsigned int)Dali::Toolkit::DevelText::DEFAULT_RENDERING_BACKEND;
  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_TEXT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::TEXT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_FONT_FAMILY_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::FONT_FAMILY;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_FONT_STYLE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::FONT_STYLE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_POINT_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::POINT_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_MULTI_LINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::MULTI_LINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_HORIZONTAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::HORIZONTAL_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_VERTICAL_ALIGNMENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::VERTICAL_ALIGNMENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_TEXT_COLOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::TEXT_COLOR;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_ENABLE_MARKUP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::ENABLE_MARKUP;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_ENABLE_AUTO_SCROLL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::ENABLE_AUTO_SCROLL;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_AUTO_SCROLL_SPEED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::AUTO_SCROLL_SPEED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_AUTO_SCROLL_LOOP_COUNT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::AUTO_SCROLL_LOOP_COUNT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_AUTO_SCROLL_GAP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::AUTO_SCROLL_GAP;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_LINE_SPACING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::LINE_SPACING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_UNDERLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::UNDERLINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_SHADOW_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::SHADOW;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_EMBOSS_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::EMBOSS;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_OUTLINE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::TextLabel::Property::OUTLINE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_VIDEO_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::VideoView::Property::VIDEO;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_LOOPING_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::VideoView::Property::LOOPING;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_MUTED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::VideoView::Property::MUTED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_VOLUME_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::VideoView::Property::VOLUME;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VideoView_Property_UNDERLAY_get() {
  int result;

  result = (int)Dali::Toolkit::VideoView::Property::UNDERLAY;

  return result;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PageTurnView_Property_VIEW_PAGE_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::PageTurnView::Property::VIEW_PAGE_SIZE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PageTurnView_Property_CURRENT_PAGE_ID_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::PageTurnView::Property::CURRENT_PAGE_ID;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PageTurnView_Property_SPINE_SHADOW_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::PageTurnView::Property::SPINE_SHADOW;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Renderer_Range_BACKGROUND_EFFECT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DepthIndex::Ranges::BACKGROUND_EFFECT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Renderer_Range_BACKGROUND_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DepthIndex::Ranges::BACKGROUND;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Renderer_Range_CONTENT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DepthIndex::Ranges::CONTENT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Renderer_Range_DECORATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DepthIndex::Ranges::DECORATION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Renderer_Range_FOREGROUND_EFFECT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::DepthIndex::FOREGROUND_EFFECT;
  jresult = (int)result;
  return jresult;
}


// Method


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Builder() {
  void * jresult ;
  Dali::Toolkit::Builder *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Builder *)new Dali::Toolkit::Builder();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_New() {
  void * jresult ;
  Dali::Toolkit::Builder result;

  {
    try {
      result = Dali::Toolkit::Builder::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Builder((const Dali::Toolkit::Builder &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Builder(void * jarg1) {
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Builder_LoadFromString__SWIG_0(void * jarg1, char * jarg2, int jarg3) {
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Toolkit::Builder::UIFormat arg3 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Toolkit::Builder::UIFormat)jarg3;
  {
    try {
      (arg1)->LoadFromString((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Builder_LoadFromString__SWIG_1(void * jarg1, char * jarg2) {
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->LoadFromString((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Builder_AddConstants(void * jarg1, void * jarg2) {
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  Dali::Property::Map *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->AddConstants((Dali::Property::Map const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Builder_AddConstant(void * jarg1, char * jarg2, void * jarg3) {
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Property::Value *arg3 = 0 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Property::Value *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Value const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->AddConstant((std::string const &)*arg2,(Dali::Property::Value const &)*arg3);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_GetConstants(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  Dali::Property::Map *result = 0 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  {
    try {
      result = (Dali::Property::Map *) &((Dali::Toolkit::Builder const *)arg1)->GetConstants();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_GetConstant(void * jarg1, char * jarg2) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Property::Value *result = 0 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (Dali::Property::Value *) &((Dali::Toolkit::Builder const *)arg1)->GetConstant((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_CreateAnimation__SWIG_0(void * jarg1, char * jarg2) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Animation result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (arg1)->CreateAnimation((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Animation((const Dali::Animation &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_CreateAnimation__SWIG_1(void * jarg1, char * jarg2, void * jarg3) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Property::Map *arg3 = 0 ;
  Dali::Animation result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Property::Map *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (arg1)->CreateAnimation((std::string const &)*arg2,(Dali::Property::Map const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Animation((const Dali::Animation &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_CreateAnimation__SWIG_2(void * jarg1, char * jarg2, void * jarg3) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Actor arg3 ;
  Dali::Actor *argp3 ;
  Dali::Animation result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::Actor *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = (arg1)->CreateAnimation((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Animation((const Dali::Animation &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_CreateAnimation__SWIG_3(void * jarg1, char * jarg2, void * jarg3, void * jarg4) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Property::Map *arg3 = 0 ;
  Dali::Actor arg4 ;
  Dali::Actor *argp4 ;
  Dali::Animation result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Property::Map *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return 0;
  }
  argp4 = (Dali::Actor *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg4 = *argp4;
  {
    try {
      result = (arg1)->CreateAnimation((std::string const &)*arg2,(Dali::Property::Map const &)*arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Animation((const Dali::Animation &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_Create__SWIG_0(void * jarg1, char * jarg2) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::BaseHandle result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (arg1)->Create((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::BaseHandle((const Dali::BaseHandle &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_Create__SWIG_1(void * jarg1, char * jarg2, void * jarg3) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Property::Map *arg3 = 0 ;
  Dali::BaseHandle result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Property::Map *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (arg1)->Create((std::string const &)*arg2,(Dali::Property::Map const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::BaseHandle((const Dali::BaseHandle &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_CreateFromJson(void * jarg1, char * jarg2) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::BaseHandle result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (arg1)->CreateFromJson((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::BaseHandle((const Dali::BaseHandle &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Builder_ApplyStyle(void * jarg1, char * jarg2, void * jarg3) {
  bool jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Handle *arg3 = 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Handle *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)(arg1)->ApplyStyle((std::string const &)*arg2,*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Builder_ApplyFromJson(void * jarg1, void * jarg2, char * jarg3) {
  bool jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  Dali::Handle *arg2 = 0 ;
  std::string *arg3 = 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  arg2 = (Dali::Handle *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & type is null", 0);
    return 0;
  }
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = (bool)(arg1)->ApplyFromJson(*arg2,(std::string const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Builder_AddActors__SWIG_0(void * jarg1, void * jarg2) {
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->AddActors(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Builder_AddActors__SWIG_1(void * jarg1, char * jarg2, void * jarg3) {
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Actor arg3 ;
  Dali::Actor *argp3 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::Actor *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->AddActors((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Builder_CreateRenderTask(void * jarg1, char * jarg2) {
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->CreateRenderTask((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_GetPath(void * jarg1, char * jarg2) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Path result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (arg1)->GetPath((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Path((const Dali::Path &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_GetPathConstrainer(void * jarg1, char * jarg2) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::PathConstrainer result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (arg1)->GetPathConstrainer((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PathConstrainer((const Dali::PathConstrainer &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_GetLinearConstrainer(void * jarg1, char * jarg2) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  std::string *arg2 = 0 ;
  Dali::LinearConstrainer result;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (arg1)->GetLinearConstrainer((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::LinearConstrainer((const Dali::LinearConstrainer &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Builder_QuitSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Builder *arg1 = (Dali::Toolkit::Builder *) 0 ;
  Dali::Toolkit::Builder::BuilderSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::Builder *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Builder::BuilderSignalType *) &(arg1)->QuitSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TransitionData__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::TransitionData *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TransitionData *)new Dali::Toolkit::TransitionData();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TransitionData(void * jarg1) {
  Dali::Toolkit::TransitionData *arg1 = (Dali::Toolkit::TransitionData *) 0 ;

  arg1 = (Dali::Toolkit::TransitionData *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TransitionData_New__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Property::Map *arg1 = 0 ;
  Dali::Toolkit::TransitionData result;

  arg1 = (Dali::Property::Map *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Toolkit::TransitionData::New((Dali::Property::Map const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TransitionData((const Dali::Toolkit::TransitionData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TransitionData_New__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Property::Array *arg1 = 0 ;
  Dali::Toolkit::TransitionData result;

  arg1 = (Dali::Property::Array *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Array const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Toolkit::TransitionData::New((Dali::Property::Array const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TransitionData((const Dali::Toolkit::TransitionData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TransitionData_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::TransitionData result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::TransitionData::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TransitionData((const Dali::Toolkit::TransitionData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TransitionData__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TransitionData *arg1 = 0 ;
  Dali::Toolkit::TransitionData *result = 0 ;

  arg1 = (Dali::Toolkit::TransitionData *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TransitionData const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TransitionData *)new Dali::Toolkit::TransitionData((Dali::Toolkit::TransitionData const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TransitionData_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::TransitionData *arg1 = (Dali::Toolkit::TransitionData *) 0 ;
  Dali::Toolkit::TransitionData *arg2 = 0 ;
  Dali::Toolkit::TransitionData *result = 0 ;

  arg1 = (Dali::Toolkit::TransitionData *)jarg1;
  arg2 = (Dali::Toolkit::TransitionData *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TransitionData const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TransitionData *) &(arg1)->operator =((Dali::Toolkit::TransitionData const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_TransitionData_Count(void * jarg1) {
  unsigned long jresult ;
  Dali::Toolkit::TransitionData *arg1 = (Dali::Toolkit::TransitionData *) 0 ;
  size_t result;

  arg1 = (Dali::Toolkit::TransitionData *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::TransitionData const *)arg1)->Count();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TransitionData_GetAnimatorAt(void * jarg1, unsigned long jarg2) {
  void * jresult ;
  Dali::Toolkit::TransitionData *arg1 = (Dali::Toolkit::TransitionData *) 0 ;
  size_t arg2 ;
  Dali::Property::Map result;

  arg1 = (Dali::Toolkit::TransitionData *)jarg1;
  arg2 = (size_t)jarg2;
  {
    try {
      result = (arg1)->GetAnimatorAt(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Property::Map((const Dali::Property::Map &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_New() {
  void * jresult ;
  Dali::Toolkit::Control result;

  {
    try {
      result = Dali::Toolkit::Internal::Control::New(Dali::Toolkit::Internal::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SetStyleName(void * jarg1, char * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetStyleName((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_ViewImpl_GetStyleName(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (std::string *) &((Dali::Toolkit::Internal::Control const *)arg1)->GetStyleName();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SetBackgroundColor(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Vector4 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetBackgroundColor((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_GetBackgroundColor(void * jarg1) {
  void * jresult ;
  Dali::Handle *arg1 = (Dali::Handle *) 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Handle *)jarg1;
  {
    try {
      Property::Map* resultMap = ((arg1)->GetProperty( Control::Property::BACKGROUND )).GetMap();
      if (resultMap)
      {
        Dali::Property::Value* type = resultMap->Find( Toolkit::Visual::Property::TYPE );
        if(type && type->Get<int>() == Visual::COLOR )
        {
          Dali::Property::Value* value = resultMap->Find( ColorVisual::Property::MIX_COLOR );
          if (value)
          {
            result = value->Get<Vector4>();
          }
        }
      }
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SetBackground(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Property::Map *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetBackground((Dali::Property::Map const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_ClearBackground(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->ClearBackground();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_EnableGestureDetection(void * jarg1, int jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::GestureType::Value arg2 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::GestureType::Value)jarg2;
  {
    try {
      (arg1)->EnableGestureDetection(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_DisableGestureDetection(void * jarg1, int jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::GestureType::Value arg2 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::GestureType::Value)jarg2;
  {
    try {
      (arg1)->DisableGestureDetection(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_GetPinchGestureDetector(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::PinchGestureDetector result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::Control const *)arg1)->GetPinchGestureDetector();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PinchGestureDetector((const Dali::PinchGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_GetPanGestureDetector(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::PanGestureDetector result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::Control const *)arg1)->GetPanGestureDetector();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PanGestureDetector((const Dali::PanGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_GetTapGestureDetector(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::TapGestureDetector result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::Control const *)arg1)->GetTapGestureDetector();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::TapGestureDetector((const Dali::TapGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_GetLongPressGestureDetector(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::LongPressGestureDetector result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::Control const *)arg1)->GetLongPressGestureDetector();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::LongPressGestureDetector((const Dali::LongPressGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SetKeyboardNavigationSupport(void * jarg1, bool jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetKeyboardNavigationSupport(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_IsKeyboardNavigationSupported(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->IsKeyboardNavigationSupported();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SetKeyInputFocus(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->SetKeyInputFocus();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_HasKeyInputFocus(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->HasKeyInputFocus();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_ClearKeyInputFocus(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->ClearKeyInputFocus();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SetAsKeyboardFocusGroup(void * jarg1, bool jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetAsKeyboardFocusGroup(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_IsKeyboardFocusGroup(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->IsKeyboardFocusGroup();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnInitialize(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->OnInitialize();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnInitializeSwigExplicitViewImpl(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnInitialize();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnStyleChange(void * jarg1, void * jarg2, int jarg3) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Toolkit::StyleManager arg2 ;
  Dali::StyleChange::Type arg3 ;
  Dali::Toolkit::StyleManager *argp2 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  argp2 = (Dali::Toolkit::StyleManager *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::StyleManager", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::StyleChange::Type)jarg3;
  {
    try {
      (arg1)->OnStyleChange(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnStyleChangeSwigExplicitViewImpl(void * jarg1, void * jarg2, int jarg3) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Toolkit::StyleManager arg2 ;
  Dali::StyleChange::Type arg3 ;
  Dali::Toolkit::StyleManager *argp2 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  argp2 = (Dali::Toolkit::StyleManager *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::StyleManager", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::StyleChange::Type)jarg3;
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnStyleChange(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnAccessibilityActivated(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->OnAccessibilityActivated();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnAccessibilityActivatedSwigExplicitViewImpl(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->Dali::Toolkit::Internal::Control::OnAccessibilityActivated();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnAccessibilityPan(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::PanGesture arg2 ;
  Dali::PanGesture *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  argp2 = (Dali::PanGesture *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PanGesture", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (bool)(arg1)->OnAccessibilityPan(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnAccessibilityPanSwigExplicitViewImpl(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::PanGesture arg2 ;
  Dali::PanGesture *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  argp2 = (Dali::PanGesture *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PanGesture", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (bool)(arg1)->Dali::Toolkit::Internal::Control::OnAccessibilityPan(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnAccessibilityValueChange(void * jarg1, bool jarg2) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool arg2 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      result = (bool)(arg1)->OnAccessibilityValueChange(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnAccessibilityValueChangeSwigExplicitViewImpl(void * jarg1, bool jarg2) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool arg2 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      result = (bool)(arg1)->Dali::Toolkit::Internal::Control::OnAccessibilityValueChange(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnAccessibilityZoom(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->OnAccessibilityZoom();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnAccessibilityZoomSwigExplicitViewImpl(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->Dali::Toolkit::Internal::Control::OnAccessibilityZoom();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnKeyInputFocusGained(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->OnKeyInputFocusGained();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnKeyInputFocusGainedSwigExplicitViewImpl(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnKeyInputFocusGained();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnKeyInputFocusLost(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->OnKeyInputFocusLost();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnKeyInputFocusLostSwigExplicitViewImpl(void * jarg1) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnKeyInputFocusLost();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_GetNextKeyboardFocusableActor(void * jarg1, void * jarg2, int jarg3, bool jarg4) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Actor arg2 ;
  Dali::Toolkit::Control::KeyboardFocus::Direction arg3 ;
  bool arg4 ;
  Dali::Actor *argp2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::Toolkit::Control::KeyboardFocus::Direction)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = (arg1)->GetNextKeyboardFocusableActor(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_GetNextKeyboardFocusableActorSwigExplicitViewImpl(void * jarg1, void * jarg2, int jarg3, bool jarg4) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Actor arg2 ;
  Dali::Toolkit::Control::KeyboardFocus::Direction arg3 ;
  bool arg4 ;
  Dali::Actor *argp2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::Toolkit::Control::KeyboardFocus::Direction)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = (arg1)->Dali::Toolkit::Internal::Control::GetNextKeyboardFocusableActor(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnKeyboardFocusChangeCommitted(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->OnKeyboardFocusChangeCommitted(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnKeyboardFocusChangeCommittedSwigExplicitViewImpl(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnKeyboardFocusChangeCommitted(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnKeyboardEnter(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->OnKeyboardEnter();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewImpl_OnKeyboardEnterSwigExplicitViewImpl(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->Dali::Toolkit::Internal::Control::OnKeyboardEnter();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnPinch(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::PinchGesture *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::PinchGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::PinchGesture const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->OnPinch((Dali::PinchGesture const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnPinchSwigExplicitViewImpl(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::PinchGesture *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::PinchGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::PinchGesture const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnPinch((Dali::PinchGesture const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnPan(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::PanGesture *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::PanGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::PanGesture const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->OnPan((Dali::PanGesture const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnPanSwigExplicitViewImpl(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::PanGesture *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::PanGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::PanGesture const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnPan((Dali::PanGesture const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnTap(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::TapGesture *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::TapGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TapGesture const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->OnTap((Dali::TapGesture const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnTapSwigExplicitViewImpl(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::TapGesture *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::TapGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TapGesture const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnTap((Dali::TapGesture const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnLongPress(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::LongPressGesture *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::LongPressGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::LongPressGesture const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->OnLongPress((Dali::LongPressGesture const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_OnLongPressSwigExplicitViewImpl(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::LongPressGesture *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::LongPressGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::LongPressGesture const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::OnLongPress((Dali::LongPressGesture const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SignalConnected(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::SlotObserver *arg2 = (Dali::SlotObserver *) 0 ;
  Dali::CallbackBase *arg3 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::SlotObserver *)jarg2;
  arg3 = (Dali::CallbackBase *)jarg3;
  {
    try {
      (arg1)->SignalConnected(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SignalConnectedSwigExplicitViewImpl(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::SlotObserver *arg2 = (Dali::SlotObserver *) 0 ;
  Dali::CallbackBase *arg3 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::SlotObserver *)jarg2;
  arg3 = (Dali::CallbackBase *)jarg3;
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::SignalConnected(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SignalDisconnected(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::SlotObserver *arg2 = (Dali::SlotObserver *) 0 ;
  Dali::CallbackBase *arg3 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::SlotObserver *)jarg2;
  arg3 = (Dali::CallbackBase *)jarg3;
  {
    try {
      (arg1)->SignalDisconnected(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_SignalDisconnectedSwigExplicitViewImpl(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::SlotObserver *arg2 = (Dali::SlotObserver *) 0 ;
  Dali::CallbackBase *arg3 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  arg2 = (Dali::SlotObserver *)jarg2;
  arg3 = (Dali::CallbackBase *)jarg3;
  {
    try {
      (arg1)->Dali::Toolkit::Internal::Control::SignalDisconnected(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetImplementation__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Control *arg1 = 0 ;
  Dali::Toolkit::Internal::Control *result = 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Internal::Control *) &Dali::Toolkit::Internal::GetImplementation(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_View_Property() {
  void * jresult ;
  Dali::Toolkit::Control::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Control::Property *)new Dali::Toolkit::Control::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_View_Property(void * jarg1) {
  Dali::Toolkit::Control::Property *arg1 = (Dali::Toolkit::Control::Property *) 0 ;

  arg1 = (Dali::Toolkit::Control::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_View_KeyboardFocus() {
  void * jresult ;
  Dali::Toolkit::Control::KeyboardFocus *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Control::KeyboardFocus *)new Dali::Toolkit::Control::KeyboardFocus();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_View_KeyboardFocus(void * jarg1) {
  Dali::Toolkit::Control::KeyboardFocus *arg1 = (Dali::Toolkit::Control::KeyboardFocus *) 0 ;

  arg1 = (Dali::Toolkit::Control::KeyboardFocus *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_New() {
  void * jresult ;
  Dali::Toolkit::Control result;

  {
    try {
      result = Dali::Toolkit::Control::New(Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_NewCustom() {
  void * jresult;
  Dali::Toolkit::Control result;

  {
    try {
      result = SlimCustomViewImpl::New(Dali::Toolkit::Internal::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_View__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::Control *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Control *)new Dali::Toolkit::Control();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_View__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Control *arg1 = 0 ;
  Dali::Toolkit::Control *result = 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Control *)new Dali::Toolkit::Control((Dali::Toolkit::Control const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_View(void * jarg1) {
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  Dali::Toolkit::Control *arg2 = 0 ;
  Dali::Toolkit::Control *result = 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  arg2 = (Dali::Toolkit::Control *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Control *) &(arg1)->operator =((Dali::Toolkit::Control const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::Control result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::Control::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Control(void * jarg1) {
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) jarg1;
  try {
    delete arg1;
  } CALL_CATCH_EXCEPTION();
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_SetKeyInputFocus(void * jarg1) {
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      (arg1)->SetKeyInputFocus();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_View_HasKeyInputFocus(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      result = (bool)(arg1)->HasKeyInputFocus();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_ClearKeyInputFocus(void * jarg1) {
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      (arg1)->ClearKeyInputFocus();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_GetPinchGestureDetector(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  Dali::PinchGestureDetector result;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Control const *)arg1)->GetPinchGestureDetector();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PinchGestureDetector((const Dali::PinchGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_GetPanGestureDetector(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  Dali::PanGestureDetector result;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Control const *)arg1)->GetPanGestureDetector();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PanGestureDetector((const Dali::PanGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_GetTapGestureDetector(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  Dali::TapGestureDetector result;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Control const *)arg1)->GetTapGestureDetector();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::TapGestureDetector((const Dali::TapGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_GetLongPressGestureDetector(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  Dali::LongPressGestureDetector result;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Control const *)arg1)->GetLongPressGestureDetector();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::LongPressGestureDetector((const Dali::LongPressGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_SetStyleName(void * jarg1, char * jarg2) {
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetStyleName((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_View_GetStyleName(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      result = (std::string *) &((Dali::Toolkit::Control const *)arg1)->GetStyleName();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_SetBackgroundColor(void * jarg1, void * jarg2) {
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  Dali::Vector4 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetBackgroundColor((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_ClearBackground(void * jarg1) {
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  {
    try {
      (arg1)->ClearBackground();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_View__SWIG_2(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = 0 ;
  Dali::Toolkit::Control *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::Control & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Control *)new Dali::Toolkit::Control(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_GetVisualResourceStatus(void * jarg1, int jarg2)
{
  int jresult;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  arg1 = (Dali::Toolkit::Control *)jarg1;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
    return 0;
  }

  Dali::Property::Index arg2 = 0 ;
  arg2 = (Dali::Property::Index)jarg2;

  Toolkit::Visual::ResourceStatus result;
  {
    try {
      result = arg1->GetVisualResourceStatus(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_View_CreateTransition(void * jarg1, void * jarg2)
{
  void * jresult;
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  arg1 = (Dali::Toolkit::Control *)jarg1;

  Dali::Toolkit::Internal::Control& controlImpl = Dali::Toolkit::Internal::GetImplementation( *arg1 );

  Dali::Toolkit::TransitionData *arg2 = 0 ;
  Dali::Animation result;

  arg2 = (Dali::Toolkit::TransitionData *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TransitionData const & type is null", 0);
    return 0;
  }
  {
    try {
      result = DevelControl::CreateTransition( controlImpl, (Dali::Toolkit::TransitionData const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Animation((const Dali::Animation &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_DoAction(void * jarg1, int jarg2, int jarg3, void * jarg4 )
{
  Dali::Toolkit::Control arg1;
  Dali::Toolkit::Control *argp1  = (Dali::Toolkit::Control *)jarg1;

  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
  }
  arg1 = *argp1;

  Dali::Property::Index arg2 = 0 ;
  arg2 = (Dali::Property::Index)jarg2;

  Dali::Property::Index arg3 = 0 ;
  arg3 = (Dali::Property::Index)jarg3;

  Dali::Property::Value *arg4 = (Dali::Property::Value *)jarg4;

  {
    try {
      DevelControl::DoAction(arg1, arg2, arg3, *arg4);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_View_GetVisualProperty(void* control, int propertyIndex, int visualPropertyIndex)
{
  if (!control)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Given control is null", 0);
    return 0;
  }

  void* result = 0;
  try
  {
    Dali::Property property = DevelControl::GetVisualProperty(*((Dali::Toolkit::Control*)control), (Dali::Property::Index)propertyIndex, (Dali::Property::Index)visualPropertyIndex);
    result = new Dali::Property(property.object, property.propertyIndex, property.componentIndex);
  }
  CALL_CATCH_EXCEPTION(0);

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_IsResourceReady(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Control *arg1 = 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)arg1->IsResourceReady();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_KeyInputFocusManager() {
  void * jresult ;
  Dali::Toolkit::KeyInputFocusManager *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::KeyInputFocusManager *)new Dali::Toolkit::KeyInputFocusManager();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyInputFocusManager(void * jarg1) {
  Dali::Toolkit::KeyInputFocusManager *arg1 = (Dali::Toolkit::KeyInputFocusManager *) 0 ;

  arg1 = (Dali::Toolkit::KeyInputFocusManager *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_KeyInputFocusManager_Get() {
  void * jresult ;
  Dali::Toolkit::KeyInputFocusManager result;

  {
    try {
      result = Dali::Toolkit::KeyInputFocusManager::Get();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::KeyInputFocusManager((const Dali::Toolkit::KeyInputFocusManager &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyInputFocusManager_SetFocus(void * jarg1, void * jarg2) {
  Dali::Toolkit::KeyInputFocusManager *arg1 = (Dali::Toolkit::KeyInputFocusManager *) 0 ;
  Dali::Toolkit::Control arg2 ;
  Dali::Toolkit::Control *argp2 ;

  arg1 = (Dali::Toolkit::KeyInputFocusManager *)jarg1;
  argp2 = (Dali::Toolkit::Control *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Control", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetFocus(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_KeyInputFocusManager_GetCurrentFocusControl(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::KeyInputFocusManager *arg1 = (Dali::Toolkit::KeyInputFocusManager *) 0 ;
  Dali::Toolkit::Control result;

  arg1 = (Dali::Toolkit::KeyInputFocusManager *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::KeyInputFocusManager const *)arg1)->GetCurrentFocusControl();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyInputFocusManager_RemoveFocus(void * jarg1, void * jarg2) {
  Dali::Toolkit::KeyInputFocusManager *arg1 = (Dali::Toolkit::KeyInputFocusManager *) 0 ;
  Dali::Toolkit::Control arg2 ;
  Dali::Toolkit::Control *argp2 ;

  arg1 = (Dali::Toolkit::KeyInputFocusManager *)jarg1;
  argp2 = (Dali::Toolkit::Control *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Control", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->RemoveFocus(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_KeyInputFocusManager_KeyInputFocusChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::KeyInputFocusManager *arg1 = (Dali::Toolkit::KeyInputFocusManager *) 0 ;
  Dali::Toolkit::KeyInputFocusManager::KeyInputFocusChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::KeyInputFocusManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::KeyInputFocusManager::KeyInputFocusChangedSignalType *) &(arg1)->KeyInputFocusChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Alignment_Padding__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::Alignment::Padding *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Alignment::Padding *)new Dali::Toolkit::Alignment::Padding();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Alignment_Padding__SWIG_1(float jarg1, float jarg2, float jarg3, float jarg4) {
  void * jresult ;
  float arg1 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  Dali::Toolkit::Alignment::Padding *result = 0 ;

  arg1 = (float)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try {
      result = (Dali::Toolkit::Alignment::Padding *)new Dali::Toolkit::Alignment::Padding(arg1,arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Alignment_Padding_left_set(void * jarg1, float jarg2) {
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->left = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Alignment_Padding_left_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  result = (float) ((arg1)->left);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Alignment_Padding_right_set(void * jarg1, float jarg2) {
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->right = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Alignment_Padding_right_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  result = (float) ((arg1)->right);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Alignment_Padding_top_set(void * jarg1, float jarg2) {
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->top = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Alignment_Padding_top_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  result = (float) ((arg1)->top);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Alignment_Padding_bottom_set(void * jarg1, float jarg2) {
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->bottom = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Alignment_Padding_bottom_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  result = (float) ((arg1)->bottom);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Alignment_Padding(void * jarg1) {
  Dali::Toolkit::Alignment::Padding *arg1 = (Dali::Toolkit::Alignment::Padding *) 0 ;

  arg1 = (Dali::Toolkit::Alignment::Padding *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Alignment__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::Alignment *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Alignment *)new Dali::Toolkit::Alignment();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Alignment_New__SWIG_0(int jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::Alignment::Type arg1 ;
  Dali::Toolkit::Alignment::Type arg2 ;
  Dali::Toolkit::Alignment result;

  arg1 = (Dali::Toolkit::Alignment::Type)jarg1;
  arg2 = (Dali::Toolkit::Alignment::Type)jarg2;
  {
    try {
      result = Dali::Toolkit::Alignment::New(arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Alignment((const Dali::Toolkit::Alignment &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Alignment_New__SWIG_1(int jarg1) {
  void * jresult ;
  Dali::Toolkit::Alignment::Type arg1 ;
  Dali::Toolkit::Alignment result;

  arg1 = (Dali::Toolkit::Alignment::Type)jarg1;
  {
    try {
      result = Dali::Toolkit::Alignment::New(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Alignment((const Dali::Toolkit::Alignment &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Alignment_New__SWIG_2() {
  void * jresult ;
  Dali::Toolkit::Alignment result;

  {
    try {
      result = Dali::Toolkit::Alignment::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Alignment((const Dali::Toolkit::Alignment &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Alignment__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Alignment *arg1 = 0 ;
  Dali::Toolkit::Alignment *result = 0 ;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Alignment const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Alignment *)new Dali::Toolkit::Alignment((Dali::Toolkit::Alignment const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Alignment(void * jarg1) {
  Dali::Toolkit::Alignment *arg1 = (Dali::Toolkit::Alignment *) 0 ;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Alignment_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::Alignment result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::Alignment::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Alignment((const Dali::Toolkit::Alignment &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Alignment_SetAlignmentType(void * jarg1, int jarg2) {
  Dali::Toolkit::Alignment *arg1 = (Dali::Toolkit::Alignment *) 0 ;
  Dali::Toolkit::Alignment::Type arg2 ;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  arg2 = (Dali::Toolkit::Alignment::Type)jarg2;
  {
    try {
      (arg1)->SetAlignmentType(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Alignment_GetAlignmentType(void * jarg1) {
  int jresult ;
  Dali::Toolkit::Alignment *arg1 = (Dali::Toolkit::Alignment *) 0 ;
  Dali::Toolkit::Alignment::Type result;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Alignment::Type)((Dali::Toolkit::Alignment const *)arg1)->GetAlignmentType();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Alignment_SetScaling(void * jarg1, int jarg2) {
  Dali::Toolkit::Alignment *arg1 = (Dali::Toolkit::Alignment *) 0 ;
  Dali::Toolkit::Alignment::Scaling arg2 ;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  arg2 = (Dali::Toolkit::Alignment::Scaling)jarg2;
  {
    try {
      (arg1)->SetScaling(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Alignment_GetScaling(void * jarg1) {
  int jresult ;
  Dali::Toolkit::Alignment *arg1 = (Dali::Toolkit::Alignment *) 0 ;
  Dali::Toolkit::Alignment::Scaling result;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Alignment::Scaling)((Dali::Toolkit::Alignment const *)arg1)->GetScaling();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Alignment_SetPadding(void * jarg1, void * jarg2) {
  Dali::Toolkit::Alignment *arg1 = (Dali::Toolkit::Alignment *) 0 ;
  Dali::Toolkit::Alignment::Padding *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  arg2 = (Dali::Toolkit::Alignment::Padding *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Alignment::Padding const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetPadding((Dali::Toolkit::Alignment::Padding const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Alignment_GetPadding(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Alignment *arg1 = (Dali::Toolkit::Alignment *) 0 ;
  Dali::Toolkit::Alignment::Padding *result = 0 ;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Alignment::Padding *) &((Dali::Toolkit::Alignment const *)arg1)->GetPadding();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Alignment_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::Alignment *arg1 = (Dali::Toolkit::Alignment *) 0 ;
  Dali::Toolkit::Alignment *arg2 = 0 ;
  Dali::Toolkit::Alignment *result = 0 ;

  arg1 = (Dali::Toolkit::Alignment *)jarg1;
  arg2 = (Dali::Toolkit::Alignment *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Alignment const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Alignment *) &(arg1)->operator =((Dali::Toolkit::Alignment const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


// Signals

#ifndef GENERATE_CONTROL_SIGNAL
#define GENERATE_CONTROL_SIGNAL(HType, SignalName) GENERATE_SIGNAL(Dali::Toolkit::Control*, HType, Dali_View, SignalName)
#endif


GENERATE_CONTROL_SIGNAL(bool(*)(Dali::Toolkit::Control, Dali::KeyEvent const&), KeyEventSignal)
// CSharp_Dali_View_KeyEventSignal_Connect
// CSharp_Dali_View_KeyEventSignal_Disconnect

GENERATE_CONTROL_SIGNAL(void(*)(Dali::Toolkit::Control), KeyInputFocusGainedSignal)
// CSharp_Dali_View_KeyInputFocusGainedSignal_Connect
// CSharp_Dali_View_KeyInputFocusGainedSignal_Disconnect

GENERATE_CONTROL_SIGNAL(void(*)(Dali::Toolkit::Control), KeyInputFocusLostSignal)
// CSharp_Dali_View_KeyInputFocusLostSignal_Connect
// CSharp_Dali_View_KeyInputFocusLostSignal_Disconnect

GENERATE_CONTROL_SIGNAL(void(*)(Dali::Toolkit::Control), ResourceReadySignal)
// CSharp_Dali_View_ResourceReadySignal_Connect
// CSharp_Dali_View_ResourceReadySignal_Disconnect

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ResourceReadySignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Control *arg1 = 0 ;
  Dali::Toolkit::Control::ResourceReadySignalType *result = 0 ;

  arg1 = (Dali::Toolkit::Control *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Control::ResourceReadySignalType *) &arg1->ResourceReadySignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_KeyEventSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Toolkit::Control::KeyEventSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Control::KeyEventSignalType *) &(arg1)->KeyEventSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ViewImpl_KeyInputFocusGainedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::Control *arg1 = (Dali::Toolkit::Internal::Control *) 0 ;
  Dali::Toolkit::Control::KeyInputFocusSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::Control *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Control::KeyInputFocusSignalType *) &(arg1)->KeyInputFocusGainedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FlexContainer__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::FlexContainer *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::FlexContainer *)new Dali::Toolkit::FlexContainer();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FlexContainer__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::FlexContainer *arg1 = 0 ;
  Dali::Toolkit::FlexContainer *result = 0 ;

  arg1 = (Dali::Toolkit::FlexContainer *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::FlexContainer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::FlexContainer *)new Dali::Toolkit::FlexContainer((Dali::Toolkit::FlexContainer const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FlexContainer_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::FlexContainer *arg1 = (Dali::Toolkit::FlexContainer *) 0 ;
  Dali::Toolkit::FlexContainer *arg2 = 0 ;
  Dali::Toolkit::FlexContainer *result = 0 ;

  arg1 = (Dali::Toolkit::FlexContainer *)jarg1;
  arg2 = (Dali::Toolkit::FlexContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::FlexContainer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::FlexContainer *) &(arg1)->operator =((Dali::Toolkit::FlexContainer const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FlexContainer(void * jarg1) {
  Dali::Toolkit::FlexContainer *arg1 = (Dali::Toolkit::FlexContainer *) 0 ;

  arg1 = (Dali::Toolkit::FlexContainer *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FlexContainer_New() {
  void * jresult ;
  Dali::Toolkit::FlexContainer result;

  {
    try {
      result = Dali::Toolkit::FlexContainer::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::FlexContainer((const Dali::Toolkit::FlexContainer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FlexContainer_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::FlexContainer result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::FlexContainer::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::FlexContainer((const Dali::Toolkit::FlexContainer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FlexContainer_ChildProperty() {
  void * jresult ;
  Dali::Toolkit::FlexContainer::ChildProperty *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::FlexContainer::ChildProperty *)new Dali::Toolkit::FlexContainer::ChildProperty();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FlexContainer_ChildProperty(void * jarg1) {
  Dali::Toolkit::FlexContainer::ChildProperty *arg1 = (Dali::Toolkit::FlexContainer::ChildProperty *) 0 ;

  arg1 = (Dali::Toolkit::FlexContainer::ChildProperty *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImageView_Property() {
  void * jresult ;
  Dali::Toolkit::ImageView::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ImageView::Property *)new Dali::Toolkit::ImageView::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ImageView_Property(void * jarg1) {
  Dali::Toolkit::ImageView::Property *arg1 = (Dali::Toolkit::ImageView::Property *) 0 ;

  arg1 = (Dali::Toolkit::ImageView::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImageView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::ImageView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ImageView *)new Dali::Toolkit::ImageView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImageView_New__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::ImageView result;

  {
    try {
      result = Dali::Toolkit::ImageView::New(Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImageView_New__SWIG_2(char * jarg1) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::Toolkit::ImageView result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::Toolkit::ImageView::New(Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS, (std::string const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImageView_New__SWIG_3(char * jarg1, void * jarg2) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Toolkit::ImageView result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = Dali::Toolkit::ImageView::New(Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS, (std::string const &)*arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ImageView(void * jarg1) {
  Dali::Toolkit::ImageView *arg1 = (Dali::Toolkit::ImageView *) 0 ;

  arg1 = (Dali::Toolkit::ImageView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ImageView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ImageView *arg1 = 0 ;
  Dali::Toolkit::ImageView *result = 0 ;

  arg1 = (Dali::Toolkit::ImageView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ImageView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ImageView *)new Dali::Toolkit::ImageView((Dali::Toolkit::ImageView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImageView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::ImageView *arg1 = (Dali::Toolkit::ImageView *) 0 ;
  Dali::Toolkit::ImageView *arg2 = 0 ;
  Dali::Toolkit::ImageView *result = 0 ;

  arg1 = (Dali::Toolkit::ImageView *)jarg1;
  arg2 = (Dali::Toolkit::ImageView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ImageView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ImageView *) &(arg1)->operator =((Dali::Toolkit::ImageView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ImageView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::ImageView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::ImageView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImageView_SetImage__SWIG_1(void * jarg1, char * jarg2) {
  Dali::Toolkit::ImageView *arg1 = (Dali::Toolkit::ImageView *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ImageView *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetImage((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ImageView_SetImage__SWIG_2(void * jarg1, char * jarg2, void * jarg3) {
  Dali::Toolkit::ImageView *arg1 = (Dali::Toolkit::ImageView *) 0 ;
  std::string *arg2 = 0 ;
  Dali::ImageDimensions arg3 ;
  Dali::ImageDimensions *argp3 ;

  arg1 = (Dali::Toolkit::ImageView *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::ImageDimensions *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->SetImage((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollBar_Property() {
  void * jresult ;
  Dali::Toolkit::ScrollBar::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ScrollBar::Property *)new Dali::Toolkit::ScrollBar::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollBar_Property(void * jarg1) {
  Dali::Toolkit::ScrollBar::Property *arg1 = (Dali::Toolkit::ScrollBar::Property *) 0 ;

  arg1 = (Dali::Toolkit::ScrollBar::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollBar__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::ScrollBar *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ScrollBar *)new Dali::Toolkit::ScrollBar();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollBar__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollBar *arg1 = 0 ;
  Dali::Toolkit::ScrollBar *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScrollBar const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ScrollBar *)new Dali::Toolkit::ScrollBar((Dali::Toolkit::ScrollBar const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollBar_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Toolkit::ScrollBar *arg2 = 0 ;
  Dali::Toolkit::ScrollBar *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  arg2 = (Dali::Toolkit::ScrollBar *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScrollBar const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ScrollBar *) &(arg1)->operator =((Dali::Toolkit::ScrollBar const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollBar(void * jarg1) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollBar_New__SWIG_0(int jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollBar::Direction arg1 ;
  Dali::Toolkit::ScrollBar result;

  arg1 = (Dali::Toolkit::ScrollBar::Direction)jarg1;
  {
    try {
      result = Dali::Toolkit::ScrollBar::New(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ScrollBar((const Dali::Toolkit::ScrollBar &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollBar_New__SWIG_1() {
  void * jresult ;
  Dali::Toolkit::ScrollBar result;

  {
    try {
      result = Dali::Toolkit::ScrollBar::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ScrollBar((const Dali::Toolkit::ScrollBar &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollBar_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::ScrollBar result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::ScrollBar::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ScrollBar((const Dali::Toolkit::ScrollBar &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_SetScrollPropertySource(void * jarg1, void * jarg2, int jarg3, int jarg4, int jarg5, int jarg6) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Handle arg2 ;
  Dali::Property::Index arg3 ;
  Dali::Property::Index arg4 ;
  Dali::Property::Index arg5 ;
  Dali::Property::Index arg6 ;
  Dali::Handle *argp2 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  argp2 = (Dali::Handle *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Handle", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::Property::Index)jarg3;
  arg4 = (Dali::Property::Index)jarg4;
  arg5 = (Dali::Property::Index)jarg5;
  arg6 = (Dali::Property::Index)jarg6;
  {
    try {
      (arg1)->SetScrollPropertySource(arg2,arg3,arg4,arg5,arg6);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_SetScrollIndicator(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetScrollIndicator(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollBar_GetScrollIndicator(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      result = (arg1)->GetScrollIndicator();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_SetScrollPositionIntervals(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Vector< float,TypeTraits< float >::IS_TRIVIAL_TYPE==true > *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  arg2 = (Dali::Vector< float,TypeTraits< float >::IS_TRIVIAL_TYPE==true > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector< float,TypeTraits< float >::IS_TRIVIAL_TYPE==true > const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetScrollPositionIntervals((Dali::Vector< float,TypeTraits< float >::IS_TRIVIAL_TYPE==true > const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollBar_GetScrollPositionIntervals(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      jresult = new Dali::Vector< float,TypeTraits< float >::IS_TRIVIAL_TYPE==true >((const Dali::Vector< float,TypeTraits< float >::IS_TRIVIAL_TYPE==true > &)(((Dali::Toolkit::ScrollBar const *)arg1)->GetScrollPositionIntervals()));
    } CALL_CATCH_EXCEPTION(0);
  }
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_SetScrollDirection(void * jarg1, int jarg2) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Toolkit::ScrollBar::Direction arg2 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  arg2 = (Dali::Toolkit::ScrollBar::Direction)jarg2;
  {
    try {
      (arg1)->SetScrollDirection(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_GetScrollDirection(void * jarg1) {
  int jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Toolkit::ScrollBar::Direction result;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      result = (Dali::Toolkit::ScrollBar::Direction)((Dali::Toolkit::ScrollBar const *)arg1)->GetScrollDirection();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_SetIndicatorHeightPolicy(void * jarg1, int jarg2) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Toolkit::ScrollBar::IndicatorHeightPolicy arg2 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  arg2 = (Dali::Toolkit::ScrollBar::IndicatorHeightPolicy)jarg2;
  {
    try {
      (arg1)->SetIndicatorHeightPolicy(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollBar_GetIndicatorHeightPolicy(void * jarg1) {
  int jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Toolkit::ScrollBar::IndicatorHeightPolicy result;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      result = (Dali::Toolkit::ScrollBar::IndicatorHeightPolicy)((Dali::Toolkit::ScrollBar const *)arg1)->GetIndicatorHeightPolicy();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_SetIndicatorFixedHeight(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetIndicatorFixedHeight(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollBar_GetIndicatorFixedHeight(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollBar const *)arg1)->GetIndicatorFixedHeight();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_SetIndicatorShowDuration(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetIndicatorShowDuration(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollBar_GetIndicatorShowDuration(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollBar const *)arg1)->GetIndicatorShowDuration();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_SetIndicatorHideDuration(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetIndicatorHideDuration(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollBar_GetIndicatorHideDuration(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollBar const *)arg1)->GetIndicatorHideDuration();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_ShowIndicator(void * jarg1) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      (arg1)->ShowIndicator();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollBar_HideIndicator(void * jarg1) {
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      (arg1)->HideIndicator();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollBar_PanFinishedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Toolkit::ScrollBar::PanFinishedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      result = (Dali::Toolkit::ScrollBar::PanFinishedSignalType *) &(arg1)->PanFinishedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollBar_ScrollPositionIntervalReachedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollBar *arg1 = (Dali::Toolkit::ScrollBar *) 0 ;
  Dali::Toolkit::ScrollBar::ScrollPositionIntervalReachedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollBar *)jarg1;
  {
    try {
      result = (Dali::Toolkit::ScrollBar::ScrollPositionIntervalReachedSignalType *) &(arg1)->ScrollPositionIntervalReachedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Scrollable_Property() {
  void * jresult ;
  Dali::Toolkit::Scrollable::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Scrollable::Property *)new Dali::Toolkit::Scrollable::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Scrollable_Property(void * jarg1) {
  Dali::Toolkit::Scrollable::Property *arg1 = (Dali::Toolkit::Scrollable::Property *) 0 ;

  arg1 = (Dali::Toolkit::Scrollable::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Scrollable__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::Scrollable *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Scrollable *)new Dali::Toolkit::Scrollable();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Scrollable__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Scrollable *arg1 = 0 ;
  Dali::Toolkit::Scrollable *result = 0 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Scrollable const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Scrollable *)new Dali::Toolkit::Scrollable((Dali::Toolkit::Scrollable const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Scrollable_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  Dali::Toolkit::Scrollable *arg2 = 0 ;
  Dali::Toolkit::Scrollable *result = 0 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  arg2 = (Dali::Toolkit::Scrollable *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Scrollable const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Scrollable *) &(arg1)->operator =((Dali::Toolkit::Scrollable const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Scrollable(void * jarg1) {
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Scrollable_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::Scrollable result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::Scrollable::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Scrollable((const Dali::Toolkit::Scrollable &)result);
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Scrollable_IsOvershootEnabled(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::Scrollable const *)arg1)->IsOvershootEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Scrollable_SetOvershootEnabled(void * jarg1, bool jarg2) {
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetOvershootEnabled(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Scrollable_SetOvershootEffectColor(void * jarg1, void * jarg2) {
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  Dali::Vector4 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetOvershootEffectColor((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Scrollable_GetOvershootEffectColor(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Scrollable const *)arg1)->GetOvershootEffectColor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Scrollable_SetOvershootAnimationSpeed(void * jarg1, float jarg2) {
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetOvershootAnimationSpeed(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Scrollable_GetOvershootAnimationSpeed(void * jarg1) {
  float jresult ;
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::Scrollable const *)arg1)->GetOvershootAnimationSpeed();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Scrollable_ScrollStartedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  Dali::Toolkit::Scrollable::ScrollStartedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Scrollable::ScrollStartedSignalType *) &(arg1)->ScrollStartedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Scrollable_ScrollUpdatedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  Dali::Toolkit::Scrollable::ScrollUpdatedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Scrollable::ScrollUpdatedSignalType *) &(arg1)->ScrollUpdatedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Scrollable_ScrollCompletedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Scrollable *arg1 = (Dali::Toolkit::Scrollable *) 0 ;
  Dali::Toolkit::Scrollable::ScrollCompletedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::Scrollable *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Scrollable::ScrollCompletedSignalType *) &(arg1)->ScrollCompletedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_IsVertical(int jarg1) {
  bool jresult ;
  Dali::Toolkit::ControlOrientation::Type arg1 ;
  bool result;

  arg1 = (Dali::Toolkit::ControlOrientation::Type)jarg1;
  {
    try {
      result = (bool)Dali::Toolkit::IsVertical(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_IsHorizontal(int jarg1) {
  bool jresult ;
  Dali::Toolkit::ControlOrientation::Type arg1 ;
  bool result;

  arg1 = (Dali::Toolkit::ControlOrientation::Type)jarg1;
  {
    try {
      result = (bool)Dali::Toolkit::IsHorizontal(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ItemRange__SWIG_0(unsigned int jarg1, unsigned int jarg2) {
  void * jresult ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  Dali::Toolkit::ItemRange *result = 0 ;

  arg1 = (unsigned int)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (Dali::Toolkit::ItemRange *)new Dali::Toolkit::ItemRange(arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ItemRange__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemRange *arg1 = 0 ;
  Dali::Toolkit::ItemRange *result = 0 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemRange const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ItemRange *)new Dali::Toolkit::ItemRange((Dali::Toolkit::ItemRange const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemRange_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  Dali::Toolkit::ItemRange *arg2 = 0 ;
  Dali::Toolkit::ItemRange *result = 0 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (Dali::Toolkit::ItemRange *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemRange const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ItemRange *) &(arg1)->operator =((Dali::Toolkit::ItemRange const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ItemRange_Within(void * jarg1, unsigned int jarg2) {
  bool jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int arg2 ;
  bool result;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (bool)(arg1)->Within(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemRange_Intersection(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  Dali::Toolkit::ItemRange *arg2 = 0 ;
  SwigValueWrapper< Dali::Toolkit::ItemRange > result;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (Dali::Toolkit::ItemRange *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemRange const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (arg1)->Intersection((Dali::Toolkit::ItemRange const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemRange((const Dali::Toolkit::ItemRange &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemRange_begin_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->begin = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemRange_begin_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  result = (unsigned int) ((arg1)->begin);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemRange_end_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->end = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemRange_end_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  result = (unsigned int) ((arg1)->end);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemRange(void * jarg1) {
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemLayout(void * jarg1) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_SetOrientation(void * jarg1, int jarg2) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Toolkit::ControlOrientation::Type arg2 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (Dali::Toolkit::ControlOrientation::Type)jarg2;
  {
    try {
      (arg1)->SetOrientation(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemLayout_GetOrientation(void * jarg1) {
  int jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Toolkit::ControlOrientation::Type result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (Dali::Toolkit::ControlOrientation::Type)((Dali::Toolkit::ItemLayout const *)arg1)->GetOrientation();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_SetLayoutProperties(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Property::Map *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetLayoutProperties((Dali::Property::Map const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemLayout_GetLayoutProperties(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Property::Map result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (arg1)->GetLayoutProperties();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Property::Map((const Dali::Property::Map &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemSize(void * jarg1, unsigned int jarg2, void * jarg3, void * jarg4) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  unsigned int arg2 ;
  Dali::Vector3 *arg3 = 0 ;
  Dali::Vector3 *arg4 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (Dali::Vector3 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 & type is null", 0);
    return ;
  }
  {
    try {
      ((Dali::Toolkit::ItemLayout const *)arg1)->GetItemSize(arg2,(Dali::Vector3 const &)*arg3,*arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_SetItemSize(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Vector3 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetItemSize((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetMinimumLayoutPosition(void * jarg1, unsigned int jarg2, void * jarg3) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  unsigned int arg2 ;
  Dali::Vector3 arg3 ;
  Dali::Vector3 *argp3 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Vector3 *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector3", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetMinimumLayoutPosition(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetClosestAnchorPosition(void * jarg1, float jarg2) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetClosestAnchorPosition(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemScrollToPosition(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  unsigned int arg2 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetItemScrollToPosition(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemsWithinArea(void * jarg1, float jarg2, void * jarg3) {
  void * jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float arg2 ;
  Dali::Vector3 arg3 ;
  Dali::Vector3 *argp3 ;
  SwigValueWrapper< Dali::Toolkit::ItemRange > result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (float)jarg2;
  argp3 = (Dali::Vector3 *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector3", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = ((Dali::Toolkit::ItemLayout const *)arg1)->GetItemsWithinArea(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemRange((const Dali::Toolkit::ItemRange &)result);
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetClosestOnScreenLayoutPosition(void * jarg1, int jarg2, float jarg3, void * jarg4) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  int arg2 ;
  float arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (int)jarg2;
  arg3 = (float)jarg3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)(arg1)->GetClosestOnScreenLayoutPosition(arg2,arg3,(Dali::Vector3 const &)*arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemLayout_GetReserveItemCount(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Vector3 arg2 ;
  Dali::Vector3 *argp2 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  argp2 = (Dali::Vector3 *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector3", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::ItemLayout const *)arg1)->GetReserveItemCount(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_GetDefaultItemSize(void * jarg1, unsigned int jarg2, void * jarg3, void * jarg4) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  unsigned int arg2 ;
  Dali::Vector3 *arg3 = 0 ;
  Dali::Vector3 *arg4 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (Dali::Vector3 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 & type is null", 0);
    return ;
  }
  {
    try {
      ((Dali::Toolkit::ItemLayout const *)arg1)->GetDefaultItemSize(arg2,(Dali::Vector3 const &)*arg3,*arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemLayout_GetScrollDirection(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Degree result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ItemLayout const *)arg1)->GetScrollDirection();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Degree((const Dali::Degree &)result);
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetScrollSpeedFactor(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetScrollSpeedFactor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetMaximumSwipeSpeed(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetMaximumSwipeSpeed();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemFlickAnimationDuration(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetItemFlickAnimationDuration();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemLayout_GetNextFocusItemID(void * jarg1, int jarg2, int jarg3, int jarg4, bool jarg5) {
  int jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  int arg2 ;
  int arg3 ;
  Dali::Toolkit::Control::KeyboardFocus::Direction arg4 ;
  bool arg5 ;
  int result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  arg4 = (Dali::Toolkit::Control::KeyboardFocus::Direction)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = (int)(arg1)->GetNextFocusItemID(arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetFlickSpeedFactor(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetFlickSpeedFactor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_ApplyConstraints(void * jarg1, void * jarg2, int jarg3, void * jarg4, void * jarg5) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Actor *arg2 = 0 ;
  int arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  Dali::Actor *arg5 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (Dali::Actor *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor & type is null", 0);
    return ;
  }
  arg3 = (int)jarg3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  arg5 = (Dali::Actor *)jarg5;
  if (!arg5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->ApplyConstraints(*arg2,arg3,(Dali::Vector3 const &)*arg4,(Dali::Actor const &)*arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemPosition(void * jarg1, int jarg2, float jarg3, void * jarg4) {
  void * jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  int arg2 ;
  float arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (int)jarg2;
  arg3 = (float)jarg3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Toolkit::ItemLayout const *)arg1)->GetItemPosition(arg2,arg3,(Dali::Vector3 const &)*arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_NewItemLayout(int jarg1) {
  void * jresult ;
  Dali::Toolkit::DefaultItemLayout::Type arg1 ;
  SwigValueWrapper< Dali::IntrusivePtr< Dali::Toolkit::ItemLayout > > result;

  arg1 = (Dali::Toolkit::DefaultItemLayout::Type)jarg1;
  {
    try {
      result = Dali::Toolkit::DefaultItemLayout::New(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemLayoutPtr((const Dali::Toolkit::ItemLayoutPtr &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemFactory(void * jarg1) {
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemFactory_GetNumberOfItems(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  {
    try {
      result = (unsigned int)(arg1)->GetNumberOfItems();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemFactory_NewItem(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;
  unsigned int arg2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (arg1)->NewItem(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemFactory_ItemReleased(void * jarg1, unsigned int jarg2, void * jarg3) {
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;
  unsigned int arg2 ;
  Dali::Actor arg3 ;
  Dali::Actor *argp3 ;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Actor *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->ItemReleased(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemFactory_ItemReleasedSwigExplicitItemFactory(void * jarg1, unsigned int jarg2, void * jarg3) {
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;
  unsigned int arg2 ;
  Dali::Actor arg3 ;
  Dali::Actor *argp3 ;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Actor *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->Dali::Toolkit::ItemFactory::ItemReleased(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ItemView_Property() {
  void * jresult ;
  Dali::Toolkit::ItemView::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ItemView::Property *)new Dali::Toolkit::ItemView::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemView_Property(void * jarg1) {
  Dali::Toolkit::ItemView::Property *arg1 = (Dali::Toolkit::ItemView::Property *) 0 ;

  arg1 = (Dali::Toolkit::ItemView::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ItemView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::ItemView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ItemView *)new Dali::Toolkit::ItemView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ItemView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = 0 ;
  Dali::Toolkit::ItemView *result = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ItemView *)new Dali::Toolkit::ItemView((Dali::Toolkit::ItemView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemView *arg2 = 0 ;
  Dali::Toolkit::ItemView *result = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ItemView *) &(arg1)->operator =((Dali::Toolkit::ItemView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemView(void * jarg1) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_New(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemFactory *arg1 = 0 ;
  Dali::Toolkit::ItemView result;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemFactory & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Toolkit::ItemView::New(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemView((const Dali::Toolkit::ItemView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::ItemView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::ItemView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemView((const Dali::Toolkit::ItemView &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemView_GetLayoutCount(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::ItemView const *)arg1)->GetLayoutCount();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_AddLayout(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemLayout *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemLayout *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemLayout & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->AddLayout(*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_RemoveLayout(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->RemoveLayout(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetLayout(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  unsigned int arg2 ;
  SwigValueWrapper< Dali::IntrusivePtr< Dali::Toolkit::ItemLayout > > result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetLayout(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemLayoutPtr((const Dali::Toolkit::ItemLayoutPtr &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetActiveLayout(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  SwigValueWrapper< Dali::IntrusivePtr< Dali::Toolkit::ItemLayout > > result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetActiveLayout();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemLayoutPtr((const Dali::Toolkit::ItemLayoutPtr &)result);
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemView_GetCurrentLayoutPosition(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemId arg2 ;
  float result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemId)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::ItemView const *)arg1)->GetCurrentLayoutPosition(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_ActivateLayout(void * jarg1, unsigned int jarg2, void * jarg3, float jarg4) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  unsigned int arg2 ;
  Dali::Vector3 arg3 ;
  float arg4 ;
  Dali::Vector3 *argp3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Vector3 *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector3", 0);
    return ;
  }
  arg3 = *argp3;
  arg4 = (float)jarg4;
  {
    try {
      (arg1)->ActivateLayout(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_DeactivateCurrentLayout(void * jarg1) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      (arg1)->DeactivateCurrentLayout();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetMinimumSwipeSpeed(void * jarg1, float jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetMinimumSwipeSpeed(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemView_GetMinimumSwipeSpeed(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemView const *)arg1)->GetMinimumSwipeSpeed();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetMinimumSwipeDistance(void * jarg1, float jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetMinimumSwipeDistance(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemView_GetMinimumSwipeDistance(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemView const *)arg1)->GetMinimumSwipeDistance();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetWheelScrollDistanceStep(void * jarg1, float jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetWheelScrollDistanceStep(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemView_GetWheelScrollDistanceStep(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemView const *)arg1)->GetWheelScrollDistanceStep();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetAnchoring(void * jarg1, bool jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetAnchoring(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ItemView_GetAnchoring(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::ItemView const *)arg1)->GetAnchoring();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetAnchoringDuration(void * jarg1, float jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetAnchoringDuration(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemView_GetAnchoringDuration(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemView const *)arg1)->GetAnchoringDuration();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_ScrollToItem(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemId arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemId)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ScrollToItem(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetRefreshInterval(void * jarg1, float jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetRefreshInterval(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemView_GetRefreshInterval(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemView const *)arg1)->GetRefreshInterval();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_Refresh(void * jarg1) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      (arg1)->Refresh();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetItem(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemId arg2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemId)jarg2;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetItem(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemView_GetItemId(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;
  Dali::Toolkit::ItemId result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (Dali::Toolkit::ItemId)((Dali::Toolkit::ItemView const *)arg1)->GetItemId(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_InsertItem(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::Item arg2 ;
  float arg3 ;
  Dali::Toolkit::Item *argp2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  argp2 = (Dali::Toolkit::Item *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Item", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->InsertItem(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_InsertItems(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemContainer *arg2 = 0 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemContainer const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->InsertItems((Dali::Toolkit::ItemContainer const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_RemoveItem(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemId arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemId)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->RemoveItem(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_RemoveItems(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemIdContainer *arg2 = 0 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemIdContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemIdContainer const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->RemoveItems((Dali::Toolkit::ItemIdContainer const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_ReplaceItem(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::Item arg2 ;
  float arg3 ;
  Dali::Toolkit::Item *argp2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  argp2 = (Dali::Toolkit::Item *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Item", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ReplaceItem(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_ReplaceItems(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemContainer *arg2 = 0 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemContainer const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ReplaceItems((Dali::Toolkit::ItemContainer const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetItemsParentOrigin(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Vector3 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetItemsParentOrigin((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetItemsParentOrigin(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetItemsParentOrigin();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetItemsAnchorPoint(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Vector3 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetItemsAnchorPoint((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetItemsAnchorPoint(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetItemsAnchorPoint();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_GetItemsRange(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemRange *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemRange *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemRange & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetItemsRange(*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_LayoutActivatedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemView::LayoutActivatedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::ItemView::LayoutActivatedSignalType *) &(arg1)->LayoutActivatedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MoveActorConstraint(void * jarg1, void * jarg2) {
  Dali::Vector3 *arg1 = 0 ;
  PropertyInputContainer *arg2 = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 & type is null", 0);
    return ;
  }
  arg2 = (PropertyInputContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PropertyInputContainer const & type is null", 0);
    return ;
  }
  {
    try {
      Dali::Toolkit::MoveActorConstraint(*arg1,(PropertyInputContainer const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WrapActorConstraint(void * jarg1, void * jarg2) {
  Dali::Vector3 *arg1 = 0 ;
  PropertyInputContainer *arg2 = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 & type is null", 0);
    return ;
  }
  arg2 = (PropertyInputContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PropertyInputContainer const & type is null", 0);
    return ;
  }
  {
    try {
      Dali::Toolkit::WrapActorConstraint(*arg1,(PropertyInputContainer const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollViewEffect() {
  void * jresult ;
  Dali::Toolkit::ScrollViewEffect *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ScrollViewEffect *)new Dali::Toolkit::ScrollViewEffect();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollViewEffect(void * jarg1) {
  Dali::Toolkit::ScrollViewEffect *arg1 = (Dali::Toolkit::ScrollViewEffect *) 0 ;

  arg1 = (Dali::Toolkit::ScrollViewEffect *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollViewPagePathEffect_New(void * jarg1, void * jarg2, int jarg3, void * jarg4, unsigned int jarg5) {
  void * jresult ;
  Dali::Path arg1 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Property::Index arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  unsigned int arg5 ;
  Dali::Path *argp1 ;
  Dali::Toolkit::ScrollViewPagePathEffect result;

  argp1 = (Dali::Path *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Path", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  arg3 = (Dali::Property::Index)jarg3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  arg5 = (unsigned int)jarg5;
  {
    try {
      result = Dali::Toolkit::ScrollViewPagePathEffect::New(arg1,(Dali::Vector3 const &)*arg2,arg3,(Dali::Vector3 const &)*arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ScrollViewPagePathEffect((const Dali::Toolkit::ScrollViewPagePathEffect &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollViewPagePathEffect() {
  void * jresult ;
  Dali::Toolkit::ScrollViewPagePathEffect *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ScrollViewPagePathEffect *)new Dali::Toolkit::ScrollViewPagePathEffect();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollViewPagePathEffect_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::ScrollViewPagePathEffect result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::ScrollViewPagePathEffect::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ScrollViewPagePathEffect((const Dali::Toolkit::ScrollViewPagePathEffect &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollViewPagePathEffect_ApplyToPage(void * jarg1, void * jarg2, unsigned int jarg3) {
  Dali::Toolkit::ScrollViewPagePathEffect *arg1 = (Dali::Toolkit::ScrollViewPagePathEffect *) 0 ;
  Dali::Actor arg2 ;
  unsigned int arg3 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::ScrollViewPagePathEffect *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (unsigned int)jarg3;
  {
    try {
      (arg1)->ApplyToPage(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollViewPagePathEffect(void * jarg1) {
  Dali::Toolkit::ScrollViewPagePathEffect *arg1 = (Dali::Toolkit::ScrollViewPagePathEffect *) 0 ;

  arg1 = (Dali::Toolkit::ScrollViewPagePathEffect *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ClampState2D_x_set(void * jarg1, int jarg2) {
  Dali::Toolkit::ClampState2D *arg1 = (Dali::Toolkit::ClampState2D *) 0 ;
  Dali::Toolkit::ClampState arg2 ;

  arg1 = (Dali::Toolkit::ClampState2D *)jarg1;
  arg2 = (Dali::Toolkit::ClampState)jarg2;
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ClampState2D_x_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::ClampState2D *arg1 = (Dali::Toolkit::ClampState2D *) 0 ;
  Dali::Toolkit::ClampState result;

  arg1 = (Dali::Toolkit::ClampState2D *)jarg1;
  result = (Dali::Toolkit::ClampState) ((arg1)->x);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ClampState2D_y_set(void * jarg1, int jarg2) {
  Dali::Toolkit::ClampState2D *arg1 = (Dali::Toolkit::ClampState2D *) 0 ;
  Dali::Toolkit::ClampState arg2 ;

  arg1 = (Dali::Toolkit::ClampState2D *)jarg1;
  arg2 = (Dali::Toolkit::ClampState)jarg2;
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ClampState2D_y_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::ClampState2D *arg1 = (Dali::Toolkit::ClampState2D *) 0 ;
  Dali::Toolkit::ClampState result;

  arg1 = (Dali::Toolkit::ClampState2D *)jarg1;
  result = (Dali::Toolkit::ClampState) ((arg1)->y);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ClampState2D() {
  void * jresult ;
  Dali::Toolkit::ClampState2D *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ClampState2D *)new Dali::Toolkit::ClampState2D();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ClampState2D(void * jarg1) {
  Dali::Toolkit::ClampState2D *arg1 = (Dali::Toolkit::ClampState2D *) 0 ;

  arg1 = (Dali::Toolkit::ClampState2D *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RulerDomain__SWIG_0(float jarg1, float jarg2, bool jarg3) {
  void * jresult ;
  float arg1 ;
  float arg2 ;
  bool arg3 ;
  Dali::Toolkit::RulerDomain *result = 0 ;

  arg1 = (float)jarg1;
  arg2 = (float)jarg2;
  arg3 = jarg3 ? true : false;
  {
    try {
      result = (Dali::Toolkit::RulerDomain *)new Dali::Toolkit::RulerDomain(arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RulerDomain__SWIG_1(float jarg1, float jarg2) {
  void * jresult ;
  float arg1 ;
  float arg2 ;
  Dali::Toolkit::RulerDomain *result = 0 ;

  arg1 = (float)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (Dali::Toolkit::RulerDomain *)new Dali::Toolkit::RulerDomain(arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerDomain_min_set(void * jarg1, float jarg2) {
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->min = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerDomain_min_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  result = (float) ((arg1)->min);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerDomain_max_set(void * jarg1, float jarg2) {
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->max = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerDomain_max_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  result = (float) ((arg1)->max);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerDomain_enabled_set(void * jarg1, bool jarg2) {
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  arg2 = jarg2 ? true : false;
  if (arg1) (arg1)->enabled = arg2;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_RulerDomain_enabled_get(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  result = (bool) ((arg1)->enabled);
  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerDomain_Clamp__SWIG_0(void * jarg1, float jarg2, float jarg3, float jarg4) {
  float jresult ;
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float result;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try {
      result = (float)((Dali::Toolkit::RulerDomain const *)arg1)->Clamp(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerDomain_Clamp__SWIG_1(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)((Dali::Toolkit::RulerDomain const *)arg1)->Clamp(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerDomain_Clamp__SWIG_2(void * jarg1, float jarg2) {
  float jresult ;
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::RulerDomain const *)arg1)->Clamp(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerDomain_Clamp__SWIG_3(void * jarg1, float jarg2, float jarg3, float jarg4, void * jarg5) {
  float jresult ;
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  Dali::Toolkit::ClampState *arg5 = 0 ;
  float result;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  arg5 = (Dali::Toolkit::ClampState *)jarg5;
  if (!arg5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ClampState & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)((Dali::Toolkit::RulerDomain const *)arg1)->Clamp(arg2,arg3,arg4,*arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerDomain_GetSize(void * jarg1) {
  float jresult ;
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::RulerDomain const *)arg1)->GetSize();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_RulerDomain(void * jarg1) {
  Dali::Toolkit::RulerDomain *arg1 = (Dali::Toolkit::RulerDomain *) 0 ;

  arg1 = (Dali::Toolkit::RulerDomain *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_Snap__SWIG_0(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->Snap(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_Snap__SWIG_1(void * jarg1, float jarg2) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->Snap(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_GetPositionFromPage(void * jarg1, unsigned int jarg2, unsigned int * jarg3, bool jarg4) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  unsigned int arg2 ;
  unsigned int *arg3 = 0 ;
  bool arg4 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int *)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->GetPositionFromPage(arg2,*arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Ruler_GetPageFromPosition(void * jarg1, float jarg2, bool jarg3) {
  unsigned int jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  bool arg3 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = jarg3 ? true : false;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::Ruler const *)arg1)->GetPageFromPosition(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Ruler_GetTotalPages(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::Ruler const *)arg1)->GetTotalPages();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Ruler_GetType(void * jarg1) {
  int jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  Dali::Toolkit::Ruler::RulerType result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Ruler::RulerType)((Dali::Toolkit::Ruler const *)arg1)->GetType();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Ruler_IsEnabled(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::Ruler const *)arg1)->IsEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Ruler_Enable(void * jarg1) {
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  {
    try {
      (arg1)->Enable();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Ruler_Disable(void * jarg1) {
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  {
    try {
      (arg1)->Disable();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Ruler_SetDomain(void * jarg1, void * jarg2) {
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  SwigValueWrapper< Dali::Toolkit::RulerDomain > arg2 ;
  Dali::Toolkit::RulerDomain *argp2 ;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  argp2 = (Dali::Toolkit::RulerDomain *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::RulerDomain", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetDomain(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Ruler_GetDomain(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  Dali::Toolkit::RulerDomain *result = 0 ;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  {
    try {
      result = (Dali::Toolkit::RulerDomain *) &((Dali::Toolkit::Ruler const *)arg1)->GetDomain();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Ruler_DisableDomain(void * jarg1) {
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  {
    try {
      (arg1)->DisableDomain();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_Clamp__SWIG_0(void * jarg1, float jarg2, float jarg3, float jarg4) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->Clamp(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_Clamp__SWIG_1(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->Clamp(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_Clamp__SWIG_2(void * jarg1, float jarg2) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->Clamp(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_Clamp__SWIG_3(void * jarg1, float jarg2, float jarg3, float jarg4, void * jarg5) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  Dali::Toolkit::ClampState *arg5 = 0 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  arg5 = (Dali::Toolkit::ClampState *)jarg5;
  if (!arg5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ClampState & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->Clamp(arg2,arg3,arg4,*arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_SnapAndClamp__SWIG_0(void * jarg1, float jarg2, float jarg3, float jarg4, float jarg5) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  arg5 = (float)jarg5;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->SnapAndClamp(arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_SnapAndClamp__SWIG_1(void * jarg1, float jarg2, float jarg3, float jarg4) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->SnapAndClamp(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_SnapAndClamp__SWIG_2(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->SnapAndClamp(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_SnapAndClamp__SWIG_3(void * jarg1, float jarg2) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->SnapAndClamp(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Ruler_SnapAndClamp__SWIG_4(void * jarg1, float jarg2, float jarg3, float jarg4, float jarg5, void * jarg6) {
  float jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  Dali::Toolkit::ClampState *arg6 = 0 ;
  float result;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  arg5 = (float)jarg5;
  arg6 = (Dali::Toolkit::ClampState *)jarg6;
  if (!arg6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ClampState & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)((Dali::Toolkit::Ruler const *)arg1)->SnapAndClamp(arg2,arg3,arg4,arg5,*arg6);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_DefaultRuler() {
  void * jresult ;
  Dali::Toolkit::DefaultRuler *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::DefaultRuler *)new Dali::Toolkit::DefaultRuler();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_DefaultRuler_Snap(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::Toolkit::DefaultRuler *arg1 = (Dali::Toolkit::DefaultRuler *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::Toolkit::DefaultRuler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)((Dali::Toolkit::DefaultRuler const *)arg1)->Snap(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_DefaultRuler_GetPositionFromPage(void * jarg1, unsigned int jarg2, unsigned int * jarg3, bool jarg4) {
  float jresult ;
  Dali::Toolkit::DefaultRuler *arg1 = (Dali::Toolkit::DefaultRuler *) 0 ;
  unsigned int arg2 ;
  unsigned int *arg3 = 0 ;
  bool arg4 ;
  float result;

  arg1 = (Dali::Toolkit::DefaultRuler *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int *)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = (float)((Dali::Toolkit::DefaultRuler const *)arg1)->GetPositionFromPage(arg2,*arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_DefaultRuler_GetPageFromPosition(void * jarg1, float jarg2, bool jarg3) {
  unsigned int jresult ;
  Dali::Toolkit::DefaultRuler *arg1 = (Dali::Toolkit::DefaultRuler *) 0 ;
  float arg2 ;
  bool arg3 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::DefaultRuler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = jarg3 ? true : false;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::DefaultRuler const *)arg1)->GetPageFromPosition(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_DefaultRuler_GetTotalPages(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::DefaultRuler *arg1 = (Dali::Toolkit::DefaultRuler *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::DefaultRuler *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::DefaultRuler const *)arg1)->GetTotalPages();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_DefaultRuler(void * jarg1) {
  Dali::Toolkit::DefaultRuler *arg1 = (Dali::Toolkit::DefaultRuler *) 0 ;

  arg1 = (Dali::Toolkit::DefaultRuler *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FixedRuler__SWIG_0(float jarg1) {
  void * jresult ;
  float arg1 ;
  Dali::Toolkit::FixedRuler *result = 0 ;

  arg1 = (float)jarg1;
  {
    try {
      result = (Dali::Toolkit::FixedRuler *)new Dali::Toolkit::FixedRuler(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FixedRuler__SWIG_1() {
  void * jresult ;
  Dali::Toolkit::FixedRuler *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::FixedRuler *)new Dali::Toolkit::FixedRuler();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FixedRuler_Snap(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::Toolkit::FixedRuler *arg1 = (Dali::Toolkit::FixedRuler *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::Toolkit::FixedRuler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)((Dali::Toolkit::FixedRuler const *)arg1)->Snap(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FixedRuler_GetPositionFromPage(void * jarg1, unsigned int jarg2, unsigned int * jarg3, bool jarg4) {
  float jresult ;
  Dali::Toolkit::FixedRuler *arg1 = (Dali::Toolkit::FixedRuler *) 0 ;
  unsigned int arg2 ;
  unsigned int *arg3 = 0 ;
  bool arg4 ;
  float result;

  arg1 = (Dali::Toolkit::FixedRuler *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int *)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = (float)((Dali::Toolkit::FixedRuler const *)arg1)->GetPositionFromPage(arg2,*arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FixedRuler_GetPageFromPosition(void * jarg1, float jarg2, bool jarg3) {
  unsigned int jresult ;
  Dali::Toolkit::FixedRuler *arg1 = (Dali::Toolkit::FixedRuler *) 0 ;
  float arg2 ;
  bool arg3 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::FixedRuler *)jarg1;
  arg2 = (float)jarg2;
  arg3 = jarg3 ? true : false;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::FixedRuler const *)arg1)->GetPageFromPosition(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_FixedRuler_GetTotalPages(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::FixedRuler *arg1 = (Dali::Toolkit::FixedRuler *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::FixedRuler *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::FixedRuler const *)arg1)->GetTotalPages();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FixedRuler(void * jarg1) {
  Dali::Toolkit::FixedRuler *arg1 = (Dali::Toolkit::FixedRuler *) 0 ;

  arg1 = (Dali::Toolkit::FixedRuler *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ClampEvent_scale_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView::ClampEvent *arg1 = (Dali::Toolkit::ScrollView::ClampEvent *) 0 ;
  Dali::Toolkit::ClampState2D *arg2 = (Dali::Toolkit::ClampState2D *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView::ClampEvent *)jarg1;
  arg2 = (Dali::Toolkit::ClampState2D *)jarg2;
  if (arg1) (arg1)->scale = *arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_ClampEvent_scale_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView::ClampEvent *arg1 = (Dali::Toolkit::ScrollView::ClampEvent *) 0 ;
  Dali::Toolkit::ClampState2D *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollView::ClampEvent *)jarg1;
  result = (Dali::Toolkit::ClampState2D *)& ((arg1)->scale);
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ClampEvent_position_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView::ClampEvent *arg1 = (Dali::Toolkit::ScrollView::ClampEvent *) 0 ;
  Dali::Toolkit::ClampState2D *arg2 = (Dali::Toolkit::ClampState2D *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView::ClampEvent *)jarg1;
  arg2 = (Dali::Toolkit::ClampState2D *)jarg2;
  if (arg1) (arg1)->position = *arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_ClampEvent_position_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView::ClampEvent *arg1 = (Dali::Toolkit::ScrollView::ClampEvent *) 0 ;
  Dali::Toolkit::ClampState2D *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollView::ClampEvent *)jarg1;
  result = (Dali::Toolkit::ClampState2D *)& ((arg1)->position);
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ClampEvent_rotation_set(void * jarg1, int jarg2) {
  Dali::Toolkit::ScrollView::ClampEvent *arg1 = (Dali::Toolkit::ScrollView::ClampEvent *) 0 ;
  Dali::Toolkit::ClampState arg2 ;

  arg1 = (Dali::Toolkit::ScrollView::ClampEvent *)jarg1;
  arg2 = (Dali::Toolkit::ClampState)jarg2;
  if (arg1) (arg1)->rotation = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_ClampEvent_rotation_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::ScrollView::ClampEvent *arg1 = (Dali::Toolkit::ScrollView::ClampEvent *) 0 ;
  Dali::Toolkit::ClampState result;

  arg1 = (Dali::Toolkit::ScrollView::ClampEvent *)jarg1;
  result = (Dali::Toolkit::ClampState) ((arg1)->rotation);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollView_ClampEvent() {
  void * jresult ;
  Dali::Toolkit::ScrollView::ClampEvent *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ScrollView::ClampEvent *)new Dali::Toolkit::ScrollView::ClampEvent();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollView_ClampEvent(void * jarg1) {
  Dali::Toolkit::ScrollView::ClampEvent *arg1 = (Dali::Toolkit::ScrollView::ClampEvent *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView::ClampEvent *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SnapEvent_type_set(void * jarg1, int jarg2) {
  Dali::Toolkit::ScrollView::SnapEvent *arg1 = (Dali::Toolkit::ScrollView::SnapEvent *) 0 ;
  Dali::Toolkit::SnapType arg2 ;

  arg1 = (Dali::Toolkit::ScrollView::SnapEvent *)jarg1;
  arg2 = (Dali::Toolkit::SnapType)jarg2;
  if (arg1) (arg1)->type = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_SnapEvent_type_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::ScrollView::SnapEvent *arg1 = (Dali::Toolkit::ScrollView::SnapEvent *) 0 ;
  Dali::Toolkit::SnapType result;

  arg1 = (Dali::Toolkit::ScrollView::SnapEvent *)jarg1;
  result = (Dali::Toolkit::SnapType) ((arg1)->type);
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SnapEvent_position_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView::SnapEvent *arg1 = (Dali::Toolkit::ScrollView::SnapEvent *) 0 ;
  Dali::Vector2 *arg2 = (Dali::Vector2 *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView::SnapEvent *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (arg1) (arg1)->position = *arg2;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_SnapEvent_position_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView::SnapEvent *arg1 = (Dali::Toolkit::ScrollView::SnapEvent *) 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollView::SnapEvent *)jarg1;
  result = (Dali::Vector2 *)& ((arg1)->position);
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SnapEvent_duration_set(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView::SnapEvent *arg1 = (Dali::Toolkit::ScrollView::SnapEvent *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView::SnapEvent *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->duration = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollView_SnapEvent_duration_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollView::SnapEvent *arg1 = (Dali::Toolkit::ScrollView::SnapEvent *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollView::SnapEvent *)jarg1;
  result = (float) ((arg1)->duration);
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollView_SnapEvent() {
  void * jresult ;
  Dali::Toolkit::ScrollView::SnapEvent *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ScrollView::SnapEvent *)new Dali::Toolkit::ScrollView::SnapEvent();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollView_SnapEvent(void * jarg1) {
  Dali::Toolkit::ScrollView::SnapEvent *arg1 = (Dali::Toolkit::ScrollView::SnapEvent *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView::SnapEvent *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollView_Property() {
  void * jresult ;
  Dali::Toolkit::ScrollView::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ScrollView::Property *)new Dali::Toolkit::ScrollView::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollView_Property(void * jarg1) {
  Dali::Toolkit::ScrollView::Property *arg1 = (Dali::Toolkit::ScrollView::Property *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::ScrollView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ScrollView *)new Dali::Toolkit::ScrollView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView *arg1 = 0 ;
  Dali::Toolkit::ScrollView *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScrollView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ScrollView *)new Dali::Toolkit::ScrollView((Dali::Toolkit::ScrollView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Toolkit::ScrollView *arg2 = 0 ;
  Dali::Toolkit::ScrollView *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Toolkit::ScrollView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScrollView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ScrollView *) &(arg1)->operator =((Dali::Toolkit::ScrollView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollView(void * jarg1) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_New() {
  void * jresult ;
  Dali::Toolkit::ScrollView result;

  {
    try {
      result = Dali::Toolkit::ScrollView::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ScrollView((const Dali::Toolkit::ScrollView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::ScrollView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::ScrollView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ScrollView((const Dali::Toolkit::ScrollView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_GetScrollSnapAlphaFunction(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::AlphaFunction result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ScrollView const *)arg1)->GetScrollSnapAlphaFunction();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::AlphaFunction((const Dali::AlphaFunction &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetScrollSnapAlphaFunction(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::AlphaFunction arg2 ;
  Dali::AlphaFunction *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::AlphaFunction *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetScrollSnapAlphaFunction(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_GetScrollFlickAlphaFunction(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::AlphaFunction result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ScrollView const *)arg1)->GetScrollFlickAlphaFunction();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::AlphaFunction((const Dali::AlphaFunction &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetScrollFlickAlphaFunction(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::AlphaFunction arg2 ;
  Dali::AlphaFunction *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::AlphaFunction *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetScrollFlickAlphaFunction(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollView_GetScrollSnapDuration(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollView const *)arg1)->GetScrollSnapDuration();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetScrollSnapDuration(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetScrollSnapDuration(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollView_GetScrollFlickDuration(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollView const *)arg1)->GetScrollFlickDuration();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetScrollFlickDuration(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetScrollFlickDuration(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetRulerX(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Toolkit::RulerPtr arg2 ;
  Dali::Toolkit::RulerPtr *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Toolkit::RulerPtr *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::RulerPtr", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetRulerX(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetRulerY(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Toolkit::RulerPtr arg2 ;
  Dali::Toolkit::RulerPtr *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Toolkit::RulerPtr *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::RulerPtr", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetRulerY(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetScrollSensitive(void * jarg1, bool jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetScrollSensitive(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetMaxOvershoot(void * jarg1, float jarg2, float jarg3) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->SetMaxOvershoot(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetSnapOvershootAlphaFunction(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::AlphaFunction arg2 ;
  Dali::AlphaFunction *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::AlphaFunction *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetSnapOvershootAlphaFunction(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetSnapOvershootDuration(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetSnapOvershootDuration(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetActorAutoSnap(void * jarg1, bool jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetActorAutoSnap(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetWrapMode(void * jarg1, bool jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetWrapMode(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ScrollView_GetScrollUpdateDistance(void * jarg1) {
  int jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  int result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (int)((Dali::Toolkit::ScrollView const *)arg1)->GetScrollUpdateDistance();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetScrollUpdateDistance(void * jarg1, int jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  int arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      (arg1)->SetScrollUpdateDistance(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ScrollView_GetAxisAutoLock(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::ScrollView const *)arg1)->GetAxisAutoLock();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetAxisAutoLock(void * jarg1, bool jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetAxisAutoLock(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollView_GetAxisAutoLockGradient(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollView const *)arg1)->GetAxisAutoLockGradient();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetAxisAutoLockGradient(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetAxisAutoLockGradient(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollView_GetFrictionCoefficient(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollView const *)arg1)->GetFrictionCoefficient();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetFrictionCoefficient(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetFrictionCoefficient(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollView_GetFlickSpeedCoefficient(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollView const *)arg1)->GetFlickSpeedCoefficient();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetFlickSpeedCoefficient(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetFlickSpeedCoefficient(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_GetMinimumDistanceForFlick(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ScrollView const *)arg1)->GetMinimumDistanceForFlick();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetMinimumDistanceForFlick(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetMinimumDistanceForFlick((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollView_GetMinimumSpeedForFlick(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollView const *)arg1)->GetMinimumSpeedForFlick();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetMinimumSpeedForFlick(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetMinimumSpeedForFlick(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ScrollView_GetMaxFlickSpeed(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ScrollView const *)arg1)->GetMaxFlickSpeed();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetMaxFlickSpeed(void * jarg1, float jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetMaxFlickSpeed(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_GetWheelScrollDistanceStep(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ScrollView const *)arg1)->GetWheelScrollDistanceStep();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetWheelScrollDistanceStep(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 arg2 ;
  Dali::Vector2 *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Vector2 *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector2", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetWheelScrollDistanceStep(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_GetCurrentScrollPosition(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ScrollView const *)arg1)->GetCurrentScrollPosition();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ScrollView_GetCurrentPage(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::ScrollView const *)arg1)->GetCurrentPage();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_0(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->ScrollTo((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_1(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ScrollTo((Dali::Vector2 const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_2(void * jarg1, void * jarg2, float jarg3, void * jarg4) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  float arg3 ;
  Dali::AlphaFunction arg4 ;
  Dali::AlphaFunction *argp4 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  {
    try {
      (arg1)->ScrollTo((Dali::Vector2 const &)*arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_3(void * jarg1, void * jarg2, float jarg3, int jarg4, int jarg5) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  float arg3 ;
  Dali::Toolkit::DirectionBias arg4 ;
  Dali::Toolkit::DirectionBias arg5 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  arg4 = (Dali::Toolkit::DirectionBias)jarg4;
  arg5 = (Dali::Toolkit::DirectionBias)jarg5;
  {
    try {
      (arg1)->ScrollTo((Dali::Vector2 const &)*arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_4(void * jarg1, void * jarg2, float jarg3, void * jarg4, int jarg5, int jarg6) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  float arg3 ;
  Dali::AlphaFunction arg4 ;
  Dali::Toolkit::DirectionBias arg5 ;
  Dali::Toolkit::DirectionBias arg6 ;
  Dali::AlphaFunction *argp4 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  argp4 = (Dali::AlphaFunction *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::AlphaFunction", 0);
    return ;
  }
  arg4 = *argp4;
  arg5 = (Dali::Toolkit::DirectionBias)jarg5;
  arg6 = (Dali::Toolkit::DirectionBias)jarg6;
  {
    try {
      (arg1)->ScrollTo((Dali::Vector2 const &)*arg2,arg3,arg4,arg5,arg6);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_5(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->ScrollTo(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_6(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  unsigned int arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ScrollTo(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_7(void * jarg1, unsigned int jarg2, float jarg3, int jarg4) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  unsigned int arg2 ;
  float arg3 ;
  Dali::Toolkit::DirectionBias arg4 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (float)jarg3;
  arg4 = (Dali::Toolkit::DirectionBias)jarg4;
  {
    try {
      (arg1)->ScrollTo(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_8(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Actor *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Actor *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->ScrollTo(*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ScrollTo__SWIG_9(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Actor *arg2 = 0 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  arg2 = (Dali::Actor *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ScrollTo(*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ScrollView_ScrollToSnapPoint(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (bool)(arg1)->ScrollToSnapPoint();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ApplyConstraintToChildren(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Constraint arg2 ;
  Dali::Constraint *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Constraint *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Constraint", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->ApplyConstraintToChildren(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_RemoveConstraintsFromChildren(void * jarg1) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      (arg1)->RemoveConstraintsFromChildren();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_ApplyEffect(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Toolkit::ScrollViewEffect arg2 ;
  Dali::Toolkit::ScrollViewEffect *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Toolkit::ScrollViewEffect *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::ScrollViewEffect", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->ApplyEffect(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_RemoveEffect(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Toolkit::ScrollViewEffect arg2 ;
  Dali::Toolkit::ScrollViewEffect *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Toolkit::ScrollViewEffect *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::ScrollViewEffect", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->RemoveEffect(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_RemoveAllEffects(void * jarg1) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      (arg1)->RemoveAllEffects();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_BindActor(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->BindActor(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_UnbindActor(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->UnbindActor(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetScrollingDirection__SWIG_0(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Radian arg2 ;
  Dali::Radian arg3 ;
  Dali::Radian *argp2 ;
  Dali::Radian *argp3 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Radian *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Radian", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Radian *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Radian", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->SetScrollingDirection(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_SetScrollingDirection__SWIG_1(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Radian arg2 ;
  Dali::Radian *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Radian *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Radian", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetScrollingDirection(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollView_RemoveScrollingDirection(void * jarg1, void * jarg2) {
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Radian arg2 ;
  Dali::Radian *argp2 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  argp2 = (Dali::Radian *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Radian", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->RemoveScrollingDirection(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ScrollView_SnapStartedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ScrollView *arg1 = (Dali::Toolkit::ScrollView *) 0 ;
  Dali::Toolkit::ScrollView::SnapStartedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::ScrollView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::ScrollView::SnapStartedSignalType *) &(arg1)->SnapStartedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView_Property() {
  void * jresult ;
  Dali::Toolkit::TableView::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TableView::Property *)new Dali::Toolkit::TableView::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TableView_Property(void * jarg1) {
  Dali::Toolkit::TableView::Property *arg1 = (Dali::Toolkit::TableView::Property *) 0 ;

  arg1 = (Dali::Toolkit::TableView::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView_ChildProperty() {
  void * jresult ;
  Dali::Toolkit::TableView::ChildProperty *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TableView::ChildProperty *)new Dali::Toolkit::TableView::ChildProperty();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TableView_ChildProperty(void * jarg1) {
  Dali::Toolkit::TableView::ChildProperty *arg1 = (Dali::Toolkit::TableView::ChildProperty *) 0 ;

  arg1 = (Dali::Toolkit::TableView::ChildProperty *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView_CellPosition__SWIG_0(unsigned int jarg1, unsigned int jarg2, unsigned int jarg3, unsigned int jarg4) {
  void * jresult ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  unsigned int arg3 ;
  unsigned int arg4 ;
  Dali::Toolkit::TableView::CellPosition *result = 0 ;

  arg1 = (unsigned int)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int)jarg3;
  arg4 = (unsigned int)jarg4;
  {
    try {
      result = (Dali::Toolkit::TableView::CellPosition *)new Dali::Toolkit::TableView::CellPosition(arg1,arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView_CellPosition__SWIG_1(unsigned int jarg1, unsigned int jarg2, unsigned int jarg3) {
  void * jresult ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  unsigned int arg3 ;
  Dali::Toolkit::TableView::CellPosition *result = 0 ;

  arg1 = (unsigned int)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int)jarg3;
  {
    try {
      result = (Dali::Toolkit::TableView::CellPosition *)new Dali::Toolkit::TableView::CellPosition(arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView_CellPosition__SWIG_2(unsigned int jarg1, unsigned int jarg2) {
  void * jresult ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  Dali::Toolkit::TableView::CellPosition *result = 0 ;

  arg1 = (unsigned int)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (Dali::Toolkit::TableView::CellPosition *)new Dali::Toolkit::TableView::CellPosition(arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView_CellPosition__SWIG_3(unsigned int jarg1) {
  void * jresult ;
  unsigned int arg1 ;
  Dali::Toolkit::TableView::CellPosition *result = 0 ;

  arg1 = (unsigned int)jarg1;
  {
    try {
      result = (Dali::Toolkit::TableView::CellPosition *)new Dali::Toolkit::TableView::CellPosition(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView_CellPosition__SWIG_4() {
  void * jresult ;
  Dali::Toolkit::TableView::CellPosition *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TableView::CellPosition *)new Dali::Toolkit::TableView::CellPosition();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_CellPosition_rowIndex_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->rowIndex = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TableView_CellPosition_rowIndex_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  result = (unsigned int) ((arg1)->rowIndex);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_CellPosition_columnIndex_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->columnIndex = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TableView_CellPosition_columnIndex_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  result = (unsigned int) ((arg1)->columnIndex);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_CellPosition_rowSpan_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->rowSpan = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TableView_CellPosition_rowSpan_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  result = (unsigned int) ((arg1)->rowSpan);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_CellPosition_columnSpan_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->columnSpan = arg2;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TableView_CellPosition_columnSpan_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  result = (unsigned int) ((arg1)->columnSpan);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TableView_CellPosition(void * jarg1) {
  Dali::Toolkit::TableView::CellPosition *arg1 = (Dali::Toolkit::TableView::CellPosition *) 0 ;

  arg1 = (Dali::Toolkit::TableView::CellPosition *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::TableView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TableView *)new Dali::Toolkit::TableView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TableView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TableView *arg1 = 0 ;
  Dali::Toolkit::TableView *result = 0 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TableView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TableView *)new Dali::Toolkit::TableView((Dali::Toolkit::TableView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TableView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  Dali::Toolkit::TableView *arg2 = 0 ;
  Dali::Toolkit::TableView *result = 0 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (Dali::Toolkit::TableView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TableView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TableView *) &(arg1)->operator =((Dali::Toolkit::TableView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TableView(void * jarg1) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TableView_New(unsigned int jarg1, unsigned int jarg2) {
  void * jresult ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  Dali::Toolkit::TableView result;

  arg1 = (unsigned int)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = Dali::Toolkit::TableView::New(arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TableView((const Dali::Toolkit::TableView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TableView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::TableView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::TableView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TableView((const Dali::Toolkit::TableView &)result);
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TableView_AddChild(void * jarg1, void * jarg2, void * jarg3) {
  bool jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  Dali::Actor arg2 ;
  Dali::Toolkit::TableView::CellPosition arg3 ;
  Dali::Actor *argp2 ;
  Dali::Toolkit::TableView::CellPosition *argp3 ;
  bool result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::TableView::CellPosition *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TableView::CellPosition", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = (bool)(arg1)->AddChild(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TableView_GetChildAt(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  Dali::Toolkit::TableView::CellPosition arg2 ;
  Dali::Toolkit::TableView::CellPosition *argp2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  argp2 = (Dali::Toolkit::TableView::CellPosition *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TableView::CellPosition", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (arg1)->GetChildAt(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TableView_RemoveChildAt(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  Dali::Toolkit::TableView::CellPosition arg2 ;
  Dali::Toolkit::TableView::CellPosition *argp2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  argp2 = (Dali::Toolkit::TableView::CellPosition *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TableView::CellPosition", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (arg1)->RemoveChildAt(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TableView_FindChildPosition(void * jarg1, void * jarg2, void * jarg3) {
  bool jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  Dali::Actor arg2 ;
  Dali::Toolkit::TableView::CellPosition *arg3 = 0 ;
  Dali::Actor *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::Toolkit::TableView::CellPosition *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TableView::CellPosition & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)(arg1)->FindChildPosition(arg2,*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_InsertRow(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->InsertRow(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_DeleteRow__SWIG_0(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->DeleteRow(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_DeleteRow__SWIG_1(void * jarg1, unsigned int jarg2, void * jarg3) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  std::vector< Dali::Actor > *arg3 = 0 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (std::vector< Dali::Actor > *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< Dali::Actor > & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->DeleteRow(arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_InsertColumn(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->InsertColumn(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_DeleteColumn__SWIG_0(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->DeleteColumn(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_DeleteColumn__SWIG_1(void * jarg1, unsigned int jarg2, void * jarg3) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  std::vector< Dali::Actor > *arg3 = 0 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (std::vector< Dali::Actor > *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< Dali::Actor > & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->DeleteColumn(arg2,*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_Resize__SWIG_0(void * jarg1, unsigned int jarg2, unsigned int jarg3) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  unsigned int arg3 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int)jarg3;
  {
    try {
      (arg1)->Resize(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_Resize__SWIG_1(void * jarg1, unsigned int jarg2, unsigned int jarg3, void * jarg4) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  unsigned int arg3 ;
  std::vector< Dali::Actor > *arg4 = 0 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int)jarg3;
  arg4 = (std::vector< Dali::Actor > *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< Dali::Actor > & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Resize(arg2,arg3,*arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_SetCellPadding(void * jarg1, void * jarg2) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  Dali::Size arg2 ;
  Dali::Size *argp2 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  argp2 = (Dali::Size *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Size", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetCellPadding(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TableView_GetCellPadding(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  Dali::Size result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  {
    try {
      result = (arg1)->GetCellPadding();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Size((const Dali::Size &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_SetFitHeight(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->SetFitHeight(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TableView_IsFitHeight(void * jarg1, unsigned int jarg2) {
  bool jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  bool result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (bool)((Dali::Toolkit::TableView const *)arg1)->IsFitHeight(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_SetFitWidth(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->SetFitWidth(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TableView_IsFitWidth(void * jarg1, unsigned int jarg2) {
  bool jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  bool result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (bool)((Dali::Toolkit::TableView const *)arg1)->IsFitWidth(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_SetFixedHeight(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->SetFixedHeight(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_TableView_GetFixedHeight(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  float result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::TableView const *)arg1)->GetFixedHeight(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_SetRelativeHeight(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->SetRelativeHeight(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_TableView_GetRelativeHeight(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  float result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::TableView const *)arg1)->GetRelativeHeight(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_SetFixedWidth(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->SetFixedWidth(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_TableView_GetFixedWidth(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  float result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::TableView const *)arg1)->GetFixedWidth(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_SetRelativeWidth(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->SetRelativeWidth(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_TableView_GetRelativeWidth(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int arg2 ;
  float result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::TableView const *)arg1)->GetRelativeWidth(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TableView_GetRows(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  {
    try {
      result = (unsigned int)(arg1)->GetRows();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TableView_GetColumns(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  {
    try {
      result = (unsigned int)(arg1)->GetColumns();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TableView_SetCellAlignment(void * jarg1, void * jarg2, int jarg3, int jarg4) {
  Dali::Toolkit::TableView *arg1 = (Dali::Toolkit::TableView *) 0 ;
  Dali::Toolkit::TableView::CellPosition arg2 ;
  Dali::HorizontalAlignment::Type arg3 ;
  Dali::VerticalAlignment::Type arg4 ;
  Dali::Toolkit::TableView::CellPosition *argp2 ;

  arg1 = (Dali::Toolkit::TableView *)jarg1;
  argp2 = (Dali::Toolkit::TableView::CellPosition *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TableView::CellPosition", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::HorizontalAlignment::Type)jarg3;
  arg4 = (Dali::VerticalAlignment::Type)jarg4;
  {
    try {
      (arg1)->SetCellAlignment(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextLabel_Property() {
  void * jresult ;
  Dali::Toolkit::TextLabel::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TextLabel::Property *)new Dali::Toolkit::TextLabel::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextLabel_Property(void * jarg1) {
  Dali::Toolkit::TextLabel::Property *arg1 = (Dali::Toolkit::TextLabel::Property *) 0 ;

  arg1 = (Dali::Toolkit::TextLabel::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_New__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::TextLabel result;

  {
    try {
      result = Dali::Toolkit::TextLabel::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TextLabel((const Dali::Toolkit::TextLabel &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_New__SWIG_1(char * text) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::Toolkit::TextLabel result;

  if (!text) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(text);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::Toolkit::TextLabel::New((std::string const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TextLabel((const Dali::Toolkit::TextLabel &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_New_With_Style(bool hasStyle) {
  void * jresult ;
  Dali::Toolkit::TextLabel result;

  {
    try {
      if (hasStyle) {
        result = Dali::Toolkit::TextLabel::New(Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS);
      } else {
        result = Dali::Toolkit::TextLabel::New();
      }
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TextLabel((const Dali::Toolkit::TextLabel &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_New_With_String_Style(char * text, bool hasStyle) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::Toolkit::TextLabel result;

  if (!text) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(text);
  arg1 = &arg1_str;
  {
    try {
      if (hasStyle) {
        result = Dali::Toolkit::TextLabel::New(Dali::Toolkit::Control::ControlBehaviour::DISABLE_STYLE_CHANGE_SIGNALS, (std::string const &)*arg1);
      } else {
        result = Dali::Toolkit::TextLabel::New((std::string const &)*arg1);
      }
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TextLabel((const Dali::Toolkit::TextLabel &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextLabel__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::TextLabel *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::TextLabel *)new Dali::Toolkit::TextLabel();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextLabel__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextLabel *arg1 = 0 ;
  Dali::Toolkit::TextLabel *result = 0 ;

  arg1 = (Dali::Toolkit::TextLabel *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TextLabel const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TextLabel *)new Dali::Toolkit::TextLabel((Dali::Toolkit::TextLabel const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::TextLabel *arg1 = (Dali::Toolkit::TextLabel *) 0 ;
  Dali::Toolkit::TextLabel *arg2 = 0 ;
  Dali::Toolkit::TextLabel *result = 0 ;

  arg1 = (Dali::Toolkit::TextLabel *)jarg1;
  arg2 = (Dali::Toolkit::TextLabel *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TextLabel const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::TextLabel *) &(arg1)->operator =((Dali::Toolkit::TextLabel const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextLabel(void * jarg1) {
  Dali::Toolkit::TextLabel *arg1 = (Dali::Toolkit::TextLabel *) 0 ;

  arg1 = (Dali::Toolkit::TextLabel *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::TextLabel result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::TextLabel::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TextLabel((const Dali::Toolkit::TextLabel &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AccessibilityManager() {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::AccessibilityManager *)new Dali::Toolkit::AccessibilityManager();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AccessibilityManager(void * jarg1) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_Get() {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager result;

  {
    try {
      result = Dali::Toolkit::AccessibilityManager::Get();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::AccessibilityManager((const Dali::Toolkit::AccessibilityManager &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityManager_SetAccessibilityAttribute(void * jarg1, void * jarg2, int jarg3, char * jarg4) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityAttribute arg3 ;
  std::string *arg4 = 0 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::Toolkit::AccessibilityManager::AccessibilityAttribute)jarg3;
  if (!jarg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg4_str(jarg4);
  arg4 = &arg4_str;
  {
    try {
      (arg1)->SetAccessibilityAttribute(arg2,arg3,(std::string const &)*arg4);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetAccessibilityAttribute(void * jarg1, void * jarg2, int jarg3) {
  char * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityAttribute arg3 ;
  Dali::Actor *argp2 ;
  std::string result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::Toolkit::AccessibilityManager::AccessibilityAttribute)jarg3;
  {
    try {
      result = ((Dali::Toolkit::AccessibilityManager const *)arg1)->GetAccessibilityAttribute(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityManager_SetFocusOrder(void * jarg1, void * jarg2, unsigned int jarg3) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  unsigned int arg3 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (unsigned int)jarg3;
  {
    try {
      (arg1)->SetFocusOrder(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetFocusOrder(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::AccessibilityManager const *)arg1)->GetFocusOrder(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AccessibilityManager_GenerateNewFocusOrder(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::AccessibilityManager const *)arg1)->GenerateNewFocusOrder();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetActorByFocusOrder(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  unsigned int arg2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (arg1)->GetActorByFocusOrder(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityManager_SetCurrentFocusActor(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (bool)(arg1)->SetCurrentFocusActor(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetCurrentFocusActor(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (arg1)->GetCurrentFocusActor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetCurrentFocusGroup(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (arg1)->GetCurrentFocusGroup();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetCurrentFocusOrder(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (unsigned int)(arg1)->GetCurrentFocusOrder();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityManager_MoveFocusForward(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (bool)(arg1)->MoveFocusForward();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityManager_MoveFocusBackward(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (bool)(arg1)->MoveFocusBackward();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityManager_ClearFocus(void * jarg1) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      (arg1)->ClearFocus();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityManager_Reset(void * jarg1) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      (arg1)->Reset();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityManager_SetFocusGroup(void * jarg1, void * jarg2, bool jarg3) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  bool arg3 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = jarg3 ? true : false;
  {
    try {
      (arg1)->SetFocusGroup(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityManager_IsFocusGroup(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (bool)((Dali::Toolkit::AccessibilityManager const *)arg1)->IsFocusGroup(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityManager_SetGroupMode(void * jarg1, bool jarg2) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetGroupMode(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetGroupMode(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::AccessibilityManager const *)arg1)->GetGroupMode();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityManager_SetWrapMode(void * jarg1, bool jarg2) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetWrapMode(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetWrapMode(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::AccessibilityManager const *)arg1)->GetWrapMode();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityManager_SetFocusIndicatorActor(void * jarg1, void * jarg2) {
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetFocusIndicatorActor(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetFocusIndicatorActor(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (arg1)->GetFocusIndicatorActor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetFocusGroup(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (arg1)->GetFocusGroup(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_GetReadPosition(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::AccessibilityManager const *)arg1)->GetReadPosition();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_FocusChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::FocusChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::FocusChangedSignalType *) &(arg1)->FocusChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_FocusOvershotSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::FocusOvershotSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::FocusOvershotSignalType *) &(arg1)->FocusOvershotSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

GENERATE_SIGNAL(Dali::Toolkit::AccessibilityManager*, void(*)(Dali::Actor), Dali_AccessibilityManager, FocusedActorActivatedSignal)
// CSharp_Dali_AccessibilityManager_FocusedActorActivatedSignal_Connect
// CSharp_Dali_AccessibilityManager_FocusedActorActivatedSignal_Disconnect

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_StatusChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->StatusChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionNextSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionNextSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionPreviousSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionPreviousSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionActivateSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionActivateSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionReadSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionReadSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionOverSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionOverSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionReadNextSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionReadNextSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionReadPreviousSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionReadPreviousSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionUpSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionUpSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionDownSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionDownSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionClearFocusSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionClearFocusSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionBackSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionBackSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionScrollUpSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionScrollUpSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionScrollDownSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionScrollDownSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionPageLeftSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionPageLeftSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionPageRightSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionPageRightSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionPageUpSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionPageUpSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionPageDownSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionPageDownSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionMoveToFirstSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionMoveToFirstSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionMoveToLastSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionMoveToLastSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionReadFromTopSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionReadFromTopSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionReadFromNextSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionReadFromNextSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionZoomSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionZoomSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionReadPauseResumeSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionReadPauseResumeSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionStartStopSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionSignalType *) &(arg1)->ActionStartStopSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AccessibilityManager_ActionScrollSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AccessibilityManager *arg1 = (Dali::Toolkit::AccessibilityManager *) 0 ;
  Dali::Toolkit::AccessibilityManager::AccessibilityActionScrollSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AccessibilityManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AccessibilityManager::AccessibilityActionScrollSignalType *) &(arg1)->ActionScrollSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_StyleManager() {
  void * jresult ;
  Dali::Toolkit::StyleManager *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::StyleManager *)new Dali::Toolkit::StyleManager();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_StyleManager(void * jarg1) {
  Dali::Toolkit::StyleManager *arg1 = (Dali::Toolkit::StyleManager *) 0 ;

  arg1 = (Dali::Toolkit::StyleManager *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_StyleManager_Get() {
  void * jresult ;
  Dali::Toolkit::StyleManager result;

  {
    try {
      result = Dali::Toolkit::StyleManager::Get();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::StyleManager((const Dali::Toolkit::StyleManager &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StyleManager_ApplyTheme(void * jarg1, char * jarg2) {
  Dali::Toolkit::StyleManager *arg1 = (Dali::Toolkit::StyleManager *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::StyleManager *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->ApplyTheme((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StyleManager_ApplyDefaultTheme(void * jarg1) {
  Dali::Toolkit::StyleManager *arg1 = (Dali::Toolkit::StyleManager *) 0 ;

  arg1 = (Dali::Toolkit::StyleManager *)jarg1;
  {
    try {
      (arg1)->ApplyDefaultTheme();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StyleManager_SetStyleConstant(void * jarg1, char * jarg2, void * jarg3) {
  Dali::Toolkit::StyleManager *arg1 = (Dali::Toolkit::StyleManager *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Property::Value *arg3 = 0 ;

  arg1 = (Dali::Toolkit::StyleManager *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Property::Value *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Value const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetStyleConstant((std::string const &)*arg2,(Dali::Property::Value const &)*arg3);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_StyleManager_GetStyleConstant(void * jarg1, char * jarg2, void * jarg3) {
  bool jresult ;
  Dali::Toolkit::StyleManager *arg1 = (Dali::Toolkit::StyleManager *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Property::Value *arg3 = 0 ;
  bool result;

  arg1 = (Dali::Toolkit::StyleManager *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Property::Value *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Value & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)(arg1)->GetStyleConstant((std::string const &)*arg2,*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StyleManager_ApplyStyle(void * jarg1, void * jarg2, char * jarg3, char * jarg4) {
  Dali::Toolkit::StyleManager *arg1 = (Dali::Toolkit::StyleManager *) 0 ;
  Dali::Toolkit::Control arg2 ;
  std::string *arg3 = 0 ;
  std::string *arg4 = 0 ;
  Dali::Toolkit::Control *argp2 ;

  arg1 = (Dali::Toolkit::StyleManager *)jarg1;
  argp2 = (Dali::Toolkit::Control *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Control", 0);
    return ;
  }
  arg2 = *argp2;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  if (!jarg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg4_str(jarg4);
  arg4 = &arg4_str;
  {
    try {
      (arg1)->ApplyStyle(arg2,(std::string const &)*arg3,(std::string const &)*arg4);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&


  //argout typemap for const std::string&

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_StyleManager_StyleChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::StyleManager *arg1 = (Dali::Toolkit::StyleManager *) 0 ;
  Dali::Toolkit::StyleManager::StyleChangedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::StyleManager *)jarg1;
  {
    try {
      result = (Dali::Toolkit::StyleManager::StyleChangedSignalType *) &(arg1)->StyleChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VideoView_Property() {
  void * jresult ;
  Dali::Toolkit::VideoView::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::VideoView::Property *)new Dali::Toolkit::VideoView::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VideoView_Property(void * jarg1) {
  Dali::Toolkit::VideoView::Property *arg1 = (Dali::Toolkit::VideoView::Property *) 0 ;

  arg1 = (Dali::Toolkit::VideoView::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::VideoView result;

  {
    try {
      result = Dali::Toolkit::VideoView::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_1(char * jarg1) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::Toolkit::VideoView result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::Toolkit::VideoView::New((std::string const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_2(bool swCodec) {
  void * jresult ;
  Dali::Toolkit::VideoView result;
  {
    try {
      result = Dali::Toolkit::VideoView::New(swCodec);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_3(char * jarg1, bool swCodec) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::Toolkit::VideoView result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::Toolkit::VideoView::New((std::string const &)*arg1, swCodec);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView &)result);

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_New__SWIG_4(unsigned int jarg1) {
  void * jresult ;
  Dali::VideoSyncMode syncMode;
  Dali::Toolkit::VideoView result;

  syncMode = static_cast<Dali::VideoSyncMode>(jarg1);

  {
    try {
      result = Dali::Toolkit::DevelVideoView::New(syncMode);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView &)result);

  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VideoView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::VideoView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::VideoView *)new Dali::Toolkit::VideoView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VideoView(void * jarg1) {
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *) 0 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VideoView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::VideoView *arg1 = 0 ;
  Dali::Toolkit::VideoView *result = 0 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::VideoView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::VideoView *)new Dali::Toolkit::VideoView((Dali::Toolkit::VideoView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *) 0 ;
  Dali::Toolkit::VideoView *arg2 = 0 ;
  Dali::Toolkit::VideoView *result = 0 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  arg2 = (Dali::Toolkit::VideoView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::VideoView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::VideoView *) &(arg1)->operator =((Dali::Toolkit::VideoView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::VideoView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::VideoView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VideoView((const Dali::Toolkit::VideoView &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Play(void * jarg1) {
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *) 0 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  {
    try {
      (arg1)->Play();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Pause(void * jarg1) {
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *) 0 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  {
    try {
      (arg1)->Pause();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Stop(void * jarg1) {
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *) 0 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  {
    try {
      (arg1)->Stop();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Forward(void * jarg1, int jarg2) {
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *) 0 ;
  int arg2 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      (arg1)->Forward(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_Backward(void * jarg1, int jarg2) {
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *) 0 ;
  int arg2 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      (arg1)->Backward(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_FinishedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *) 0 ;
  Dali::Toolkit::VideoView::VideoViewSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::VideoView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::VideoView::VideoViewSignalType *) &(arg1)->FinishedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VideoView_GetNativePlayerHandle(void * jarg1)
{
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView *)jarg1;
  if( arg1 == nullptr )
  {
    DALI_LOG_ERROR("VideoView is nullptr!");
    return nullptr;
  }
  void * ret = nullptr;
  {
    try{

      Dali::Any result = Toolkit::DevelVideoView::GetMediaPlayer( *arg1 );
      ret = Dali::AnyCast< void * >( result );

    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CameraView_New__SWIG_0(void * jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::CameraView result;

  Dali::Any arg1(jarg1);
  Dali::Toolkit::CameraView::DisplayType arg2 = static_cast<Dali::Toolkit::CameraView::DisplayType>(jarg2);
  {
    try {
      result = Dali::Toolkit::CameraView::New(arg1, arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::CameraView((const Dali::Toolkit::CameraView &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_CameraView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::CameraView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::CameraView *)new Dali::Toolkit::CameraView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_CameraView(void * jarg1) {
  Dali::Toolkit::CameraView *arg1 = (Dali::Toolkit::CameraView *) 0 ;

  arg1 = (Dali::Toolkit::CameraView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_CameraView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::CameraView *arg1 = 0 ;
  Dali::Toolkit::CameraView *result = 0 ;

  arg1 = (Dali::Toolkit::CameraView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::CameraView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::CameraView *)new Dali::Toolkit::CameraView((Dali::Toolkit::CameraView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CameraView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::CameraView *arg1 = (Dali::Toolkit::CameraView *) 0 ;
  Dali::Toolkit::CameraView *arg2 = 0 ;
  Dali::Toolkit::CameraView *result = 0 ;

  arg1 = (Dali::Toolkit::CameraView *)jarg1;
  arg2 = (Dali::Toolkit::CameraView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::CameraView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::CameraView *) &(arg1)->operator =((Dali::Toolkit::CameraView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CameraView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::CameraView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::CameraView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::CameraView((const Dali::Toolkit::CameraView &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_CameraView_Update(void * jarg1) {
  Dali::Toolkit::CameraView *arg1 = (Dali::Toolkit::CameraView *) 0 ;

  arg1 = (Dali::Toolkit::CameraView *)jarg1;
  {
    try {
      (arg1)->Update();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoView_PlayAnimation(void * jarg1, void * jarg2)
{
  Dali::Toolkit::VideoView *arg1 = (Dali::Toolkit::VideoView*)jarg1;
  if(arg1 == nullptr)
  {
    DALI_LOG_ERROR("VideoView is nullptr!");
    return;
  }
  Dali::Animation *arg2 = (Dali::Animation*)jarg2;
  if(arg2 == nullptr)
  {
    DALI_LOG_ERROR("Animation is nullptr!");
    return;
  }

  {
    try{

      Toolkit::DevelVideoView::PlayAnimation(*arg1, *arg2);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_GaussianBlurView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::GaussianBlurView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::GaussianBlurView *)new Dali::Toolkit::GaussianBlurView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_GaussianBlurView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::GaussianBlurView *arg1 = 0 ;
  Dali::Toolkit::GaussianBlurView *result = 0 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::GaussianBlurView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::GaussianBlurView *)new Dali::Toolkit::GaussianBlurView((Dali::Toolkit::GaussianBlurView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GaussianBlurView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::Toolkit::GaussianBlurView *arg2 = 0 ;
  Dali::Toolkit::GaussianBlurView *result = 0 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  arg2 = (Dali::Toolkit::GaussianBlurView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::GaussianBlurView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::GaussianBlurView *) &(arg1)->operator =((Dali::Toolkit::GaussianBlurView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GaussianBlurView(void * jarg1) {
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GaussianBlurView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::GaussianBlurView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::GaussianBlurView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::GaussianBlurView((const Dali::Toolkit::GaussianBlurView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GaussianBlurView_New__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::GaussianBlurView result;

  {
    try {
      result = Dali::Toolkit::GaussianBlurView::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::GaussianBlurView((const Dali::Toolkit::GaussianBlurView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GaussianBlurView_New__SWIG_1(unsigned int jarg1, float jarg2, int jarg3, float jarg4, float jarg5, bool jarg6) {
  void * jresult ;
  unsigned int arg1 ;
  float arg2 ;
  Dali::Pixel::Format arg3 ;
  float arg4 ;
  float arg5 ;
  bool arg6 ;
  Dali::Toolkit::GaussianBlurView result;

  arg1 = (unsigned int)jarg1;
  arg2 = (float)jarg2;
  arg3 = (Dali::Pixel::Format)jarg3;
  arg4 = (float)jarg4;
  arg5 = (float)jarg5;
  arg6 = jarg6 ? true : false;
  {
    try {
      result = Dali::Toolkit::GaussianBlurView::New(arg1,arg2,arg3,arg4,arg5,arg6);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::GaussianBlurView((const Dali::Toolkit::GaussianBlurView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GaussianBlurView_New__SWIG_2(unsigned int jarg1, float jarg2, int jarg3, float jarg4, float jarg5) {
  void * jresult ;
  unsigned int arg1 ;
  float arg2 ;
  Dali::Pixel::Format arg3 ;
  float arg4 ;
  float arg5 ;
  Dali::Toolkit::GaussianBlurView result;

  arg1 = (unsigned int)jarg1;
  arg2 = (float)jarg2;
  arg3 = (Dali::Pixel::Format)jarg3;
  arg4 = (float)jarg4;
  arg5 = (float)jarg5;
  {
    try {
      result = Dali::Toolkit::GaussianBlurView::New(arg1,arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::GaussianBlurView((const Dali::Toolkit::GaussianBlurView &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurView_Add(void * jarg1, void * jarg2) {
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->Add(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurView_Remove(void * jarg1, void * jarg2) {
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->Remove(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurView_Activate(void * jarg1) {
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  {
    try {
      (arg1)->Activate();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurView_ActivateOnce(void * jarg1) {
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  {
    try {
      (arg1)->ActivateOnce();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurView_Deactivate(void * jarg1) {
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  {
    try {
      (arg1)->Deactivate();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurView_SetUserImageAndOutputRenderTarget(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::Texture arg2 ;
  Dali::FrameBuffer arg3 ;
  Dali::Texture *argp2 ;
  Dali::FrameBuffer *argp3 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  argp2 = (Dali::Texture *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Texture", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::FrameBuffer *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::FrameBuffer", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->SetUserImageAndOutputRenderTarget(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GaussianBlurView_GetBlurStrengthPropertyIndex(void * jarg1) {
  int jresult ;
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::Property::Index result;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  {
    try {
      result = (Dali::Property::Index)((Dali::Toolkit::GaussianBlurView const *)arg1)->GetBlurStrengthPropertyIndex();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GaussianBlurView_GetBlurredRenderTarget(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::FrameBuffer result;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::GaussianBlurView const *)arg1)->GetBlurredRenderTarget();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::FrameBuffer((const Dali::FrameBuffer &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurView_SetBackgroundColor(void * jarg1, void * jarg2) {
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::Vector4 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetBackgroundColor((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GaussianBlurView_GetBackgroundColor(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::GaussianBlurView const *)arg1)->GetBackgroundColor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GaussianBlurView_FinishedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::GaussianBlurView *arg1 = (Dali::Toolkit::GaussianBlurView *) 0 ;
  Dali::Toolkit::GaussianBlurView::GaussianBlurViewSignal *result = 0 ;

  arg1 = (Dali::Toolkit::GaussianBlurView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::GaussianBlurView::GaussianBlurViewSignal *) &(arg1)->FinishedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PageFactory(void * jarg1) {
  Dali::Toolkit::PageFactory *arg1 = (Dali::Toolkit::PageFactory *) 0 ;

  arg1 = (Dali::Toolkit::PageFactory *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PageFactory_GetNumberOfPages(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::PageFactory *arg1 = (Dali::Toolkit::PageFactory *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::PageFactory *)jarg1;
  {
    try {
      result = (unsigned int)(arg1)->GetNumberOfPages();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageFactory_NewPage(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::PageFactory *arg1 = (Dali::Toolkit::PageFactory *) 0 ;
  unsigned int arg2 ;
  Dali::Texture result;

  arg1 = (Dali::Toolkit::PageFactory *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (arg1)->NewPage(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Texture((const Dali::Texture &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PageTurnView_Property() {
  void * jresult ;
  Dali::Toolkit::PageTurnView::Property *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::PageTurnView::Property *)new Dali::Toolkit::PageTurnView::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PageTurnView_Property(void * jarg1) {
  Dali::Toolkit::PageTurnView::Property *arg1 = (Dali::Toolkit::PageTurnView::Property *) 0 ;

  arg1 = (Dali::Toolkit::PageTurnView::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PageTurnView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::PageTurnView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::PageTurnView *)new Dali::Toolkit::PageTurnView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PageTurnView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::PageTurnView *arg1 = 0 ;
  Dali::Toolkit::PageTurnView *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::PageTurnView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::PageTurnView *)new Dali::Toolkit::PageTurnView((Dali::Toolkit::PageTurnView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::PageTurnView *arg1 = (Dali::Toolkit::PageTurnView *) 0 ;
  Dali::Toolkit::PageTurnView *arg2 = 0 ;
  Dali::Toolkit::PageTurnView *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnView *)jarg1;
  arg2 = (Dali::Toolkit::PageTurnView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::PageTurnView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::PageTurnView *) &(arg1)->operator =((Dali::Toolkit::PageTurnView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PageTurnView(void * jarg1) {
  Dali::Toolkit::PageTurnView *arg1 = (Dali::Toolkit::PageTurnView *) 0 ;

  arg1 = (Dali::Toolkit::PageTurnView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::PageTurnView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::PageTurnView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::PageTurnView((const Dali::Toolkit::PageTurnView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnView_PageTurnStartedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::PageTurnView *arg1 = (Dali::Toolkit::PageTurnView *) 0 ;
  Dali::Toolkit::PageTurnView::PageTurnSignal *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::PageTurnView::PageTurnSignal *) &(arg1)->PageTurnStartedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnView_PageTurnFinishedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::PageTurnView *arg1 = (Dali::Toolkit::PageTurnView *) 0 ;
  Dali::Toolkit::PageTurnView::PageTurnSignal *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::PageTurnView::PageTurnSignal *) &(arg1)->PageTurnFinishedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnView_PagePanStartedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::PageTurnView *arg1 = (Dali::Toolkit::PageTurnView *) 0 ;
  Dali::Toolkit::PageTurnView::PagePanSignal *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::PageTurnView::PagePanSignal *) &(arg1)->PagePanStartedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnView_PagePanFinishedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::PageTurnView *arg1 = (Dali::Toolkit::PageTurnView *) 0 ;
  Dali::Toolkit::PageTurnView::PagePanSignal *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::PageTurnView::PagePanSignal *) &(arg1)->PagePanFinishedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PageTurnLandscapeView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::PageTurnLandscapeView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::PageTurnLandscapeView *)new Dali::Toolkit::PageTurnLandscapeView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PageTurnLandscapeView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::PageTurnLandscapeView *arg1 = 0 ;
  Dali::Toolkit::PageTurnLandscapeView *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnLandscapeView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::PageTurnLandscapeView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::PageTurnLandscapeView *)new Dali::Toolkit::PageTurnLandscapeView((Dali::Toolkit::PageTurnLandscapeView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnLandscapeView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::PageTurnLandscapeView *arg1 = (Dali::Toolkit::PageTurnLandscapeView *) 0 ;
  Dali::Toolkit::PageTurnLandscapeView *arg2 = 0 ;
  Dali::Toolkit::PageTurnLandscapeView *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnLandscapeView *)jarg1;
  arg2 = (Dali::Toolkit::PageTurnLandscapeView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::PageTurnLandscapeView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::PageTurnLandscapeView *) &(arg1)->operator =((Dali::Toolkit::PageTurnLandscapeView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PageTurnLandscapeView(void * jarg1) {
  Dali::Toolkit::PageTurnLandscapeView *arg1 = (Dali::Toolkit::PageTurnLandscapeView *) 0 ;

  arg1 = (Dali::Toolkit::PageTurnLandscapeView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnLandscapeView_New(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::PageFactory *arg1 = 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Toolkit::PageTurnLandscapeView result;

  arg1 = (Dali::Toolkit::PageFactory *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::PageFactory & type is null", 0);
    return 0;
  }
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Toolkit::PageTurnLandscapeView::New(*arg1,(Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::PageTurnLandscapeView((const Dali::Toolkit::PageTurnLandscapeView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnLandscapeView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::PageTurnLandscapeView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::PageTurnLandscapeView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::PageTurnLandscapeView((const Dali::Toolkit::PageTurnLandscapeView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PageTurnPortraitView__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::PageTurnPortraitView *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::PageTurnPortraitView *)new Dali::Toolkit::PageTurnPortraitView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PageTurnPortraitView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::PageTurnPortraitView *arg1 = 0 ;
  Dali::Toolkit::PageTurnPortraitView *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnPortraitView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::PageTurnPortraitView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::PageTurnPortraitView *)new Dali::Toolkit::PageTurnPortraitView((Dali::Toolkit::PageTurnPortraitView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnPortraitView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::PageTurnPortraitView *arg1 = (Dali::Toolkit::PageTurnPortraitView *) 0 ;
  Dali::Toolkit::PageTurnPortraitView *arg2 = 0 ;
  Dali::Toolkit::PageTurnPortraitView *result = 0 ;

  arg1 = (Dali::Toolkit::PageTurnPortraitView *)jarg1;
  arg2 = (Dali::Toolkit::PageTurnPortraitView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::PageTurnPortraitView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::PageTurnPortraitView *) &(arg1)->operator =((Dali::Toolkit::PageTurnPortraitView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PageTurnPortraitView(void * jarg1) {
  Dali::Toolkit::PageTurnPortraitView *arg1 = (Dali::Toolkit::PageTurnPortraitView *) 0 ;

  arg1 = (Dali::Toolkit::PageTurnPortraitView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnPortraitView_New(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::PageFactory *arg1 = 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Toolkit::PageTurnPortraitView result;

  arg1 = (Dali::Toolkit::PageFactory *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::PageFactory & type is null", 0);
    return 0;
  }
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Toolkit::PageTurnPortraitView::New(*arg1,(Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::PageTurnPortraitView((const Dali::Toolkit::PageTurnPortraitView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PageTurnPortraitView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::PageTurnPortraitView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::PageTurnPortraitView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::PageTurnPortraitView((const Dali::Toolkit::PageTurnPortraitView &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VisualBase__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::Visual::Base *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Visual::Base *)new Dali::Toolkit::Visual::Base();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VisualBase(void * jarg1) {
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VisualBase__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Visual::Base *arg1 = 0 ;
  Dali::Toolkit::Visual::Base *result = 0 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Visual::Base const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Visual::Base *)new Dali::Toolkit::Visual::Base((Dali::Toolkit::Visual::Base const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VisualBase_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  Dali::Toolkit::Visual::Base *arg2 = 0 ;
  Dali::Toolkit::Visual::Base *result = 0 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  arg2 = (Dali::Toolkit::Visual::Base *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Visual::Base const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Visual::Base *) &(arg1)->operator =((Dali::Toolkit::Visual::Base const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualBase_SetName(void * jarg1, char * jarg2) {
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetName((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }


  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_VisualBase_GetName(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  {
    try {
      result = (std::string *) &(arg1)->GetName();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualBase_SetTransformAndSize(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  Dali::Property::Map *arg2 = 0 ;
  Dali::Size arg3 ;
  Dali::Size *argp3 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return ;
  }
  argp3 = (Dali::Size *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Size", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->SetTransformAndSize((Dali::Property::Map const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_VisualBase_GetHeightForWidth(void * jarg1, float jarg2) {
  float jresult ;
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)(arg1)->GetHeightForWidth(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_VisualBase_GetWidthForHeight(void * jarg1, float jarg2) {
  float jresult ;
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)(arg1)->GetWidthForHeight(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualBase_GetNaturalSize(void * jarg1, void * jarg2) {
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  Dali::Vector2 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetNaturalSize(*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualBase_SetDepthIndex(void * jarg1, int jarg2) {
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      (arg1)->SetDepthIndex(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VisualBase_GetDepthIndex(void * jarg1) {
  int jresult ;
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  int result;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::Visual::Base const *)arg1)->GetDepthIndex();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualBase_CreatePropertyMap(void * jarg1, void * jarg2) {
  Dali::Toolkit::Visual::Base *arg1 = (Dali::Toolkit::Visual::Base *) 0 ;
  Dali::Property::Map *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Visual::Base *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map & type is null", 0);
    return ;
  }
  {
    try {
      ((Dali::Toolkit::Visual::Base const *)arg1)->CreatePropertyMap(*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VisualFactory_Get() {
  void * jresult ;
  Dali::Toolkit::VisualFactory result;

  {
    try {
      result = Dali::Toolkit::VisualFactory::Get();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::VisualFactory((const Dali::Toolkit::VisualFactory &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VisualFactory__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::VisualFactory *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::VisualFactory *)new Dali::Toolkit::VisualFactory();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VisualFactory(void * jarg1) {
  Dali::Toolkit::VisualFactory *arg1 = (Dali::Toolkit::VisualFactory *) 0 ;

  arg1 = (Dali::Toolkit::VisualFactory *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VisualFactory__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::VisualFactory *arg1 = 0 ;
  Dali::Toolkit::VisualFactory *result = 0 ;

  arg1 = (Dali::Toolkit::VisualFactory *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::VisualFactory const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::VisualFactory *)new Dali::Toolkit::VisualFactory((Dali::Toolkit::VisualFactory const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VisualFactory_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::VisualFactory *arg1 = (Dali::Toolkit::VisualFactory *) 0 ;
  Dali::Toolkit::VisualFactory *arg2 = 0 ;
  Dali::Toolkit::VisualFactory *result = 0 ;

  arg1 = (Dali::Toolkit::VisualFactory *)jarg1;
  arg2 = (Dali::Toolkit::VisualFactory *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::VisualFactory const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::VisualFactory *) &(arg1)->operator =((Dali::Toolkit::VisualFactory const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VisualFactory_CreateVisual__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::VisualFactory *arg1 = (Dali::Toolkit::VisualFactory *) 0 ;
  Dali::Property::Map *arg2 = 0 ;
  Dali::Toolkit::Visual::Base result;

  arg1 = (Dali::Toolkit::VisualFactory *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (arg1)->CreateVisual((Dali::Property::Map const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Visual::Base((const Dali::Toolkit::Visual::Base &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_VisualFactory_CreateVisual__SWIG_2(void * jarg1, char * jarg2, void * jarg3) {
  void * jresult ;
  Dali::Toolkit::VisualFactory *arg1 = (Dali::Toolkit::VisualFactory *) 0 ;
  std::string *arg2 = 0 ;
  Dali::ImageDimensions arg3 ;
  Dali::ImageDimensions *argp3 ;
  Dali::Toolkit::Visual::Base result;

  arg1 = (Dali::Toolkit::VisualFactory *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::ImageDimensions *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = (arg1)->CreateVisual((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Visual::Base((const Dali::Toolkit::Visual::Base &)result);

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualFactory_UsePreCompiledShader(void* csVisualFactory)
{
  Dali::Toolkit::VisualFactory* visualFactory = (Dali::Toolkit::VisualFactory*)csVisualFactory;

  if(!visualFactory)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null visualFactory", 0);
    return;
  }
  try
  {
    (visualFactory)->UsePreCompiledShader();
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AsyncImageLoader__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::AsyncImageLoader *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::AsyncImageLoader *)new Dali::Toolkit::AsyncImageLoader();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AsyncImageLoader(void * jarg1) {
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AsyncImageLoader__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = 0 ;
  Dali::Toolkit::AsyncImageLoader *result = 0 ;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::AsyncImageLoader const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::AsyncImageLoader *)new Dali::Toolkit::AsyncImageLoader((Dali::Toolkit::AsyncImageLoader const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  Dali::Toolkit::AsyncImageLoader *arg2 = 0 ;
  Dali::Toolkit::AsyncImageLoader *result = 0 ;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  arg2 = (Dali::Toolkit::AsyncImageLoader *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::AsyncImageLoader const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::AsyncImageLoader *) &(arg1)->operator =((Dali::Toolkit::AsyncImageLoader const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AsyncImageLoader_New() {
  void * jresult ;
  Dali::Toolkit::AsyncImageLoader result;

  {
    try {
      result = Dali::Toolkit::AsyncImageLoader::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::AsyncImageLoader((const Dali::Toolkit::AsyncImageLoader &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AsyncImageLoader_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::AsyncImageLoader result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::AsyncImageLoader::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::AsyncImageLoader((const Dali::Toolkit::AsyncImageLoader &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Load__SWIG_0(void * jarg1, char * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  std::string *arg2 = 0 ;
  uint32_t result;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      result = (arg1)->Load((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Load__SWIG_1(void * jarg1, char * jarg2, void * jarg3) {
  unsigned int jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  std::string *arg2 = 0 ;
  Dali::ImageDimensions arg3 ;
  Dali::ImageDimensions *argp3 ;
  uint32_t result;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::ImageDimensions *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = (arg1)->Load((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Load__SWIG_2(void * jarg1, char * jarg2, void * jarg3, int jarg4, int jarg5, bool jarg6) {
  unsigned int jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  std::string *arg2 = 0 ;
  Dali::ImageDimensions arg3 ;
  Dali::FittingMode::Type arg4 ;
  Dali::SamplingMode::Type arg5 ;
  bool arg6 ;
  Dali::ImageDimensions *argp3 ;
  uint32_t result;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::ImageDimensions *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg3 = *argp3;
  arg4 = (Dali::FittingMode::Type)jarg4;
  arg5 = (Dali::SamplingMode::Type)jarg5;
  arg6 = jarg6 ? true : false;
  {
    try {
      result = (arg1)->Load((std::string const &)*arg2,arg3,arg4,arg5,arg6);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Cancel(void * jarg1, unsigned int jarg2) {
  bool jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  uint32_t arg2 ;
  bool result;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  arg2 = (uint32_t)jarg2;
  {
    try {
      result = (bool)(arg1)->Cancel(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AsyncImageLoader_CancelAll(void * jarg1) {
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  {
    try {
      (arg1)->CancelAll();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AsyncImageLoader_ImageLoadedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  Dali::Toolkit::AsyncImageLoader::ImageLoadedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AsyncImageLoader::ImageLoadedSignalType *) &(arg1)->ImageLoadedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageSynchronously__SWIG_0(char * jarg1) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::PixelData result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::Toolkit::SyncImageLoader::Load((std::string const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PixelData((const Dali::PixelData &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageSynchronously__SWIG_1(char * jarg1, void * jarg2) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::ImageDimensions *argp2 ;
  Dali::PixelData result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = Dali::Toolkit::SyncImageLoader::Load((std::string const &)*arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PixelData((const Dali::PixelData &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageSynchronously__SWIG_2(char * jarg1, void * jarg2, int jarg3, int jarg4, bool jarg5) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  bool arg5 ;
  Dali::ImageDimensions *argp2 ;
  Dali::PixelData result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = Dali::Toolkit::SyncImageLoader::Load((std::string const &)*arg1,arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::PixelData((const Dali::PixelData &)result);

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_CustomAlgorithmInterface(void * jarg1) {
  Dali::Toolkit::DevelKeyboardFocusManager::CustomAlgorithmInterface *arg1 = (Dali::Toolkit::DevelKeyboardFocusManager::CustomAlgorithmInterface *) 0 ;

  arg1 = (Dali::Toolkit::DevelKeyboardFocusManager::CustomAlgorithmInterface *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_CustomAlgorithmInterface_GetNextFocusableActor(void * customAlgorithmInterface, void * currentFocusedActor, void * proposedActorToFocus, int direction, char * deviceName) {
  void * jresult ;
  Dali::Toolkit::DevelKeyboardFocusManager::CustomAlgorithmInterface *arg1 = (Dali::Toolkit::DevelKeyboardFocusManager::CustomAlgorithmInterface *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor arg3 ;
  Dali::Toolkit::Control::KeyboardFocus::Direction arg4 ;
  std::string *arg5 = 0 ;
  Dali::Actor *argp2 ;
  Dali::Actor *argp3 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::DevelKeyboardFocusManager::CustomAlgorithmInterface *)customAlgorithmInterface;
  argp2 = (Dali::Actor *)currentFocusedActor;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  argp3 = (Dali::Actor *)proposedActorToFocus;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg3 = *argp3;
  arg4 = (Dali::Toolkit::Control::KeyboardFocus::Direction)direction;

  std::string arg5_str(deviceName);
  arg5 = &arg5_str;

  {
    try {
      result = (arg1)->GetNextFocusableActor(arg2,arg3,arg4,(std::string const &)*arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetPosition(void * updateProxy, unsigned int id,  void* position) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)position;
  return proxy->GetPosition(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetPosition(void * updateProxy, unsigned int id, void* position) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)position;
  return proxy->SetPosition(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakePosition(void * updateProxy, unsigned int id, void* position) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)position;
  return proxy->BakePosition(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetSize(void * updateProxy, unsigned int id, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)size;
  return proxy->GetSize(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetSize(void * updateProxy, unsigned int id, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)size;
  return proxy->SetSize(id, *vector3);
}
SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeSize(void * updateProxy, unsigned int id, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)size;
  return proxy->BakeSize(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetPositionAndSize(void * updateProxy, unsigned int id, void* position, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3_pos = (Dali::Vector3 *)position;
  Dali::Vector3* vector3_size = (Dali::Vector3 *)size;
  return proxy->GetPositionAndSize(id, *vector3_pos, *vector3_size);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetWorldPositionScaleAndSize(void * updateProxy, unsigned int id, void* position, void* scale, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3_pos = (Dali::Vector3 *)position;
  Dali::Vector3* vector3_scale = (Dali::Vector3 *)scale;
  Dali::Vector3* vector3_size = (Dali::Vector3 *)size;
  return proxy->GetWorldPositionScaleAndSize(id, *vector3_pos, *vector3_scale, *vector3_size);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetWorldTransformAndSize(void * updateProxy, unsigned int id, void* position, void* scale, void* orientation, void* size) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3_pos = (Dali::Vector3 *)position;
  Dali::Vector3* vector3_scale = (Dali::Vector3 *)scale;
  Dali::Quaternion* quaternion_orientation = (Dali::Quaternion *)orientation;
  Dali::Vector3* vector3_size = (Dali::Vector3 *)size;
  return proxy->GetWorldTransformAndSize(id, *vector3_pos, *vector3_scale, *quaternion_orientation, *vector3_size);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetScale(void * updateProxy, unsigned int id, void* scale) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)scale;
  return proxy->GetScale(id,* vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetScale(void * updateProxy, unsigned int id, void* scale) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)scale;
  return proxy->SetScale(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeScale(void * updateProxy, unsigned int id, void* scale) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector3* vector3 = (Dali::Vector3 *)scale;
  return proxy->BakeScale(id, *vector3);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetColor(void * updateProxy, unsigned int id, void* color) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4* vector4 = (Dali::Vector4 *)color;
  return proxy->GetColor(id, *vector4);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetColor(void * updateProxy, unsigned int id, void* color) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4* vector4 = (Dali::Vector4 *)color;
  return proxy->SetColor(id, *vector4);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_BakeColor(void * updateProxy, unsigned int id, void* color) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4* vector4 = (Dali::Vector4 *)color;
  return proxy->BakeColor(id, *vector4);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_SetUpdateArea(void * updateProxy, unsigned int id, void* updateArea) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4* vector4 = (Dali::Vector4 *)updateArea;
  return proxy->SetUpdateArea(id, *vector4);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_FrameCallbackInterface_GetUpdateArea(void * updateProxy, unsigned int id, void* updateArea) {
  Dali::UpdateProxy *proxy = (Dali::UpdateProxy*)updateProxy;
  Dali::Vector4* vector4 = (Dali::Vector4 *)updateArea;
  return proxy->GetUpdateArea(id, *vector4);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetCustomAlgorithm(void * jarg1, void * jarg2) {
  KeyboardFocusManager arg1 ;
  Dali::Toolkit::DevelKeyboardFocusManager::CustomAlgorithmInterface *arg2 = 0 ;
  KeyboardFocusManager *argp1 ;

  argp1 = (KeyboardFocusManager *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null KeyboardFocusManager", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = (Dali::Toolkit::DevelKeyboardFocusManager::CustomAlgorithmInterface *)jarg2;
  //Null checking of arg2 is removed. arg2's null set means resetting so it can be a null value.
  {
    try {
      Dali::Toolkit::DevelKeyboardFocusManager::SetCustomAlgorithm(arg1,*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardFocusManager_EnableDefaultAlgorithm(void * jarg1, bool jarg2) {
  KeyboardFocusManager arg1 ;
  bool arg2 ;
  KeyboardFocusManager *argp1 ;

  argp1 = (KeyboardFocusManager *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null KeyboardFocusManager", 0);
    return ;
  }
  arg1 = *argp1;
  arg2 = jarg2;
  {
    try {
      Dali::Toolkit::DevelKeyboardFocusManager::EnableDefaultAlgorithm(arg1, arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_KeyboardFocusManager_IsDefaultAlgorithmEnabled(void * jarg1) {
  bool jresult ;
  KeyboardFocusManager arg1 ;
  KeyboardFocusManager *argp1 ;
  bool result;

  argp1 = (KeyboardFocusManager *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null KeyboardFocusManager", 0);
    return false;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::DevelKeyboardFocusManager::IsDefaultAlgorithmEnabled(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardFocusManager_SetFocusFinderRootActor(void * manager, void * actor) {
  if (!manager) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null KeyboardFocusManager", 0);
    return ;
  }
  if (!actor) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor & type is null", 0);
    return ;
  }
  {
    try {
      Dali::Toolkit::DevelKeyboardFocusManager::SetFocusFinderRootActor(*(KeyboardFocusManager *)manager, *(Dali::Actor *)actor);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardFocusManager_ResetFocusFinderRootActor(void * manager) {
  if (!manager) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null KeyboardFocusManager", 0);
    return ;
  }
  {
    try {
      Dali::Toolkit::DevelKeyboardFocusManager::ResetFocusFinderRootActor(*(KeyboardFocusManager *)manager);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityActionSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__Empty((Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_AccessibilityActionSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__GetConnectionCount((Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityActionSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *) 0 ;
  bool (*arg2)(Dali::Toolkit::AccessibilityManager &) = (bool (*)(Dali::Toolkit::AccessibilityManager &)) 0 ;

  arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *)jarg1;
  arg2 = (bool (*)(Dali::Toolkit::AccessibilityManager &))jarg2;
  {
    try {
      Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityActionSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *) 0 ;
  bool (*arg2)(Dali::Toolkit::AccessibilityManager &) = (bool (*)(Dali::Toolkit::AccessibilityManager &)) 0 ;

  arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *)jarg1;
  arg2 = (bool (*)(Dali::Toolkit::AccessibilityManager &))jarg2;
  {
    try {
      Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityActionSignal_Emit(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *) 0 ;
  Dali::Toolkit::AccessibilityManager *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *)jarg1;
  arg2 = (Dali::Toolkit::AccessibilityManager *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::AccessibilityManager & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)Dali_Signal_Sl_bool_Sp_Dali_Toolkit_AccessibilityManager_SA__SP__Sg__Emit(arg1,*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AccessibilityActionSignal() {
  void * jresult ;
  Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *)new Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AccessibilityActionSignal(void * jarg1) {
  Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *) 0 ;

  arg1 = (Dali::Signal< bool (Dali::Toolkit::AccessibilityManager &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AccessibilityFocusOvershotSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__Empty((Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_AccessibilityFocusOvershotSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityFocusOvershotSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *) 0 ;
  void (*arg2)(Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) = (void (*)(Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *)jarg1;
  arg2 = (void (*)(Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityFocusOvershotSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *) 0 ;
  void (*arg2)(Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) = (void (*)(Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *)jarg1;
  arg2 = (void (*)(Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AccessibilityFocusOvershotSignal_Emit(void * jarg1, void * jarg2, int jarg3) {
  Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *) 0 ;
  Dali::Actor arg2 ;
  Dali::Toolkit::AccessibilityManager::FocusOvershotDirection arg3 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::Toolkit::AccessibilityManager::FocusOvershotDirection)jarg3;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_Toolkit_AccessibilityManager_FocusOvershotDirection_SP__Sg__Emit(arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AccessibilityFocusOvershotSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *)new Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AccessibilityFocusOvershotSignal(void * jarg1) {
  Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::Toolkit::AccessibilityManager::FocusOvershotDirection) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_StyleChangedSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_StyleChangedSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StyleChangedSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *) 0 ;
  void (*arg2)(Dali::Toolkit::StyleManager,Dali::StyleChange::Type) = (void (*)(Dali::Toolkit::StyleManager,Dali::StyleChange::Type)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::StyleManager,Dali::StyleChange::Type))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StyleChangedSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *) 0 ;
  void (*arg2)(Dali::Toolkit::StyleManager,Dali::StyleChange::Type) = (void (*)(Dali::Toolkit::StyleManager,Dali::StyleChange::Type)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::StyleManager,Dali::StyleChange::Type))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StyleChangedSignal_Emit(void * jarg1, void * jarg2, int jarg3) {
  Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *) 0 ;
  Dali::Toolkit::StyleManager arg2 ;
  Dali::StyleChange::Type arg3 ;
  Dali::Toolkit::StyleManager *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *)jarg1;
  argp2 = (Dali::Toolkit::StyleManager *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::StyleManager", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::StyleChange::Type)jarg3;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_StyleManager_Sc_Dali_StyleChange_Type_SP__Sg__Emit(arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_StyleChangedSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *)new Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_StyleChangedSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::StyleManager,Dali::StyleChange::Type) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GaussianBlurViewSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_GaussianBlurViewSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurViewSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *) 0 ;
  void (*arg2)(Dali::Toolkit::GaussianBlurView) = (void (*)(Dali::Toolkit::GaussianBlurView)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::GaussianBlurView))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurViewSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *) 0 ;
  void (*arg2)(Dali::Toolkit::GaussianBlurView) = (void (*)(Dali::Toolkit::GaussianBlurView)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::GaussianBlurView))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurViewSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *) 0 ;
  Dali::Toolkit::GaussianBlurView arg2 ;
  Dali::Toolkit::GaussianBlurView *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *)jarg1;
  argp2 = (Dali::Toolkit::GaussianBlurView *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::GaussianBlurView", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_GaussianBlurView_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_GaussianBlurViewSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *)new Dali::Signal< void (Dali::Toolkit::GaussianBlurView) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GaussianBlurViewSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::GaussianBlurView) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_PageTurnSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_PageTurnSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PageTurnSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *) 0 ;
  void (*arg2)(Dali::Toolkit::PageTurnView,unsigned int,bool) = (void (*)(Dali::Toolkit::PageTurnView,unsigned int,bool)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::PageTurnView,unsigned int,bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PageTurnSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *) 0 ;
  void (*arg2)(Dali::Toolkit::PageTurnView,unsigned int,bool) = (void (*)(Dali::Toolkit::PageTurnView,unsigned int,bool)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::PageTurnView,unsigned int,bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PageTurnSignal_Emit(void * jarg1, void * jarg2, unsigned int jarg3, bool jarg4) {
  Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *) 0 ;
  Dali::Toolkit::PageTurnView arg2 ;
  unsigned int arg3 ;
  bool arg4 ;
  Dali::Toolkit::PageTurnView *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *)jarg1;
  argp2 = (Dali::Toolkit::PageTurnView *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::PageTurnView", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (unsigned int)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_Sc_unsigned_SS_int_Sc_bool_SP__Sg__Emit(arg1,arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PageTurnSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *)new Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PageTurnSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView,unsigned int,bool) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_PagePanSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Toolkit::PageTurnView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::PageTurnView) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_PagePanSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::PageTurnView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::PageTurnView) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PagePanSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::PageTurnView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *) 0 ;
  void (*arg2)(Dali::Toolkit::PageTurnView) = (void (*)(Dali::Toolkit::PageTurnView)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::PageTurnView))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PagePanSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::PageTurnView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *) 0 ;
  void (*arg2)(Dali::Toolkit::PageTurnView) = (void (*)(Dali::Toolkit::PageTurnView)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::PageTurnView))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PagePanSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::PageTurnView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *) 0 ;
  Dali::Toolkit::PageTurnView arg2 ;
  Dali::Toolkit::PageTurnView *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *)jarg1;
  argp2 = (Dali::Toolkit::PageTurnView *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::PageTurnView", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_PageTurnView_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PagePanSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::PageTurnView) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *)new Dali::Signal< void (Dali::Toolkit::PageTurnView) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PagePanSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::PageTurnView) > *arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::PageTurnView) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ScrollViewSnapStartedSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ScrollViewSnapStartedSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollViewSnapStartedSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *) 0 ;
  void (*arg2)(Dali::Toolkit::ScrollView::SnapEvent const &) = (void (*)(Dali::Toolkit::ScrollView::SnapEvent const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::ScrollView::SnapEvent const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollViewSnapStartedSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *) 0 ;
  void (*arg2)(Dali::Toolkit::ScrollView::SnapEvent const &) = (void (*)(Dali::Toolkit::ScrollView::SnapEvent const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::ScrollView::SnapEvent const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollViewSnapStartedSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *) 0 ;
  Dali::Toolkit::ScrollView::SnapEvent *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *)jarg1;
  arg2 = (Dali::Toolkit::ScrollView::SnapEvent *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScrollView::SnapEvent const & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_ScrollView_SnapEvent_SS_const_SA__SP__Sg__Emit(arg1,(Dali::Toolkit::ScrollView::SnapEvent const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollViewSnapStartedSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *)new Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollViewSnapStartedSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::ScrollView::SnapEvent const &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ScrollableSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Vector2 const &) > *arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Vector2 const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ScrollableSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Vector2 const &) > *arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Vector2 const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollableSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Vector2 const &) > *arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *) 0 ;
  void (*arg2)(Dali::Vector2 const &) = (void (*)(Dali::Vector2 const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *)jarg1;
  arg2 = (void (*)(Dali::Vector2 const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollableSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Vector2 const &) > *arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *) 0 ;
  void (*arg2)(Dali::Vector2 const &) = (void (*)(Dali::Vector2 const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *)jarg1;
  arg2 = (void (*)(Dali::Vector2 const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollableSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Vector2 const &) > *arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *) 0 ;
  Dali::Vector2 *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Vector2_SS_const_SA__SP__Sg__Emit(arg1,(Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollableSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Vector2 const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Vector2 const &) > *)new Dali::Signal< void (Dali::Vector2 const &) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollableSignal(void * jarg1) {
  Dali::Signal< void (Dali::Vector2 const &) > *arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Vector2 const &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_VideoViewSignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Toolkit::VideoView &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::VideoView &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_VideoViewSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::VideoView &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::VideoView &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoViewSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::VideoView &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *) 0 ;
  void (*arg2)(Dali::Toolkit::VideoView &) = (void (*)(Dali::Toolkit::VideoView &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::VideoView &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoViewSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::VideoView &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *) 0 ;
  void (*arg2)(Dali::Toolkit::VideoView &) = (void (*)(Dali::Toolkit::VideoView &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::VideoView &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VideoViewSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::VideoView &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *) 0 ;
  Dali::Toolkit::VideoView *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *)jarg1;
  arg2 = (Dali::Toolkit::VideoView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::VideoView & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_VideoView_SA__SP__Sg__Emit(arg1,*arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VideoViewSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::VideoView &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *)new Dali::Signal< void (Dali::Toolkit::VideoView &) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VideoViewSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::VideoView &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::VideoView &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RulerPtr__SWIG_0() {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *result = 0 ;

  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)new Dali::IntrusivePtr< Dali::Toolkit::Ruler >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RulerPtr__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Ruler *arg1 = (Dali::Toolkit::Ruler *) 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *result = 0 ;

  arg1 = (Dali::Toolkit::Ruler *)jarg1;
  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)new Dali::IntrusivePtr< Dali::Toolkit::Ruler >(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RulerPtr__SWIG_2(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::IntrusivePtr< Dali::Toolkit::Ruler > const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)new Dali::IntrusivePtr< Dali::Toolkit::Ruler >((Dali::IntrusivePtr< Dali::Toolkit::Ruler > const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_RulerPtr(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RulerPtr_Get(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::Toolkit::Ruler *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Ruler *)((Dali::IntrusivePtr< Dali::Toolkit::Ruler > const *)arg1)->Get();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RulerPtr___deref__(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::Toolkit::Ruler *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Ruler *)((Dali::IntrusivePtr< Dali::Toolkit::Ruler > const *)arg1)->operator ->();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RulerPtr___ref__(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::Toolkit::Ruler *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Ruler *) &((Dali::IntrusivePtr< Dali::Toolkit::Ruler > const *)arg1)->operator *();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RulerPtr_Assign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg2 = 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::IntrusivePtr< Dali::Toolkit::Ruler > const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) &(arg1)->operator =((Dali::IntrusivePtr< Dali::Toolkit::Ruler > const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RulerPtr_Assign__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::Toolkit::Ruler *arg2 = (Dali::Toolkit::Ruler *) 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (Dali::Toolkit::Ruler *)jarg2;
  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) &(arg1)->operator =(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerPtr_Reset__SWIG_0(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      (arg1)->Reset();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerPtr_Reset__SWIG_1(void * jarg1, void * jarg2) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::Toolkit::Ruler *arg2 = (Dali::Toolkit::Ruler *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (Dali::Toolkit::Ruler *)jarg2;
  {
    try {
      (arg1)->Reset(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RulerPtr_Detach(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::Toolkit::Ruler *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Ruler *)(arg1)->Detach();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_Snap__SWIG_0(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)(*arg1)->Snap(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_Snap__SWIG_1(void * jarg1, float jarg2) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)(*arg1)->Snap(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_GetPositionFromPage(void * jarg1, unsigned int jarg2, unsigned int * jarg3, bool jarg4) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  unsigned int arg2 ;
  unsigned int *arg3 = 0 ;
  bool arg4 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (unsigned int *)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      result = (float)(*arg1)->GetPositionFromPage(arg2,*arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_RulerPtr_GetPageFromPosition(void * jarg1, float jarg2, bool jarg3) {
  unsigned int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  bool arg3 ;
  unsigned int result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = jarg3 ? true : false;
  {
    try {
      result = (unsigned int)(*arg1)->GetPageFromPosition(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_RulerPtr_GetTotalPages(void * jarg1) {
  unsigned int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  unsigned int result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (unsigned int)(*arg1)->GetTotalPages();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_RulerPtr_GetType(void * jarg1) {
  int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::Toolkit::Ruler::RulerType result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Ruler::RulerType)(*arg1)->GetType();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_RulerPtr_IsEnabled(void * jarg1) {
  bool jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  bool result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (bool)(*arg1)->IsEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerPtr_Enable(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      (*arg1)->Enable();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerPtr_Disable(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      (*arg1)->Disable();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerPtr_SetDomain(void * jarg1, void * jarg2) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::RulerDomain > arg2 ;
  Dali::Toolkit::RulerDomain *argp2 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  argp2 = (Dali::Toolkit::RulerDomain *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::RulerDomain", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (*arg1)->SetDomain(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RulerPtr_GetDomain(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  Dali::Toolkit::RulerDomain *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::RulerDomain *) &(*arg1)->GetDomain();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerPtr_DisableDomain(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      (*arg1)->DisableDomain();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_Clamp__SWIG_0(void * jarg1, float jarg2, float jarg3, float jarg4) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try {
      result = (float)(*arg1)->Clamp(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_Clamp__SWIG_1(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)(*arg1)->Clamp(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_Clamp__SWIG_2(void * jarg1, float jarg2) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)(*arg1)->Clamp(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_Clamp__SWIG_3(void * jarg1, float jarg2, float jarg3, float jarg4, void * jarg5) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  Dali::Toolkit::ClampState *arg5 = 0 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  arg5 = (Dali::Toolkit::ClampState *)jarg5;
  if (!arg5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ClampState & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)(*arg1)->Clamp(arg2,arg3,arg4,*arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_SnapAndClamp__SWIG_0(void * jarg1, float jarg2, float jarg3, float jarg4, float jarg5) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  arg5 = (float)jarg5;
  {
    try {
      result = (float)(*arg1)->SnapAndClamp(arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_SnapAndClamp__SWIG_1(void * jarg1, float jarg2, float jarg3, float jarg4) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try {
      result = (float)(*arg1)->SnapAndClamp(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_SnapAndClamp__SWIG_2(void * jarg1, float jarg2, float jarg3) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float arg3 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (float)(*arg1)->SnapAndClamp(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_SnapAndClamp__SWIG_3(void * jarg1, float jarg2) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)(*arg1)->SnapAndClamp(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RulerPtr_SnapAndClamp__SWIG_4(void * jarg1, float jarg2, float jarg3, float jarg4, float jarg5, void * jarg6) {
  float jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  float arg5 ;
  Dali::Toolkit::ClampState *arg6 = 0 ;
  float result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  arg5 = (float)jarg5;
  arg6 = (Dali::Toolkit::ClampState *)jarg6;
  if (!arg6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ClampState & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)(*arg1)->SnapAndClamp(arg2,arg3,arg4,arg5,*arg6);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerPtr_Reference(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      (*arg1)->Reference();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RulerPtr_Unreference(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      (*arg1)->Unreference();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_RulerPtr_ReferenceCount(void * jarg1) {
  int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Ruler > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *) 0 ;
  int result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Ruler > *)jarg1;
  {
    try {
      result = (int)(*arg1)->ReferenceCount();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< void (Dali::Toolkit::Control) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::Control) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::Control) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::Control) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::Control) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *) 0 ;
  void (*arg2)(Dali::Toolkit::Control) = (void (*)(Dali::Toolkit::Control)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::Control))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::Control) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *) 0 ;
  void (*arg2)(Dali::Toolkit::Control) = (void (*)(Dali::Toolkit::Control)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::Control))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewResourceReadySignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::Control) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *) 0 ;
  Dali::Toolkit::Control arg2 ;
  Dali::Toolkit::Control *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *)jarg1;
  argp2 = (Dali::Toolkit::Control *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Control", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ViewResourceReadySignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::Control) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::Control) > *)new Dali::Signal< void (Dali::Toolkit::Control) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ViewResourceReadySignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::Control) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

// Method
SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_Builder_SWIGUpcast(Dali::Toolkit::Builder *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_TransitionData_SWIGUpcast(Dali::Toolkit::TransitionData *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::CustomActorImpl * SWIGSTDCALL CSharp_Dali_ViewImpl_SWIGUpcast(Dali::Toolkit::Internal::Control *jarg1) {
    return (Dali::CustomActorImpl *)jarg1;
}

SWIGEXPORT Dali::CustomActor * SWIGSTDCALL CSharp_Dali_View_SWIGUpcast(Dali::Toolkit::Control *jarg1) {
    return (Dali::CustomActor *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_KeyInputFocusManager_SWIGUpcast(Dali::Toolkit::KeyInputFocusManager *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_Alignment_SWIGUpcast(Dali::Toolkit::Alignment *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_FlexContainer_SWIGUpcast(Dali::Toolkit::FlexContainer *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_ImageView_SWIGUpcast(Dali::Toolkit::ImageView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_Model3dView_SWIGUpcast(Dali::Toolkit::Model3dView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_ScrollBar_SWIGUpcast(Dali::Toolkit::ScrollBar *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_Scrollable_SWIGUpcast(Dali::Toolkit::Scrollable *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::RefObject * SWIGSTDCALL CSharp_Dali_ItemLayout_SWIGUpcast(Dali::Toolkit::ItemLayout *jarg1) {
    return (Dali::RefObject *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Scrollable * SWIGSTDCALL CSharp_Dali_ItemView_SWIGUpcast(Dali::Toolkit::ItemView *jarg1) {
    return (Dali::Toolkit::Scrollable *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_ScrollViewEffect_SWIGUpcast(Dali::Toolkit::ScrollViewEffect *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::Toolkit::ScrollViewEffect * SWIGSTDCALL CSharp_Dali_ScrollViewPagePathEffect_SWIGUpcast(Dali::Toolkit::ScrollViewPagePathEffect *jarg1) {
    return (Dali::Toolkit::ScrollViewEffect *)jarg1;
}

SWIGEXPORT Dali::RefObject * SWIGSTDCALL CSharp_Dali_Ruler_SWIGUpcast(Dali::Toolkit::Ruler *jarg1) {
    return (Dali::RefObject *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Ruler * SWIGSTDCALL CSharp_Dali_DefaultRuler_SWIGUpcast(Dali::Toolkit::DefaultRuler *jarg1) {
    return (Dali::Toolkit::Ruler *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Ruler * SWIGSTDCALL CSharp_Dali_FixedRuler_SWIGUpcast(Dali::Toolkit::FixedRuler *jarg1) {
    return (Dali::Toolkit::Ruler *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Scrollable * SWIGSTDCALL CSharp_Dali_ScrollView_SWIGUpcast(Dali::Toolkit::ScrollView *jarg1) {
    return (Dali::Toolkit::Scrollable *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_TableView_SWIGUpcast(Dali::Toolkit::TableView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}


SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_TextLabel_SWIGUpcast(Dali::Toolkit::TextLabel *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_AccessibilityManager_SWIGUpcast(Dali::Toolkit::AccessibilityManager *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_StyleManager_SWIGUpcast(Dali::Toolkit::StyleManager *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_VideoView_SWIGUpcast(Dali::Toolkit::VideoView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_CameraView_SWIGUpcast(Dali::Toolkit::CameraView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_GaussianBlurView_SWIGUpcast(Dali::Toolkit::GaussianBlurView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_PageTurnView_SWIGUpcast(Dali::Toolkit::PageTurnView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT Dali::Toolkit::PageTurnView * SWIGSTDCALL CSharp_Dali_PageTurnLandscapeView_SWIGUpcast(Dali::Toolkit::PageTurnLandscapeView *jarg1) {
    return (Dali::Toolkit::PageTurnView *)jarg1;
}

SWIGEXPORT Dali::Toolkit::PageTurnView * SWIGSTDCALL CSharp_Dali_PageTurnPortraitView_SWIGUpcast(Dali::Toolkit::PageTurnPortraitView *jarg1) {
    return (Dali::Toolkit::PageTurnView *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_VisualBase_SWIGUpcast(Dali::Toolkit::Visual::Base *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_VisualFactory_SWIGUpcast(Dali::Toolkit::VisualFactory *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_AsyncImageLoader_SWIGUpcast(Dali::Toolkit::AsyncImageLoader *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

#ifdef __cplusplus
} // extern "C"
#endif
