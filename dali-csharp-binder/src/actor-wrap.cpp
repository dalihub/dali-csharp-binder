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
#include <dali/devel-api/actors/actor-devel.h>

// INTERNAL INCLUDES
#include "common.h"

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

// SWIGINTERN - the relevant parts of the generated code can be seen the below.

SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_TouchEvent_SS_const_SA__SP__Sg__Empty(Dali::Signal<bool(Dali::Actor, Dali::TouchEvent const&)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_TouchEvent_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal<bool(Dali::Actor, Dali::TouchEvent const&)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_TouchEvent_SS_const_SA__SP__Sg__Connect(Dali::Signal<bool(Dali::Actor, Dali::TouchEvent const&)>* self, bool (*func)(Dali::Actor, Dali::TouchEvent const&))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_TouchEvent_SS_const_SA__SP__Sg__Disconnect(Dali::Signal<bool(Dali::Actor, Dali::TouchEvent const&)>* self, bool (*func)(Dali::Actor, Dali::TouchEvent const&))
{
  self->Disconnect(func);
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_TouchEvent_SS_const_SA__SP__Sg__Emit(Dali::Signal<bool(Dali::Actor, Dali::TouchEvent const&)>* self, Dali::Actor arg1, Dali::TouchEvent const& arg2)
{
  return self->Emit(arg1, arg2);
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_HoverEvent_SS_const_SA__SP__Sg__Empty(Dali::Signal<bool(Dali::Actor, Dali::HoverEvent const&)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_HoverEvent_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal<bool(Dali::Actor, Dali::HoverEvent const&)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_HoverEvent_SS_const_SA__SP__Sg__Connect(Dali::Signal<bool(Dali::Actor, Dali::HoverEvent const&)>* self, bool (*func)(Dali::Actor, Dali::HoverEvent const&))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_HoverEvent_SS_const_SA__SP__Sg__Disconnect(Dali::Signal<bool(Dali::Actor, Dali::HoverEvent const&)>* self, bool (*func)(Dali::Actor, Dali::HoverEvent const&))
{
  self->Disconnect(func);
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_HoverEvent_SS_const_SA__SP__Sg__Emit(Dali::Signal<bool(Dali::Actor, Dali::HoverEvent const&)>* self, Dali::Actor arg1, Dali::HoverEvent const& arg2)
{
  return self->Emit(arg1, arg2);
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_WheelEvent_SS_const_SA__SP__Sg__Empty(Dali::Signal<bool(Dali::Actor, Dali::WheelEvent const&)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_WheelEvent_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal<bool(Dali::Actor, Dali::WheelEvent const&)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_WheelEvent_SS_const_SA__SP__Sg__Connect(Dali::Signal<bool(Dali::Actor, Dali::WheelEvent const&)>* self, bool (*func)(Dali::Actor, Dali::WheelEvent const&))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_WheelEvent_SS_const_SA__SP__Sg__Disconnect(Dali::Signal<bool(Dali::Actor, Dali::WheelEvent const&)>* self, bool (*func)(Dali::Actor, Dali::WheelEvent const&))
{
  self->Disconnect(func);
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp_Dali_Actor_Sc_Dali_WheelEvent_SS_const_SA__SP__Sg__Emit(Dali::Signal<bool(Dali::Actor, Dali::WheelEvent const&)>* self, Dali::Actor arg1, Dali::WheelEvent const& arg2)
{
  return self->Emit(arg1, arg2);
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Actor_SP__Sg__Empty(Dali::Signal<void(Dali::Actor)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Actor_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::Actor)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_SP__Sg__Connect(Dali::Signal<void(Dali::Actor)>* self, void (*func)(Dali::Actor))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_SP__Sg__Disconnect(Dali::Signal<void(Dali::Actor)>* self, void (*func)(Dali::Actor))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_SP__Sg__Emit(Dali::Signal<void(Dali::Actor)>* self, Dali::Actor arg)
{
  /*@SWIG:SWIG/signals.i,185,NO_RETURN_FUNC@*/;
  /*@SWIG@*/ self->Emit(arg);
}

using namespace Dali;

#ifdef __cplusplus
extern "C" {
#endif

// Property

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_PARENT_ORIGIN_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::PARENT_ORIGIN;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_PARENT_ORIGIN_X_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::PARENT_ORIGIN_X;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_PARENT_ORIGIN_Y_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::PARENT_ORIGIN_Y;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_PARENT_ORIGIN_Z_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::PARENT_ORIGIN_Z;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_ANCHOR_POINT_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::ANCHOR_POINT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_ANCHOR_POINT_X_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::ANCHOR_POINT_X;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_ANCHOR_POINT_Y_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::ANCHOR_POINT_Y;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_ANCHOR_POINT_Z_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::ANCHOR_POINT_Z;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SIZE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SIZE_WIDTH_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SIZE_WIDTH;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SIZE_HEIGHT_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SIZE_HEIGHT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SIZE_DEPTH_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SIZE_DEPTH;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_POSITION_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_POSITION_X_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::POSITION_X;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_POSITION_Y_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::POSITION_Y;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_POSITION_Z_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::POSITION_Z;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WORLD_POSITION_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WORLD_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WORLD_POSITION_X_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WORLD_POSITION_X;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WORLD_POSITION_Y_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WORLD_POSITION_Y;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WORLD_POSITION_Z_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WORLD_POSITION_Z;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_ORIENTATION_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::ORIENTATION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WORLD_ORIENTATION_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WORLD_ORIENTATION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SCALE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SCALE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SCALE_X_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SCALE_X;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SCALE_Y_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SCALE_Y;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SCALE_Z_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SCALE_Z;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WORLD_SCALE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WORLD_SCALE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_VISIBLE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::VISIBLE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_COLOR_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::COLOR;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_COLOR_RED_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::COLOR_RED;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_COLOR_GREEN_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::COLOR_GREEN;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_COLOR_BLUE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::COLOR_BLUE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_COLOR_ALPHA_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::COLOR_ALPHA;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WORLD_COLOR_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WORLD_COLOR;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WORLD_MATRIX_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WORLD_MATRIX;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_NAME_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::NAME;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SENSITIVE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SENSITIVE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_USER_INTERACTION_ENABLED_get()
{
  int jresult;
  int result;

  result  = (int)Dali::DevelActor::Property::USER_INTERACTION_ENABLED;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_LEAVE_REQUIRED_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::LEAVE_REQUIRED;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_INHERIT_ORIENTATION_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::INHERIT_ORIENTATION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_INHERIT_SCALE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::INHERIT_SCALE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_COLOR_MODE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::COLOR_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_DRAW_MODE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::DRAW_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SIZE_MODE_FACTOR_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SIZE_MODE_FACTOR;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WIDTH_RESIZE_POLICY_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WIDTH_RESIZE_POLICY;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_HEIGHT_RESIZE_POLICY_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::HEIGHT_RESIZE_POLICY;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_SIZE_SCALE_POLICY_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::SIZE_SCALE_POLICY;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_WIDTH_FOR_HEIGHT_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::WIDTH_FOR_HEIGHT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_HEIGHT_FOR_WIDTH_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::HEIGHT_FOR_WIDTH;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_PADDING_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::PADDING;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_MINIMUM_SIZE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::MINIMUM_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_MAXIMUM_SIZE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::MAXIMUM_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_INHERIT_POSITION_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::INHERIT_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_CLIPPING_MODE_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::CLIPPING_MODE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_UPDATE_AREA_HINT_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Actor::Property::UPDATE_AREA_HINT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_OPACITY_get()
{
  return Dali::Actor::Property::OPACITY;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_SCREEN_POSITION_get()
{
  return Dali::Actor::Property::SCREEN_POSITION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_POSITION_USES_ANCHOR_POINT_get()
{
  return Dali::Actor::Property::POSITION_USES_ANCHOR_POINT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_INHERIT_LAYOUT_DIRECTION_get()
{
  return Dali::Actor::Property::INHERIT_LAYOUT_DIRECTION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Actor_Property_LAYOUT_DIRECTION_get()
{
  return Dali::Actor::Property::LAYOUT_DIRECTION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Property_CULLED_get()
{
  return Dali::Actor::Property::CULLED;
}

// Creation

SWIGEXPORT Dali::Handle* SWIGSTDCALL CSharp_Dali_Actor_SWIGUpcast(Dali::Actor* jarg1)
{
  return (Dali::Handle*)jarg1;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Actor_Property()
{
  void*                  jresult;
  Dali::Actor::Property* result = 0;

  {
    try
    {
      result = (Dali::Actor::Property*)new Dali::Actor::Property();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Actor_Property(void* jarg1)
{
  Dali::Actor::Property* arg1 = (Dali::Actor::Property*)0;

  arg1 = (Dali::Actor::Property*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Actor__SWIG_0()
{
  void*        jresult;
  Dali::Actor* result = 0;

  {
    try
    {
      result = (Dali::Actor*)new Dali::Actor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_New()
{
  void*       jresult;
  Dali::Actor result;

  {
    try
    {
      result = Dali::Actor::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_DownCast(void* jarg1)
{
  void*             jresult;
  Dali::BaseHandle  arg1;
  Dali::BaseHandle* argp1;
  Dali::Actor       result;

  argp1 = (Dali::BaseHandle*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try
    {
      result = Dali::Actor::DownCast(arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Actor(void* jarg1)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Actor__SWIG_1(void* jarg1)
{
  void*        jresult;
  Dali::Actor* arg1   = 0;
  Dali::Actor* result = 0;

  arg1 = (Dali::Actor*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Actor*)new Dali::Actor((Dali::Actor const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_Assign(void* jarg1, void* jarg2)
{
  void*        jresult;
  Dali::Actor* arg1   = (Dali::Actor*)0;
  Dali::Actor* arg2   = 0;
  Dali::Actor* result = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  if(!jarg2)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg2 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Actor*)jarg2;
  {
    try
    {
      result = (Dali::Actor*)&(arg1)->operator=((Dali::Actor const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

// Method

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Actor_GetName(void* jarg1)
{
  char*        jresult;
  Dali::Actor* arg1   = (Dali::Actor*)0;
  std::string* result = 0;
  std::string  name   = "";

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      name    = ((Dali::Actor const*)arg1)->GetProperty<std::string>(Dali::Actor::Property::NAME);
      result  = (std::string*)&name;
      jresult = SWIG_csharp_string_callback(result->c_str());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetName(void* jarg1, char* jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  std::string* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try
    {
      (arg1)->SetProperty(Dali::Actor::Property::NAME, (std::string const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }

  //argout typemap for const std::string&
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Actor_GetId(void* jarg1)
{
  unsigned int jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  unsigned int result;

  arg1 = (Dali::Actor*)jarg1;

  if(!arg1)
  {
    DALI_LOG_ERROR("[ERROR] actor is null! return -1");
    return -1;
  }

  {
    try
    {
      result = (unsigned int)((Dali::Actor const*)arg1)->GetProperty<int>(Actor::Property::ID);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsRoot(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Actor::Property::IS_ROOT);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_OnStage(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Actor::Property::CONNECTED_TO_SCENE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsLayer(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Actor::Property::IS_LAYER);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetLayer(void* jarg1)
{
  void*        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  Dali::Layer  result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (arg1)->GetLayer();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Layer((const Dali::Layer&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_Add(void* jarg1, void* jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  Dali::Actor  arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }
  if(!jarg2)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg2 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = *((Dali::Actor*)jarg2);
  {
    try
    {
      (arg1)->Add(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_Remove(void* jarg1, void* jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  Dali::Actor  arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }
  if(!jarg2)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg2 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = *((Dali::Actor*)jarg2);
  {
    try
    {
      (arg1)->Remove(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_Unparent(void* jarg1)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      (arg1)->Unparent();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Actor_GetChildCount(void* jarg1)
{
  unsigned int jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  unsigned int result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (unsigned int)((Dali::Actor const*)arg1)->GetChildCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetChildAt(void* jarg1, unsigned int jarg2)
{
  void*        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  unsigned int arg2;
  Dali::Actor  result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetChildAt(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_FindChildByName(void* jarg1, char* jarg2)
{
  void*        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  std::string* arg2 = 0;
  Dali::Actor  result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try
    {
      result = (arg1)->FindChildByName((std::string const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor&)result);

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_FindChildById(void* jarg1, unsigned int jarg2)
{
  void*        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  unsigned int arg2;
  Dali::Actor  result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try
    {
      result = (arg1)->FindChildById(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetParent(void* jarg1)
{
  void*        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  Dali::Actor  result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetParent();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetParentOrigin(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector3* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector3*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::PARENT_ORIGIN, (Dali::Vector3 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentParentOrigin(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector3>(Actor::Property::PARENT_ORIGIN);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetAnchorPoint(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector3* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector3*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::ANCHOR_POINT, (Dali::Vector3 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentAnchorPoint(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector3>(Actor::Property::ANCHOR_POINT);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetSize__SWIG_0(void* jarg1, float jarg2, float jarg3)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;
  float        arg3;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SIZE, Dali::Vector2(arg2, arg3));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetSize__SWIG_1(void* jarg1, float jarg2, float jarg3, float jarg4)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;
  float        arg3;
  float        arg4;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SIZE, Dali::Vector3(arg2, arg3, arg4));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetSize__SWIG_2(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector2* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector2*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SIZE, (Dali::Vector2 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetSize__SWIG_3(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector3* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector3*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SIZE, (Dali::Vector3 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetTargetSize(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetTargetSize();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentSize(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector3>(Actor::Property::SIZE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetNaturalSize(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetNaturalSize();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetPosition__SWIG_0(void* jarg1, float jarg2, float jarg3)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;
  float        arg3;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::POSITION, Dali::Vector2(arg2, arg3));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetPosition__SWIG_1(void* jarg1, float jarg2, float jarg3, float jarg4)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;
  float        arg3;
  float        arg4;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::POSITION, Dali::Vector3(arg2, arg3, arg4));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetPosition__SWIG_2(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector3* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector3*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::POSITION, (Dali::Vector3 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetX(void* jarg1, float jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::POSITION_X, (arg2));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetY(void* jarg1, float jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::POSITION_Y, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetZ(void* jarg1, float jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::POSITION_Z, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_TranslateBy(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector3* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector3*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->TranslateBy((Dali::Vector3 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentPosition(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector3>(Actor::Property::POSITION);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentWorldPosition(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector3>(Actor::Property::WORLD_POSITION);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetInheritPosition(void* jarg1, bool jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Dali::Actor::Property::INHERIT_POSITION, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsPositionInherited(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Dali::Actor::Property::INHERIT_POSITION);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetOrientation__SWIG_0(void* jarg1, void* jarg2, void* jarg3)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Degree*  arg2 = 0;
  Dali::Vector3* arg3 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Degree*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Degree const & type is null", 0);
    return;
  }
  arg3 = (Dali::Vector3*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::ORIENTATION, Quaternion((Dali::Degree const&)*arg2, (Dali::Vector3 const&)*arg3));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetOrientation__SWIG_1(void* jarg1, void* jarg2, void* jarg3)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Radian*  arg2 = 0;
  Dali::Vector3* arg3 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Radian*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Radian const & type is null", 0);
    return;
  }
  arg3 = (Dali::Vector3*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::ORIENTATION, Quaternion((Dali::Radian const&)*arg2, (Dali::Vector3 const&)*arg3));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetOrientation__SWIG_2(void* jarg1, void* jarg2)
{
  Dali::Actor*      arg1 = (Dali::Actor*)0;
  Dali::Quaternion* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Quaternion*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::ORIENTATION, (Dali::Quaternion const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_RotateBy__SWIG_0(void* jarg1, void* jarg2, void* jarg3)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Degree*  arg2 = 0;
  Dali::Vector3* arg3 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Degree*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Degree const & type is null", 0);
    return;
  }
  arg3 = (Dali::Vector3*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->RotateBy((Dali::Degree const&)*arg2, (Dali::Vector3 const&)*arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_RotateBy__SWIG_1(void* jarg1, void* jarg2, void* jarg3)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Radian*  arg2 = 0;
  Dali::Vector3* arg3 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Radian*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Radian const & type is null", 0);
    return;
  }
  arg3 = (Dali::Vector3*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->RotateBy((Dali::Radian const&)*arg2, (Dali::Vector3 const&)*arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_RotateBy__SWIG_2(void* jarg1, void* jarg2)
{
  Dali::Actor*      arg1 = (Dali::Actor*)0;
  Dali::Quaternion* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Quaternion*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->RotateBy((Dali::Quaternion const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentOrientation(void* jarg1)
{
  void*            jresult;
  Dali::Actor*     arg1 = (Dali::Actor*)0;
  Dali::Quaternion result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Quaternion>(Actor::Property::ORIENTATION);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Quaternion((const Dali::Quaternion&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetInheritOrientation(void* jarg1, bool jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::INHERIT_ORIENTATION, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsOrientationInherited(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Actor::Property::INHERIT_ORIENTATION);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentWorldOrientation(void* jarg1)
{
  void*            jresult;
  Dali::Actor*     arg1 = (Dali::Actor*)0;
  Dali::Quaternion result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Quaternion>(Actor::Property::WORLD_ORIENTATION);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Quaternion((const Dali::Quaternion&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetScale__SWIG_0(void* jarg1, float jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SCALE, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetScale__SWIG_1(void* jarg1, float jarg2, float jarg3, float jarg4)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;
  float        arg3;
  float        arg4;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SCALE, Vector3(arg2, arg3, arg4));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetScale__SWIG_2(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector3* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector3*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SCALE, (Dali::Vector3 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_ScaleBy(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector3* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector3*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->ScaleBy((Dali::Vector3 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentScale(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector3>(Actor::Property::SCALE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentWorldScale(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector3>(Actor::Property::WORLD_SCALE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetInheritScale(void* jarg1, bool jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::INHERIT_SCALE, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsScaleInherited(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Actor::Property::INHERIT_SCALE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentWorldMatrix(void* jarg1)
{
  void*        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  Dali::Matrix result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Matrix>(Actor::Property::WORLD_MATRIX);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Matrix((const Dali::Matrix&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Raise(void* jarg1)
{
  Dali::Actor  arg1;
  Dali::Actor* argp1;

  argp1 = (Dali::Actor*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg1 = *argp1;
  {
    try
    {
      arg1.Raise();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Lower(void* jarg1)
{
  Dali::Actor  arg1;
  Dali::Actor* argp1;

  argp1 = (Dali::Actor*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg1 = *argp1;
  {
    try
    {
      arg1.Lower();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RaiseToTop(void* jarg1)
{
  Dali::Actor  arg1;
  Dali::Actor* argp1;

  argp1 = (Dali::Actor*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg1 = *argp1;
  {
    try
    {
      arg1.RaiseToTop();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LowerToBottom(void* jarg1)
{
  Dali::Actor  arg1;
  Dali::Actor* argp1;

  argp1 = (Dali::Actor*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg1 = *argp1;
  {
    try
    {
      arg1.LowerToBottom();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RaiseAbove(void* jarg1, void* jarg2)
{
  Dali::Actor  arg1;
  Dali::Actor  arg2;
  Dali::Actor* argp1;
  Dali::Actor* argp2;

  argp1 = (Dali::Actor*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg1  = *argp1;
  argp2 = (Dali::Actor*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg2 = *argp2;
  {
    try
    {
      arg1.RaiseAbove(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LowerBelow(void* jarg1, void* jarg2)
{
  Dali::Actor  arg1;
  Dali::Actor  arg2;
  Dali::Actor* argp1;
  Dali::Actor* argp2;

  argp1 = (Dali::Actor*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg1  = *argp1;
  argp2 = (Dali::Actor*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg2 = *argp2;
  {
    try
    {
      arg1.LowerBelow(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetVisible(void* jarg1, bool jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::VISIBLE, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsVisible(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetCurrentProperty<bool>(Actor::Property::VISIBLE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetOpacity(void* jarg1, float jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::OPACITY, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Actor_GetCurrentOpacity(void* jarg1)
{
  float        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (float)((Dali::Actor const*)arg1)->GetCurrentProperty<float>(Actor::Property::OPACITY);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetColor(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector4* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector4*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::COLOR, (Dali::Vector4 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentColor(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector4 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector4>(Actor::Property::COLOR);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetColorMode(void* jarg1, int jarg2)
{
  Dali::Actor*    arg1 = (Dali::Actor*)0;
  Dali::ColorMode arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::ColorMode)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::COLOR_MODE, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_GetColorMode(void* jarg1)
{
  int             jresult;
  Dali::Actor*    arg1 = (Dali::Actor*)0;
  Dali::ColorMode result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (Dali::ColorMode)((Dali::Actor const*)arg1)->GetProperty<ColorMode>(Actor::Property::COLOR_MODE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetCurrentWorldColor(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector4 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetCurrentProperty<Vector4>(Actor::Property::WORLD_COLOR);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetDrawMode(void* jarg1, int jarg2)
{
  Dali::Actor*         arg1 = (Dali::Actor*)0;
  Dali::DrawMode::Type arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::DrawMode::Type)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::DRAW_MODE, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_GetDrawMode(void* jarg1)
{
  int                  jresult;
  Dali::Actor*         arg1 = (Dali::Actor*)0;
  Dali::DrawMode::Type result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (Dali::DrawMode::Type)((Dali::Actor const*)arg1)->GetProperty<DrawMode::Type>(Actor::Property::DRAW_MODE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetSensitive(void* jarg1, bool jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SENSITIVE, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsSensitive(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Actor::Property::SENSITIVE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_ScreenToLocal(void* jarg1, float* jarg2, float* jarg3, float jarg4, float jarg5)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float*       arg2 = 0;
  float*       arg3 = 0;
  float        arg4;
  float        arg5;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float*)jarg2;
  arg3 = (float*)jarg3;
  arg4 = (float)jarg4;
  arg5 = (float)jarg5;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->ScreenToLocal(*arg2, *arg3, arg4, arg5);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetLeaveRequired(void* jarg1, bool jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::LEAVE_REQUIRED, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_GetLeaveRequired(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Actor::Property::LEAVE_REQUIRED);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetKeyboardFocusable(void* jarg1, bool jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::KEYBOARD_FOCUSABLE, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsKeyboardFocusable(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(Actor::Property::KEYBOARD_FOCUSABLE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetKeyboardFocusableChildren(void* actor, bool keyboardFocusableChildren)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;

  if(!actor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return;
  }

  arg1 = (Dali::Actor*)actor;
  {
    try
    {
      (arg1)->SetProperty(DevelActor::Property::KEYBOARD_FOCUSABLE_CHILDREN, keyboardFocusableChildren);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_AreChildrenKeyBoardFocusable(void* actor)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!actor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)actor;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(DevelActor::Property::KEYBOARD_FOCUSABLE_CHILDREN);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetTouchFocusable(void* jarg1, bool jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(DevelActor::Property::TOUCH_FOCUSABLE, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_IsTouchFocusable(void* jarg1)
{
  bool         jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  bool         result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Actor const*)arg1)->GetProperty<bool>(DevelActor::Property::TOUCH_FOCUSABLE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetResizePolicy(void* jarg1, int jarg2, int jarg3)
{
  Dali::Actor*             arg1 = (Dali::Actor*)0;
  Dali::ResizePolicy::Type arg2;
  Dali::Dimension::Type    arg3;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::ResizePolicy::Type)jarg2;
  arg3 = (Dali::Dimension::Type)jarg3;
  {
    try
    {
      (arg1)->SetResizePolicy(arg2, arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_GetResizePolicy(void* jarg1, int jarg2)
{
  int                      jresult;
  Dali::Actor*             arg1 = (Dali::Actor*)0;
  Dali::Dimension::Type    arg2;
  Dali::ResizePolicy::Type result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Dimension::Type)jarg2;
  {
    try
    {
      result = (Dali::ResizePolicy::Type)((Dali::Actor const*)arg1)->GetResizePolicy(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetSizeScalePolicy(void* jarg1, int jarg2)
{
  Dali::Actor*                arg1 = (Dali::Actor*)0;
  Dali::SizeScalePolicy::Type arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::SizeScalePolicy::Type)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SIZE_SCALE_POLICY, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_GetSizeScalePolicy(void* jarg1)
{
  int                         jresult;
  Dali::Actor*                arg1 = (Dali::Actor*)0;
  Dali::SizeScalePolicy::Type result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (Dali::SizeScalePolicy::Type)((Dali::Actor const*)arg1)->GetProperty<SizeScalePolicy::Type>(Actor::Property::SIZE_SCALE_POLICY);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetSizeModeFactor(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector3* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector3*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::SIZE_MODE_FACTOR, (Dali::Vector3 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetSizeModeFactor(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector3 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = ((Dali::Actor const*)arg1)->GetProperty<Vector3>(Actor::Property::SIZE_MODE_FACTOR);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3&)result);
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Actor_GetHeightForWidth(void* jarg1, float jarg2)
{
  float        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;
  float        result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  {
    try
    {
      result = (float)(arg1)->GetHeightForWidth(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Actor_GetWidthForHeight(void* jarg1, float jarg2)
{
  float        jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  float        arg2;
  float        result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (float)jarg2;
  {
    try
    {
      result = (float)(arg1)->GetWidthForHeight(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Actor_GetRelayoutSize(void* jarg1, int jarg2)
{
  float                 jresult;
  Dali::Actor*          arg1 = (Dali::Actor*)0;
  Dali::Dimension::Type arg2;
  float                 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Dimension::Type)jarg2;
  {
    try
    {
      result = (float)((Dali::Actor const*)arg1)->GetRelayoutSize(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetPadding(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Padding* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Padding*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Padding const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::PADDING, (Dali::Padding const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_GetPadding(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Padding* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Padding*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Padding & type is null", 0);
    return;
  }
  {
    try
    {
      *arg2 = ((Dali::Actor const*)arg1)->GetProperty<Vector4>(Actor::Property::PADDING);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetMinimumSize(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector2* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector2*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::MINIMUM_SIZE, (Dali::Vector2 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetMinimumSize(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector2 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (arg1)->GetProperty<Vector2>(Actor::Property::MINIMUM_SIZE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetMaximumSize(void* jarg1, void* jarg2)
{
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  Dali::Vector2* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Vector2*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->SetProperty(Actor::Property::MAXIMUM_SIZE, (Dali::Vector2 const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetMaximumSize(void* jarg1)
{
  void*         jresult;
  Dali::Actor*  arg1 = (Dali::Actor*)0;
  Dali::Vector2 result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (arg1)->GetProperty<Vector2>(Actor::Property::MAXIMUM_SIZE);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2&)result);
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_GetHierarchyDepth(void* jarg1)
{
  int          jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  int          result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result             = (int)(arg1)->GetProperty<int>(Actor::Property::HIERARCHY_DEPTH);
      Dali::Actor parent = ((Dali::Actor const*)arg1)->GetParent();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Actor_AddRenderer(void* jarg1, void* jarg2)
{
  unsigned int    jresult;
  Dali::Actor*    arg1 = (Dali::Actor*)0;
  Dali::Renderer* arg2 = 0;
  unsigned int    result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Renderer*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Renderer & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (unsigned int)(arg1)->AddRenderer(*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Actor_GetRendererCount(void* jarg1)
{
  unsigned int jresult;
  Dali::Actor* arg1 = (Dali::Actor*)0;
  unsigned int result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  {
    try
    {
      result = (unsigned int)((Dali::Actor const*)arg1)->GetRendererCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_GetRendererAt(void* jarg1, unsigned int jarg2)
{
  void*          jresult;
  Dali::Actor*   arg1 = (Dali::Actor*)0;
  unsigned int   arg2;
  Dali::Renderer result;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return 0;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try
    {
      result = (arg1)->GetRendererAt(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Renderer((const Dali::Renderer&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_RemoveRenderer__SWIG_0(void* jarg1, void* jarg2)
{
  Dali::Actor*    arg1 = (Dali::Actor*)0;
  Dali::Renderer* arg2 = 0;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (Dali::Renderer*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Renderer & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->RemoveRenderer(*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_RemoveRenderer__SWIG_1(void* jarg1, unsigned int jarg2)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  unsigned int arg2;

  if(!jarg1)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "jarg1 is null!");
    return;
  }

  arg1 = (Dali::Actor*)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try
    {
      (arg1)->RemoveRenderer(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetNeedGesturePropagation(void* jarg1, bool jarg2)
{
  Dali::Actor  arg1;
  bool         arg2;
  Dali::Actor* argp1 = (Dali::Actor*)0;

  argp1 = (Dali::Actor*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }
  arg1 = *argp1;
  arg2 = jarg2;
  {
    try
    {
      Dali::DevelActor::SetNeedGesturePropagation(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
  return;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Actor_CalculateScreenExtents(void* actor)
{
  Dali::Actor       arg1;
  Dali::Actor*      argp1 = (Dali::Actor*)0;
  Dali::Rect<float> result;

  argp1 = (Dali::Actor*)actor;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try
    {
      result = Dali::DevelActor::CalculateScreenExtents(arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  // Note: The float type Rectangle class is not ready yet.
  //      Therefore, it transmits data in Vector4 class.
  //      This type should later be changed to the appropriate data type.
  return new Dali::Vector4(result.x, result.y, result.width, result.height);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_LookAt(void* csActor, void* csTarget, void* csUp, void* csLocalForward, void* csLocalUp)
{
  Dali::Actor   actor;
  Dali::Vector3 target;
  Dali::Vector3 up           = Vector3::YAXIS;
  Dali::Vector3 localForward = Vector3::ZAXIS;
  Dali::Vector3 localUp      = Vector3::YAXIS;

  if(!csActor)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }

  if(!csTarget)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null target Dali::Vector3", 0);
    return;
  }

  actor  = *(Dali::Actor*)csActor;
  target = *(Dali::Vector3*)csTarget;

  // Use default value if csUp is null
  if(csUp)
  {
    up = *(Dali::Vector3*)csUp;
  }

  // Use default value if csLocalForward is null
  if(csLocalForward)
  {
    localForward = *(Dali::Vector3*)csLocalForward;
  }

  // Use default value if csLocalForward is null
  if(csLocalUp)
  {
    localUp = *(Dali::Vector3*)csLocalUp;
  }

  {
    try
    {
      Dali::DevelActor::LookAt(actor, target, up, localForward, localUp);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_DevelActor_Property_SetTouchAreaOffset(void* jarg1, int jarg2, int jarg3, int jarg4, int jarg5)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  arg1              = (Dali::Actor*)jarg1;
  Rect<int> arg2    = Rect(jarg2, jarg3, jarg4, jarg5);
  {
    try
    {
      (arg1)->SetProperty(Dali::DevelActor::Property::TOUCH_AREA_OFFSET, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_DevelActor_Property_GetTouchAreaOffset(void* jarg1, int* jarg2, int* jarg3, int* jarg4, int* jarg5)
{
  Dali::Actor* arg1 = (Dali::Actor*)0;
  arg1              = (Dali::Actor*)jarg1;

  Rect<int32_t> result;
  {
    try
    {
      result = (arg1)->GetProperty<Rect<int32_t>>(Dali::DevelActor::Property::TOUCH_AREA_OFFSET);
      *jarg2 = result.left;
      *jarg3 = result.right;
      *jarg4 = result.bottom;
      *jarg5 = result.top;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_UnparentAndReset(void* jarg1)
{
  Dali::Actor* arg1 = 0;

  arg1 = (Dali::Actor*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor & type is null", 0);
    return;
  }
  {
    try
    {
      Dali::UnparentAndReset(*arg1);
    }
    CALL_CATCH_EXCEPTION();
  }
}

// Signals
#ifndef GENERATE_DEVEL_ACTOR_SIGNAL
#define GENERATE_DEVEL_ACTOR_SIGNAL(HType, SignalName) GENERATE_DEVEL_SIGNAL(Dali::Actor*, HType, Dali::DevelActor, Dali_Actor, SignalName)
#endif
#ifndef GENERATE_ACTOR_SIGNAL
#define GENERATE_ACTOR_SIGNAL(HType, SignalName) GENERATE_SIGNAL(Dali::Actor*, HType, Dali_Actor, SignalName)
#endif

GENERATE_DEVEL_ACTOR_SIGNAL(bool(*)(Dali::Actor, Dali::TouchEvent const&), HitTestResultSignal)
// CSharp_Dali_Actor_HitTestResultSignal_Connect
// CSharp_Dali_Actor_HitTestResultSignal_Disconnect

GENERATE_DEVEL_ACTOR_SIGNAL(bool(*)(Dali::Actor, Dali::TouchEvent const&), InterceptTouchedSignal)
// CSharp_Dali_Actor_InterceptTouchedSignal_Connect
// CSharp_Dali_Actor_InterceptTouchedSignal_Disconnect

GENERATE_ACTOR_SIGNAL(bool(*)(Dali::Actor, Dali::TouchEvent const&), TouchedSignal)
// CSharp_Dali_Actor_TouchedSignal_Connect
// CSharp_Dali_Actor_TouchedSignal_Disconnect

GENERATE_ACTOR_SIGNAL(bool(*)(Dali::Actor, Dali::HoverEvent const&), HoveredSignal)
// CSharp_Dali_Actor_HoveredSignal_Connect
// CSharp_Dali_Actor_HoveredSignal_Disconnect

GENERATE_ACTOR_SIGNAL(bool(*)(Dali::Actor, Dali::WheelEvent const&), WheelEventSignal)
// CSharp_Dali_Actor_WheelEventSignal_Connect
// CSharp_Dali_Actor_WheelEventSignal_Disconnect

GENERATE_ACTOR_SIGNAL(void(*)(Dali::Actor), OnSceneSignal)
// CSharp_Dali_Actor_OnSceneSignal_Connect
// CSharp_Dali_Actor_OnSceneSignal_Disconnect

GENERATE_ACTOR_SIGNAL(void(*)(Dali::Actor), OffSceneSignal)
// CSharp_Dali_Actor_OffSceneSignal_Connect
// CSharp_Dali_Actor_OffSceneSignal_Disconnect

GENERATE_ACTOR_SIGNAL(void(*)(Dali::Actor), OnRelayoutSignal)
// CSharp_Dali_Actor_OnRelayoutSignal_Connect
// CSharp_Dali_Actor_OnRelayoutSignal_Disconnect

GENERATE_DEVEL_ACTOR_SIGNAL(void(*)(Dali::Actor, bool, Dali::DevelActor::VisibilityChange::Type), VisibilityChangedSignal)
// CSharp_Dali_Actor_VisibilityChangedSignal_Connect
// CSharp_Dali_Actor_VisibilityChangedSignal_Disconnect

GENERATE_ACTOR_SIGNAL(void(*)(Dali::Actor, LayoutDirection::Type), LayoutDirectionChangedSignal)
// CSharp_Dali_Actor_LayoutDirectionChangedSignal_Connect
// CSharp_Dali_Actor_LayoutDirectionChangedSignal_Disconnect

#ifdef __cplusplus
}
#endif
