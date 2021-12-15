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
#include <dali/public-api/animation/constraint.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C"
{
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_EqualConstraintWithParentFloat_New(void * nuiHandle, int nuiTargetIndex, int nuiParentIndex)
{
  Dali::Handle *handle = (Dali::Handle *) 0;
  Dali::Property::Index targetIndex;
  Dali::Property::Index parentIndex;
  Dali::Constraint result;
  void * jresult = 0;

  handle = (Dali::Handle *)nuiHandle;
  if (!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & const is null", 0);
    return 0;
  }
  targetIndex = (Dali::Property::Index)nuiTargetIndex;
  parentIndex = (Dali::Property::Index)nuiParentIndex;

  {
    try
    {
      result = Dali::Constraint::New<float>(*handle, targetIndex, Dali::EqualToConstraint());
      result.AddSource(Dali::ParentSource(parentIndex));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Constraint((const Dali::Constraint &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RelativeConstraintWithParentFloat_New(void * nuiHandle, int nuiTargetIndex, int nuiParentIndex, float nuiRelativeRate)
{
  Dali::Handle *handle = (Dali::Handle *) 0;
  Dali::Property::Index targetIndex;
  Dali::Property::Index parentIndex;
  float relativeRate;
  Dali::Constraint result;
  void * jresult = 0;

  handle = (Dali::Handle *)nuiHandle;
  if (!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & const is null", 0);
    return 0;
  }
  targetIndex = (Dali::Property::Index)nuiTargetIndex;
  parentIndex = (Dali::Property::Index)nuiParentIndex;
  relativeRate = nuiRelativeRate;

  {
    try
    {
      result = Dali::Constraint::New<float>(*handle, targetIndex, Dali::RelativeToConstraintFloat(relativeRate));
      result.AddSource(Dali::ParentSource(parentIndex));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Constraint((const Dali::Constraint &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_Apply(void * nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return;
  }

  {
    try
    {
      (*constraint).Apply();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_Remove(void * nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return;
  }

  {
    try
    {
      (*constraint).Remove();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Constraint_REMOVE_ACTION_BAKE_get()
{
  int jresult = 0;

  {
    try
    {
      jresult = (int)Dali::Constraint::BAKE;
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Constraint_REMOVE_ACTION_DISCARD_get()
{
  int jresult = 0;

  {
    try
    {
      jresult = (int)Dali::Constraint::DISCARD;
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Constraint_DEFAULT_REMOVE_ACTION_get()
{
  int jresult = 0;

  {
    try
    {
      jresult = (int)Dali::Constraint::DEFAULT_REMOVE_ACTION;
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_SetRemoveAction(void * nuiConstraint, int nuiRemoveAction)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  Dali::Constraint::RemoveAction removeAction = Dali::Constraint::DEFAULT_REMOVE_ACTION;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return;
  }
  removeAction = (Dali::Constraint::RemoveAction)nuiRemoveAction;

  {
    try
    {
      (*constraint).SetRemoveAction(removeAction);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Constraint_GetRemoveAction(void * nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  int jresult = 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return 0;
  }

  {
    try
    {
      jresult = (int)(*constraint).GetRemoveAction();
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_SetTag(void * nuiConstraint, unsigned int nuiTag)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  uint32_t tag = 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return;
  }
  tag = nuiTag;

  {
    try
    {
      (*constraint).SetTag(tag);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Constraint_GetTag(void * nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  uint32_t jresult = 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return 0;
  }

  {
    try
    {
      jresult = (*constraint).GetTag();
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Constraint_GetTargetObject(void * nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  Dali::Handle result = Dali::Handle();
  void * jresult = 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return 0;
  }

  {
    try
    {
      result = (*constraint).GetTargetObject();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Handle((const Dali::Handle &)result);
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Constraint_GetTargetProperty(void * nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  Dali::Property::Index result = Dali::Property::INVALID_INDEX;
  int jresult = 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return 0;
  }

  {
    try
    {
      result = (*constraint).GetTargetProperty();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Constraint(void * nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  Dali::Constraint *result;
  void * jresult;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return 0;
  }

  {
    try
    {
      result = new Dali::Constraint(*constraint);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Constraint(void * nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  {
    try
    {
      delete constraint;
    } CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
