/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/actors/actor-devel.h>
#include <dali-toolkit/dali-toolkit.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-label-devel.h>
#include <dali/integration-api/debug.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C"
{
#endif

  typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
  extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

  enum InternalPropertyReturnType
  {
    NO_ERROR = 0,
    ERROR_UNKNOWN = 1,
    ERROR_IMPOSSIBLE_SET = 2,
  };

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyVector2(void *actor, int propertyType, void *vector2)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Vector2 *pVector2 = (Dali::Vector2 *)vector2;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector2)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector2 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      pActor->SetProperty((Dali::Property::Index)propertyType, *pVector2);
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyVector3(void *actor, int propertyType, void *vector3)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Vector3 *pVector3 = (Dali::Vector3 *)vector3;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector3)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector3 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      pActor->SetProperty((Dali::Property::Index)propertyType, *pVector3);
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyVector4(void *actor, int propertyType, void *vector4)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Vector4 *pVector4 = (Dali::Vector4 *)vector4;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector4)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector4 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      pActor->SetProperty((Dali::Property::Index)propertyType, *pVector4);
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyVector2ActualVector3(void *actor, int propertyType, void *vector2)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Vector2 *pVector2 = (Dali::Vector2 *)vector2;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector2)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector2 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      pActor->SetProperty((Dali::Property::Index)propertyType, Dali::Vector3(pVector2->x, pVector2->y, 0));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyFloat(void *actor, int propertyType, float valFloat)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      pActor->SetProperty((Dali::Property::Index)propertyType, valFloat);
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyBool(void *actor, int propertyType, bool valBool)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      pActor->SetProperty((Dali::Property::Index)propertyType, valBool);
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyString(void *actor, int propertyType, char *valString)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!valString)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valString is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      pActor->SetProperty((Dali::Property::Index)propertyType, (std::string const &)std::string(valString));
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyInt(void *actor, int propertyType, int valInt)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      pActor->SetProperty((Dali::Property::Index)propertyType, valInt);
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyVector2(void *actor, int propertyType, void *retrievingVector2)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Vector2 *pVector2 = (Dali::Vector2 *)retrievingVector2;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector2)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector2 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Vector2 result;
      result = ((Dali::Actor const *)pActor)->GetProperty<Dali::Vector2>((Dali::Property::Index)propertyType);
      pVector2->x = result.x;
      pVector2->y = result.y;
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyVector3(void *actor, int propertyType, void *retrievingVector3)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Vector3 *pVector3 = (Dali::Vector3 *)retrievingVector3;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector3)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector3 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Vector3 result;
      result = ((Dali::Actor const *)pActor)->GetProperty<Dali::Vector3>((Dali::Property::Index)propertyType);
      pVector3->x = result.x;
      pVector3->y = result.y;
      pVector3->z = result.z;
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyVector4(void *actor, int propertyType, void *retrievingVector4)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Vector4 *pVector4 = (Dali::Vector4 *)retrievingVector4;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector4)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector4 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Vector4 result;
      result = ((Dali::Actor const *)pActor)->GetProperty<Dali::Vector4>((Dali::Property::Index)propertyType);
      pVector4->x = result.x;
      pVector4->y = result.y;
      pVector4->z = result.z;
      pVector4->w = result.w;
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyVector2ActualVector3(void *actor, int propertyType, void *retrievingVector2)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Vector2 *pVector2 = (Dali::Vector2 *)retrievingVector2;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!pVector2)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector2 is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      Dali::Vector3 result;
      result = ((Dali::Actor const *)pActor)->GetProperty<Dali::Vector3>((Dali::Property::Index)propertyType);
      pVector2->x = result.x;
      pVector2->y = result.y;
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyFloat(void *actor, int propertyType, float *valFloat)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }
    if (!valFloat)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valFloat is null!");
      return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
    }

    try
    {
      *valFloat = ((Dali::Actor const *)pActor)->GetProperty<float>((Dali::Property::Index)propertyType);
    }
    CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

    return (int)InternalPropertyReturnType::NO_ERROR;
  }

  SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Actor_InternalGetPropertyFloat(void *actor, int propertyType)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    float ret = 0;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return ret;
    }

    try
    {
      ret = ((Dali::Actor const *)pActor)->GetProperty<float>((Dali::Property::Index)propertyType);
    }
    CALL_CATCH_EXCEPTION(ret);

    return ret;
  }

  SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_InternalGetPropertyBool(void *actor, int propertyType)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    bool ret = false;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return ret;
    }

    try
    {
      ret = ((Dali::Actor const *)pActor)->GetProperty<bool>((Dali::Property::Index)propertyType);
    }
    CALL_CATCH_EXCEPTION(ret);

    return ret;
  }

  SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Actor_InternalGetPropertyString(void *actor, int propertyType)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    std::string result = "";
    char *ret = nullptr;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return ret;
    }

    try
    {
      result = ((Dali::Actor const *)pActor)->GetProperty<std::string>((Dali::Property::Index)propertyType);
      ret = SWIG_csharp_string_callback(result.c_str());
    }
    CALL_CATCH_EXCEPTION(ret);

    return ret;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalGetPropertyInt(void *actor, int propertyType)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    int ret = 0;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return ret;
    }

    try
    {
      ret = ((Dali::Actor const *)pActor)->GetProperty<int>((Dali::Property::Index)propertyType);
    }
    CALL_CATCH_EXCEPTION(ret);

    return ret;
  }

#ifdef __cplusplus
}
#endif
