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

#ifndef CSHARP_TRANSITION_SET
#define CSHARP_TRANSITION_SET
#endif

#include <string.h>
#include "common.h"
#include <dali-toolkit/public-api/transition/transition-set.h>
#include <dali/integration-api/debug.h>

SWIGINTERN bool Dali_TransitionSet_Signal_Empty(Dali::Toolkit::TransitionSet::TransitionSetSignalType const* self)
{
  return self->Empty();
}

SWIGINTERN std::size_t Dali_TransitionSet_Signal_GetConnectionCount(Dali::Toolkit::TransitionSet::TransitionSetSignalType const* self)
{
  return self->GetConnectionCount();
}

SWIGINTERN void Dali_TransitionSet_Signal_Connect(Dali::Toolkit::TransitionSet::TransitionSetSignalType* self, void (*func)(Dali::Toolkit::TransitionSet&))
{
  self->Connect(func);
}

SWIGINTERN void Dali_TransitionSet_Signal_Disconnect(Dali::Toolkit::TransitionSet::TransitionSetSignalType* self, void (*func)(Dali::Toolkit::TransitionSet&))
{
  self->Disconnect(func);
}

#ifdef __cplusplus
extern "C" {
#endif

#define CALL_CATCH_EXCEPTION(ret)                                          \
	catch (std::out_of_range& e)                                             \
  {                                                                        \
     SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));   \
     return ret;                                                           \
  }                                                                        \
  catch (std::exception& e)                                                \
  {                                                                        \
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));  \
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



SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_TransitionSet()
{
  void* jresult;
  Dali::Toolkit::TransitionSet* result = 0;
  {
    try
    {
      result = (Dali::Toolkit::TransitionSet*)new Dali::Toolkit::TransitionSet();
    }CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_TransitionSet_New()
{
  void* jresult;
  Dali::Toolkit::TransitionSet result;
  {
    try
    {
      result = Dali::Toolkit::TransitionSet::New();
    }CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::TransitionSet((const Dali::Toolkit::TransitionSet&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TransitionSet(void* nuiTransitionSet)
{
  Dali::Toolkit::TransitionSet* transition = (Dali::Toolkit::TransitionSet*) 0;

  transition = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  {
    try
    {
      delete transition;
    }CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_TransitionSet_Set(void *nuiTransitionSet)
{
  Dali::Toolkit::TransitionSet *newTransitionSet = 0;
  Dali::Toolkit::TransitionSet *transitionSet = (Dali::Toolkit::TransitionSet *)nuiTransitionSet;
  if (!transitionSet)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TransitionSet const & type is null", 0);
    return 0;
  }
  {
    try
    {
      newTransitionSet = (Dali::Toolkit::TransitionSet *)new Dali::Toolkit::TransitionSet((Dali::Toolkit::TransitionSet const &)*transitionSet);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  void *result;
  result = (void *)newTransitionSet;
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_TransitionSet_Assign(void* nuiDestination, void* nuiSource)
{
  void* jresult;
  Dali::Toolkit::TransitionSet* destination = (Dali::Toolkit::TransitionSet*) 0;
  Dali::Toolkit::TransitionSet* source = 0;
  Dali::Toolkit::TransitionSet* result = 0;

  destination = (Dali::Toolkit::TransitionSet*)nuiDestination;
  source = (Dali::Toolkit::TransitionSet*)nuiSource;

  if (!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TransitionSet const & type is null", 0);
    return 0;CSHARP_TRANSITION_SET
    try
    {
      result = (Dali::Toolkit::TransitionSet*) & (destination)->operator =((Dali::Toolkit::TransitionSet const&) * source);
    }CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TransitionSet_AddTransition(void* nuiTransitionSet, void* nuiTransition)
{
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  Dali::Toolkit::TransitionBase* transition = (Dali::Toolkit::TransitionBase*)nuiTransition;

  if (!transitionSet || !transition)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return;
  }
  {
    try
    {
      (transitionSet)->AddTransition(*transition);
    }CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_TransitionSet_GetTransitionAt(void* nuiTransitionSet, unsigned int index)
{
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  Dali::Toolkit::TransitionBase transition;
  {
    try {
      transition = (transitionSet)->GetTransitionAt(index);
    }CALL_CATCH_EXCEPTION(0);
  }
  Dali::Toolkit::TransitionBase* result = new Dali::Toolkit::TransitionBase((const Dali::Toolkit::TransitionBase &)transition);
  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TransitionSet_GetTransitionCount(void* nuiTransitionSet)
{
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  unsigned int result;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::TransitionSet const *)transitionSet)->GetTransitionCount();
    }CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TransitionSet_Play(void* nuiTransitionSet)
{
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;

  if (!transitionSet)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "some argument is null", 0);
    return;
  }
  {
    try
    {
      (transitionSet)->Play();
    }CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_TransitionSet_FinishedSignal(void* nuiTransitionSet)
{
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  Dali::Toolkit::TransitionSet::TransitionSetSignalType* transitionSetSignalType = 0;
  {
    try {
      transitionSetSignalType = (Dali::Toolkit::TransitionSet::TransitionSetSignalType*) &(transitionSet)->FinishedSignal();
    }CALL_CATCH_EXCEPTION(0);
  }
  void* result = (void *)transitionSetSignalType;
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TransitionSet_Signal_Empty(void* nuiTransitionSet) {
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  Dali::Toolkit::TransitionSet::TransitionSetSignalType* transitionSetSignalType = (Dali::Toolkit::TransitionSet::TransitionSetSignalType*)0;
  bool reselt;
  {
    try {
      reselt = Dali_TransitionSet_Signal_Empty((Dali::Toolkit::TransitionSet::TransitionSetSignalType const*)transitionSet);
    }CALL_CATCH_EXCEPTION(0);
  }
  return reselt;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TransitionSet_Signal_GetConnectionCount(void* nuiTransitionSet) {
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  Dali::Toolkit::TransitionSet::TransitionSetSignalType* transitionSetSignalType = (Dali::Toolkit::TransitionSet::TransitionSetSignalType*)0;
  std::size_t reselt;
  {
    try {
      reselt = Dali_TransitionSet_Signal_GetConnectionCount((Dali::Toolkit::TransitionSet::TransitionSetSignalType const*)transitionSet);
    }CALL_CATCH_EXCEPTION(0);
  }
  return reselt;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TransitionSet_Signal_Connect(void* nuiTransitionSet, void* nuiFunc) {
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  void (*func)(Dali::Toolkit::TransitionSet &) = (void (*)(Dali::Toolkit::TransitionSet &))nuiFunc;
  Dali::Toolkit::TransitionSet::TransitionSetSignalType* transitionSetSignalType = (Dali::Toolkit::TransitionSet::TransitionSetSignalType*)0;
  {
    try {
      Dali_TransitionSet_Signal_Connect((Dali::Toolkit::TransitionSet::TransitionSetSignalType*)transitionSet, func);
    }CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TransitionSet_Signal_Disconnect(void* nuiTransitionSet, void* nuiFunc) {
  Dali::Toolkit::TransitionSet* transitionSet = (Dali::Toolkit::TransitionSet*)nuiTransitionSet;
  void (*func)(Dali::Toolkit::TransitionSet &) = (void (*)(Dali::Toolkit::TransitionSet &))nuiFunc;
  Dali::Toolkit::TransitionSet::TransitionSetSignalType* transitionSetSignalType = (Dali::Toolkit::TransitionSet::TransitionSetSignalType*)0;
  {
    try {
      Dali_TransitionSet_Signal_Disconnect((Dali::Toolkit::TransitionSet::TransitionSetSignalType*)transitionSet, func);
    }CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
