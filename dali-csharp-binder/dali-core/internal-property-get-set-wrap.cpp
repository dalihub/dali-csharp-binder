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
#include <dali/dali.h>
#include <dali/devel-api/actors/actor-devel.h>
#include <dali/integration-api/debug.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

enum InternalPropertyReturnType
{
  NO_ERROR             = 0,
  ERROR_UNKNOWN        = 1,
  ERROR_IMPOSSIBLE_SET = 2,
};

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyVector2(void* actor, int propertyType, void* vector2)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector2* pVector2 = (Dali::Vector2*)vector2;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector2)
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetProperty2FloatValues(void* actor, int propertyType, float x, float y)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector2 vector2(x, y);
    pActor->SetProperty((Dali::Property::Index)propertyType, vector2);
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyVector3(void* actor, int propertyType, void* vector3)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector3* pVector3 = (Dali::Vector3*)vector3;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector3)
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetProperty3FloatValues(void* actor, int propertyType, float x, float y, float z)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 vector3(x, y, z);
    pActor->SetProperty((Dali::Property::Index)propertyType, vector3);
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyVector4(void* actor, int propertyType, void* vector4)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector4* pVector4 = (Dali::Vector4*)vector4;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector4)
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetProperty4FloatValues(void* actor, int propertyType, float x, float y, float z, float w)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector4 vector4(x, y, z, w);
    pActor->SetProperty((Dali::Property::Index)propertyType, vector4);
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyVector2ActualVector3(void* actor, int propertyType, void* vector2)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector2* pVector2 = (Dali::Vector2*)vector2;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector2)
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyExtents(void* actor, int propertyType, void* extents)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Extents* pExtents = (Dali::Extents*)extents;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pExtents)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "extents is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    pActor->SetProperty((Dali::Property::Index)propertyType, *pExtents);
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyFloat(void* actor, int propertyType, float valFloat)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyBool(void* actor, int propertyType, bool valBool)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyString(void* actor, int propertyType, char* valString)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!valString)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valString is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    pActor->SetProperty((Dali::Property::Index)propertyType, (Dali::String const&)Dali::String(valString));
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyInt(void* actor, int propertyType, int valInt)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalSetPropertyMap(void* actor, int propertyType, void* map)
{
  Dali::Handle*        pActor = (Dali::Handle*)actor;
  Dali::Property::Map* pMap   = (Dali::Property::Map*)map;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pMap)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "map is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    pActor->SetProperty((Dali::Property::Index)propertyType, Dali::Property::Value(*pMap));
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyVector2(void* actor, int propertyType, void* retrievingVector2)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector2* pVector2 = (Dali::Vector2*)retrievingVector2;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector2)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector2 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector2 result;
    result      = ((Dali::Handle const*)pActor)->GetProperty<Dali::Vector2>((Dali::Property::Index)propertyType);
    pVector2->x = result.x;
    pVector2->y = result.y;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingProperty2FloatValues(void* actor, int propertyType, float* x, float* y)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!x)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "x is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!y)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "y is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector2 result;
    result = ((Dali::Handle const*)pActor)->GetProperty<Dali::Vector2>((Dali::Property::Index)propertyType);
    *x     = result.x;
    *y     = result.y;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyVector3(void* actor, int propertyType, void* retrievingVector3)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector3* pVector3 = (Dali::Vector3*)retrievingVector3;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector3)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector3 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 result;
    result      = ((Dali::Handle const*)pActor)->GetProperty<Dali::Vector3>((Dali::Property::Index)propertyType);
    pVector3->x = result.x;
    pVector3->y = result.y;
    pVector3->z = result.z;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingProperty3FloatValues(void* actor, int propertyType, float* x, float* y, float* z)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!x)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "x is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!y)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "y is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!z)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "z is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 result;
    result = ((Dali::Handle const*)pActor)->GetProperty<Dali::Vector3>((Dali::Property::Index)propertyType);
    *x     = result.x;
    *y     = result.y;
    *z     = result.z;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyVector4(void* actor, int propertyType, void* retrievingVector4)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector4* pVector4 = (Dali::Vector4*)retrievingVector4;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector4)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector4 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector4 result;
    result      = ((Dali::Handle const*)pActor)->GetProperty<Dali::Vector4>((Dali::Property::Index)propertyType);
    pVector4->x = result.x;
    pVector4->y = result.y;
    pVector4->z = result.z;
    pVector4->w = result.w;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingProperty4FloatValues(void* actor, int propertyType, float* x, float* y, float* z, float* w)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!x)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "x is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!y)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "y is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!z)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "z is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!w)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "w is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector4 result;
    result = ((Dali::Handle const*)pActor)->GetProperty<Dali::Vector4>((Dali::Property::Index)propertyType);
    *x     = result.x;
    *y     = result.y;
    *z     = result.z;
    *w     = result.w;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyVector2ActualVector3(void* actor, int propertyType, void* retrievingVector2)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector2* pVector2 = (Dali::Vector2*)retrievingVector2;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector2)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector2 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 result;
    result      = ((Dali::Handle const*)pActor)->GetProperty<Dali::Vector3>((Dali::Property::Index)propertyType);
    pVector2->x = result.x;
    pVector2->y = result.y;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyExtents(void* actor, int propertyType, void* retrievingExtents)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Extents* pExtents = (Dali::Extents*)retrievingExtents;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pExtents)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "extents is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Extents result;
    result           = ((Dali::Handle const*)pActor)->GetProperty<Dali::Extents>((Dali::Property::Index)propertyType);
    pExtents->start  = result.start;
    pExtents->end    = result.end;
    pExtents->top    = result.top;
    pExtents->bottom = result.bottom;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalRetrievingPropertyFloat(void* actor, int propertyType, float* valFloat)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!valFloat)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "valFloat is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    *valFloat = ((Dali::Handle const*)pActor)->GetProperty<float>((Dali::Property::Index)propertyType);
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Actor_InternalGetPropertyFloat(void* actor, int propertyType)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;
  float         ret    = 0;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return ret;
  }

  try
  {
    ret = ((Dali::Handle const*)pActor)->GetProperty<float>((Dali::Property::Index)propertyType);
  }
  CALL_CATCH_EXCEPTION(ret);

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_InternalGetPropertyBool(void* actor, int propertyType)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;
  bool          ret    = false;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return ret;
  }

  try
  {
    ret = ((Dali::Handle const*)pActor)->GetProperty<bool>((Dali::Property::Index)propertyType);
  }
  CALL_CATCH_EXCEPTION(ret);

  return ret;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Actor_InternalGetPropertyString(void* actor, int propertyType)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;
  Dali::String  result = "";
  char*         ret    = nullptr;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return ret;
  }

  try
  {
    result = ((Dali::Handle const*)pActor)->GetProperty<Dali::String>((Dali::Property::Index)propertyType);
    ret    = SWIG_csharp_string_callback(result.CStr());
  }
  CALL_CATCH_EXCEPTION(ret);

  return ret;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_InternalGetPropertyInt(void* actor, int propertyType)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;
  int           ret    = 0;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return ret;
  }

  try
  {
    ret = ((Dali::Handle const*)pActor)->GetProperty<int>((Dali::Property::Index)propertyType);
  }
  CALL_CATCH_EXCEPTION(ret);

  return ret;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_RetrieveTargetSize(void* actor, void* retrievingVector3)
{
  Dali::Actor*   pActor   = (Dali::Actor*)actor;
  Dali::Vector3* pVector3 = (Dali::Vector3*)retrievingVector3;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector3)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector3 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 result;
    result      = ((Dali::Actor const*)pActor)->GetTargetSize();
    pVector3->x = result.x;
    pVector3->y = result.y;
    pVector3->z = result.z;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_RetrieveCurrentPropertyVector3(void* actor, int propertyType, void* retrievingVector3)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector3* pVector3 = (Dali::Vector3*)retrievingVector3;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector3)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector3 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 result;
    result      = ((Dali::Handle const*)pActor)->GetCurrentProperty<Dali::Vector3>((Dali::Property::Index)propertyType);
    pVector3->x = result.x;
    pVector3->y = result.y;
    pVector3->z = result.z;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_RetrieveCurrentProperty3FloatValues(void* actor, int propertyType, float* x, float* y, float* z)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!x)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "x is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!y)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "y is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!z)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "z is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 result;
    result = ((Dali::Handle const*)pActor)->GetCurrentProperty<Dali::Vector3>((Dali::Property::Index)propertyType);
    *x     = result.x;
    *y     = result.y;
    *z     = result.z;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_RetrieveCurrentPropertyVector2ActualVector3(void* actor, int propertyType, void* retrievingVector2)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector2* pVector2 = (Dali::Vector2*)retrievingVector2;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector2)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector2 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 result;
    result      = ((Dali::Handle const*)pActor)->GetCurrentProperty<Dali::Vector3>((Dali::Property::Index)propertyType);
    pVector2->x = result.x;
    pVector2->y = result.y;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_RetrieveNaturalSize(void* actor, void* retrievingVector3)
{
  Dali::Actor*   pActor   = (Dali::Actor*)actor;
  Dali::Vector3* pVector3 = (Dali::Vector3*)retrievingVector3;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector3)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector3 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector3 result;
    result      = ((Dali::Actor const*)pActor)->GetNaturalSize();
    pVector3->x = result.x;
    pVector3->y = result.y;
    pVector3->z = result.z;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_RetrieveCurrentPropertyVector4(void* actor, int propertyType, void* retrievingVector4)
{
  Dali::Handle*  pActor   = (Dali::Handle*)actor;
  Dali::Vector4* pVector4 = (Dali::Vector4*)retrievingVector4;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }
  if(!pVector4)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "vector4 is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector4 result;
    result      = ((Dali::Handle const*)pActor)->GetCurrentProperty<Dali::Vector4>((Dali::Property::Index)propertyType);
    pVector4->x = result.x;
    pVector4->y = result.y;
    pVector4->z = result.z;
    pVector4->w = result.w;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Actor_RetrieveCurrentProperty4FloatValues(void* actor, int propertyType, float* x, float* y, float* z, float* w)
{
  Dali::Handle* pActor = (Dali::Handle*)actor;

  if(!pActor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!x)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "x is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!y)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "y is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!z)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "z is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  if(!w)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "w is null!");
    return (int)InternalPropertyReturnType::ERROR_UNKNOWN;
  }

  try
  {
    Dali::Vector4 result;
    result = ((Dali::Handle const*)pActor)->GetCurrentProperty<Dali::Vector4>((Dali::Property::Index)propertyType);
    *x     = result.x;
    *y     = result.y;
    *z     = result.z;
    *w     = result.w;
  }
  CALL_CATCH_EXCEPTION((int)InternalPropertyReturnType::ERROR_UNKNOWN);

  return (int)InternalPropertyReturnType::NO_ERROR;
}
#ifdef __cplusplus
}
#endif
