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

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C"
{
#endif

  enum InternalGetSetValueType
  {
    CURRENT_SIZE = 1,
    SIZE = 2,
    TEXT_FIT = 3,
  };

  enum InternalGetSetReturnType
  {
    NO_ERROR = 0,
    ERROR_UNKNOWN = 1,
    ERROR_IMPOSSIBLE_SET = 2,
  };

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Internal_Get_Values(void *actor,
                                                                   int type,
                                                                   float *value1,
                                                                   float *value2,
                                                                   float *value3,
                                                                   float *value4)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalGetSetReturnType::ERROR_UNKNOWN;
    }

    try
    {
      switch ((InternalGetSetValueType)type)
      {
      case InternalGetSetValueType::CURRENT_SIZE:
      {
        Dali::Vector3 result;
        result = ((Dali::Actor const *)pActor)->GetCurrentProperty<Dali::Vector3>(Dali::Actor::Property::SIZE);
        *value1 = result.width;
        *value2 = result.width;
        return (int)InternalGetSetReturnType::NO_ERROR;
        break;
      }

      case InternalGetSetValueType::SIZE:
      {
        Dali::Vector3 result;
        result = ((Dali::Actor const *)pActor)->GetProperty<Dali::Vector3>(Dali::Actor::Property::SIZE);
        *value1 = result.width;
        *value2 = result.width;
        *value3 = result.depth;
        return (int)InternalGetSetReturnType::NO_ERROR;
        break;
      }

      default:
      {
        break;
      }
      }
    }
    CALL_CATCH_EXCEPTION(0);
    return (int)InternalGetSetReturnType::ERROR_UNKNOWN;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Internal_Set_Values(void *actor,
                                                                   int type,
                                                                   float value1,
                                                                   float value2,
                                                                   float value3,
                                                                   float value4)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalGetSetReturnType::ERROR_UNKNOWN;
    }

    try
    {
      switch ((InternalGetSetValueType)type)
      {
      case InternalGetSetValueType::SIZE:
      {
        pActor->SetProperty(Dali::Actor::Property::SIZE, Dali::Vector3(value1, value2, value3));
        return (int)InternalGetSetReturnType::NO_ERROR;
        break;
      }

      default:
      {
        return (int)InternalGetSetReturnType::ERROR_IMPOSSIBLE_SET;
        break;
      }
      }
    }
    CALL_CATCH_EXCEPTION(0);
    return (int)InternalGetSetReturnType::ERROR_UNKNOWN;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Actor_Internal_Get_PropertyMap(void *actor, int type)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return nullptr;
    }

    try
    {
      switch ((InternalGetSetValueType)type)
      {
      case InternalGetSetValueType::TEXT_FIT:
      {
        Dali::Property::Map map = pActor->GetProperty<Dali::Property::Map>(Dali::Toolkit::DevelTextLabel::Property::TEXT_FIT);
        return new Dali::Property::Map((const Dali::Property::Map &)map);
        break;
      }

      default:
      {
        return nullptr;
        break;
      }
      }
    }
    CALL_CATCH_EXCEPTION(0);
    return nullptr;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_Internal_Set_PropertyMap(void *actor, int type, void *propertyMap)
  {
    Dali::Actor *pActor = (Dali::Actor *)actor;
    Dali::Property::Map *pMap = (Dali::Property::Map *)propertyMap;

    if (!pActor)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
      return (int)InternalGetSetReturnType::ERROR_UNKNOWN;
    }
    if (!pMap)
    {
      SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "propertyMap is null!");
      return (int)InternalGetSetReturnType::ERROR_UNKNOWN;
    }

    try
    {
      switch ((InternalGetSetValueType)type)
      {
      case InternalGetSetValueType::TEXT_FIT:
      {
        Dali::Toolkit::TextLabel text = Dali::Toolkit::TextLabel::DownCast(*pActor);
        text.SetProperty(Dali::Toolkit::DevelTextLabel::Property::TEXT_FIT, *pMap);
        return (int)InternalGetSetReturnType::NO_ERROR;
        break;
      }

      default:
      {
        return (int)InternalGetSetReturnType::ERROR_IMPOSSIBLE_SET;
        break;
      }
      }
    }
    CALL_CATCH_EXCEPTION(0);
    return (int)InternalGetSetReturnType::ERROR_UNKNOWN;
  }

#ifdef __cplusplus
}
#endif
