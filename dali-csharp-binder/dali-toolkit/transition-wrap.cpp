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
#include <dali-toolkit/public-api/transition/transition.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C"
{
#endif

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Transition()
  {
    void *jresult;
    Dali::Toolkit::Transition *result = 0;

    {
      try
      {
        result = (Dali::Toolkit::Transition *)new Dali::Toolkit::Transition();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Transition_New(void *nuiSource, void *nuiDestination, bool useDestinationTarget, void *nuiTimePeriod)
  {
    void *jresult;
    Dali::Toolkit::Control *source = (Dali::Toolkit::Control *)nuiSource;
    Dali::Toolkit::Control *destination = (Dali::Toolkit::Control *)nuiDestination;
    Dali::TimePeriod *timePeriod = (Dali::TimePeriod *)nuiTimePeriod;

    Dali::Toolkit::Transition result;

    {
      try
      {
        result = Dali::Toolkit::Transition::New(*source, *destination, useDestinationTarget, *timePeriod);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::Transition((const Dali::Toolkit::Transition &)result);
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Transition(void *nuiTransition)
  {
    Dali::Toolkit::Transition *transition = (Dali::Toolkit::Transition *)0;

    transition = (Dali::Toolkit::Transition *)nuiTransition;
    {
      try
      {
        delete transition;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Transition_Set(void *nuiTransition)
  {
    Dali::Toolkit::Transition *newTransition = 0;
    Dali::Toolkit::Transition *transition = (Dali::Toolkit::Transition *)nuiTransition;
    if (!transition)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Transition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        newTransition = (Dali::Toolkit::Transition *)new Dali::Toolkit::Transition((Dali::Toolkit::Transition const &)*transition);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    void *result;
    result = (void *)newTransition;
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Transition_Assign(void *nuiDestination, void *nuiSource)
  {
    void *jresult;
    Dali::Toolkit::Transition *destination = (Dali::Toolkit::Transition *)0;
    Dali::Toolkit::Transition *source = 0;
    Dali::Toolkit::Transition *result = 0;

    destination = (Dali::Toolkit::Transition *)nuiDestination;
    source = (Dali::Toolkit::Transition *)nuiSource;

    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Transition const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::Transition *)&(destination)->operator=((Dali::Toolkit::Transition const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

#ifdef __cplusplus
}
#endif
