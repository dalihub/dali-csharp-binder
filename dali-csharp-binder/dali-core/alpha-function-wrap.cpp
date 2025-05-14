/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/animation/alpha-function.h>
#include <cstdint>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_AlphaFunction_0()
{
  void*                jresult;
  Dali::AlphaFunction* result = 0;

  {
    try
    {
      result = (Dali::AlphaFunction*)new Dali::AlphaFunction();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_AlphaFunction_BuiltInFunction(int csBuiltInFunction)
{
  void*                                jresult;
  Dali::AlphaFunction::BuiltinFunction builtInFunction;
  Dali::AlphaFunction*                 result = 0;

  builtInFunction = (Dali::AlphaFunction::BuiltinFunction)csBuiltInFunction;
  {
    try
    {
      result = (Dali::AlphaFunction*)new Dali::AlphaFunction(builtInFunction);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_AlphaFunction_CustomAlphaFunction(void* csAlphaFunction)
{
  void*                        jresult;
  Dali::AlphaFunctionPrototype alphaFunction = (Dali::AlphaFunctionPrototype)csAlphaFunction;
  Dali::AlphaFunction*         result        = 0;
  {
    try
    {
      result = (Dali::AlphaFunction*)new Dali::AlphaFunction(alphaFunction);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_AlphaFunction_Bezier(void* csControlPoint0, void* csControlPoint1)
{
  void*                jresult;
  Dali::AlphaFunction* result = 0;

  Dali::Vector2* controlPoint0 = (Dali::Vector2*)csControlPoint0;
  if(!controlPoint0)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  Dali::Vector2* controlPoint1 = (Dali::Vector2*)csControlPoint1;
  if(!controlPoint1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::AlphaFunction*)new Dali::AlphaFunction((Dali::Vector2 const&)*controlPoint0, (Dali::Vector2 const&)*controlPoint1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_AlphaFunction_BuiltInSpring(int csSpringType)
{
  void*                jresult;
  Dali::AlphaFunction* result = 0;

  Dali::AlphaFunction::SpringType springType = (Dali::AlphaFunction::SpringType)csSpringType;
  {
    try
    {
      result = (Dali::AlphaFunction*)new Dali::AlphaFunction(springType);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_AlphaFunction_CustomSpring(float stiffness, float damping, float mass)
{
  void*                jresult;
  Dali::AlphaFunction* result = 0;

  Dali::SpringData springData(stiffness, damping, mass);
  {
    try
    {
      result = (Dali::AlphaFunction*)new Dali::AlphaFunction(springData);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AlphaFunction_GetBezierControlPoints(void* csAlphaFunction)
{
  void*         jresult;
  Dali::Vector4 result;

  Dali::AlphaFunction* alphaFunction = (Dali::AlphaFunction*)csAlphaFunction;
  {
    try
    {
      result = ((Dali::AlphaFunction const*)alphaFunction)->GetBezierControlPoints();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4&)result);
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_AlphaFunction_GetBuiltinFunction(void* csAlphaFunction)
{
  int                                  jresult;
  Dali::AlphaFunction::BuiltinFunction result;

  Dali::AlphaFunction* alphaFunction = (Dali::AlphaFunction*)csAlphaFunction;
  {
    try
    {
      result = (Dali::AlphaFunction::BuiltinFunction)((Dali::AlphaFunction const*)alphaFunction)->GetBuiltinFunction();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_AlphaFunction_GetMode(void* csAlphaFunction)
{
  int                       jresult;
  Dali::AlphaFunction::Mode result;

  Dali::AlphaFunction* alphaFunction = (Dali::AlphaFunction*)csAlphaFunction;
  {
    try
    {
      result = (Dali::AlphaFunction::Mode)((Dali::AlphaFunction const*)alphaFunction)->GetMode();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AlphaFunction(void* csAlphaFunction)
{
  Dali::AlphaFunction* alphaFunction = (Dali::AlphaFunction*)csAlphaFunction;
  {
    try
    {
      delete alphaFunction;
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
