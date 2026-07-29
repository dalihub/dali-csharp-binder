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
#include <dali/public-api/actors/actor.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_SetAnnotation(void* actor, char* annotationId, char* annotationType, char* annotationInfo)
{
  Dali::Actor* daliActor = (Dali::Actor*)0;

  if(!actor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return;
  }

  daliActor = (Dali::Actor*)actor;
  if(!annotationId)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  if(!annotationType)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  if(!annotationInfo)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  {
    try
    {
      daliActor->SetAnnotation(annotationId, annotationType, annotationInfo);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Actor_ClearAnnotation(void* actor)
{
  Dali::Actor* daliActor = (Dali::Actor*)0;

  if(!actor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return;
  }

  daliActor = (Dali::Actor*)actor;
  {
    try
    {
      daliActor->ClearAnnotation();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Actor_GetAnnotation(void* actor, char** annotationId, char** annotationType, char** annotationInfo)
{
  bool         hasAnnotation;
  Dali::Actor* daliActor = (Dali::Actor*)0;
  bool         result;

  if(!actor)
  {
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_CSharpArgumentNullException, "actor is null!");
    return false;
  }
  if(!annotationId || !annotationType || !annotationInfo)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  daliActor = (Dali::Actor*)actor;

  //typemap in
  Dali::String nativeAnnotationId;
  Dali::String nativeAnnotationType;
  Dali::String nativeAnnotationInfo;
  {
    try
    {
      result = (bool)((Dali::Actor const*)daliActor)->GetAnnotation(nativeAnnotationId, nativeAnnotationType, nativeAnnotationInfo);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  hasAnnotation = result;

  //Typemap argout in c++ file.
  //This will convert c++ string to c# string
  if(result)
  {
    *annotationId   = SWIG_csharp_string_callback(nativeAnnotationId.CStr());
    *annotationType = SWIG_csharp_string_callback(nativeAnnotationType.CStr());
    *annotationInfo = SWIG_csharp_string_callback(nativeAnnotationInfo.CStr());
  }
  else
  {
    *annotationId   = 0;
    *annotationType = 0;
    *annotationInfo = 0;
  }

  return hasAnnotation;
}

#ifdef __cplusplus
}
#endif
