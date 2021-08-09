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

#include <string.h>
#include "common.h"
#include <dali-toolkit/public-api/transition/fade.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define CALL_CATCH_EXCEPTION(ret)                                          \
  catch (std::out_of_range & e)                                            \
  {                                                                        \
    SWIG_CSharpException(SWIG_IndexError, const_cast<char *>(e.what()));   \
    return ret;                                                            \
  }                                                                        \
  catch (std::exception & e)                                               \
  {                                                                        \
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char *>(e.what())); \
    return ret;                                                            \
  }                                                                        \
  catch (Dali::DaliException e)                                            \
  {                                                                        \
    SWIG_CSharpException(SWIG_UnknownError, e.condition);                  \
    return ret;                                                            \
  }                                                                        \
  catch (...)                                                              \
  {                                                                        \
    SWIG_CSharpException(SWIG_UnknownError, "unknown error");              \
    return ret;                                                            \
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Fade()
  {
    void *jresult;
    Dali::Toolkit::Fade *result = 0;

    {
      try
      {
        result = (Dali::Toolkit::Fade *)new Dali::Toolkit::Fade();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Fade_New(void *nuiControl, float nuiOpaicty, void *nuiTimePeriod)
  {
    void *jresult;
    Dali::Toolkit::Control *control = (Dali::Toolkit::Control *)nuiControl;
    float opacity = nuiOpaicty;
    Dali::TimePeriod *timePeriod = (Dali::TimePeriod *)nuiTimePeriod;

    Dali::Toolkit::Fade result;

    {
      try
      {
        result = Dali::Toolkit::Fade::New(*control, opacity, *timePeriod);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::Fade((const Dali::Toolkit::Fade &)result);
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Fade(void *nuiFade)
  {
    Dali::Toolkit::Fade *fade = (Dali::Toolkit::Fade *)0;

    fade = (Dali::Toolkit::Fade *)nuiFade;
    {
      try
      {
        delete fade;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Fade_Set(void *nuiFade)
  {
    Dali::Toolkit::Fade *newFade = 0;
    Dali::Toolkit::Fade *fade = (Dali::Toolkit::Fade *)nuiFade;
    if (!fade)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Fade const & type is null", 0);
      return 0;
    }
    {
      try
      {
        newFade = (Dali::Toolkit::Fade *)new Dali::Toolkit::Fade((Dali::Toolkit::Fade const &)*fade);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    void *result;
    result = (void *)newFade;
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Fade_Assign(void *nuiDestination, void *nuiSource)
  {
    void *jresult;
    Dali::Toolkit::Fade *destination = (Dali::Toolkit::Fade *)0;
    Dali::Toolkit::Fade *source = 0;
    Dali::Toolkit::Fade *result = 0;

    destination = (Dali::Toolkit::Fade *)nuiDestination;
    source = (Dali::Toolkit::Fade *)nuiSource;

    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Fade const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::Fade *)&(destination)->operator=((Dali::Toolkit::Fade const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

#ifdef __cplusplus
}
#endif
