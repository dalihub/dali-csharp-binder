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
#include <dali-toolkit/public-api/controls/control.h>
#include <dali-toolkit/public-api/controls/text-controls/text-label.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle* SWIGSTDCALL CSharp_Dali_WidgetViewManager_SWIGUpcast(Dali::BaseHandle* jarg1)
{
  return (Dali::BaseHandle*)jarg1;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetViewManager_New(void* jarg1, char* jarg2)
{
  void* jresult;
  Dali::BaseHandle result;

  {
    try
    {
      result = Dali::BaseHandle();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::BaseHandle((const Dali::BaseHandle&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetViewManager_DownCast(void* jarg1)
{
  void* jresult;
  Dali::BaseHandle arg1;
  Dali::BaseHandle* argp1;
  Dali::BaseHandle result;

  argp1 = (Dali::BaseHandle*)jarg1;
  if(!argp1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try
    {
      result = arg1;
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::BaseHandle((const Dali::BaseHandle&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WidgetViewManager__SWIG_1(void* jarg1)
{
  void* jresult;
  Dali::BaseHandle* arg1 = 0;
  Dali::BaseHandle* result = 0;

  arg1 = (Dali::BaseHandle*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::BaseHandle const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::BaseHandle*)new Dali::BaseHandle((Dali::BaseHandle const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetViewManager_Assign(void* jarg1, void* jarg2)
{
  void* jresult;
  Dali::BaseHandle* arg1 = (Dali::BaseHandle*)0;
  Dali::BaseHandle* arg2 = 0;
  Dali::BaseHandle* result = 0;

  arg1 = (Dali::BaseHandle*)jarg1;
  arg2 = (Dali::BaseHandle*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::BaseHandle const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::BaseHandle*)&(arg1)->operator=((Dali::BaseHandle const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetViewManager(void* jarg1)
{
  Dali::BaseHandle* arg1 = (Dali::BaseHandle*)0;
  arg1 = (Dali::BaseHandle*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WidgetViewManager_AddWidget(void* jarg1, char* jarg2, char* jarg3, int jarg4, int jarg5, float jarg6)
{
  void* jresult;
  Dali::Toolkit::Control result;

  {
    try
    {
      result = Dali::Toolkit::Control::New();
      result.SetProperty(Dali::Actor::Property::SIZE, Dali::Vector2(static_cast<float>(jarg4), static_cast<float>(jarg5)));
      result.SetBackgroundColor(Dali::Vector4(0.7f, 0.7f, 0.7f, 1.0f));

      Dali::Toolkit::TextLabel textLabel = Dali::Toolkit::TextLabel::New("Widget(Not Support)");
      textLabel.SetProperty(Dali::Actor::Property::ANCHOR_POINT, Dali::AnchorPoint::TOP_LEFT);
      textLabel.SetProperty(Dali::Actor::Property::NAME, "helloWorldLabel");
      result.Add(textLabel);
      DALI_LOG_RELEASE_INFO("Add Widget, but Ubutu backend can't support Widget Feature. So we just show dummy Widget(%fx%f)",static_cast<float>(jarg4), static_cast<float>(jarg5));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control&)result);
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WidgetViewManager_RemoveWidget(void* jarg1, void* jarg2) { return true; }

#ifdef __cplusplus
}
#endif
