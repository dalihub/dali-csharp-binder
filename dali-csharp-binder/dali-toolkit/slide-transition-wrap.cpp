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
#include <dali-toolkit/public-api/transition/slide-transition.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C"
{
#endif

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_SlideTransition()
  {
    void *jresult;
    Dali::Toolkit::SlideTransition *result = 0;

    {
      try
      {
        result = (Dali::Toolkit::SlideTransition *)new Dali::Toolkit::SlideTransition();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SlideTransition_New(void *nuiControl, void *nuiDirection, void *nuiTimePeriod)
  {
    void *jresult;
    Dali::Toolkit::Control *control = (Dali::Toolkit::Control *)nuiControl;
    Dali::Vector2 *direction = (Dali::Vector2 *)nuiDirection;
    Dali::TimePeriod *timePeriod = (Dali::TimePeriod *)nuiTimePeriod;

    Dali::Toolkit::SlideTransition result;

    if (!control)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
      return 0;
    }
    if (!direction)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = Dali::Toolkit::SlideTransition::New(*control, *direction, *timePeriod);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::SlideTransition((const Dali::Toolkit::SlideTransition &)result);
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_SlideTransition(void *nuiSlideTransition)
  {
    Dali::Toolkit::SlideTransition *slide = (Dali::Toolkit::SlideTransition *)0;

    slide = (Dali::Toolkit::SlideTransition *)nuiSlideTransition;

    if (!slide)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Control const & type is null", 0);
      return;
    }
    {
      try
      {
        delete slide;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_SlideTransition_Set(void *nuiSlideTransition)
  {
    Dali::Toolkit::SlideTransition *newSlideTransition = 0;
    Dali::Toolkit::SlideTransition *slide = (Dali::Toolkit::SlideTransition *)nuiSlideTransition;

    if (!slide)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::SlideTransition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        newSlideTransition = (Dali::Toolkit::SlideTransition *)new Dali::Toolkit::SlideTransition((Dali::Toolkit::SlideTransition const &)*slide);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    void *result;
    result = (void *)newSlideTransition;
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SlideTransition_Assign(void *nuiDestination, void *nuiSource)
  {
    void *jresult;
    Dali::Toolkit::SlideTransition *destination = (Dali::Toolkit::SlideTransition *)0;
    Dali::Toolkit::SlideTransition *source = 0;
    Dali::Toolkit::SlideTransition *result = 0;

    destination = (Dali::Toolkit::SlideTransition *)nuiDestination;
    source = (Dali::Toolkit::SlideTransition *)nuiSource;

    if (!destination)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::SlideTransition const & type is null", 0);
      return 0;
    }
    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::SlideTransition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::SlideTransition *)&(destination)->operator=((Dali::Toolkit::SlideTransition const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SlideTransition_SetDirection(void *nuiSlideTransition, void *nuiDirection)
  {
    Dali::Toolkit::SlideTransition *slide = (Dali::Toolkit::SlideTransition *)nuiSlideTransition;
    Dali::Vector2 *direction = (Dali::Vector2 *)nuiDirection;

    if (!slide)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::SlideTransition const & type is null", 0);
      return;
    }
    if (!direction)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
      return;
    }
    {
      try
      {
        (slide)->SetDirection((Dali::Vector2 const &)*direction);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SlideTransition_GetDirection(void *nuiSlideTransition)
  {
    void *jresult;
    Dali::Toolkit::SlideTransition *slide = (Dali::Toolkit::SlideTransition *)nuiSlideTransition;
    Dali::Vector2 result;

    if (!slide)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::SlideTransition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (slide)->GetDirection();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Vector2((const Dali::Vector2 &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SlideTransitionDirectionTop_get()
  {
    Dali::Vector2 *result = (Dali::Vector2 *)&Dali::Toolkit::SlideTransitionDirection::TOP;

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SlideTransitionDirectionBottom_get()
  {
    Dali::Vector2 *result = (Dali::Vector2 *)&Dali::Toolkit::SlideTransitionDirection::BOTTOM;

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SlideTransitionDirectionRight_get()
  {
    Dali::Vector2 *result = (Dali::Vector2 *)&Dali::Toolkit::SlideTransitionDirection::RIGHT;

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SlideTransitionDirectionLeft_get()
  {
    Dali::Vector2 *result = (Dali::Vector2 *)&Dali::Toolkit::SlideTransitionDirection::LEFT;

    return (void *)result;
  }

#ifdef __cplusplus
}
#endif
