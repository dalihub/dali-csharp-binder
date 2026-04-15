/*
 * Copyright (c) 2026 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/common/extents.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_0()
{
  void*          jresult;
  Dali::Extents* result = 0;

  {
    try
    {
      result = (Dali::Extents*)new Dali::Extents();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_1(void* jarg1)
{
  void*          jresult;
  Dali::Extents* arg1   = 0;
  Dali::Extents* result = 0;

  arg1 = (Dali::Extents*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Extents*)new Dali::Extents((Dali::Extents const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_2(uint16_t start, uint16_t end, uint16_t top, uint16_t bottom)
{
  void*          jresult;
  Dali::Extents* result = 0;
  {
    try
    {
      result = (Dali::Extents*)new Dali::Extents(static_cast<int16_t>(start), static_cast<int16_t>(end), static_cast<int16_t>(top), static_cast<int16_t>(bottom));
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Extents_Assign__SWIG_0(void* jarg1, void* jarg2)
{
  void*          jresult;
  Dali::Extents* arg1   = (Dali::Extents*)0;
  Dali::Extents* arg2   = 0;
  Dali::Extents* result = 0;

  arg1 = (Dali::Extents*)jarg1;
  arg2 = (Dali::Extents*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Extents*)&(arg1)->operator=((Dali::Extents const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Extents_Assign__SWIG_1(void* jarg1, void* jarg2)
{
  void*          jresult;
  Dali::Extents* arg1   = (Dali::Extents*)0;
  int16_t*       arg2   = (int16_t*)0;
  Dali::Extents* result = 0;

  arg1 = (Dali::Extents*)jarg1;
  arg2 = (int16_t*)jarg2;
  {
    try
    {
      result = (Dali::Extents*)&(arg1)->operator=((int16_t const*)arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Extents_EqualTo(void* jarg1, void* jarg2)
{
  unsigned int   jresult;
  Dali::Extents* arg1 = (Dali::Extents*)0;
  Dali::Extents* arg2 = 0;
  bool           result;

  arg1 = (Dali::Extents*)jarg1;
  arg2 = (Dali::Extents*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (bool)((Dali::Extents const*)arg1)->operator==((Dali::Extents const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Extents_NotEqualTo(void* jarg1, void* jarg2)
{
  unsigned int   jresult;
  Dali::Extents* arg1 = (Dali::Extents*)0;
  Dali::Extents* arg2 = 0;
  bool           result;

  arg1 = (Dali::Extents*)jarg1;
  arg2 = (Dali::Extents*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (bool)((Dali::Extents const*)arg1)->operator!=((Dali::Extents const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_set_all(void* jarg1, uint16_t start, uint16_t end, uint16_t top, uint16_t bottom)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  if(arg1)
  {
    (arg1)->start  = static_cast<int16_t>(start);
    (arg1)->end    = static_cast<int16_t>(end);
    (arg1)->top    = static_cast<int16_t>(top);
    (arg1)->bottom = static_cast<int16_t>(bottom);
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_start_set(void* jarg1, uint16_t start)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  if(arg1)
  {
    (arg1)->start = static_cast<int16_t>(start);
  }
}

SWIGEXPORT uint16_t SWIGSTDCALL CSharp_Dali_Extents_start_get(void* jarg1)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  return static_cast<uint16_t>((arg1)->start);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_end_set(void* jarg1, uint16_t end)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  if(arg1)
  {
    (arg1)->end = static_cast<int16_t>(end);
  }
}

SWIGEXPORT uint16_t SWIGSTDCALL CSharp_Dali_Extents_end_get(void* jarg1)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  return static_cast<uint16_t>((arg1)->end);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_top_set(void* jarg1, uint16_t top)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  if(arg1)
  {
    (arg1)->top = static_cast<int16_t>(top);
  }
}

SWIGEXPORT uint16_t SWIGSTDCALL CSharp_Dali_Extents_top_get(void* jarg1)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  return static_cast<uint16_t>((arg1)->top);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_bottom_set(void* jarg1, uint16_t bottom)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  if(arg1)
  {
    (arg1)->bottom = static_cast<int16_t>(bottom);
  }
}

SWIGEXPORT uint16_t SWIGSTDCALL CSharp_Dali_Extents_bottom_get(void* jarg1)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  return static_cast<uint16_t>((arg1)->bottom);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Extents(void* jarg1)
{
  Dali::Extents* arg1 = (Dali::Extents*)0;

  arg1 = (Dali::Extents*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
