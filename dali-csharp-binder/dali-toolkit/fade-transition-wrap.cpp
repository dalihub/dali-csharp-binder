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
#include <dali-toolkit/public-api/transition/fade-transition.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C"
{
#endif

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_FadeTransition()
  {
    void *jresult;
    Dali::Toolkit::FadeTransition *result = 0;

    {
      try
      {
        result = (Dali::Toolkit::FadeTransition *)new Dali::Toolkit::FadeTransition();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_FadeTransition_New(void *nuiControl, float nuiOpaicty, void *nuiTimePeriod)
  {
    void *jresult;
    Dali::Toolkit::Control *control = (Dali::Toolkit::Control *)nuiControl;
    float opacity = nuiOpaicty;
    Dali::TimePeriod *timePeriod = (Dali::TimePeriod *)nuiTimePeriod;

    Dali::Toolkit::FadeTransition result;

    {
      try
      {
        result = Dali::Toolkit::FadeTransition::New(*control, opacity, *timePeriod);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::FadeTransition((const Dali::Toolkit::FadeTransition &)result);
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FadeTransition(void *nuiFadeTransition)
  {
    Dali::Toolkit::FadeTransition *fade = (Dali::Toolkit::FadeTransition *)0;

    fade = (Dali::Toolkit::FadeTransition *)nuiFadeTransition;
    {
      try
      {
        delete fade;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_FadeTransition_Set(void *nuiFadeTransition)
  {
    Dali::Toolkit::FadeTransition *newFadeTransition = 0;
    Dali::Toolkit::FadeTransition *fade = (Dali::Toolkit::FadeTransition *)nuiFadeTransition;
    if (!fade)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::FadeTransition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        newFadeTransition = (Dali::Toolkit::FadeTransition *)new Dali::Toolkit::FadeTransition((Dali::Toolkit::FadeTransition const &)*fade);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    void *result;
    result = (void *)newFadeTransition;
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_FadeTransition_Assign(void *nuiDestination, void *nuiSource)
  {
    void *jresult;
    Dali::Toolkit::FadeTransition *destination = (Dali::Toolkit::FadeTransition *)0;
    Dali::Toolkit::FadeTransition *source = 0;
    Dali::Toolkit::FadeTransition *result = 0;

    destination = (Dali::Toolkit::FadeTransition *)nuiDestination;
    source = (Dali::Toolkit::FadeTransition *)nuiSource;

    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::FadeTransition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::FadeTransition *)&(destination)->operator=((Dali::Toolkit::FadeTransition const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

#ifdef __cplusplus
}
#endif
