/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/public-api/transition/scale-transition.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C"
{
#endif

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ScaleTransition_New_1(void *nuiControl, float scale, void *nuiTimePeriod)
  {
    void *jresult;
    Dali::Toolkit::Control *control = (Dali::Toolkit::Control *)nuiControl;
    Dali::TimePeriod *timePeriod = (Dali::TimePeriod *)nuiTimePeriod;

    Dali::Toolkit::ScaleTransition result;

    if (!control)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = Dali::Toolkit::ScaleTransition::New(*control, scale, *timePeriod);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::ScaleTransition((const Dali::Toolkit::ScaleTransition &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ScaleTransition_New_2(void *nuiControl, void *nuiScale, void *nuiTimePeriod)
  {
    void *jresult;
    Dali::Toolkit::Control *control = (Dali::Toolkit::Control *)nuiControl;
    Dali::Vector2 *scale = (Dali::Vector2 *)nuiScale;
    Dali::TimePeriod *timePeriod = (Dali::TimePeriod *)nuiTimePeriod;

    Dali::Toolkit::ScaleTransition result;

    if (!control)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
      return 0;
    }
    if (!scale)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = Dali::Toolkit::ScaleTransition::New(*control, *scale, *timePeriod);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::ScaleTransition((const Dali::Toolkit::ScaleTransition &)result);
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScaleTransition(void *nuiScaleTransition)
  {
    Dali::Toolkit::ScaleTransition *scale = (Dali::Toolkit::ScaleTransition *)nuiScaleTransition;

    if (!scale)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
      return;
    }
    {
      try
      {
        delete scale;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_ScaleTransition_Set(void *nuiScaleTransition)
  {
    Dali::Toolkit::ScaleTransition *newScaleTransition = 0;
    Dali::Toolkit::ScaleTransition *scale = (Dali::Toolkit::ScaleTransition *)nuiScaleTransition;

    if (!scale)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScaleTransition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        newScaleTransition = (Dali::Toolkit::ScaleTransition *)new Dali::Toolkit::ScaleTransition((Dali::Toolkit::ScaleTransition const &)*scale);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    void *result;
    result = (void *)newScaleTransition;
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ScaleTransition_Assign(void *nuiDestination, void *nuiSource)
  {
    void *jresult;
    Dali::Toolkit::ScaleTransition *destination = (Dali::Toolkit::ScaleTransition *)nuiDestination;
    Dali::Toolkit::ScaleTransition *source = (Dali::Toolkit::ScaleTransition *)nuiSource;
    Dali::Toolkit::ScaleTransition *result = 0;

    if (!destination)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScaleTransition const & type is null", 0);
      return 0;
    }
    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScaleTransition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::ScaleTransition *)&(destination)->operator=((Dali::Toolkit::ScaleTransition const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScaleTransition_SetScaleFactor(void *nuiScaleTransition, void *nuiScaleFactor)
  {
    Dali::Toolkit::ScaleTransition *scale = (Dali::Toolkit::ScaleTransition *)nuiScaleTransition;
    Dali::Vector2 *scaleFactor = (Dali::Vector2 *)nuiScaleFactor;

    if (!scale)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScaleTransition const & type is null", 0);
      return;
    }
    if (!scaleFactor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
      return;
    }
    {
      try
      {
        (scale)->SetScaleFactor((Dali::Vector2 const &)*scaleFactor);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ScaleTransition_GetScaleFactor(void *nuiScaleTransition)
  {
    void *jresult;
    Dali::Toolkit::ScaleTransition *scale = (Dali::Toolkit::ScaleTransition *)nuiScaleTransition;
    Dali::Vector2 result;

    if (!scale)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ScaleTransition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (scale)->GetScaleFactor();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Vector2((const Dali::Vector2 &)result);
    return jresult;
  }

#ifdef __cplusplus
}
#endif
