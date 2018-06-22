/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
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

#include "common.h"
#include <dali-toolkit/devel-api/layouting/measured-size.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_MeasuredSize__SWIG_0()
{
  void * jresult ;
  Dali::Toolkit::MeasuredSize *result = 0 ;

  try
  {
    result = (Dali::Toolkit::MeasuredSize *)new Dali::Toolkit::MeasuredSize();
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_MeasuredSize__SWIG_1(void * jarg1)
{
  void * jresult ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg1 ;
  Dali::Toolkit::LayoutLength *argp1 ;
  Dali::Toolkit::MeasuredSize *result = 0 ;

  argp1 = (Dali::Toolkit::LayoutLength *)jarg1;
  if (!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return 0;
  }
  arg1 = *argp1;
  try
  {
    result = (Dali::Toolkit::MeasuredSize *)new Dali::Toolkit::MeasuredSize(arg1);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_MeasuredSize__SWIG_2(void * jarg1, int jarg2)
{
  void * jresult ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg1 ;
  Dali::Toolkit::MeasuredSize::State arg2 ;
  Dali::Toolkit::LayoutLength *argp1 ;
  Dali::Toolkit::MeasuredSize *result = 0 ;

  argp1 = (Dali::Toolkit::LayoutLength *)jarg1;
  if (!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::Toolkit::MeasuredSize::State)jarg2;
  try
  {
    result = (Dali::Toolkit::MeasuredSize *)new Dali::Toolkit::MeasuredSize(arg1,arg2);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MeasuredSize(void * jarg1)
{
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  try
  {
    delete arg1;
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MeasuredSize_Assign__SWIG_0(void * jarg1, void * jarg2)
{
  void * jresult ;
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;
  Dali::Toolkit::MeasuredSize *arg2 = 0 ;
  Dali::Toolkit::MeasuredSize *result = 0 ;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  arg2 = (Dali::Toolkit::MeasuredSize *)jarg2;
  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::MeasuredSize const & type is null", 0);
    return 0;
  }
  try
  {
    result = (Dali::Toolkit::MeasuredSize *) &(arg1)->operator =((Dali::Toolkit::MeasuredSize const &)*arg2);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MeasuredSize_Assign__SWIG_1(void * jarg1, int jarg2)
{
  void * jresult ;
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType arg2 ;
  Dali::Toolkit::MeasuredSize *result = 0 ;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength::IntType)jarg2;

  try
  {
    result = (Dali::Toolkit::MeasuredSize *) &(arg1)->operator =(arg2);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MeasuredSize_EqualTo(void * jarg1, void * jarg2)
{
  unsigned int jresult ;
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;
  Dali::Toolkit::MeasuredSize arg2 ;
  Dali::Toolkit::MeasuredSize *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  argp2 = (Dali::Toolkit::MeasuredSize *)jarg2;
  if (!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasuredSize", 0);
    return 0;
  }
  arg2 = *argp2;
  try
  {
    result = (bool)(arg1)->operator ==(arg2);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MeasuredSize_NotEqualTo(void * jarg1, void * jarg2)
{
  unsigned int jresult ;
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;
  Dali::Toolkit::MeasuredSize arg2 ;
  Dali::Toolkit::MeasuredSize *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  argp2 = (Dali::Toolkit::MeasuredSize *)jarg2;
  if (!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasuredSize", 0);
    return 0;
  }
  arg2 = *argp2;
  try
  {
    result = (bool)(arg1)->operator !=(arg2);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MeasuredSize_SetState(void * jarg1, int jarg2)
{
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;
  Dali::Toolkit::MeasuredSize::State arg2 ;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  arg2 = (Dali::Toolkit::MeasuredSize::State)jarg2;
  try
  {
    (arg1)->SetState(arg2);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MeasuredSize_GetState(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;
  Dali::Toolkit::MeasuredSize::State result;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  try
  {
    result = (Dali::Toolkit::MeasuredSize::State)(arg1)->GetState();
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MeasuredSize_SetSize(void * jarg1, void * jarg2)
{
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  Dali::Toolkit::LayoutLength *argp2 ;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  try
  {
    (arg1)->SetSize(arg2);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MeasuredSize_GetSize(void * jarg1)
{
  void * jresult ;
  Dali::Toolkit::MeasuredSize *arg1 = (Dali::Toolkit::MeasuredSize *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::Toolkit::MeasuredSize *)jarg1;
  try
  {
    result = (arg1)->GetSize();
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}

#ifdef __cplusplus
}
#endif

