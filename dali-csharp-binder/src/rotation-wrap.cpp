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
#include <dali/public-api/math/quaternion.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C"
{
#endif

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Rotation_0()
  {
    void *jresult;
    Dali::Quaternion *result = 0;

    {
      try
      {
        result = (Dali::Quaternion *)new Dali::Quaternion();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Rotation_1(void *nuiRadianAngle, void *nuiVector3)
  {
    void *jresult;
    Dali::Radian *radian = (Dali::Radian *)nuiRadianAngle;
    Dali::Vector3 *vector = (Dali::Vector3 *)nuiVector3;
    Dali::Quaternion *result = 0;

    if (!radian)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Radian", 0);
      return 0;
    }
    if (!vector)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Quaternion *)new Dali::Quaternion(*radian, (Dali::Vector3 const &)*vector);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Rotation_2(void *nuiV0, void *nuiV1)
  {
    void *jresult;
    Dali::Vector3 *v0 = (Dali::Vector3 *)nuiV0;
    Dali::Vector3 *v1 = (Dali::Vector3 *)nuiV1;
    Dali::Quaternion *result = 0;

    if (!v0)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    if (!v1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Quaternion *)new Dali::Quaternion((Dali::Vector3 const &)*v0, (Dali::Vector3 const &)*v1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Rotation(void *nuiRotation)
  {
    Dali::Quaternion *quaternion = (Dali::Quaternion *)0;

    quaternion = (Dali::Quaternion *)nuiRotation;
    {
      try
      {
        delete quaternion;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_IDENTITY_get()
  {
    void *jresult;
    Dali::Quaternion *result = 0;

    result = (Dali::Quaternion *)&Dali::Quaternion::IDENTITY;
    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Rotation_IsIdentity(void *nuiRotation)
  {
    bool result;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)0;

    quaternion = (Dali::Quaternion *)nuiRotation;
    {
      try
      {
        result = (bool)((Dali::Quaternion const *)quaternion)->IsIdentity();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Rotation_GetAxisAngle(void *nuiRotation, void *nuiAxis, void *nuiRadianAngle)
  {
    bool result;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Vector3 *axis = (Dali::Vector3 *)nuiAxis;
    Dali::Radian *radian = (Dali::Radian *)nuiRadianAngle;

    if (!axis)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 & type is null", 0);
      return 0;
    }
    if (!radian)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Radian & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (bool)((Dali::Quaternion const *)quaternion)->ToAxisAngle(*axis, *radian);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Add(void *nuiRotation0, void *nuiRotation1)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion result;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion0)->operator+((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Subtract_0(void *nuiRotation0, void *nuiRotation1)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion result;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion0)->operator-((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Multiply_0(void *nuiRotation0, void *nuiRotation1)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion result;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion0)->operator*((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Multiply_1(void *nuiRotation, void *nuiVector3)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Vector3 *vector = (Dali::Vector3 *)nuiVector3;
    Dali::Vector3 result;

    if (!vector)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->operator*((Dali::Vector3 const &)*vector);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Vector3((const Dali::Vector3 &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Divide_0(void *nuiRotation0, void *nuiRotation1)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion result;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion0)->operator/((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Multiply_2(void *nuiRotation, float scale)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Quaternion result;
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->operator*(scale);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Divide_1(void *nuiRotation, float scale)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Quaternion result;
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->operator/(scale);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Subtract_1(void *nuiRotation)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Quaternion result;

    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->operator-();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_AddAssign(void *nuiRotation0, void *nuiRotation1)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion *result = 0;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Quaternion *)&(quaternion0)->operator+=((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_SubtractAssign(void *nuiRotation0, void *nuiRotation1)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion *result = 0;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Quaternion *)&(quaternion0)->operator-=((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_MultiplyAssign_0(void *nuiRotation0, void *nuiRotation1)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion *result = 0;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Quaternion *)&(quaternion0)->operator*=((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_MultiplyAssign_1(void *nuiRotation, float scale)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Quaternion *result;
    {
      try
      {
        result = (Dali::Quaternion *)&(quaternion)->operator*=(scale);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_DivideAssign(void *nuiRotation, float scale)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Quaternion *result;
    {
      try
      {
        result = (Dali::Quaternion *)&(quaternion)->operator/=(scale);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Rotation_EqualTo(void *nuiRotation0, void *nuiRotation1)
  {
    bool result;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (bool)((Dali::Quaternion const *)quaternion0)->operator==((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Rotation_NotEqualTo(void *nuiRotation0, void *nuiRotation1)
  {
    bool result;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;

    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (bool)((Dali::Quaternion const *)quaternion0)->operator!=((Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Rotation_Length(void *nuiRotation)
  {
    float result;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;

    {
      try
      {
        result = (float)((Dali::Quaternion const *)quaternion)->Length();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Rotation_LengthSquared(void *nuiRotation)
  {
    float result;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;

    {
      try
      {
        result = (float)((Dali::Quaternion const *)quaternion)->LengthSquared();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Rotation_Normalize(void *nuiRotation)
  {
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;

    {
      try
      {
        (quaternion)->Normalize();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Normalized(void *nuiRotation)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Quaternion result;

    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->Normalized();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Rotation_Conjugate(void *nuiRotation)
  {
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;

    {
      try
      {
        (quaternion)->Conjugate();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Rotation_Invert(void *nuiRotation)
  {
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;

    {
      try
      {
        (quaternion)->Invert();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Log(void *nuiRotation)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Quaternion result;

    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->Log();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Exp(void *nuiRotation)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Quaternion result;

    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->Exp();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Rotation_Dot(void *nuiRotation0, void *nuiRotation1)
  {
    float result;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;

    if (!quaternion0)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (float)Dali::Quaternion::Dot((Dali::Quaternion const &)*quaternion0, (Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Lerp(void *nuiRotation0, void *nuiRotation1, float progress)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion result;

    if (!quaternion0)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }

    {
      try
      {
        result = Dali::Quaternion::Lerp((Dali::Quaternion const &)*quaternion0, (Dali::Quaternion const &)*quaternion1, progress);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Slerp(void *nuiRotation0, void *nuiRotation1, float progress)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion result;

    if (!quaternion0)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }

    {
      try
      {
        result = Dali::Quaternion::Slerp((Dali::Quaternion const &)*quaternion0, (Dali::Quaternion const &)*quaternion1, progress);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_SlerpNoInvert(void *nuiRotation0, void *nuiRotation1, float progress)
  {
    void *jresult;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;
    Dali::Quaternion result;

    if (!quaternion0)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }

    {
      try
      {
        result = Dali::Quaternion::SlerpNoInvert((Dali::Quaternion const &)*quaternion0, (Dali::Quaternion const &)*quaternion1, progress);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Squad(void *nuiStart, void *nuiEnd, void *nuiControl0, void *nuiControl1, float progress)
  {
    void *jresult;
    Dali::Quaternion *start = (Dali::Quaternion *)nuiStart;
    Dali::Quaternion *end = (Dali::Quaternion *)nuiEnd;
    Dali::Quaternion *control0 = (Dali::Quaternion *)nuiControl0;
    Dali::Quaternion *control1 = (Dali::Quaternion *)nuiControl1;
    Dali::Quaternion result;

    if (!start)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!end)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!control0)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!control1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = Dali::Quaternion::Squad((Dali::Quaternion const &)*start, (Dali::Quaternion const &)*end, (Dali::Quaternion const &)*control0, (Dali::Quaternion const &)*control1, progress);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Quaternion((const Dali::Quaternion &)result);
    return jresult;
  }

  SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Rotation_AngleBetween(void *nuiRotation0, void *nuiRotation1)
  {
    float result;
    Dali::Quaternion *quaternion0 = (Dali::Quaternion *)nuiRotation0;
    Dali::Quaternion *quaternion1 = (Dali::Quaternion *)nuiRotation1;

    if (!quaternion0)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!quaternion1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (float)Dali::Quaternion::AngleBetween((Dali::Quaternion const &)*quaternion0, (Dali::Quaternion const &)*quaternion1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Rotate_Vector3(void *nuiRotation, void *nuiVector3)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Vector3 *vector3 = (Dali::Vector3 *)nuiVector3;
    Dali::Vector3 result;

    if (!quaternion)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!vector3)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->Rotate(*vector3);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Vector3((const Dali::Vector3 &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Rotation_Rotate_Vector4(void *nuiRotation, void *nuiVector4)
  {
    void *jresult;
    Dali::Quaternion *quaternion = (Dali::Quaternion *)nuiRotation;
    Dali::Vector4 *vector4 = (Dali::Vector4 *)nuiVector4;
    Dali::Vector4 result;

    if (!quaternion)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    if (!vector4)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = ((Dali::Quaternion const *)quaternion)->Rotate(*vector4);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Vector4((const Dali::Vector4 &)result);
    return jresult;
  }

#ifdef __cplusplus
}
#endif
