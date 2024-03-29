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
#include <dali-extension/devel-api/rive-animation-view/rive-animation-view.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

using namespace Dali;
using namespace Dali::Toolkit;
using namespace Dali::Extension;

#ifdef __cplusplus
extern "C" {
#endif

static const char *nullExceptMsg = "Attempt to dereference null Dali::Extension::RiveAnimationView";

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_RiveAnimationView_New__SWIG_0(char * jarg1) {
  void *jresult = nullptr;
  RiveAnimationView result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  {
    try {
      result = RiveAnimationView::New(arg1_str);
      jresult = new Dali::Extension::RiveAnimationView((const Dali::Extension::RiveAnimationView &)result);
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RiveAnimationView_EnableAnimation(char * jarg1, char * jarg2, bool jarg3) {
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  {
    try {
      arg1->EnableAnimation(arg2_str, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RiveAnimationView_PlayAnimation(char * jarg1) {
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  {
    try {
      arg1->PlayAnimation();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RiveAnimationView_PauseAnimation(char * jarg1) {
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  {
    try {
      arg1->PauseAnimation();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RiveAnimationView_StopAnimation(char * jarg1) {
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  {
    try {
      arg1->StopAnimation();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_SetShapeFillColor(char * jarg1, char * jarg2, char * jarg3)
{
  Dali::Vector4 *arg3 = nullptr;

  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  arg3 = (Dali::Vector4 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return;
  }
  arg3->a *= 255.f;
  arg3->r *= 255.f;
  arg3->g *= 255.f;
  arg3->b *= 255.f;
  {
    try {
      arg1->SetShapeFillColor(arg2_str, *arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_SetShapeStrokeColor(char * jarg1, char * jarg2, char * jarg3)
{
  Dali::Vector4 *arg3 = nullptr;

  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  arg3 = (Dali::Vector4 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector4 const & type is null", 0);
    return;
  }
  arg3->a *= 255.f;
  arg3->r *= 255.f;
  arg3->g *= 255.f;
  arg3->b *= 255.f;
  {
    try {
      arg1->SetShapeStrokeColor(arg2_str, *arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_SetNodeOpacity(char * jarg1, char * jarg2, float jarg3)
{
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  {
    try {
      arg1->SetNodeOpacity(arg2_str, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_SetNodeScale(char * jarg1, char * jarg2, char * jarg3)
{
  Dali::Vector2 *arg3 = nullptr;

  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  arg3 = (Dali::Vector2 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return;
  }
  {
    try {
      arg1->SetNodeScale(arg2_str, *arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_SetNodeRotation(char * jarg1, char * jarg2, char * jarg3)
{
  Dali::Degree *arg3 = nullptr;

  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  arg3 = (Dali::Degree *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Degree const & type is null", 0);
    return;
  }
  {
    try {
      arg1->SetNodeRotation(arg2_str, *arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_SetNodePosition(char * jarg1, char * jarg2, char * jarg3)
{
  Dali::Vector2 *arg3 = nullptr;

  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  arg3 = (Dali::Vector2 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 const & type is null", 0);
    return;
  }
  {
    try {
      arg1->SetNodePosition(arg2_str, *arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_PointerMove(char * jarg1, float jarg2, float jarg3)
{
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  {
    try {
      arg1->PointerMove(jarg2, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_PointerDown(char * jarg1, float jarg2, float jarg3)
{
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  {
    try {
      arg1->PointerDown(jarg2, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_PointerUp(char * jarg1, float jarg2, float jarg3)
{
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  {
    try {
      arg1->PointerUp(jarg2, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool CSharp_Dali_RiveAnimationView_SetNumberState(char * jarg1, char * jarg2, char * jarg3, float jarg4)
{
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return false;
  }
  std::string arg2_str(jarg2);
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg3 is null string", 0);
    return false;
  }
  std::string arg3_str(jarg3);
  {
    try {
      return arg1->SetNumberState(arg2_str, arg3_str, jarg4);
    }
    CALL_CATCH_EXCEPTION(false);
  }
}

SWIGEXPORT bool CSharp_Dali_RiveAnimationView_SetBooleanState(char * jarg1, char * jarg2, char * jarg3, bool jarg4)
{
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return false;
  }
  std::string arg2_str(jarg2);
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg3 is null string", 0);
    return false;
  }
  std::string arg3_str(jarg3);
  {
    try {
      return arg1->SetBooleanState(arg2_str, arg3_str, jarg4);
    }
    CALL_CATCH_EXCEPTION(false);
  }
}

SWIGEXPORT bool CSharp_Dali_RiveAnimationView_FireState(char * jarg1, char * jarg2, char * jarg3)
{
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return false;
  }
  std::string arg2_str(jarg2);
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg3 is null string", 0);
    return false;
  }
  std::string arg3_str(jarg3);
  {
    try {
      return arg1->FireState(arg2_str, arg3_str);
    }
    CALL_CATCH_EXCEPTION(false);
  }
}

SWIGEXPORT void CSharp_Dali_RiveAnimationView_SetAnimationElapsedTime(char * jarg1, char * jarg2, float jarg3)
{
  RiveAnimationView *arg1 = (RiveAnimationView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  {
    try {
      arg1->SetAnimationElapsedTime(arg2_str, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
} // end extern "C"
#endif
