/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
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
#include <widget_viewer_dali/public_api/widget_view_manager/widget_view_manager.h>
#include <widget_viewer_dali/public_api/widget_view/widget_view.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C"
{
#endif

  SWIGEXPORT Dali::BaseHandle *SWIGSTDCALL CSharp_Dali_WidgetViewManager_SWIGUpcast(Dali::WidgetView::WidgetViewManager *jarg1)
  {
    return (Dali::BaseHandle *)jarg1;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WidgetViewManager_New(void *jarg1, char *jarg2)
  {
    void *jresult;
    Dali::Application arg1;
    std::string *arg2 = 0;
    Dali::Application *argp1;
    Dali::WidgetView::WidgetViewManager result;

    argp1 = (Dali::Application *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Application", 0);
      return 0;
    }
    arg1 = *argp1;
    if (!jarg2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg2_str(jarg2);
    arg2 = &arg2_str;
    {
      try
      {
        result = Dali::WidgetView::WidgetViewManager::New(arg1, (std::string const &)*arg2);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::WidgetView::WidgetViewManager((const Dali::WidgetView::WidgetViewManager &)result);

    //argout typemap for const std::string&

    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WidgetViewManager_DownCast(void *jarg1)
  {
    void *jresult;
    Dali::BaseHandle arg1;
    Dali::BaseHandle *argp1;
    Dali::WidgetView::WidgetViewManager result;

    argp1 = (Dali::BaseHandle *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
      return 0;
    }
    arg1 = *argp1;
    {
      try
      {
        result = Dali::WidgetView::WidgetViewManager::DownCast(arg1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::WidgetView::WidgetViewManager((const Dali::WidgetView::WidgetViewManager &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_WidgetViewManager__SWIG_0()
  {
    void *jresult;
    Dali::WidgetView::WidgetViewManager *result = 0;

    {
      try
      {
        result = (Dali::WidgetView::WidgetViewManager *)new Dali::WidgetView::WidgetViewManager();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_WidgetViewManager__SWIG_1(void *jarg1)
  {
    void *jresult;
    Dali::WidgetView::WidgetViewManager *arg1 = 0;
    Dali::WidgetView::WidgetViewManager *result = 0;

    arg1 = (Dali::WidgetView::WidgetViewManager *)jarg1;
    if (!arg1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetView::WidgetViewManager const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::WidgetView::WidgetViewManager *)new Dali::WidgetView::WidgetViewManager((Dali::WidgetView::WidgetViewManager const &)*arg1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WidgetViewManager_Assign(void *jarg1, void *jarg2)
  {
    void *jresult;
    Dali::WidgetView::WidgetViewManager *arg1 = (Dali::WidgetView::WidgetViewManager *)0;
    Dali::WidgetView::WidgetViewManager *arg2 = 0;
    Dali::WidgetView::WidgetViewManager *result = 0;

    arg1 = (Dali::WidgetView::WidgetViewManager *)jarg1;
    arg2 = (Dali::WidgetView::WidgetViewManager *)jarg2;
    if (!arg2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetView::WidgetViewManager const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::WidgetView::WidgetViewManager *)&(arg1)->operator=((Dali::WidgetView::WidgetViewManager const &)*arg2);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetViewManager(void *jarg1)
  {
    Dali::WidgetView::WidgetViewManager *arg1 = (Dali::WidgetView::WidgetViewManager *)0;

    arg1 = (Dali::WidgetView::WidgetViewManager *)jarg1;
    {
      try
      {
        delete arg1;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WidgetViewManager_AddWidget(void *jarg1, char *jarg2, char *jarg3, int jarg4, int jarg5, float jarg6)
  {
    void *jresult;
    Dali::WidgetView::WidgetViewManager *arg1 = (Dali::WidgetView::WidgetViewManager *)0;
    std::string *arg2 = 0;
    std::string *arg3 = 0;
    int arg4;
    int arg5;
    float arg6;
    Dali::WidgetView::WidgetView result;

    arg1 = (Dali::WidgetView::WidgetViewManager *)jarg1;
    if (!jarg2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg2_str(jarg2);
    arg2 = &arg2_str;
    if (!jarg3)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg3_str(jarg3);
    arg3 = &arg3_str;
    arg4 = (int)jarg4;
    arg5 = (int)jarg5;
    arg6 = (float)jarg6;
    {
      try
      {
        result = (arg1)->AddWidget((std::string const &)*arg2, (std::string const &)*arg3, arg4, arg5, arg6);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::WidgetView::WidgetView((const Dali::WidgetView::WidgetView &)result);
    return jresult;
  }

  SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WidgetViewManager_RemoveWidget(void *jarg1, void *jarg2)
  {
    bool jresult;
    Dali::WidgetView::WidgetViewManager *widgetViewManager = (Dali::WidgetView::WidgetViewManager *)0;
    Dali::WidgetView::WidgetView *widgetView = (Dali::WidgetView::WidgetView *)0;
    bool result;

    widgetViewManager = (Dali::WidgetView::WidgetViewManager *)jarg1;
    widgetView = (Dali::WidgetView::WidgetView *)jarg2;
    {
      try
      {
        result = (widgetViewManager)->RemoveWidget(*widgetView);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;
    return jresult;
  }
#ifdef __cplusplus
}
#endif
