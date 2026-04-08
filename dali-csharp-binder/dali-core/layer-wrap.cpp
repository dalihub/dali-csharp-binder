/*
 * Copyright (c) 2026 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/actors/layer.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

using namespace Dali;

#ifdef __cplusplus
extern "C" {
#endif

// Property

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Layer_Property_BEHAVIOR_get()
{
  int jresult;
  int result;

  result  = (int)Dali::Layer::Property::BEHAVIOR;
  jresult = (int)result;
  return jresult;
}

// Creation

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Layer_New()
{
  void*       jresult;
  Dali::Layer result;

  {
    try
    {
      result = Dali::Layer::New();

      // NUI specific logic.

      // We use Layer.Viewport feature base as top-left. Let we follow it.
      result.SetProperty(Actor::Property::PARENT_ORIGIN, Dali::ParentOrigin::TOP_LEFT);
      result.SetProperty(Actor::Property::PIVOT, Dali::Pivot::TOP_LEFT);

      // NUI Created Layer always be under some root-layer. Keep it as fill-to-parent
      result.SetResizePolicy(ResizePolicy::FILL_TO_PARENT, Dimension::ALL_DIMENSIONS);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Layer((const Dali::Layer&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Layer(void* jarg1)
{
  Dali::Layer* arg1 = (Dali::Layer*)0;

  arg1 = (Dali::Layer*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

// Method

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_RaiseToTop(void* jarg1)
{
  Dali::Layer* arg1 = (Dali::Layer*)0;

  arg1 = (Dali::Layer*)jarg1;
  {
    try
    {
      (arg1)->RaiseToTop();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_LowerToBottom(void* jarg1)
{
  Dali::Layer* arg1 = (Dali::Layer*)0;

  arg1 = (Dali::Layer*)jarg1;
  {
    try
    {
      (arg1)->LowerToBottom();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_MoveAbove(void* jarg1, void* jarg2)
{
  Dali::Layer* arg1 = (Dali::Layer*)0;
  Dali::Layer  arg2;
  Dali::Layer* argp2;

  arg1  = (Dali::Layer*)jarg1;
  argp2 = (Dali::Layer*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Layer", 0);
    return;
  }
  arg2 = *argp2;
  {
    try
    {
      (arg1)->MoveAbove(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_MoveBelow(void* jarg1, void* jarg2)
{
  Dali::Layer* arg1 = (Dali::Layer*)0;
  Dali::Layer  arg2;
  Dali::Layer* argp2;

  arg1  = (Dali::Layer*)jarg1;
  argp2 = (Dali::Layer*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Layer", 0);
    return;
  }
  arg2 = *argp2;
  {
    try
    {
      (arg1)->MoveBelow(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetBehavior(void* jarg1, int jarg2)
{
  Dali::Layer*          arg1 = (Dali::Layer*)0;
  Dali::Layer::Behavior arg2;

  arg1 = (Dali::Layer*)jarg1;
  arg2 = (Dali::Layer::Behavior)jarg2;
  {
    try
    {
      (arg1)->SetProperty(Layer::Property::BEHAVIOR, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Layer_GetBehavior(void* jarg1)
{
  int                   jresult;
  Dali::Layer*          arg1 = (Dali::Layer*)0;
  Dali::Layer::Behavior result;

  arg1 = (Dali::Layer*)jarg1;
  {
    try
    {
      result = (Dali::Layer::Behavior)((Dali::Layer const*)arg1)->GetProperty<Dali::Layer::Behavior>(Dali::Layer::Property::BEHAVIOR);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Layer_IsClipping(void* jarg1)
{
  bool         jresult;
  Dali::Layer* arg1 = (Dali::Layer*)0;
  bool         result;

  arg1 = (Dali::Layer*)jarg1;
  {
    try
    {
      // NUI specific logic.
      result = (((Dali::Layer const*)arg1)->GetProperty<int32_t>(Dali::Actor::Property::CLIPPING_MODE) != static_cast<int32_t>(Dali::ClippingMode::DISABLED));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetClipping(void* jarg1, bool clipping)
{
  {
    try
    {
      if(clipping != CSharp_Dali_Layer_IsClipping(jarg1))
      {
        Dali::Layer layer = *(Dali::Layer*)jarg1;

        // NUI specific logic.
        if(clipping)
        {
          // Prepare to clipping
          layer.SetProperty(Dali::Actor::Property::CLIPPING_MODE, Dali::ClippingMode::CLIP_TO_BOUNDING_BOX);
        }
        else
        {
          layer.SetProperty(Dali::Actor::Property::CLIPPING_MODE, Dali::ClippingMode::DISABLED);

          // Tizen.UI Change the size of layer when SetClipping(true) called. We should reset position and resize policy here.
          layer.SetProperty(Dali::Actor::Property::POSITION, Vector3::ZERO);
          layer.SetResizePolicy(ResizePolicy::FILL_TO_PARENT, Dimension::ALL_DIMENSIONS);
        }
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetClippingBox__SWIG_0(void* jarg1, int x, int y, int width, int height)
{
  {
    try
    {
      Dali::Layer layer = *(Dali::Layer*)jarg1;

      // NUI specific logic.
      layer.SetProperty(Dali::Actor::Property::POSITION, Vector2(x, y));
      layer.SetProperty(Dali::Actor::Property::SIZE, Vector2(width, height));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetClippingBox__SWIG_1(void* jarg1, void* jarg2)
{
  Dali::Rect<int32_t>  arg2;
  Dali::Rect<int32_t>* argp2;

  argp2 = (Dali::Rect<int32_t>*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Rect<int32_t>", 0);
    return;
  }
  arg2 = *argp2;

  CSharp_Dali_Layer_SetClippingBox__SWIG_0(jarg1, arg2.x, arg2.y, arg2.width, arg2.height);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Layer_GetClippingBox(void* jarg1)
{
  void*               jresult;
  Dali::Rect<int32_t> result;

  {
    try
    {
      Dali::Layer layer = *(Dali::Layer*)jarg1;

      // NUI specific logic.
      Dali::Vector3 position = layer.GetProperty<Dali::Vector3>(Dali::Actor::Property::POSITION);
      Dali::Vector3 size     = layer.GetProperty<Dali::Vector3>(Dali::Actor::Property::SIZE);

      result = Dali::Rect<int32_t>(static_cast<int32_t>(position.x), static_cast<int32_t>(position.y), static_cast<int32_t>(size.width), static_cast<int32_t>(size.height));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Rect<int32_t>((const Dali::Rect<int32_t>&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetSortFunction(void* jarg1, void* jarg2)
{
  Dali::Layer*                  arg1 = (Dali::Layer*)0;
  Dali::Layer::SortFunctionType arg2 = (Dali::Layer::SortFunctionType)0;

  arg1 = (Dali::Layer*)jarg1;
  arg2 = (Dali::Layer::SortFunctionType)jarg2;
  {
    try
    {
      (arg1)->SetSortFunction(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetTouchConsumed(void* jarg1, bool jarg2)
{
  Dali::Layer* arg1 = (Dali::Layer*)0;
  bool         arg2;

  arg1 = (Dali::Layer*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Layer::Property::CONSUMES_TOUCH, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Layer_IsTouchConsumed(void* jarg1)
{
  bool         jresult;
  Dali::Layer* arg1 = (Dali::Layer*)0;
  bool         result;

  arg1 = (Dali::Layer*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Layer const*)arg1)->GetProperty<bool>(Layer::Property::CONSUMES_TOUCH);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetHoverConsumed(void* jarg1, bool jarg2)
{
  Dali::Layer* arg1 = (Dali::Layer*)0;
  bool         arg2;

  arg1 = (Dali::Layer*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      (arg1)->SetProperty(Layer::Property::CONSUMES_HOVER, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Layer_IsHoverConsumed(void* jarg1)
{
  bool         jresult;
  Dali::Layer* arg1 = (Dali::Layer*)0;
  bool         result;

  arg1 = (Dali::Layer*)jarg1;
  {
    try
    {
      result = (bool)((Dali::Layer const*)arg1)->GetProperty<bool>(Layer::Property::CONSUMES_HOVER);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

#ifdef __cplusplus
}
#endif
