/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd.
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
#include <dali/dali.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

using namespace Dali;

#ifdef __cplusplus
extern "C" {
#endif


// Method

// Vector2

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector2__SWIG_0() {
  void * jresult ;
  Dali::Vector2 *result = 0 ;

  {
    try {
      result = (Dali::Vector2 *)new Dali::Vector2();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector2__SWIG_1(float jarg1, float jarg2) {
  void * jresult ;
  float arg1 ;
  float arg2 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (float)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (Dali::Vector2 *)new Dali::Vector2(arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector2__SWIG_2(float* jarg1) {
  void * jresult ;
  float *arg1 = (float *) 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = jarg1;
  {
    try {
      result = (Dali::Vector2 *)new Dali::Vector2((float const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;


  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector2__SWIG_3(void * jarg1) {
  void * jresult ;
  Dali::Vector3 *arg1 = 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector2 *)new Dali::Vector2((Dali::Vector3 const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector2__SWIG_4(void * jarg1) {
  void * jresult ;
  Dali::Vector4 *arg1 = 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector2 *)new Dali::Vector2((Dali::Vector4 const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_ONE_get() {
  void * jresult ;
  Dali::Vector2 *result = 0 ;

  result = (Dali::Vector2 *)&Dali::Vector2::ONE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_XAXIS_get() {
  void * jresult ;
  Dali::Vector2 *result = 0 ;

  result = (Dali::Vector2 *)&Dali::Vector2::XAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_YAXIS_get() {
  void * jresult ;
  Dali::Vector2 *result = 0 ;

  result = (Dali::Vector2 *)&Dali::Vector2::YAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_NEGATIVE_XAXIS_get() {
  void * jresult ;
  Dali::Vector2 *result = 0 ;

  result = (Dali::Vector2 *)&Dali::Vector2::NEGATIVE_XAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_NEGATIVE_YAXIS_get() {
  void * jresult ;
  Dali::Vector2 *result = 0 ;

  result = (Dali::Vector2 *)&Dali::Vector2::NEGATIVE_YAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_ZERO_get() {
  void * jresult ;
  Dali::Vector2 *result = 0 ;

  result = (Dali::Vector2 *)&Dali::Vector2::ZERO;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Assign__SWIG_0(void * jarg1, float* jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float *arg2 = (float *) 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = jarg2;
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator =((float const *)arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;


  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Assign__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator =((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Assign__SWIG_2(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator =((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Add(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector2 const *)arg1)->operator +((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_AddAssign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator +=((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Subtract__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector2 const *)arg1)->operator -((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_SubtractAssign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator -=((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Multiply__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector2 const *)arg1)->operator *((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Multiply__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float arg2 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = ((Dali::Vector2 const *)arg1)->operator *(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_MultiplyAssign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator *=((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_MultiplyAssign__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float arg2 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator *=(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Divide__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector2 const *)arg1)->operator /((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Divide__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float arg2 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = ((Dali::Vector2 const *)arg1)->operator /(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_DivideAssign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator /=((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_DivideAssign__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float arg2 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (Dali::Vector2 *) &(arg1)->operator /=(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_Subtract__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  {
    try {
      result = ((Dali::Vector2 const *)arg1)->operator -();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Vector2_EqualTo(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Vector2 const *)arg1)->operator ==((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Vector2_NotEqualTo(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Vector2 const *)arg1)->operator !=((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector2_ValueOfIndex__SWIG_0(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  unsigned int arg2 ;
  float *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float *) &((Dali::Vector2 const *)arg1)->operator [](arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = *result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector2_Length(void * jarg1) {
  float jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float result;

  arg1 = (Dali::Vector2 *)jarg1;
  {
    try {
      result = (float)((Dali::Vector2 const *)arg1)->Length();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector2_LengthSquared(void * jarg1) {
  float jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float result;

  arg1 = (Dali::Vector2 *)jarg1;
  {
    try {
      result = (float)((Dali::Vector2 const *)arg1)->LengthSquared();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector2_Normalize(void * jarg1) {
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  {
    try {
      (arg1)->Normalize();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector2_Clamp(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 *arg3 = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  arg3 = (Dali::Vector2 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Clamp((Dali::Vector2 const &)*arg2,(Dali::Vector2 const &)*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector2_AsFloat__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  {
    try {
      result = (float *)((Dali::Vector2 const *)arg1)->AsFloat();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector2_X_set(void * jarg1, float jarg2) {
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector2_X_get(void * jarg1) {
  float jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float result;

  arg1 = (Dali::Vector2 *)jarg1;
  result = (float) ((arg1)->x);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector2_Width_set(void * jarg1, float jarg2) {
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->width = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector2_Width_get(void * jarg1) {
  float jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float result;

  arg1 = (Dali::Vector2 *)jarg1;
  result = (float) ((arg1)->width);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector2_Y_set(void * jarg1, float jarg2) {
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector2_Y_get(void * jarg1) {
  float jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float result;

  arg1 = (Dali::Vector2 *)jarg1;
  result = (float) ((arg1)->y);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector2_Height_set(void * jarg1, float jarg2) {
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector2 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->height = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector2_Height_get(void * jarg1) {
  float jresult ;
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;
  float result;

  arg1 = (Dali::Vector2 *)jarg1;
  result = (float) ((arg1)->height);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Vector2(void * jarg1) {
  Dali::Vector2 *arg1 = (Dali::Vector2 *) 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Min__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Min((Dali::Vector2 const &)*arg1,(Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Max__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector2 *arg1 = 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Max((Dali::Vector2 const &)*arg1,(Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Clamp__SWIG_0(void * jarg1, float jarg2, float jarg3) {
  void * jresult ;
  Dali::Vector2 *arg1 = 0 ;
  float *arg2 = 0 ;
  float *arg3 = 0 ;
  float temp2 ;
  float temp3 ;
  Dali::Vector2 result;

  arg1 = (Dali::Vector2 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  temp2 = (float)jarg2;
  arg2 = &temp2;
  temp3 = (float)jarg3;
  arg3 = &temp3;
  {
    try {
      result = Dali::Clamp((Dali::Vector2 const &)*arg1,(float const &)*arg2,(float const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}


// Vector3

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector3__SWIG_0() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  {
    try {
      result = (Dali::Vector3 *)new Dali::Vector3();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector3__SWIG_1(float jarg1, float jarg2, float jarg3) {
  void * jresult ;
  float arg1 ;
  float arg2 ;
  float arg3 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (float)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      result = (Dali::Vector3 *)new Dali::Vector3(arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector3__SWIG_2(float* jarg1) {
  void * jresult ;
  float *arg1 = (float *) 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = jarg1;
  {
    try {
      result = (Dali::Vector3 *)new Dali::Vector3((float const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;


  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector3__SWIG_3(void * jarg1) {
  void * jresult ;
  Dali::Vector2 *arg1 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *)new Dali::Vector3((Dali::Vector2 const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector3__SWIG_4(void * jarg1) {
  void * jresult ;
  Dali::Vector4 *arg1 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *)new Dali::Vector3((Dali::Vector4 const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_ONE_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::Vector3::ONE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_XAXIS_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::Vector3::XAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_YAXIS_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::Vector3::YAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_ZAXIS_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::Vector3::ZAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_NEGATIVE_XAXIS_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::Vector3::NEGATIVE_XAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_NEGATIVE_YAXIS_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::Vector3::NEGATIVE_YAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_NEGATIVE_ZAXIS_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::Vector3::NEGATIVE_ZAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_ZERO_get() {
  void * jresult ;
  Dali::Vector3 *result = 0 ;

  result = (Dali::Vector3 *)&Dali::Vector3::ZERO;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Assign__SWIG_0(void * jarg1, float* jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float *arg2 = (float *) 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = jarg2;
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator =((float const *)arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;


  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Assign__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator =((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Assign__SWIG_2(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator =((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Add(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector3 const *)arg1)->operator +((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_AddAssign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator +=((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Subtract__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector3 const *)arg1)->operator -((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_SubtractAssign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator -=((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Multiply__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector3 const *)arg1)->operator *((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Multiply__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = ((Dali::Vector3 const *)arg1)->operator *(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_MultiplyAssign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator *=((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_MultiplyAssign__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator *=(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_MultiplyAssign__SWIG_2(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Quaternion *arg2 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Quaternion *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator *=((Dali::Quaternion const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Divide__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector3 const *)arg1)->operator /((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Divide__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = ((Dali::Vector3 const *)arg1)->operator /(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_DivideAssign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator /=((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_DivideAssign__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;
  Dali::Vector3 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (Dali::Vector3 *) &(arg1)->operator /=(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Subtract__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  {
    try {
      result = ((Dali::Vector3 const *)arg1)->operator -();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Vector3_EqualTo(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Vector3 const *)arg1)->operator ==((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Vector3_NotEqualTo(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Vector3 const *)arg1)->operator !=((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_ValueOfIndex__SWIG_0(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  unsigned int arg2 ;
  float *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float *) &((Dali::Vector3 const *)arg1)->operator [](arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = *result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_Dot(void * jarg1, void * jarg2) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)((Dali::Vector3 const *)arg1)->Dot((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_Cross(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector3 const *)arg1)->Cross((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_Length(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  {
    try {
      result = (float)((Dali::Vector3 const *)arg1)->Length();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_LengthSquared(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  {
    try {
      result = (float)((Dali::Vector3 const *)arg1)->LengthSquared();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_Normalize(void * jarg1) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  {
    try {
      (arg1)->Normalize();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_Clamp(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 *arg3 = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  arg3 = (Dali::Vector3 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Clamp((Dali::Vector3 const &)*arg2,(Dali::Vector3 const &)*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_AsFloat__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  {
    try {
      result = (float *)((Dali::Vector3 const *)arg1)->AsFloat();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_GetVectorXY__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  {
    try {
      result = (Dali::Vector2 *) &((Dali::Vector3 const *)arg1)->GetVectorXY();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector3_GetVectorYZ__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  Dali::Vector2 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  {
    try {
      result = (Dali::Vector2 *) &((Dali::Vector3 const *)arg1)->GetVectorYZ();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_X_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_X_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->x);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_Width_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->width = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_Width_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->width);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_r_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->r = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_r_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->r);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_Y_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_Y_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->y);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_Height_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->height = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_Height_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->height);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_g_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->g = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_g_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->g);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_Z_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->z = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_Z_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->z);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_Depth_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->depth = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_Depth_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->depth);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector3_b_set(void * jarg1, float jarg2) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector3 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->b = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector3_b_get(void * jarg1) {
  float jresult ;
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;
  float result;

  arg1 = (Dali::Vector3 *)jarg1;
  result = (float) ((arg1)->b);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Vector3(void * jarg1) {
  Dali::Vector3 *arg1 = (Dali::Vector3 *) 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Min__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Min((Dali::Vector3 const &)*arg1,(Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Max__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector3 *arg1 = 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Max((Dali::Vector3 const &)*arg1,(Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Clamp__SWIG_1(void * jarg1, float jarg2, float jarg3) {
  void * jresult ;
  Dali::Vector3 *arg1 = 0 ;
  float *arg2 = 0 ;
  float *arg3 = 0 ;
  float temp2 ;
  float temp3 ;
  Dali::Vector3 result;

  arg1 = (Dali::Vector3 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  temp2 = (float)jarg2;
  arg2 = &temp2;
  temp3 = (float)jarg3;
  arg3 = &temp3;
  {
    try {
      result = Dali::Clamp((Dali::Vector3 const &)*arg1,(float const &)*arg2,(float const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}


// Vector4

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector4__SWIG_0() {
  void * jresult ;
  Dali::Vector4 *result = 0 ;

  {
    try {
      result = (Dali::Vector4 *)new Dali::Vector4();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector4__SWIG_1(float jarg1, float jarg2, float jarg3, float jarg4) {
  void * jresult ;
  float arg1 ;
  float arg2 ;
  float arg3 ;
  float arg4 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (float)jarg1;
  arg2 = (float)jarg2;
  arg3 = (float)jarg3;
  arg4 = (float)jarg4;
  {
    try {
      result = (Dali::Vector4 *)new Dali::Vector4(arg1,arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector4__SWIG_2(float* jarg1) {
  void * jresult ;
  float *arg1 = (float *) 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = jarg1;
  {
    try {
      result = (Dali::Vector4 *)new Dali::Vector4((float const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;


  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector4__SWIG_3(void * jarg1) {
  void * jresult ;
  Dali::Vector2 *arg1 = 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector2 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector4 *)new Dali::Vector4((Dali::Vector2 const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Vector4__SWIG_4(void * jarg1) {
  void * jresult ;
  Dali::Vector3 *arg1 = 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector3 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector4 *)new Dali::Vector4((Dali::Vector3 const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_ONE_get() {
  void * jresult ;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Vector4::ONE;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_XAXIS_get() {
  void * jresult ;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Vector4::XAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_YAXIS_get() {
  void * jresult ;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Vector4::YAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_ZAXIS_get() {
  void * jresult ;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Vector4::ZAXIS;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_ZERO_get() {
  void * jresult ;
  Dali::Vector4 *result = 0 ;

  result = (Dali::Vector4 *)&Dali::Vector4::ZERO;
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Assign__SWIG_0(void * jarg1, float* jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float *arg2 = (float *) 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = jarg2;
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator =((float const *)arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;


  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Assign__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector2 *arg2 = 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator =((Dali::Vector2 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Assign__SWIG_2(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator =((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Add(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector4 const *)arg1)->operator +((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_AddAssign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator +=((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Subtract__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector4 const *)arg1)->operator -((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_SubtractAssign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator -=((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Multiply__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector4 const *)arg1)->operator *((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Multiply__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = ((Dali::Vector4 const *)arg1)->operator *(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_MultiplyAssign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator *=((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_MultiplyAssign__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator *=(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Divide__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector4 const *)arg1)->operator /((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Divide__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = ((Dali::Vector4 const *)arg1)->operator /(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_DivideAssign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator /=((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_DivideAssign__SWIG_1(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;
  Dali::Vector4 *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (Dali::Vector4 *) &(arg1)->operator /=(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Subtract__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  {
    try {
      result = ((Dali::Vector4 const *)arg1)->operator -();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Vector4_EqualTo(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Vector4 const *)arg1)->operator ==((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Vector4_NotEqualTo(void * jarg1, void * jarg2) {
  bool jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Vector4 const *)arg1)->operator !=((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_ValueOfIndex__SWIG_0(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  unsigned int arg2 ;
  float *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float *) &((Dali::Vector4 const *)arg1)->operator [](arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = *result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_Dot__SWIG_0(void * jarg1, void * jarg2) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector3 *arg2 = 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)((Dali::Vector4 const *)arg1)->Dot((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_Dot__SWIG_1(void * jarg1, void * jarg2) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)((Dali::Vector4 const *)arg1)->Dot((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_Dot4(void * jarg1, void * jarg2) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)((Dali::Vector4 const *)arg1)->Dot4((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_Cross(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Vector4 const *)arg1)->Cross((Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_Length(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  {
    try {
      result = (float)((Dali::Vector4 const *)arg1)->Length();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_LengthSquared(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  {
    try {
      result = (float)((Dali::Vector4 const *)arg1)->LengthSquared();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_Normalize(void * jarg1) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  {
    try {
      (arg1)->Normalize();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_Clamp(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 *arg3 = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return ;
  }
  arg3 = (Dali::Vector4 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Clamp((Dali::Vector4 const &)*arg2,(Dali::Vector4 const &)*arg3);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Vector4_AsFloat__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float *result = 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  {
    try {
      result = (float *)((Dali::Vector4 const *)arg1)->AsFloat();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_X_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_X_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->x);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_r_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->r = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_r_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->r);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_s_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->s = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_s_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->s);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_Y_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_Y_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->y);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_g_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->g = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_g_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->g);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_t_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->t = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_t_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->t);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_Z_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->z = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_Z_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->z);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_b_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->b = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_b_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->b);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_p_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->p = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_p_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->p);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_W_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->w = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_W_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->w);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_a_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->a = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_a_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->a);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Vector4_q_set(void * jarg1, float jarg2) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float arg2 ;

  arg1 = (Dali::Vector4 *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->q = arg2;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Vector4_q_get(void * jarg1) {
  float jresult ;
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;
  float result;

  arg1 = (Dali::Vector4 *)jarg1;
  result = (float) ((arg1)->q);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Vector4(void * jarg1) {
  Dali::Vector4 *arg1 = (Dali::Vector4 *) 0 ;

  arg1 = (Dali::Vector4 *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Min__SWIG_2(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Min((Dali::Vector4 const &)*arg1,(Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Max__SWIG_2(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector4 *arg1 = 0 ;
  Dali::Vector4 *arg2 = 0 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  arg2 = (Dali::Vector4 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Max((Dali::Vector4 const &)*arg1,(Dali::Vector4 const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Clamp__SWIG_2(void * jarg1, float jarg2, float jarg3) {
  void * jresult ;
  Dali::Vector4 *arg1 = 0 ;
  float *arg2 = 0 ;
  float *arg3 = 0 ;
  float temp2 ;
  float temp3 ;
  Dali::Vector4 result;

  arg1 = (Dali::Vector4 *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return 0;
  }
  temp2 = (float)jarg2;
  arg2 = &temp2;
  temp3 = (float)jarg3;
  arg3 = &temp3;
  {
    try {
      result = Dali::Clamp((Dali::Vector4 const &)*arg1,(float const &)*arg2,(float const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}


// Signals


#ifdef __cplusplus
}
#endif
