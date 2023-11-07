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

#include <dali/public-api/adaptor-framework/window-data.h>

#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WindowData()
{
  void*             nuiResult;
  Dali::WindowData* result = 0;

  {
    try
    {
      result = (Dali::WindowData*)new Dali::WindowData();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (void*)result;
  return nuiResult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WindowData(void* nuiWindowData)
{
  Dali::WindowData* handle = (Dali::WindowData*)0;

  handle = (Dali::WindowData*)nuiWindowData;
  {
    try
    {
      delete handle;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowData_SetPositionSize(void* nuiWindowData, void* nuiPositionSize)
{
  Dali::WindowData* pWindowData;
  Dali::Rect<int>*  rect = 0;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return;
  }

  rect = (Dali::Rect<int>*)nuiPositionSize;
  if(!rect)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Rect< int > const & type is null", 0);
    return;
  }
  {
    try
    {
      pWindowData->SetPositionSize(*rect);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WindowData_GetPositionSize(void* nuiWindowData)
{
  void*             nuiResult;
  Dali::WindowData* pWindowData;
  Dali::Rect<int>   result;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return nullptr;
  }

  {
    try
    {
      result = pWindowData->GetPositionSize();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = new Dali::Rect<int>((const Dali::Rect<int>&)result);
  return nuiResult;
}

// --
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowData_SetWindowType(void* nuiWindowData, int nuiWindowType)
{
  Dali::WindowData* pWindowData;
  Dali::WindowType  windowType;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return;
  }

  windowType = (Dali::WindowType)nuiWindowType;
  {
    try
    {
      pWindowData->SetWindowType(windowType);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WindowData_GetWindowType(void* nuiWindowData)
{
  int               nuiResult;
  Dali::WindowData* pWindowData;
  Dali::WindowType  result;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return 0;
  }

  {
    try
    {
      result = (Dali::WindowType)pWindowData->GetWindowType();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  nuiResult = (int)result;
  return nuiResult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowData_SetTransparency(void* nuiWindowData, bool nuiTransparency)
{
  Dali::WindowData* pWindowData;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return;
  }

  {
    try
    {
      pWindowData->SetTransparency(nuiTransparency);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WindowData_GetTransparency(void* nuiWindowData)
{
  Dali::WindowData* pWindowData;
  bool              result;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return 0;
  }

  {
    try
    {
      result = (bool)pWindowData->GetTransparency();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WindowData_SetFrontBufferRendering(void* nuiWindowData, bool nuiEnable)
{
  Dali::WindowData* pWindowData;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return;
  }

  {
    try
    {
      pWindowData->SetFrontBufferRendering(nuiEnable);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WindowData_GetFrontBufferRendering(void* nuiWindowData)
{
  Dali::WindowData* pWindowData;
  bool              result;

  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WindowData", 0);
    return 0;
  }

  {
    try
    {
      result = (bool)pWindowData->GetFrontBufferRendering();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}


#ifdef __cplusplus
}
#endif
