/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
  Dali::Toolkit::RenderEffect* renderEffect = (Dali::Toolkit::RenderEffect*)pRenderEffect;
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
  Dali::Toolkit::RenderEffect* renderEffect = (Dali::Toolkit::RenderEffect*)pRenderEffect;
  {
    try
    {
      renderEffect->Deactivate();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RenderEffect_Refresh(void* pRenderEffect)
{
  Dali::Toolkit::RenderEffect* renderEffect = (Dali::Toolkit::RenderEffect*)pRenderEffect;
  {
    try
    {
      renderEffect->Refresh();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_RenderEffect_IsActivated(void* pRenderEffect)
{
  Dali::Toolkit::RenderEffect* renderEffect = (Dali::Toolkit::RenderEffect*)pRenderEffect;
  bool                         isActivated  = false;
  {
    try
    {
      isActivated = renderEffect->IsActivated();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return isActivated;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_New__SWIG_1(unsigned int blurRadius)
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
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*)pBackgroundBlurEffect;
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
  bool                                 blurOnce             = false;
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*)pBackgroundBlurEffect;
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
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*)pBackgroundBlurEffect;
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
  uint32_t                             blurRadius           = 0.0f;
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*)pBackgroundBlurEffect;
  {
    try
    {
      blurRadius = (uint32_t)backgroundBlurEffect->GetBlurRadius();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return blurRadius;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_SetBlurDownscaleFactor(void* pBackgroundBlurEffect, float blurDownscaleFactor)
{
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*)pBackgroundBlurEffect;
  {
    try
    {
      backgroundBlurEffect->SetBlurDownscaleFactor(blurDownscaleFactor);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_GetBlurDownscaleFactor(void* pBackgroundBlurEffect)
{
  float                                blurDownscaleFactor  = 0.0f;
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*)pBackgroundBlurEffect;
  {
    try
    {
      blurDownscaleFactor = (float)backgroundBlurEffect->GetBlurDownscaleFactor();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return blurDownscaleFactor;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_AddBlurStrengthAnimation(void* pBackgroundBlurEffect, void* pAnimation, void* pAlphaFunction, void* pTimePeriod, float fromValue, float toValue)
{
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*)pBackgroundBlurEffect;
  Dali::Animation*                     animation            = (Dali::Animation*)pAnimation; // reference
  if(!animation)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation & type is null", 0);
    return;
  }

  Dali::AlphaFunction alphaFunction = pAlphaFunction ? *((Dali::AlphaFunction*)pAlphaFunction) : animation->GetDefaultAlphaFunction();
  Dali::TimePeriod    timePeriod    = pTimePeriod ? *((Dali::TimePeriod*)pTimePeriod) : Dali::TimePeriod(animation->GetDuration());

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
  Dali::Toolkit::BackgroundBlurEffect* backgroundBlurEffect = (Dali::Toolkit::BackgroundBlurEffect*)pBackgroundBlurEffect;
  Dali::Animation*                     animation            = (Dali::Animation*)pAnimation; // reference
  if(!animation)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation & type is null", 0);
    return;
  }

  Dali::AlphaFunction alphaFunction = pAlphaFunction ? *((Dali::AlphaFunction*)pAlphaFunction) : animation->GetDefaultAlphaFunction();
  Dali::TimePeriod    timePeriod    = pTimePeriod ? *((Dali::TimePeriod*)pTimePeriod) : Dali::TimePeriod(animation->GetDuration());

  {
    try
    {
      backgroundBlurEffect->AddBlurOpacityAnimation((Dali::Animation&)(*animation), alphaFunction, timePeriod, fromValue, toValue);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_FinishedSignal_Connect(void* caller, void* handler)
{
  GUARD_ON_NULL_RET(caller);
  GUARD_ON_NULL_RET(handler);
  try_catch(([&]()
  {
    Dali::Toolkit::BackgroundBlurEffect*                     effect = (Dali::Toolkit::BackgroundBlurEffect*)caller;
    Dali::Toolkit::BackgroundBlurEffect::FinishedSignalType& signal = (*effect).FinishedSignal();
    signal.Connect((void (*)())handler);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_BackgroundBlurEffect_FinishedSignal_Disconnect(void* caller, void* handler)
{
  GUARD_ON_NULL_RET(caller);
  GUARD_ON_NULL_RET(handler);
  try_catch(([&]()
  {
    Dali::Toolkit::BackgroundBlurEffect*                     effect = (Dali::Toolkit::BackgroundBlurEffect*)caller;
    Dali::Toolkit::BackgroundBlurEffect::FinishedSignalType& signal = (*effect).FinishedSignal();
    signal.Disconnect((void (*)())handler);
  }));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_New__SWIG_1(unsigned int blurRadius)
{
  Dali::Toolkit::GaussianBlurEffect gaussianBlurEffect;
  {
    try
    {
      gaussianBlurEffect = Dali::Toolkit::GaussianBlurEffect::New(blurRadius);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::GaussianBlurEffect((const Dali::Toolkit::GaussianBlurEffect&)gaussianBlurEffect);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_SetBlurOnce(void* pGaussianBlurEffect, bool blurOnce)
{
  Dali::Toolkit::GaussianBlurEffect* gaussianBlurEffect = (Dali::Toolkit::GaussianBlurEffect*)pGaussianBlurEffect;
  {
    try
    {
      gaussianBlurEffect->SetBlurOnce(blurOnce);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_GetBlurOnce(void* pGaussianBlurEffect)
{
  bool                               blurOnce           = false;
  Dali::Toolkit::GaussianBlurEffect* gaussianBlurEffect = (Dali::Toolkit::GaussianBlurEffect*)pGaussianBlurEffect;
  {
    try
    {
      blurOnce = gaussianBlurEffect->GetBlurOnce();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return blurOnce;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_SetBlurRadius(void* pGaussianBlurEffect, unsigned int blurRadius)
{
  Dali::Toolkit::GaussianBlurEffect* gaussianBlurEffect = (Dali::Toolkit::GaussianBlurEffect*)pGaussianBlurEffect;
  {
    try
    {
      gaussianBlurEffect->SetBlurRadius(blurRadius);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_GetBlurRadius(void* pGaussianBlurEffect)
{
  uint32_t                           blurRadius         = 0.0f;
  Dali::Toolkit::GaussianBlurEffect* gaussianBlurEffect = (Dali::Toolkit::GaussianBlurEffect*)pGaussianBlurEffect;
  {
    try
    {
      blurRadius = (uint32_t)gaussianBlurEffect->GetBlurRadius();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return blurRadius;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_SetBlurDownscaleFactor(void* pGaussianBlurEffect, float blurDownscaleFactor)
{
  Dali::Toolkit::GaussianBlurEffect* gaussianBlurEffect = (Dali::Toolkit::GaussianBlurEffect*)pGaussianBlurEffect;
  {
    try
    {
      gaussianBlurEffect->SetBlurDownscaleFactor(blurDownscaleFactor);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_GetBlurDownscaleFactor(void* pGaussianBlurEffect)
{
  float                              blurDownscaleFactor = 0.0f;
  Dali::Toolkit::GaussianBlurEffect* gaussianBlurEffect  = (Dali::Toolkit::GaussianBlurEffect*)pGaussianBlurEffect;
  {
    try
    {
      blurDownscaleFactor = (float)gaussianBlurEffect->GetBlurDownscaleFactor();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return blurDownscaleFactor;
}
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_AddBlurStrengthAnimation(void* pGaussianBlurEffect, void* pAnimation, void* pAlphaFunction, void* pTimePeriod, float fromValue, float toValue)
{
  Dali::Toolkit::GaussianBlurEffect* gaussianBlurEffect = (Dali::Toolkit::GaussianBlurEffect*)pGaussianBlurEffect;
  Dali::Animation*                   animation          = (Dali::Animation*)pAnimation; // reference
  if(!animation)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation & type is null", 0);
    return;
  }

  Dali::AlphaFunction alphaFunction = pAlphaFunction ? *((Dali::AlphaFunction*)pAlphaFunction) : animation->GetDefaultAlphaFunction();
  Dali::TimePeriod    timePeriod    = pTimePeriod ? *((Dali::TimePeriod*)pTimePeriod) : Dali::TimePeriod(animation->GetDuration());

  {
    try
    {
      gaussianBlurEffect->AddBlurStrengthAnimation((Dali::Animation&)(*animation), alphaFunction, timePeriod, fromValue, toValue);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_AddBlurOpacityAnimation(void* pGaussianBlurEffect, void* pAnimation, void* pAlphaFunction, void* pTimePeriod, float fromValue, float toValue)
{
  Dali::Toolkit::GaussianBlurEffect* gaussianBlurEffect = (Dali::Toolkit::GaussianBlurEffect*)pGaussianBlurEffect;
  Dali::Animation*                   animation          = (Dali::Animation*)pAnimation; // reference
  if(!animation)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Animation & type is null", 0);
    return;
  }

  Dali::AlphaFunction alphaFunction = pAlphaFunction ? *((Dali::AlphaFunction*)pAlphaFunction) : animation->GetDefaultAlphaFunction();
  Dali::TimePeriod    timePeriod    = pTimePeriod ? *((Dali::TimePeriod*)pTimePeriod) : Dali::TimePeriod(animation->GetDuration());

  {
    try
    {
      gaussianBlurEffect->AddBlurOpacityAnimation((Dali::Animation&)(*animation), alphaFunction, timePeriod, fromValue, toValue);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_FinishedSignal_Connect(void* caller, void* handler)
{
  GUARD_ON_NULL_RET(caller);
  GUARD_ON_NULL_RET(handler);
  try_catch(([&]()
  {
    Dali::Toolkit::GaussianBlurEffect*                     effect = (Dali::Toolkit::GaussianBlurEffect*)caller;
    Dali::Toolkit::GaussianBlurEffect::FinishedSignalType& signal = (*effect).FinishedSignal();
    signal.Connect((void (*)())handler);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GaussianBlurEffect_FinishedSignal_Disconnect(void* caller, void* handler)
{
  GUARD_ON_NULL_RET(caller);
  GUARD_ON_NULL_RET(handler);
  try_catch(([&]()
  {
    Dali::Toolkit::GaussianBlurEffect*                     effect = (Dali::Toolkit::GaussianBlurEffect*)caller;
    Dali::Toolkit::GaussianBlurEffect::FinishedSignalType& signal = (*effect).FinishedSignal();
    signal.Disconnect((void (*)())handler);
  }));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MaskEffect_New__SWIG_0(Dali::BaseHandle* control)
{
  Dali::Toolkit::MaskEffect maskEffect;
  {
    try
    {
      Dali::Toolkit::Control maskControl = Dali::Toolkit::Control::DownCast(*control);
      maskEffect                         = Dali::Toolkit::MaskEffect::New(maskControl);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::MaskEffect((const Dali::Toolkit::MaskEffect&)maskEffect);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_MaskEffect_New__SWIG_1(Dali::BaseHandle* control, uint32_t maskMode, float positionX, float positionY, float scaleX, float scaleY)
{
  Dali::Toolkit::MaskEffect maskEffect;
  {
    try
    {
      Dali::Toolkit::Control maskControl = Dali::Toolkit::Control::DownCast(*control);
      maskEffect                         = Dali::Toolkit::MaskEffect::New(maskControl, Dali::Toolkit::MaskEffect::MaskMode(maskMode), Dali::Vector2(positionX, positionY), Dali::Vector2(scaleX, scaleY));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::MaskEffect((const Dali::Toolkit::MaskEffect&)maskEffect);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MaskEffect_SetTargetMaskOnce(void* pMaskEffect, bool targetMaskOnce)
{
  Dali::Toolkit::MaskEffect* maskEffect = (Dali::Toolkit::MaskEffect*)pMaskEffect;
  {
    try
    {
      maskEffect->SetTargetMaskOnce(targetMaskOnce);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_MaskEffect_GetTargetMaskOnce(void* pMaskEffect)
{
  bool                       targetMaskOnce = false;
  Dali::Toolkit::MaskEffect* maskEffect     = (Dali::Toolkit::MaskEffect*)pMaskEffect;
  {
    try
    {
      targetMaskOnce = maskEffect->GetTargetMaskOnce();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return targetMaskOnce;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MaskEffect_SetSourceMaskOnce(void* pMaskEffect, bool sourceMaskOnce)
{
  Dali::Toolkit::MaskEffect* maskEffect = (Dali::Toolkit::MaskEffect*)pMaskEffect;
  {
    try
    {
      maskEffect->SetSourceMaskOnce(sourceMaskOnce);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_MaskEffect_GetSourceMaskOnce(void* pMaskEffect)
{
  bool                       sourceMaskOnce = false;
  Dali::Toolkit::MaskEffect* maskEffect     = (Dali::Toolkit::MaskEffect*)pMaskEffect;
  {
    try
    {
      sourceMaskOnce = maskEffect->GetSourceMaskOnce();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return sourceMaskOnce;
}

#ifdef __cplusplus
}
#endif
