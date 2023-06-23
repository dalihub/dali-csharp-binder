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
#include <dali/public-api/common/extents.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_0() {
  void * jresult ;
  Dali::Extents *result = 0 ;

  {
    try {
      result = (Dali::Extents *)new Dali::Extents();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Extents *arg1 = 0 ;
  Dali::Extents *result = 0 ;

  arg1 = (Dali::Extents *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Extents *)new Dali::Extents((Dali::Extents const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_2(unsigned short jarg1, unsigned short jarg2, unsigned short jarg3, unsigned short jarg4) {
  void * jresult ;
  uint16_t arg1 ;
  uint16_t arg2 ;
  uint16_t arg3 ;
  uint16_t arg4 ;
  Dali::Extents *result = 0 ;

  arg1 = (uint16_t)jarg1;
  arg2 = (uint16_t)jarg2;
  arg3 = (uint16_t)jarg3;
  arg4 = (uint16_t)jarg4;
  {
    try {
      result = (Dali::Extents *)new Dali::Extents(arg1, arg2, arg3, arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Extents_Assign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  Dali::Extents *arg2 = 0 ;
  Dali::Extents *result = 0 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (Dali::Extents *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Extents *) &(arg1)->operator =((Dali::Extents const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Extents_Assign__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t *arg2 = (uint16_t *) 0 ;
  Dali::Extents *result = 0 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t *)jarg2;
  {
    try {
      result = (Dali::Extents *) &(arg1)->operator =((uint16_t const *)arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Extents_EqualTo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  Dali::Extents *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (Dali::Extents *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Extents const *)arg1)->operator ==((Dali::Extents const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Extents_NotEqualTo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  Dali::Extents *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (Dali::Extents *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Extents const *)arg1)->operator !=((Dali::Extents const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_start_set(void * jarg1, unsigned short jarg2) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t arg2 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t)jarg2;
  if (arg1) (arg1)->start = arg2;
}


SWIGEXPORT unsigned short SWIGSTDCALL CSharp_Dali_Extents_start_get(void * jarg1) {
  unsigned short jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t result;

  arg1 = (Dali::Extents *)jarg1;
  result =  ((arg1)->start);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_end_set(void * jarg1, unsigned short jarg2) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t arg2 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t)jarg2;
  if (arg1) (arg1)->end = arg2;
}


SWIGEXPORT unsigned short SWIGSTDCALL CSharp_Dali_Extents_end_get(void * jarg1) {
  unsigned short jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t result;

  arg1 = (Dali::Extents *)jarg1;
  result =  ((arg1)->end);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_top_set(void * jarg1, unsigned short jarg2) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t arg2 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t)jarg2;
  if (arg1) (arg1)->top = arg2;
}


SWIGEXPORT unsigned short SWIGSTDCALL CSharp_Dali_Extents_top_get(void * jarg1) {
  unsigned short jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t result;

  arg1 = (Dali::Extents *)jarg1;
  result =  ((arg1)->top);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_bottom_set(void * jarg1, unsigned short jarg2) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t arg2 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t)jarg2;
  if (arg1) (arg1)->bottom = arg2;
}


SWIGEXPORT unsigned short SWIGSTDCALL CSharp_Dali_Extents_bottom_get(void * jarg1) {
  unsigned short jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t result;

  arg1 = (Dali::Extents *)jarg1;
  result =  ((arg1)->bottom);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Extents(void * jarg1) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;

  arg1 = (Dali::Extents *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
