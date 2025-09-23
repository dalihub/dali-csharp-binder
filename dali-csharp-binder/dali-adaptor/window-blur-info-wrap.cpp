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

#include <dali/devel-api/adaptor-framework/window-blur-info.h>
#include <dali/public-api/adaptor-framework/window-enumerations.h>

#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WindowBlurInfo()
{
  void*                 nuiResult;
  Dali::WindowBlurInfo* result = 0;

  {
    try
    {
      result = (Dali::WindowBlurInfo*)new Dali::WindowBlurInfo();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (void*)result;
  return nuiResult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WindowBlurInfo_SWIG_0(int nuiBlurType, int nuiBlurRadius, int nuiCornerRadius)
{
  void*                 jresult;
  Dali::WindowBlurInfo* result = 0;

  Dali::WindowBlurType blurType     = (Dali::WindowBlurType)nuiBlurType;
  int                  blurRadius   = nuiBlurRadius;
  int                  cornerRadius = nuiCornerRadius;

  {
    try
    {
      result = (Dali::WindowBlurInfo*)new Dali::WindowBlurInfo(blurType, blurRadius, cornerRadius);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WindowBlurInfo_SWIG_1(int nuiBlurType, int nuiBlurRadius)
{
  void*                 jresult;
  Dali::WindowBlurInfo* result = 0;

  Dali::WindowBlurType blurType     = (Dali::WindowBlurType)nuiBlurType;
  int                  blurRadius   = nuiBlurRadius;
  int                  cornerRadius = 0;

  {
    try
    {
      result = (Dali::WindowBlurInfo*)new Dali::WindowBlurInfo(blurType, blurRadius, cornerRadius);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WindowBlurInfo(void* nuiWindowBlurInfo)
{
  Dali::WindowBlurInfo* blurInfo = (Dali::WindowBlurInfo*)nuiWindowBlurInfo;

  {
    try
    {
      delete blurInfo;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WindowBlurInfo_EqualTo(void* nuiWindowBlurInfo1, void* nuiWindowBlurInfo2)
{
  bool                  jresult;
  bool                  result;
  Dali::WindowBlurInfo* windowBlurInfo1 = (Dali::WindowBlurInfo*)nuiWindowBlurInfo1;
  Dali::WindowBlurInfo* windowBlurInfo2 = (Dali::WindowBlurInfo*)nuiWindowBlurInfo2;

  if(!windowBlurInfo1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WindowBlurInfo const & type is null in nuiWindowBlurInfo1", 0);
    return 0;
  }

  if(!windowBlurInfo2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WindowBlurInfo const & type is null in nuiWindowBlurInfo2", 0);
    return 0;
  }

  {
    try
    {
      result = (bool)((Dali::WindowBlurInfo const*)windowBlurInfo1)->operator==((Dali::WindowBlurInfo const&)*windowBlurInfo2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

// --
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowBlurInfo_SetBlurType(void* nuiWindowBlurInfo, int nuiWindowBlurType)
{
  Dali::WindowBlurType  windowBlurType = (Dali::WindowBlurType)nuiWindowBlurType;
  Dali::WindowBlurInfo* windowBlurInfo = (Dali::WindowBlurInfo*)nuiWindowBlurInfo;

  if(!windowBlurInfo)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowBlurInfo", 0);
    return;
  }

  {
    try
    {
      windowBlurInfo->SetBlurType(windowBlurType);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WindowBlurInfo_GetBlurType(void* nuiWindowBlurInfo)
{
  int                   nuiResult;
  Dali::WindowBlurType  windowBlurType = Dali::WindowBlurType::NONE;
  Dali::WindowBlurInfo* windowBlurInfo = (Dali::WindowBlurInfo*)nuiWindowBlurInfo;

  if(!windowBlurInfo)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowBlurInfo", 0);
    return 0;
  }

  {
    try
    {
      windowBlurType = windowBlurInfo->GetBlurType();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (int)windowBlurType;
  return nuiResult;
}

// --
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowBlurInfo_SetBlurRadius(void* nuiWindowBlurInfo, int nuiWindowBlurRadius)
{
  int                   blurRadius     = nuiWindowBlurRadius;
  Dali::WindowBlurInfo* windowBlurInfo = (Dali::WindowBlurInfo*)nuiWindowBlurInfo;

  if(!windowBlurInfo)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowBlurInfo", 0);
    return;
  }

  {
    try
    {
      windowBlurInfo->SetBlurRadius(blurRadius);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WindowBlurInfo_GetBlurRadius(void* nuiWindowBlurInfo)
{
  int                   nuiResult;
  int                   blurRadius     = 0;
  Dali::WindowBlurInfo* windowBlurInfo = (Dali::WindowBlurInfo*)nuiWindowBlurInfo;

  if(!windowBlurInfo)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowBlurInfo", 0);
    return 0;
  }

  {
    try
    {
      blurRadius = windowBlurInfo->GetBlurRadius();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (int)blurRadius;
  return nuiResult;
}

// --
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowBlurInfo_SetBackgroundCornerRadius(void* nuiWindowBlurInfo, int nuiCornerRadius)
{
  int                   cornerRadius   = nuiCornerRadius;
  Dali::WindowBlurInfo* windowBlurInfo = (Dali::WindowBlurInfo*)nuiWindowBlurInfo;

  if(!windowBlurInfo)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowBlurInfo", 0);
    return;
  }

  {
    try
    {
      windowBlurInfo->SetCornerRadiusForBackground(cornerRadius);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WindowBlurInfo_GetBackgroundCornerRadius(void* nuiWindowBlurInfo)
{
  int                   nuiResult;
  int                   cornerRadius   = 0;
  Dali::WindowBlurInfo* windowBlurInfo = (Dali::WindowBlurInfo*)nuiWindowBlurInfo;

  if(!windowBlurInfo)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowBlurInfo", 0);
    return 0;
  }

  {
    try
    {
      cornerRadius = windowBlurInfo->GetCornerRadiusForBackground();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (int)cornerRadius;
  return nuiResult;
}

#ifdef __cplusplus
}
#endif
