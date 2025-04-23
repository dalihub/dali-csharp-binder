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

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RenderEffect_Activate(void* pRenderEffect)
{
  Dali::Toolkit::RenderEffect* renderEffect = (Dali::Toolkit::RenderEffect*) pRenderEffect;
  {
    try
    {
      renderEffect->Activate();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RenderEffect_Deactivate(void* pRenderEffect)
{
  Dali::Toolkit::RenderEffect* renderEffect = (Dali::Toolkit::RenderEffect*) pRenderEffect;
  {
    try
    {
      renderEffect->Deactivate();
    }
    CALL_CATCH_EXCEPTION();
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_New__SWIG_1(unsigned int blurRadius)
{
  Dali::Toolkit::BackgroundBlurEffect backgroundBlurEffect;
  {
    try
    {
      backgroundBlurEffect = Dali::Toolkit::BackgroundBlurEffect::New(blurRadius);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::BackgroundBlurEffect((const Dali::Toolkit::BackgroundBlurEffect&)backgroundBlurEffect);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_SetBlurOnce(void* pBackgroundBlurEffect, bool blurOnce)
{
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*) pBackgroundBlurEffect;
  {
    try
    {
      backgroundBlurEffect->SetBlurOnce(blurOnce);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_GetBlurOnce(void* pBackgroundBlurEffect)
{
  bool blurOnce = false;
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*) pBackgroundBlurEffect;
  {
    try
    {
      blurOnce = backgroundBlurEffect->GetBlurOnce();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return blurOnce;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_SetBlurRadius(void* pBackgroundBlurEffect, unsigned int blurRadius)
{
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*) pBackgroundBlurEffect;
  {
    try
    {
      backgroundBlurEffect->SetBlurRadius(blurRadius);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_GetBlurRadius(void* pBackgroundBlurEffect)
{
  uint32_t blurRadius = 0.0f;
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*) pBackgroundBlurEffect;
  {
    try
    {
      blurRadius = (uint32_t)backgroundBlurEffect->GetBlurRadius();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return blurRadius;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_AddBlurStrengthAnimation(void* pBackgroundBlurEffect, void* pAnimation, void* pAlphaFunction, void* pTimePeriod, float fromValue, float toValue)
{
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*) pBackgroundBlurEffect;
  Dali::Animation* animation = (Dali::Animation*) pAnimation; // reference
  if(!animation)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation & type is null", 0);
    return;
  }

  Dali::AlphaFunction alphaFunction = pAlphaFunction? *((Dali::AlphaFunction*) pAlphaFunction) : animation->GetDefaultAlphaFunction();
  Dali::TimePeriod timePeriod = pTimePeriod? *((Dali::TimePeriod*) pTimePeriod) : Dali::TimePeriod(animation->GetDuration());

  {
    try
    {
      backgroundBlurEffect->AddBlurStrengthAnimation((Dali::Animation&)(*animation), alphaFunction, timePeriod, fromValue, toValue);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_AddBlurOpacityAnimation(void* pBackgroundBlurEffect, void* pAnimation, void* pAlphaFunction, void* pTimePeriod, float fromValue, float toValue)
{
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*) pBackgroundBlurEffect;
  Dali::Animation* animation = (Dali::Animation*) pAnimation; // reference
  if(!animation)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation & type is null", 0);
    return;
  }

  Dali::AlphaFunction alphaFunction = pAlphaFunction? *((Dali::AlphaFunction*) pAlphaFunction) : animation->GetDefaultAlphaFunction();
  Dali::TimePeriod timePeriod = pTimePeriod? *((Dali::TimePeriod*) pTimePeriod) : Dali::TimePeriod(animation->GetDuration());

  {
    try
    {
      backgroundBlurEffect->AddBlurOpacityAnimation((Dali::Animation&)(*animation), alphaFunction, timePeriod, fromValue, toValue);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MaskEffect_New__SWIG_0(Dali::BaseHandle* control)
{
  Dali::Toolkit::MaskEffect maskEffect;
  {
    try
    {
      Dali::Toolkit::Control maskControl = Dali::Toolkit::Control::DownCast(*control);
      maskEffect = Dali::Toolkit::MaskEffect::New(maskControl);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::MaskEffect((const Dali::Toolkit::MaskEffect&)maskEffect);
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MaskEffect_New__SWIG_1(Dali::BaseHandle* control, uint32_t maskMode, float positionX, float positionY, float scaleX, float scaleY)
{
  Dali::Toolkit::MaskEffect maskEffect;
  {
    try
    {
      Dali::Toolkit::Control maskControl = Dali::Toolkit::Control::DownCast(*control);
      maskEffect = Dali::Toolkit::MaskEffect::New(maskControl, Dali::Toolkit::MaskEffect::MaskMode(maskMode), Dali::Vector2(positionX, positionY), Dali::Vector2(scaleX, scaleY));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::MaskEffect((const Dali::Toolkit::MaskEffect&)maskEffect);
}

#ifdef __cplusplus
}
#endif
