/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
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
#include <dali/dali.h>
#include <dali-toolkit/dali-toolkit.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/visuals/visual-actions-devel.h>
#include <dali-toolkit/public-api/controls/control-impl.h>
#include <dali/integration-api/debug.h>
#include <string>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef char *(SWIGSTDCALL *SWIG_CSharpStringHelperCallback)(const char *);
  extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

  enum InternalPropertyReturnType
  {
    NO_ERROR = 0,
    ERROR_UNKNOWN = 1,
    ERROR_IMPOSSIBLE_SET = 2,
  };

  // Update visual property by Action::UPDATE_PROPERTY.

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_InternalUpdateVisualPropertyBool(void *view, int visualIndex, int visualPropertyIndex, bool valBool)
  {
    Dali::Toolkit::Control *pControl = (Dali::Toolkit::Control *)view;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Property::Map tempMap;
      tempMap.Insert(visualPropertyIndex, valBool);
      Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY, std::move(tempMap));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_InternalUpdateVisualPropertyFloat(void *view, int visualIndex, int visualPropertyIndex, float valFloat)
  {
    Dali::Toolkit::Control *pControl = (Dali::Toolkit::Control *)view;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Property::Map tempMap;
      tempMap.Insert(visualPropertyIndex, valFloat);
      Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY, std::move(tempMap));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_InternalUpdateVisualPropertyInt(void *view, int visualIndex, int visualPropertyIndex, int valInt)
  {
    Dali::Toolkit::Control *pControl = (Dali::Toolkit::Control *)view;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Property::Map tempMap;
      tempMap.Insert(visualPropertyIndex, valInt);
      Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY, std::move(tempMap));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_InternalUpdateVisualPropertyIntPair(void *view, int visualIndex, int visualPropertyIndex, int valInt1, int valInt2)
  {
    Dali::Toolkit::Control *pControl  = (Dali::Toolkit::Control *)view;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Property::Array tempArray;
      tempArray.Add(Dali::Property::Value(valInt1));
      tempArray.Add(Dali::Property::Value(valInt2));
      Dali::Property::Map tempMap;
      tempMap.Insert(visualPropertyIndex, std::move(tempArray));
      Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY, std::move(tempMap));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_InternalUpdateVisualPropertyString(void *view, int visualIndex, int visualPropertyIndex, char* valString)
  {
    Dali::Toolkit::Control *pControl  = (Dali::Toolkit::Control *)view;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    if (!valString)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valString1 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Property::Map tempMap;
      tempMap.Insert(visualPropertyIndex, std::move(valString));
      Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY, std::move(tempMap));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_InternalUpdateVisualPropertyStringPair(void *view, int visualIndex, int visualPropertyIndex, char* valString1, char* valString2)
  {
    Dali::Toolkit::Control *pControl  = (Dali::Toolkit::Control *)view;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    if (!valString1)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valString1 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    if (!valString2)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valString2 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Property::Array tempArray;
      tempArray.Add(Dali::Property::Value(valString1));
      tempArray.Add(Dali::Property::Value(valString2));
      Dali::Property::Map tempMap;
      tempMap.Insert(visualPropertyIndex, std::move(tempArray));
      Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY, std::move(tempMap));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_View_InternalUpdateVisualPropertyVector4(void *view, int visualIndex, int visualPropertyIndex, void *vector4)
  {
    Dali::Toolkit::Control *pControl = (Dali::Toolkit::Control *)view;
    const Dali::Vector4 *pVector4 = (const Dali::Vector4 *)vector4;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector4)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector4 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Property::Map tempMap;
      tempMap.Insert(visualPropertyIndex, *pVector4);
      Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY, std::move(tempMap));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  // Other Actions witch is not Action::UPDATE_PROPERTY.

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_DoActionWithEmptyAttributes(void *view, int visualIndex, int actionId)
  {
    Dali::Toolkit::Control *pControl  = (Dali::Toolkit::Control *)view;

    if (!pControl) {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
      return;
    }
    {
      try {
        Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, actionId, Dali::Property::Value());
      } CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_DoActionWithSingleIntAttributes(void *view, int visualIndex, int actionId, int actionValue)
  {
    Dali::Toolkit::Control *pControl  = (Dali::Toolkit::Control *)view;

    if (!pControl) {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control & type is null", 0);
      return;
    }
    {
      try {
        Dali::Toolkit::DevelControl::DoAction(*pControl, visualIndex, actionId, Dali::Property::Value(actionValue));
      } CALL_CATCH_EXCEPTION();
    }
  }

  // Get value from visual
  // NOTE : Control.GetProperty(visualIndex) is not enought because it cannot get custom registed visual.
  // NOTE : Currently, there is no way to get value from visual directly. We need to use CreatePropertyMap.

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingVisualPropertyInt(void *view, int visualIndex, int visualPropertyIndex, int *valInt)
  {
    Dali::Toolkit::Control *pControl  = (Dali::Toolkit::Control *)view;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!valInt)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valInt is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Toolkit::Internal::Control& internalControl = Dali::Toolkit::Internal::GetImplementation(*pControl);
      Dali::Toolkit::Visual::Base       visualBase      = Dali::Toolkit::DevelControl::GetVisual(internalControl, visualIndex);
      if(visualBase)
      {
        Dali::Property::Map tempMap;
        visualBase.CreatePropertyMap(tempMap);
        Dali::Property::Value* retValuePtr = tempMap.Find(visualPropertyIndex);
        if(retValuePtr)
        {
          *valInt = retValuePtr->Get<int>();
        }
      }
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingVisualPropertyString(void *view, int visualIndex, int visualPropertyIndex, char** valString)
  {
    Dali::Toolkit::Control *pControl  = (Dali::Toolkit::Control *)view;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!valString)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valString is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      // Copy inputed initialized string.
      // Note : C# side inputed string reference count become reduced.
      // So, If we want to keep life when we fail to get result,
      // We should re-convert by SWIG_csharp_string_callback.
      std::string temp = (*valString == nullptr) ? "" : *valString;

      Dali::Toolkit::Internal::Control& internalControl = Dali::Toolkit::Internal::GetImplementation(*pControl);
      Dali::Toolkit::Visual::Base       visualBase      = Dali::Toolkit::DevelControl::GetVisual(internalControl, visualIndex);
      if(visualBase)
      {
        Dali::Property::Map tempMap;
        visualBase.CreatePropertyMap(tempMap);
        Dali::Property::Value* retValuePtr = tempMap.Find(visualPropertyIndex);
        if(retValuePtr)
        {
          //typemap in
          temp = retValuePtr->Get<std::string>();
        }
      }

      //Typemap argout in c++ file.
      //This will convert c++ string to c# string
      *valString = SWIG_csharp_string_callback(temp.c_str());
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingVisualPropertyVector4(void *view, int visualIndex, int visualPropertyIndex, void *vector4)
  {
    Dali::Toolkit::Control *pControl  = (Dali::Toolkit::Control *)view;
    Dali::Vector4 *pVector4 = (Dali::Vector4 *)vector4;

    if (!pControl)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "view is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector4)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector4 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Toolkit::Internal::Control& internalControl = Dali::Toolkit::Internal::GetImplementation(*pControl);
      Dali::Toolkit::Visual::Base       visualBase      = Dali::Toolkit::DevelControl::GetVisual(internalControl, visualIndex);
      if(visualBase)
      {
        Dali::Property::Map tempMap;
        visualBase.CreatePropertyMap(tempMap);
        Dali::Property::Value* retValuePtr = tempMap.Find(visualPropertyIndex);
        if(retValuePtr)
        {
          *pVector4 = retValuePtr->Get<Dali::Vector4>();
        }
      }
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }
#ifdef __cplusplus
}
#endif
