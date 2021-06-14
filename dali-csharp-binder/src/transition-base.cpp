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

#ifndef CSHARP_TRANSITION_BASE
#define CSHARP_TRANSITION_BASE
#endif

#include <string.h>
#include "common.h"
#include <dali-toolkit/public-api/transition/transition-base.h>
#include <dali/integration-api/debug.h>

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

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_TransitionBase()
  {
    void *jresult;
    Dali::Toolkit::TransitionBase *result = 0;

    {
      try
      {
        result = (Dali::Toolkit::TransitionBase *)new Dali::Toolkit::TransitionBase();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_TransitionBase_New()
  {
    void *jresult;
    Dali::Toolkit::TransitionBase result;
    {
      try
      {
        result = Dali::Toolkit::TransitionBase::New();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::TransitionBase((const Dali::Toolkit::TransitionBase &)result);
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TransitionBase(void *nuiTransitionBase)
  {
    Dali::Toolkit::TransitionBase *transition = (Dali::Toolkit::TransitionBase *)0;

    transition = (Dali::Toolkit::TransitionBase *)nuiTransitionBase;
    {
      try
      {
        delete transition;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_TransitionBase_Set(void *nuiTransitionBase)
  {
    Dali::Toolkit::TransitionBase *newTransition = 0;
    Dali::Toolkit::TransitionBase *transition = (Dali::Toolkit::TransitionBase *)nuiTransitionBase;
    if (!transition)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TransitionBase const & type is null", 0);
      return 0;
    }
    {
      try
      {
        newTransition = (Dali::Toolkit::TransitionBase *)new Dali::Toolkit::TransitionBase((Dali::Toolkit::TransitionBase const &)*transition);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    void *result;
    result = (void *)newTransition;
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_TransitionBase_Assign(void *nuiDestination, void *nuiSource)
  {
    void *jresult;
    Dali::Toolkit::TransitionBase *destination = (Dali::Toolkit::TransitionBase *)0;
    Dali::Toolkit::TransitionBase *source = 0;
    Dali::Toolkit::TransitionBase *result = 0;

    destination = (Dali::Toolkit::TransitionBase *)nuiDestination;
    source = (Dali::Toolkit::TransitionBase *)nuiSource;

    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TransitionBase const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::TransitionBase *)&(destination)->operator=((Dali::Toolkit::TransitionBase const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TransitionBase_SetTimePeriod(void *nuiTransitionBase, void *nuiTimePeriod)
  {
    Dali::Toolkit::TransitionBase *transition = (Dali::Toolkit::TransitionBase *)nuiTransitionBase;
    Dali::TimePeriod *timePeriod = (Dali::TimePeriod *)nuiTimePeriod;

    if (!transition || !timePeriod)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
      return;
    }
    {
      try
      {
        (transition)->SetTimePeriod(*timePeriod);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_TransitionBase_GetTimePeriod(void *nuiTransitionBase)
  {
    Dali::Toolkit::TransitionBase *transition = (Dali::Toolkit::TransitionBase *)nuiTransitionBase;
    Dali::TimePeriod timePeriod(0);
    {
      try
      {
        timePeriod = ((Dali::Toolkit::TransitionBase const *)transition)->GetTimePeriod();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    void *result = new Dali::TimePeriod((const Dali::TimePeriod &)timePeriod);
    return result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TransitionBase_SetAlphaFunction(void *nuiTransitionBase, void *nuiAlphaFunction)
  {
    Dali::Toolkit::TransitionBase *transition = (Dali::Toolkit::TransitionBase *)nuiTransitionBase;
    Dali::AlphaFunction *alphaFunction = (Dali::AlphaFunction *)nuiAlphaFunction;

    if (!transition || !alphaFunction)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
      return;
    }
    {
      try
      {
        (transition)->SetAlphaFunction(*alphaFunction);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_TransitionBase_GetAlphaFunction(void *nuiTransitionBase)
  {
    Dali::Toolkit::TransitionBase *transition = (Dali::Toolkit::TransitionBase *)nuiTransitionBase;
    Dali::AlphaFunction alphaFunction;
    {
      try
      {
        alphaFunction = ((Dali::Toolkit::TransitionBase const *)transition)->GetAlphaFunction();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    void *result = new Dali::AlphaFunction((const Dali::AlphaFunction &)alphaFunction);
    return result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TransitionBase_TransitionWithChild(void *nuiTransitionBase, bool nuiTransitionWithChild)
  {
    Dali::Toolkit::TransitionBase *transition = (Dali::Toolkit::TransitionBase *)nuiTransitionBase;

    if (!transition)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
      return;
    }
    {
      try
      {
        (transition)->TransitionWithChild(nuiTransitionWithChild);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

#ifdef __cplusplus
}
#endif
