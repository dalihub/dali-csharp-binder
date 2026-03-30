/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/dali-toolkit.h>
#include <dali-toolkit/devel-api/controls/web-view/web-back-forward-list.h>
#include <dali-toolkit/devel-api/controls/web-view/web-settings.h>
#include <dali-toolkit/devel-api/controls/web-view/web-view.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-back-forward-list-item.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-certificate.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-console-message.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-context-menu-item.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-context-menu.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-context.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-cookie-manager.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-device-list-get.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-file-chooser-request.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-form-repost-decision.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-frame.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-hit-test.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-http-auth-handler.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-load-error.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-policy-decision.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-request-interceptor.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-security-origin.h>
#include <dali/devel-api/adaptor-framework/web-engine/web-engine-user-media-permission-request.h>
#include <dali/public-api/common/dali-common.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

//----------------------------------WebView---------------------------------------------------
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_New()
{
  void*                  jresult;
  Dali::Toolkit::WebView result;

  {
    try
    {
      result = Dali::Toolkit::WebView::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_New_2(char* jarg1, char* jarg2)
{
  void*                  jresult;
  Dali::Toolkit::WebView result;

  std::string* arg1;
  std::string* arg2;

  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg1 is null string", 0);
    return 0;
  }
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return 0;
  }

  std::string jarg1_str = std::string(jarg1);
  std::string jarg2_str = std::string(jarg2);

  arg1 = &jarg1_str;
  arg2 = &jarg2_str;

  {
    try
    {
      result = Dali::Toolkit::WebView::New((std::string const&)*arg1, (std::string const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_New_3(uint32_t jarg1, char** jarg2)
{
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return 0;
  }

  Dali::Toolkit::WebView result;
  {
    try
    {
      result = Dali::Toolkit::WebView::New(jarg1, jarg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  void* jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_New_4(uint32_t argc, char** argv, int32_t type)
{
  if(!argv)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "argv is null string", 0);
    return 0;
  }

  Dali::Toolkit::WebView result;
  {
    try
    {
      result = Dali::Toolkit::WebView::New(argc, argv, type);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  void* jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetContext(bool isIncognito)
{
  void*                   jresult;
  Dali::WebEngineContext* result = 0;

  {
    try
    {
      result = Dali::Toolkit::WebView::GetContext(isIncognito);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetCookieManager(bool isIncognito)
{
  void*                         jresult;
  Dali::WebEngineCookieManager* result = 0;

  {
    try
    {
      result = Dali::Toolkit::WebView::GetCookieManager(isIncognito);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WebView__SWIG_1(void* jarg1)
{
  void*                   jresult;
  Dali::Toolkit::WebView* arg1   = 0;
  Dali::Toolkit::WebView* result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebView const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Toolkit::WebView*)new Dali::Toolkit::WebView((Dali::Toolkit::WebView const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebView(void* jarg1)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  arg1                         = (Dali::Toolkit::WebView*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_Assign(void* webObj, void* jarg2)
{
  void*                   jresult;
  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)0;
  Dali::Toolkit::WebView* arg2   = 0;
  Dali::Toolkit::WebView* result = 0;

  WEBOBJ_NULL_CHECK(nullptr);

  arg1 = (Dali::Toolkit::WebView*)webObj;
  arg2 = (Dali::Toolkit::WebView*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebView const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Toolkit::WebView*)&(arg1)->operator=((Dali::Toolkit::WebView const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_DownCast(void* jarg1)
{
  void*                  jresult;
  Dali::BaseHandle       arg1;
  Dali::BaseHandle*      argp1;
  Dali::Toolkit::WebView result;

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
      result = Dali::Toolkit::WebView::DownCast(arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetBackForwardList(void* webObj)
{
  void*                              jresult;
  Dali::Toolkit::WebView*            arg1   = (Dali::Toolkit::WebView*)0;
  Dali::Toolkit::WebBackForwardList* result = 0;

  WEBOBJ_NULL_CHECK(nullptr);

  arg1 = (Dali::Toolkit::WebView*)webObj;

  {
    try
    {
      result = arg1->GetBackForwardList();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_IsIncognito(void* webObj)
{
  void*                   jresult;
  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)0;
  bool                    result = false;

  WEBOBJ_NULL_CHECK(false);

  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      result = arg1->IsIncognito();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ChangeOrientation(void* webObj, int orientation)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)webObj;

  {
    try
    {
      arg1->ChangeOrientation(orientation);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetSettings(void* webObj)
{
  void*                       jresult;
  Dali::Toolkit::WebView*     arg1   = (Dali::Toolkit::WebView*)0;
  Dali::Toolkit::WebSettings* result = 0;

  WEBOBJ_NULL_CHECK(nullptr);

  arg1 = (Dali::Toolkit::WebView*)webObj;

  {
    try
    {
      result = arg1->GetSettings();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_URL_get()
{
  return (int)Dali::Toolkit::WebView::Property::URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_SCROLL_POSITION_get()
{
  return (int)Dali::Toolkit::WebView::Property::SCROLL_POSITION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_SCROLL_SIZE_get()
{
  return (int)Dali::Toolkit::WebView::Property::SCROLL_SIZE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_CONTENT_SIZE_get()
{
  return (int)Dali::Toolkit::WebView::Property::CONTENT_SIZE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_TITLE_get()
{
  return (int)Dali::Toolkit::WebView::Property::TITLE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_VIDEO_HOLE_ENABLED_get()
{
  return (int)Dali::Toolkit::WebView::Property::VIDEO_HOLE_ENABLED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_MOUSE_EVENTS_ENABLED_get()
{
  return (int)Dali::Toolkit::WebView::Property::MOUSE_EVENTS_ENABLED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_KEY_EVENTS_ENABLED_get()
{
  return (int)Dali::Toolkit::WebView::Property::KEY_EVENTS_ENABLED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_DOCUMENT_BACKGROUND_COLOR_get()
{
  return (int)Dali::Toolkit::WebView::Property::DOCUMENT_BACKGROUND_COLOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_TILES_CLEARED_WHEN_HIDDEN_get()
{
  return (int)Dali::Toolkit::WebView::Property::TILES_CLEARED_WHEN_HIDDEN;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_TILE_COVER_AREA_MULTIPLIER_get()
{
  return (int)Dali::Toolkit::WebView::Property::TILE_COVER_AREA_MULTIPLIER;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_CURSOR_ENABLED_BY_CLIENT_get()
{
  return (int)Dali::Toolkit::WebView::Property::CURSOR_ENABLED_BY_CLIENT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_SELECTED_TEXT_get()
{
  return (int)Dali::Toolkit::WebView::Property::SELECTED_TEXT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_PAGE_ZOOM_FACTOR_get()
{
  return (int)Dali::Toolkit::WebView::Property::PAGE_ZOOM_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_TEXT_ZOOM_FACTOR_get()
{
  return (int)Dali::Toolkit::WebView::Property::TEXT_ZOOM_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_LOAD_PROGRESS_PERCENTAGE_get()
{
  return (int)Dali::Toolkit::WebView::Property::LOAD_PROGRESS_PERCENTAGE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_USER_AGENT_get()
{
  return (int)Dali::Toolkit::WebView::Property::USER_AGENT;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_LoadUrl(void* webObj, char* jarg2)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  std::string*            arg2;

  WEBOBJ_NULL_CHECK();

  arg1 = (Dali::Toolkit::WebView*)webObj;

  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  std::string jarg2str = std::string(jarg2);
  arg2                 = &jarg2str;
  {
    try
    {
      (arg1)->LoadUrl((std::string const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_LoadHtmlString(void* webObj, char* jarg2)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  std::string*            arg2;

  WEBOBJ_NULL_CHECK();

  arg1 = (Dali::Toolkit::WebView*)webObj;
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string jarg2str = std::string(jarg2);
  arg2                 = &jarg2str;
  {
    try
    {
      (arg1)->LoadHtmlString((std::string const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_LoadHtmlStringOverrideCurrentEntry(void* webObj, const char* jarg2, const char* jarg3, const char* jarg4)
{
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  WEBOBJ_NULL_CHECK(false);

  Dali::Toolkit::WebView* arg1     = (Dali::Toolkit::WebView*)webObj;
  std::string             jarg2str = std::string(jarg2);
  std::string             jarg3str = jarg3 ? std::string(jarg3) : std::string();
  std::string             jarg4str = jarg4 ? std::string(jarg4) : std::string();
  bool                    result   = false;
  {
    try
    {
      result = (arg1)->LoadHtmlStringOverrideCurrentEntry(jarg2str, jarg3str, jarg4str);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_LoadContents(void* webObj, const int8_t* jarg2, uint32_t jarg3, const char* jarg4, const char* jarg5, const char* jarg6)
{
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  WEBOBJ_NULL_CHECK(false);

  Dali::Toolkit::WebView* arg1     = (Dali::Toolkit::WebView*)webObj;
  std::string             jarg4str = jarg4 ? std::string(jarg4) : std::string();
  std::string             jarg5str = jarg5 ? std::string(jarg5) : std::string();
  std::string             jarg6str = jarg6 ? std::string(jarg6) : std::string();
  bool                    result   = false;
  {
    try
    {
      result = (arg1)->LoadContents(jarg2, jarg3, jarg4str, jarg5str, jarg6str);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const void* SWIGSTDCALL CSharp_Dali_WebView_GetFavicon(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebView*   arg1   = (Dali::Toolkit::WebView*)webObj;
  Dali::Toolkit::ImageView* result = 0;
  {
    try
    {
      Dali::Toolkit::ImageView favicon = (arg1)->GetFavicon();
      if(favicon)
      {
        result = new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView&)favicon);
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Reload(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  WEBOBJ_NULL_CHECK();

  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->Reload();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_ReloadWithoutCache(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)webObj;
  bool                    result = false;
  {
    try
    {
      result = (arg1)->ReloadWithoutCache();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_StopLoading(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  WEBOBJ_NULL_CHECK();

  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->StopLoading();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Suspend(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  WEBOBJ_NULL_CHECK();

  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->Suspend();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Resume(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  WEBOBJ_NULL_CHECK();

  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->Resume();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_SuspendNetworkLoading(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->SuspendNetworkLoading();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ResumeNetworkLoading(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->ResumeNetworkLoading();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_AddCustomHeader(void* webObj, const char* jarg2, const char* jarg3)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::Toolkit::WebView* arg1     = (Dali::Toolkit::WebView*)webObj;
  std::string             jarg2str = std::string(jarg2);
  std::string             jarg3str = std::string(jarg3);
  bool                    result   = false;
  {
    try
    {
      result = (arg1)->AddCustomHeader(jarg2str, jarg3str);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_RemoveCustomHeader(void* webObj, const char* jarg2)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::Toolkit::WebView* arg1     = (Dali::Toolkit::WebView*)webObj;
  std::string             jarg2str = std::string(jarg2);
  bool                    result   = false;
  {
    try
    {
      result = (arg1)->RemoveCustomHeader(jarg2str);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebView_StartInspectorServer(void* webObj, uint32_t jarg2)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)webObj;
  uint32_t                result = 0;
  {
    try
    {
      result = (arg1)->StartInspectorServer(jarg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_StopInspectorServer(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)webObj;
  bool                    result = false;
  {
    try
    {
      result = (arg1)->StopInspectorServer();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_SetImePositionAndAlignment(void* webObj, void* jarg2, int alignment)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::Toolkit::WebView* webView  = (Dali::Toolkit::WebView*)webObj;
  Dali::Vector2*          position = (Dali::Vector2*)jarg2;
  bool                    result   = false;
  {
    try
    {
      result = (webView)->SetImePositionAndAlignment(*position, alignment);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_SetCursorThemeName(void* webObj, const char* jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* webView = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (webView)->SetCursorThemeName(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ScrollBy(void* webObj, int32_t jarg2, int32_t jarg3)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->ScrollBy(jarg2, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_ScrollEdgeBy(void* webObj, int32_t jarg2, int32_t jarg3)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)webObj;
  bool                    result = false;
  {
    try
    {
      result = (arg1)->ScrollEdgeBy(jarg2, jarg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_GoBack(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->GoBack();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_GoForward(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->GoForward();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CanGoBack(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  bool                    ret;
  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      ret = (arg1)->CanGoBack();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CanGoForward(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  bool                    ret;
  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      ret = (arg1)->CanGoForward();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_EvaluateJavaScript(void* webObj, char* jarg2, void* jarg3)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  std::string*            arg2;

  WEBOBJ_NULL_CHECK();

  arg1 = (Dali::Toolkit::WebView*)webObj;

  GUARD_ON_NULL_RET(jarg2);

  std::string jarg2_str = std::string(jarg2);
  arg2                  = &jarg2_str;

  try
  {
    if(jarg3 != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))jarg3;
      (arg1)->EvaluateJavaScript((std::string const&)*arg2, [handler](const std::string& result)
      {
        handler(result.c_str());
      });
    }
    else
    {
      (arg1)->EvaluateJavaScript((std::string const&)*arg2);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_AddJavaScriptMessageHandler(void* jarg1, char* jarg2, void* jarg3)
{
  GUARD_ON_NULL_RET(jarg1);

  GUARD_ON_NULL_RET(jarg2);

  Dali::Toolkit::WebView* webview           = (Dali::Toolkit::WebView*)jarg1;
  std::string             exposedObjectName = jarg2;

  try
  {
    if(jarg3 != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))jarg3;
      webview->AddJavaScriptMessageHandler(exposedObjectName, [handler](const std::string& message)
      {
        handler(message.c_str());
      });
    }
    else
    {
      webview->AddJavaScriptMessageHandler(exposedObjectName, nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_AddJavaScriptEntireMessageHandler(void* jarg1, char* jarg2, void* jarg3)
{
  GUARD_ON_NULL_RET(jarg1);

  GUARD_ON_NULL_RET(jarg2);

  Dali::Toolkit::WebView* webview           = (Dali::Toolkit::WebView*)jarg1;
  std::string             exposedObjectName = jarg2;

  try
  {
    if(jarg3 != nullptr)
    {
      void (*handler)(char*, char*) = (void (*)(char*, char*))jarg3;
      webview->AddJavaScriptEntireMessageHandler(exposedObjectName, [handler](const std::string& messageName, const std::string& messageBody)
      {
        handler(SWIG_csharp_string_callback(messageName.c_str()), SWIG_csharp_string_callback(messageBody.c_str()));
      });
    }
    else
    {
      webview->AddJavaScriptEntireMessageHandler(exposedObjectName, nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterJavaScriptAlertCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      bool (*handler)(const char*) = (bool (*)(const char*))jarg2;
      webview->RegisterJavaScriptAlertCallback([handler](const std::string& message) -> bool
      {
        return handler(message.c_str());
      });
    }
    else
    {
      webview->RegisterJavaScriptAlertCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_JavaScriptAlertReply(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->JavaScriptAlertReply();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterJavaScriptConfirmCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      bool (*handler)(const char*) = (bool (*)(const char*))jarg2;
      webview->RegisterJavaScriptConfirmCallback([handler](const std::string& message) -> bool
      {
        return handler(message.c_str());
      });
    }
    else
    {
      webview->RegisterJavaScriptConfirmCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_JavaScriptConfirmReply(void* webObj, bool jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->JavaScriptConfirmReply(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterJavaScriptPromptCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      bool (*handler)(const char*, const char*) = (bool (*)(const char*, const char*))jarg2;
      webview->RegisterJavaScriptPromptCallback([handler](const std::string& message1,
                                                          const std::string& message2) -> bool
      {
        return handler(message1.c_str(),
                       message2.c_str());
      });
    }
    else
    {
      webview->RegisterJavaScriptPromptCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_JavaScriptPromptReply(void* webObj, char* jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1     = (Dali::Toolkit::WebView*)webObj;
  std::string             jarg2str = std::string(jarg2);
  {
    try
    {
      (arg1)->JavaScriptPromptReply(jarg2str);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_CreateHitTest(void* webObj, int32_t jarg2, int32_t jarg3, int jarg4)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)webObj;
  Dali::WebEngineHitTest* result = 0;
  {
    try
    {
      std::unique_ptr<Dali::WebEngineHitTest> hitTest = (arg1)->CreateHitTest(jarg2, jarg3, (Dali::WebEngineHitTest::HitTestMode)jarg4);
      result                                          = hitTest.release();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CreateHitTestAsynchronously(void* jarg1, int32_t jarg2, int32_t jarg3, int jarg4, void* jarg5)
{
  GUARD_ON_NULL_RET0(jarg1);

  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  bool                    result  = false;

  try
  {
    if(jarg5 != nullptr)
    {
      bool (*handler)(Dali::WebEngineHitTest*) = (bool (*)(Dali::WebEngineHitTest*))jarg5;
      result                                   = webview->CreateHitTestAsynchronously(jarg2, jarg3, (Dali::WebEngineHitTest::HitTestMode)jarg4,
                                                                                      [handler](std::unique_ptr<Dali::WebEngineHitTest> hitTest) -> bool
                                        {
        return handler(hitTest.release());
      });
    }
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ExitFullscreen(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->ExitFullscreen();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearHistory(void* webObj)
{
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->ClearHistory();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearAllTilesResources(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->ClearAllTilesResources();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_SetScaleFactor(void* webObj, float jarg2, void* jarg3)
{
  if(!jarg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 is null", 0);
    return;
  }
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)webObj;
  Dali::Vector2*          arg3 = (Dali::Vector2*)jarg3;
  {
    try
    {
      (arg1)->SetScaleFactor(jarg2, *arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_WebView_GetScaleFactor(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)webObj;
  float                   result = 0.0f;
  {
    try
    {
      result = (arg1)->GetScaleFactor();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ActivateAccessibility(void* webObj, bool jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (arg1)->ActivateAccessibility(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_HighlightText(void* webObj, const char* jarg2, int jarg3, uint32_t jarg4)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::Toolkit::WebView* arg1     = (Dali::Toolkit::WebView*)webObj;
  std::string             jarg2str = std::string(jarg2);
  bool                    result   = false;
  {
    try
    {
      result = (arg1)->HighlightText(
        jarg2str, (Dali::WebEnginePlugin::FindOption)jarg3, jarg4);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_AddDynamicCertificatePath(void* webObj, const char* jarg2, const char* jarg3)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* arg1     = (Dali::Toolkit::WebView*)webObj;
  std::string             jarg2str = std::string(jarg2);
  std::string             jarg3str = std::string(jarg3);
  {
    try
    {
      (arg1)->AddDynamicCertificatePath(jarg2str, jarg3str);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetScreenshot(void* webObj, void* jarg2, float jarg3)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebView*   arg1   = (Dali::Toolkit::WebView*)webObj;
  Dali::Rect<int32_t>*      arg    = (Dali::Rect<int32_t>*)jarg2;
  Dali::Toolkit::ImageView* result = 0;
  {
    try
    {
      Dali::Toolkit::ImageView screenshot = (arg1)->GetScreenshot(*arg, jarg3);
      if(screenshot)
      {
        result = new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView&)screenshot);
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

using SWIG_CallbackWebViewScreenshotCaptured = void(SWIGSTDCALL*)(Dali::Toolkit::ImageView*);
SWIG_CallbackWebViewScreenshotCaptured swig_callbackOnWebViewScreenshotCaptured;

void OnWebViewScreenshotCapturedCallback(Dali::Toolkit::ImageView imageView)
{
  if(!imageView)
    return;

  Dali::Toolkit::ImageView* pImageView = new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView&)imageView);
  swig_callbackOnWebViewScreenshotCaptured(pImageView);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_GetScreenshotAsynchronously(void* webObj, void* jarg2, float jarg3, void* jarg4)
{
  swig_callbackOnWebViewScreenshotCaptured = (SWIG_CallbackWebViewScreenshotCaptured)jarg4;
  WEBOBJ_NULL_CHECK(false);
  Dali::Toolkit::WebView*                                   arg1     = (Dali::Toolkit::WebView*)webObj;
  Dali::Rect<int32_t>*                                      arg2     = (Dali::Rect<int32_t>*)jarg2;
  Dali::Toolkit::WebView::WebViewScreenshotCapturedCallback callback = OnWebViewScreenshotCapturedCallback;
  bool                                                      result   = false;
  {
    try
    {
      result = (arg1)->GetScreenshotAsynchronously(*arg2, jarg3, callback);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CheckVideoPlayingAsynchronously(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET0(jarg1);

  Dali::Toolkit::WebView* arg1   = (Dali::Toolkit::WebView*)jarg1;
  bool                    result = false;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(bool) = (void (*)(bool))jarg2;
      result                = (arg1)->CheckVideoPlayingAsynchronously([handler](bool isPlaying)
      { handler(isPlaying); });
    }
  }
  CALL_CATCH_EXCEPTION(0);

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterGeolocationPermissionCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      bool (*handler)(const char*, const char*) = (bool (*)(const char*, const char*))jarg2;
      if(handler)
      {
        (arg1)->RegisterGeolocationPermissionCallback([handler](const std::string& host, const std::string& protocol) -> bool
        {
          return handler(host.c_str(),
                         protocol.c_str());
        });
      }
    }
    else
    {
      (arg1)->RegisterGeolocationPermissionCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_SetTtsFocus(void* webObj, bool jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)webObj;
  try
  {
    webview->SetTtsFocus(jarg2);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT Dali::Toolkit::Control* SWIGSTDCALL CSharp_Dali_WebView_SWIGUpcast(Dali::Toolkit::WebView* jarg1)
{
  return (Dali::Toolkit::Control*)jarg1;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterPageLoadStartedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))jarg2;
      (arg1)->RegisterPageLoadStartedCallback([handler](const std::string& url)
      {
        handler(url.c_str());
      });
    }
    else
    {
      (arg1)->RegisterPageLoadStartedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterPageLoadInProgressCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))jarg2;
      (arg1)->RegisterPageLoadInProgressCallback([handler](const std::string& url)
      {
        handler(url.c_str());
      });
    }
    else
    {
      (arg1)->RegisterPageLoadInProgressCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterPageLoadFinishedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))jarg2;
      (arg1)->RegisterPageLoadFinishedCallback([handler](const std::string& url)
      {
        handler(url.c_str());
      });
    }
    else
    {
      (arg1)->RegisterPageLoadFinishedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterPageLoadErrorCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineLoadError*) = (void (*)(Dali::WebEngineLoadError*))jarg2;
      (arg1)->RegisterPageLoadErrorCallback([handler](std::unique_ptr<Dali::WebEngineLoadError> error)
      {
        handler(error.release());
      });
    }
    else
    {
      (arg1)->RegisterPageLoadErrorCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterScrollEdgeReachedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(int) = (void (*)(int))jarg2;
      (arg1)->RegisterScrollEdgeReachedCallback([handler](Dali::WebEnginePlugin::ScrollEdge edge)
      {
        handler((int)edge);
      });
    }
    else
    {
      (arg1)->RegisterScrollEdgeReachedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterOverScrolledCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(int) = (void (*)(int))jarg2;
      (arg1)->RegisterOverScrolledCallback([handler](Dali::WebEnginePlugin::OverScrolled overScrolled)
      {
        handler((int)overScrolled);
      });
    }
    else
    {
      (arg1)->RegisterOverScrolledCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterUrlChangedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))jarg2;
      (arg1)->RegisterUrlChangedCallback([handler](const std::string& url)
      {
        handler(url.c_str());
      });
    }
    else
    {
      (arg1)->RegisterUrlChangedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterFormRepostDecidedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineFormRepostDecision*) = (void (*)(Dali::WebEngineFormRepostDecision*))jarg2;
      (arg1)->RegisterFormRepostDecidedCallback([handler](std::unique_ptr<Dali::WebEngineFormRepostDecision> decision)
      {
        handler(decision.release());
      });
    }
    else
    {
      (arg1)->RegisterFormRepostDecidedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterFrameRenderedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(void) = (void (*)(void))jarg2;
      (arg1)->RegisterFrameRenderedCallback([handler](void)
      {
        handler();
      });
    }
    else
    {
      (arg1)->RegisterFrameRenderedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterConsoleMessageReceivedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineConsoleMessage*) = (void (*)(Dali::WebEngineConsoleMessage*))jarg2;
      (arg1)->RegisterConsoleMessageReceivedCallback([handler](std::unique_ptr<Dali::WebEngineConsoleMessage> message)
      {
        handler(message.release());
      });
    }
    else
    {
      (arg1)->RegisterConsoleMessageReceivedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterResponsePolicyDecidedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEnginePolicyDecision*) = (void (*)(Dali::WebEnginePolicyDecision*))jarg2;
      (arg1)->RegisterResponsePolicyDecidedCallback([handler](std::unique_ptr<Dali::WebEnginePolicyDecision> decision)
      {
        handler(decision.release());
      });
    }
    else
    {
      (arg1)->RegisterResponsePolicyDecidedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterNavigationPolicyDecidedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEnginePolicyDecision*) = (void (*)(Dali::WebEnginePolicyDecision*))jarg2;
      (arg1)->RegisterNavigationPolicyDecidedCallback([handler](std::unique_ptr<Dali::WebEnginePolicyDecision> decision)
      {
        handler(decision.release());
      });
    }
    else
    {
      (arg1)->RegisterNavigationPolicyDecidedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterNewWindowPolicyDecidedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEnginePolicyDecision*) = (void (*)(Dali::WebEnginePolicyDecision*))jarg2;
      (arg1)->RegisterNewWindowPolicyDecidedCallback([handler](std::unique_ptr<Dali::WebEnginePolicyDecision> decision)
      {
        handler(decision.release());
      });
    }
    else
    {
      (arg1)->RegisterNewWindowPolicyDecidedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterNewWindowCreatedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::Toolkit::WebView*&) = (void (*)(Dali::Toolkit::WebView*&))jarg2;
      (arg1)->RegisterNewWindowCreatedCallback([handler](Dali::WebEnginePlugin*& plugin)
      {
        Dali::Toolkit::WebView* outView = nullptr;
        handler(outView);
        if(outView != nullptr)
        {
          plugin = outView->GetPlugin();
        }
      });
    }
    else
    {
      (arg1)->RegisterNewWindowCreatedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterCertificateConfirmedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineCertificate*) = (void (*)(Dali::WebEngineCertificate*))jarg2;
      (arg1)->RegisterCertificateConfirmedCallback([handler](std::unique_ptr<Dali::WebEngineCertificate> certificate)
      {
        handler(certificate.release());
      });
    }
    else
    {
      (arg1)->RegisterCertificateConfirmedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterSslCertificateChangedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineCertificate*) = (void (*)(Dali::WebEngineCertificate*))jarg2;
      (arg1)->RegisterSslCertificateChangedCallback([handler](std::unique_ptr<Dali::WebEngineCertificate> certificate)
      {
        handler(certificate.release());
      });
    }
    else
    {
      (arg1)->RegisterSslCertificateChangedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterHttpAuthHandlerCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineHttpAuthHandler*) = (void (*)(Dali::WebEngineHttpAuthHandler*))jarg2;
      (arg1)->RegisterHttpAuthHandlerCallback([handler](std::unique_ptr<Dali::WebEngineHttpAuthHandler> certificate)
      {
        handler(certificate.release());
      });
    }
    else
    {
      (arg1)->RegisterHttpAuthHandlerCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterContextMenuShownCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineContextMenu*) = (void (*)(Dali::WebEngineContextMenu*))jarg2;
      (arg1)->RegisterContextMenuShownCallback([handler](std::unique_ptr<Dali::WebEngineContextMenu> menu)
      {
        handler(menu.release());
      });
    }
    else
    {
      (arg1)->RegisterContextMenuShownCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterContextMenuHiddenCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineContextMenu*) = (void (*)(Dali::WebEngineContextMenu*))jarg2;
      (arg1)->RegisterContextMenuHiddenCallback([handler](std::unique_ptr<Dali::WebEngineContextMenu> menu)
      {
        handler(menu.release());
      });
    }
    else
    {
      (arg1)->RegisterContextMenuHiddenCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterFullscreenEnteredCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(void) = (void (*)(void))jarg2;
      (arg1)->RegisterFullscreenEnteredCallback([handler](void)
      {
        handler();
      });
    }
    else
    {
      (arg1)->RegisterFullscreenEnteredCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterFullscreenExitedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(void) = (void (*)(void))jarg2;
      (arg1)->RegisterFullscreenExitedCallback([handler](void)
      {
        handler();
      });
    }
    else
    {
      (arg1)->RegisterFullscreenExitedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterTextFoundCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(uint32_t) = (void (*)(uint32_t))jarg2;
      (arg1)->RegisterTextFoundCallback([handler](uint32_t count)
      {
        handler(count);
      });
    }
    else
    {
      (arg1)->RegisterTextFoundCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_GetPlainTextAsynchronously(void* nuiWebView, void* nuiCallback)
{
  GUARD_ON_NULL_RET(nuiWebView);

  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)nuiWebView;

  try
  {
    if(nuiCallback != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))nuiCallback;
      webview->GetPlainTextAsynchronously([handler](const std::string& url)
      {
        handler(url.c_str());
      });
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_WebAuthenticationCancel(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      webview->WebAuthenticationCancel();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterWebAuthDisplayQRCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))jarg2;
      (arg1)->RegisterWebAuthDisplayQRCallback([handler](const std::string& url)
      {
        handler(url.c_str());
      });
    }
    else
    {
      (arg1)->RegisterWebAuthDisplayQRCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterWebAuthResponseCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(void) = (void (*)(void))jarg2;
      (arg1)->RegisterWebAuthResponseCallback([handler](void)
      {
        handler();
      });
    }
    else
    {
      (arg1)->RegisterWebAuthResponseCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterFileChooserRequestedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineFileChooserRequest*) = (void (*)(Dali::WebEngineFileChooserRequest*))jarg2;
      (arg1)->RegisterFileChooserRequestedCallback([handler](std::unique_ptr<Dali::WebEngineFileChooserRequest> request)
      {
        handler(request.release());
      });
    }
    else
    {
      (arg1)->RegisterFileChooserRequestedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterWebProcessCrashedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(void) = (void (*)(void))jarg2;
      (arg1)->RegisterWebProcessCrashedCallback([handler](void)
      {
        handler();
      });
    }
    else
    {
      (arg1)->RegisterWebProcessCrashedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterUserMediaPermissionRequestCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineUserMediaPermissionRequest*, const char*) = (void (*)(Dali::WebEngineUserMediaPermissionRequest*, const char*))jarg2;
      (arg1)->RegisterUserMediaPermissionRequestCallback([handler](Dali::WebEngineUserMediaPermissionRequest* permission, const std::string& message)
      {
        handler(permission, message.c_str());
      });
    }
    else
    {
      (arg1)->RegisterUserMediaPermissionRequestCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_FeedMouseWheel(void* webObj, bool yDirec, int step, int x, int y)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* webView = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (webView)->FeedMouseWheel(yDirec, step, x, y);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_SetVideoHole(void* webObj, bool enable, bool isWaylandWin)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* webView = (Dali::Toolkit::WebView*)webObj;
  {
    try
    {
      (webView)->SetVideoHole(enable, isWaylandWin);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_UserMediaPermissionRequest(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "UserMediaPermissionRequest is null", 0);
    return;
  }

  Dali::WebEngineUserMediaPermissionRequest* arg1 = (Dali::WebEngineUserMediaPermissionRequest*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_UserMediaPermissionRequest_Set(void* webObj, bool jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineUserMediaPermissionRequest* arg1 = (Dali::WebEngineUserMediaPermissionRequest*)webObj;
  {
    try
    {
      (arg1)->Set(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_UserMediaPermissionRequest_Suspend(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineUserMediaPermissionRequest* arg1 = (Dali::WebEngineUserMediaPermissionRequest*)webObj;
  bool                                       ret;
  {
    try
    {
      ret = (arg1)->Suspend();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterDeviceConnectionChangedCallback(void* webObj, void* callback)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* webView = (Dali::Toolkit::WebView*)webObj;
  void (*eventHandler)(int32_t)   = (void (*)(int32_t))callback;
  {
    try
    {
      if(eventHandler)
      {
        (webView)->RegisterDeviceConnectionChangedCallback([eventHandler](int32_t deviceType)
        {
          eventHandler(deviceType);
        });
      }
      else
      {
        (webView)->RegisterDeviceConnectionChangedCallback(nullptr);
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterDeviceListGetCallback(void* webObj, void* callback)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebView* webView                              = (Dali::Toolkit::WebView*)webObj;
  void (*eventHandler)(Dali::WebEngineDeviceListGet*, int32_t) = (void (*)(Dali::WebEngineDeviceListGet*, int32_t))callback;
  {
    try
    {
      if(eventHandler)
      {
        (webView)->RegisterDeviceListGetCallback([eventHandler](Dali::WebEngineDeviceListGet* list, int32_t size)
        {
          eventHandler(list, size);
        });
      }
      else
      {
        (webView)->RegisterDeviceListGetCallback(nullptr);
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_DeviceListGet(void* obj)
{
  if(!obj)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "DeviceListGet is null", 0);
    return;
  }

  Dali::WebEngineDeviceListGet* me = (Dali::WebEngineDeviceListGet*)obj;
  {
    try
    {
      delete me;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_DeviceListGet_GetTypeAndConnect(void* obj, int* type, bool* connect, int idx)
{
  if(!obj)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "DeviceListGet is null", 0);
    return;
  }

  Dali::WebEngineDeviceListGet* me = (Dali::WebEngineDeviceListGet*)obj;
  {
    try
    {
      me->GetTypeAndConnect(type, connect, idx);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_DeviceListGet_GetDeviceId(void* obj, int idx)
{
  std::string result;
  if(!obj)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "DeviceListGet is null", 0);
    return "";
  }

  Dali::WebEngineDeviceListGet* me = (Dali::WebEngineDeviceListGet*)obj;
  {
    try
    {
      result = me->GetDeviceId(idx);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* ret = SWIG_csharp_string_callback(result.c_str());
  return ret;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_DeviceListGet_GetDeviceLabel(void* obj, int idx)
{
  std::string result;
  if(!obj)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "DeviceListGet is null", 0);
    return "";
  }

  Dali::WebEngineDeviceListGet* me = (Dali::WebEngineDeviceListGet*)obj;
  {
    try
    {
      result = me->GetDeviceLabel(idx);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* ret = SWIG_csharp_string_callback(result.c_str());
  return ret;
}

//----------------------------------WebFileChooserRequest---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebFileChooserRequest(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebFileChooserRequest is null", 0);
    return;
  }

  Dali::WebEngineFileChooserRequest* arg1 = (Dali::WebEngineFileChooserRequest*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebFileChooserRequest_MultipleFilesAllowed(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineFileChooserRequest* arg1      = (Dali::WebEngineFileChooserRequest*)webObj;
  bool                               isAllowed = false;
  {
    try
    {
      isAllowed = (arg1)->MultipleFilesAllowed();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return isAllowed;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebFileChooserRequest_AcceptedMimetypes(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineFileChooserRequest*     arg1   = (Dali::WebEngineFileChooserRequest*)webObj;
  std::vector<std::string>*              result = nullptr;
  {
    try
    {
      std::vector<std::string> mimetypes = (arg1)->AcceptedMimetypes();
      result                             = new std::vector<std::string>();
      result->swap(mimetypes);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebFileChooserRequest_Cancel(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineFileChooserRequest* arg1       = (Dali::WebEngineFileChooserRequest*)webObj;
  bool                               isCanceled = false;
  {
    try
    {
      isCanceled = (arg1)->Cancel();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return isCanceled;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebFileChooserRequest_ChooseFiles(void* webObj, char** jarg2, unsigned int jarg3)
{
  WEBOBJ_NULL_CHECK(false);
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  Dali::WebEngineFileChooserRequest* arg1      = (Dali::WebEngineFileChooserRequest*)webObj;
  bool                               isChoosed = false;
  {
    try
    {
      std::vector<std::string> files;
      for(unsigned int i = 0; i < jarg3; i++)
      {
        if(!jarg2[i])
        {
          SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
          return false;
        }
        std::string str(jarg2[i]);
        files.push_back(str);
      }
      isChoosed = (arg1)->ChooseFiles(files);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return isChoosed;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebFileChooserRequest_ChooseFile(void* webObj, void* jarg2)
{
  WEBOBJ_NULL_CHECK(false);
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  Dali::WebEngineFileChooserRequest* arg1      = (Dali::WebEngineFileChooserRequest*)webObj;
  bool                               isChoosed = false;
  {
    try
    {
      std::string file((const char*)jarg2);
      isChoosed = (arg1)->ChooseFile(file);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return isChoosed;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AcceptedMimetypes_Count(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "AcceptedMimetypes is null", 0);
    return 0;
  }

  std::vector<std::string>* arg1  = (std::vector<std::string>*)jarg1;
  unsigned int              count = 0;
  {
    try
    {
      count = arg1->size();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return count;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AcceptedMimetypes_GetItem(void* jarg1, unsigned int index)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "AcceptedMimetypes is null", 0);
    return nullptr;
  }

  std::vector<std::string>* arg1     = (std::vector<std::string>*)jarg1;
  std::string               mimetype;
  {
    try
    {
      mimetype = arg1->at(index);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(mimetype.c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AcceptedMimetypes(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "AcceptedMimetypes is null", 0);
    return;
  }

  std::vector<std::string>* arg1 = (std::vector<std::string>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebBackForwardListItem-----------------------------------------------------
SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetUrl(void* webObj)
{
  Dali::WebEngineBackForwardListItem* arg1 = (Dali::WebEngineBackForwardListItem*)0;
  std::string                         result;
  WEBOBJ_NULL_CHECK(nullptr);
  arg1 = (Dali::WebEngineBackForwardListItem*)webObj;
  {
    try
    {
      result = arg1->GetUrl();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetTitle(void* webObj)
{
  Dali::WebEngineBackForwardListItem* arg1 = (Dali::WebEngineBackForwardListItem*)0;
  std::string                         result;
  WEBOBJ_NULL_CHECK(nullptr);
  arg1 = (Dali::WebEngineBackForwardListItem*)webObj;
  {
    try
    {
      result = (arg1)->GetTitle();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetOriginalUrl(void* webObj)
{
  Dali::WebEngineBackForwardListItem* arg1 = (Dali::WebEngineBackForwardListItem*)0;
  std::string                         result;
  WEBOBJ_NULL_CHECK(nullptr);
  arg1 = (Dali::WebEngineBackForwardListItem*)webObj;
  {
    try
    {
      result = (arg1)->GetOriginalUrl();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

//----------------------------------WebBackForwardList-----------------------------------------------------
SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetItemCount(void* webObj)
{
  Dali::Toolkit::WebBackForwardList* arg1   = (Dali::Toolkit::WebBackForwardList*)0;
  uint32_t                           result = 0;
  WEBOBJ_NULL_CHECK(0);
  arg1 = (Dali::Toolkit::WebBackForwardList*)webObj;
  {
    try
    {
      result = (arg1)->GetItemCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetCurrentItem(void* webObj)
{
  Dali::WebEngineBackForwardListItem* result = 0;
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*)webObj;
  {
    try
    {
      std::unique_ptr<Dali::WebEngineBackForwardListItem> temp = (arg1)->GetCurrentItem();
      result                                                   = temp.release();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetPreviousItem(void* webObj)
{
  Dali::WebEngineBackForwardListItem* result = 0;
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*)webObj;
  {
    try
    {
      std::unique_ptr<Dali::WebEngineBackForwardListItem> temp = (arg1)->GetPreviousItem();
      result                                                   = temp.release();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetNextItem(void* webObj)
{
  Dali::WebEngineBackForwardListItem* result = 0;
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*)webObj;
  {
    try
    {
      std::unique_ptr<Dali::WebEngineBackForwardListItem> temp = (arg1)->GetNextItem();
      result                                                   = temp.release();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetItemAtIndex(void* webObj, int jarg2)
{
  Dali::WebEngineBackForwardListItem* result = 0;
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*)webObj;
  {
    try
    {
      std::unique_ptr<Dali::WebEngineBackForwardListItem> temp = (arg1)->GetItemAtIndex(jarg2);
      result                                                   = temp.release();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebBackForwardList_DeleteItem(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineBackForwardListItem* arg1 = (Dali::WebEngineBackForwardListItem*)webObj;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetBackwardItems(void* webObj, int jarg2)
{
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>* result = 0;
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*)webObj;
  {
    try
    {
      result                                                                = new std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>();
      std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> temp = (arg1)->GetBackwardItems(jarg2);
      result->swap(temp);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetForwardItems(void* webObj, int jarg2)
{
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>* result = 0;
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*)webObj;
  {
    try
    {
      result                                                                = new std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>();
      std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> temp = (arg1)->GetForwardItems(jarg2);
      result->swap(temp);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebBackForwardList_DeleteCopiedItems(void* jarg1)
{
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetCopiedItemsCount(void* webObj)
{
  unsigned int result = 0;
  WEBOBJ_NULL_CHECK(0);
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>*)webObj;
  {
    try
    {
      result = (arg1)->size();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetItemAtIndexFromCopiedItems(void* webObj, unsigned int jarg2)
{
  Dali::WebEngineBackForwardListItem* result = 0;
  WEBOBJ_NULL_CHECK(nullptr);
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>*)webObj;
  {
    try
    {
      result = (arg1)->operator[](jarg2).get();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

//----------------------------------WebConsoleMessage-----------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebConsoleMessage(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebConsoleMessage is null", 0);
    return;
  }

  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebConsoleMessage_GetSource(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)webObj;
  std::string                    result;
  {
    try
    {
      result = arg1->GetSource();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebConsoleMessage_GetLine(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)webObj;
  uint32_t                       result;
  {
    try
    {
      result = arg1->GetLine();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebConsoleMessage_GetSeverityLevel(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)webObj;
  int                            result;
  {
    try
    {
      result = (int)arg1->GetSeverityLevel();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebConsoleMessage_GetText(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)webObj;
  std::string                    result;
  {
    try
    {
      result = arg1->GetText();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

//----------------------------------WebCertificate-----------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebCertificate(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebCertificate is null", 0);
    return;
  }

  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCertificate_Allow(void* webObj, bool jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)webObj;
  {
    try
    {
      (arg1)->Allow(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebCertificate_IsFromMainFrame(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)webObj;
  bool                        ret;
  {
    try
    {
      ret = (arg1)->IsFromMainFrame();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebCertificate_GetPem(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)webObj;
  std::string                 result;
  {
    try
    {
      result = (arg1)->GetPem();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebCertificate_IsContextSecure(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)webObj;
  bool                        ret;
  {
    try
    {
      ret = (arg1)->IsContextSecure();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebCertificate_GetPolicyDecisionError(void* webObj)
{
  WEBOBJ_NULL_CHECK(1000);
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)webObj;
  int                         ret  = 1000;
  {
    try
    {
      ret = (arg1)->GetPolicyDecisionError();
    }
    CALL_CATCH_EXCEPTION(1000);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebCertificate_SuspendPolicyDecision(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)webObj;
  bool                        ret  = false;
  {
    try
    {
      ret = (arg1)->SuspendPolicyDecision();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

//----------------------------------WebContext-----------------------------------------------------
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebContext_GetCacheModel(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  int                     ret;
  WEBOBJ_NULL_CHECK(0);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      ret = (int)(arg1)->GetCacheModel();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetCacheModel(void* webObj, int jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->SetCacheModel((Dali::WebEngineContext::CacheModel)jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetProxyUri(void* webObj, const char* jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  std::string arg2_str(jarg2);
  {
    try
    {
      (arg1)->SetProxyUri(arg2_str);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebContext_GetProxyUri(void* webObj)
{
  Dali::WebEngineContext* arg1    = (Dali::WebEngineContext*)0;
  char*                   jresult = nullptr;
  WEBOBJ_NULL_CHECK(nullptr);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      const std::string str = (arg1)->GetProxyUri();
      jresult               = SWIG_csharp_string_callback(str.c_str());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetProxyBypassRule(void* webObj, char* jarg2, char* jarg3)
{
  if(!jarg2 || !jarg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  const std::string       arg2(jarg2);
  const std::string       arg3(jarg3);
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->SetProxyBypassRule(arg2, arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebContext_GetProxyBypassRule(void* webObj)
{
  Dali::WebEngineContext* arg1    = (Dali::WebEngineContext*)0;
  char*                   jresult = nullptr;
  WEBOBJ_NULL_CHECK(nullptr);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      const std::string str = (arg1)->GetProxyBypassRule();
      jresult               = SWIG_csharp_string_callback(str.c_str());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetCertificateFilePath(void* webObj, const char* jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  std::string arg2_str(jarg2);
  {
    try
    {
      (arg1)->SetCertificateFilePath(arg2_str);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebContext_GetCertificateFilePath(void* webObj)
{
  Dali::WebEngineContext* arg1    = (Dali::WebEngineContext*)0;
  char*                   jresult = nullptr;
  WEBOBJ_NULL_CHECK(nullptr);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      const std::string str = (arg1)->GetCertificateFilePath();
      jresult               = SWIG_csharp_string_callback(str.c_str());
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetDefaultProxyAuth(void* webObj, const char* jarg2, const char* jarg3)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)webObj;
  std::string             arg2_str(jarg2);
  std::string             arg3_str(jarg3);
  {
    try
    {
      (arg1)->SetDefaultProxyAuth(arg2_str, arg3_str);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllWebDatabase(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->DeleteAllWebDatabase();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_GetWebDatabaseOrigins(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET0(jarg1);

  Dali::WebEngineContext* arg1   = (Dali::WebEngineContext*)jarg1;
  bool                    result = false;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*) = (void (*)(std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*))jarg2;
      result                                                                        = (arg1)->GetWebDatabaseOrigins(
        [handler](std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>& originList)
      {
        std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* webOriginList = new std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>();
        webOriginList->swap(originList);
        handler(webOriginList);
      });
    }
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteWebDatabase(void* webObj, void* jarg2)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContext*        arg1   = (Dali::WebEngineContext*)webObj;
  Dali::WebEngineSecurityOrigin* origin = (Dali::WebEngineSecurityOrigin*)jarg2;
  bool                           result = false;
  {
    try
    {
      result = (arg1)->DeleteWebDatabase(*origin);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_GetWebStorageOrigins(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET0(jarg1);

  Dali::WebEngineContext* arg1   = (Dali::WebEngineContext*)jarg1;
  bool                    result = false;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*) = (void (*)(std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*))jarg2;
      result                                                                        = (arg1)->GetWebStorageOrigins(
        [handler](std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>& originList)
      {
        std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* contextOriginList = new std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>();
        contextOriginList->swap(originList);
        handler(contextOriginList);
      });
    }
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_GetWebStorageUsageForOrigin(void* webObj, void* jarg2, void* jarg3)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContext*        arg1   = (Dali::WebEngineContext*)webObj;
  Dali::WebEngineSecurityOrigin* origin = (Dali::WebEngineSecurityOrigin*)jarg2;
  void (*callback)(uint64_t)            = (void (*)(uint64_t))jarg3;
  bool result                           = false;
  {
    try
    {
      result = (arg1)->GetWebStorageUsageForOrigin(*origin, callback);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllWebStorage(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->DeleteAllWebStorage();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteWebStorage(void* webObj, void* jarg2)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContext*        arg1   = (Dali::WebEngineContext*)webObj;
  Dali::WebEngineSecurityOrigin* origin = (Dali::WebEngineSecurityOrigin*)jarg2;
  bool                           result = false;
  {
    try
    {
      result = (arg1)->DeleteWebStorage(*origin);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteLocalFileSystem(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->DeleteLocalFileSystem();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_ClearCache(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->ClearCache();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteApplicationCache(void* webObj, void* jarg2)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContext*        arg1   = (Dali::WebEngineContext*)webObj;
  Dali::WebEngineSecurityOrigin* origin = (Dali::WebEngineSecurityOrigin*)jarg2;
  bool                           result = false;
  {
    try
    {
      result = (arg1)->DeleteApplicationCache(*origin);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_GetFormPasswordList(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*) = (void (*)(std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*))jarg2;
      (arg1)->GetFormPasswordList(
        [handler](std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>& passwordList)
      {
        std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>* contextPasswordList = new std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>();
        contextPasswordList->swap(passwordList);
        handler(contextPasswordList);
      });
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterDownloadStartedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(const char*) = (void (*)(const char*))jarg2;
      (arg1)->RegisterDownloadStartedCallback(
        [handler](const std::string& url)
      {
        handler(url.c_str());
      });
    }
    else
    {
      (arg1)->RegisterDownloadStartedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterMimeOverriddenCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      bool (*handler)(const char*, const char*, const char*) = (bool (*)(const char*, const char*, const char*))jarg2;
      (arg1)->RegisterMimeOverriddenCallback(
        [handler](const std::string& url, const std::string& mime, std::string& newMime) -> bool
      {
        return handler(url.c_str(),
                       mime.c_str(),
                       newMime.c_str());
      });
    }
    else
    {
      (arg1)->RegisterMimeOverriddenCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterRequestInterceptedCallback(void* jarg1, void* jarg2)
{
  GUARD_ON_NULL_RET(jarg1);

  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)jarg1;

  try
  {
    if(jarg2 != nullptr)
    {
      void (*handler)(Dali::WebEngineRequestInterceptorPtr*) = (void (*)(Dali::WebEngineRequestInterceptorPtr*))jarg2;
      (arg1)->RegisterRequestInterceptedCallback([handler](Dali::WebEngineRequestInterceptorPtr interceptor)
      {
        Dali::WebEngineRequestInterceptorPtr* interceptorPtr = new Dali::WebEngineRequestInterceptorPtr((const Dali::WebEngineRequestInterceptorPtr&)interceptor);
        handler(interceptorPtr);
      });
    }
    else
    {
      (arg1)->RegisterRequestInterceptedCallback(nullptr);
    }
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_EnableCache(void* webObj, bool jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->EnableCache(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_IsCacheEnabled(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  bool                    ret;
  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      ret = (arg1)->IsCacheEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetAppId(void* webObj, char* jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  const std::string str(jarg2);
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->SetAppId(str);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_SetAppVersion(void* webObj, char* jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  const std::string str(jarg2);
  bool              ret;
  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      ret = (arg1)->SetAppVersion(str);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetApplicationType(void* webObj, int jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->SetApplicationType((Dali::WebEngineContext::ApplicationType)jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetTimeOffset(void* webObj, float jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->SetTimeOffset(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetTimeZoneOffset(void* webObj, float jarg2, float jarg3)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->SetTimeZoneOffset(jarg2, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterUrlSchemesAsCorsEnabled(void* webObj, char** jarg2, unsigned int jarg3)
{
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      std::vector<std::string> vecStr;
      for(unsigned int i = 0; i < jarg3; i++)
      {
        if(!jarg2[i])
        {
          SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
          return;
        }
        std::string str(jarg2[i]);
        vecStr.push_back(str);
      }
      (arg1)->RegisterUrlSchemesAsCorsEnabled(vecStr);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterJsPluginMimeTypes(void* webObj, char** jarg2, unsigned int jarg3)
{
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      std::vector<std::string> vecStr;
      for(unsigned int i = 0; i < jarg3; i++)
      {
        if(!jarg2[i])
        {
          SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
          return;
        }
        std::string str(jarg2[i]);
        vecStr.push_back(str);
      }
      (arg1)->RegisterJsPluginMimeTypes(vecStr);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetDefaultZoomFactor(void* webObj, float jarg2)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->SetDefaultZoomFactor(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_WebContext_GetDefaultZoomFactor(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  float                   ret;
  WEBOBJ_NULL_CHECK(0);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      ret = (arg1)->GetDefaultZoomFactor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllApplicationCache(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  bool                    ret;
  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      ret = (arg1)->DeleteAllApplicationCache();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllWebIndexedDatabase(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  bool                    ret;
  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      ret = (arg1)->DeleteAllWebIndexedDatabase();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteFormPasswordDataList(void* webObj, char** jarg2, unsigned int jarg3)
{
  if(!jarg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      std::vector<std::string> vecStr;
      for(unsigned int i = 0; i < jarg3; i++)
      {
        if(!jarg2[i])
        {
          SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
          return;
        }
        std::string str(jarg2[i]);
        vecStr.push_back(str);
      }
      (arg1)->DeleteFormPasswordDataList(vecStr);
    }
    CALL_CATCH_EXCEPTION()
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllFormPasswordData(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->DeleteAllFormPasswordData();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllFormCandidateData(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      (arg1)->DeleteAllFormCandidateData();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_FreeUnusedMemory(void* webObj)
{
  Dali::WebEngineContext* arg1 = (Dali::WebEngineContext*)0;
  bool                    ret;
  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::WebEngineContext*)webObj;
  {
    try
    {
      ret = (arg1)->FreeUnusedMemory();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

//----------------------------------WebContextMenu---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebContextMenu(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebContextMenu is null", 0);
    return;
  }

  Dali::WebEngineContextMenu* arg1 = (Dali::WebEngineContextMenu*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebContextMenu_GetItemCount(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineContextMenu* arg1 = (Dali::WebEngineContextMenu*)webObj;
  uint32_t                    ret;
  {
    try
    {
      ret = (arg1)->GetItemCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebContextMenu_GetItemAt(void* webObj, uint32_t jarg2)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineContextMenu*     arg1   = (Dali::WebEngineContextMenu*)webObj;
  Dali::WebEngineContextMenuItem* result = 0;
  {
    try
    {
      std::unique_ptr<Dali::WebEngineContextMenuItem> item = (arg1)->GetItemAt(jarg2);
      result                                               = item.release();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebContextMenu_GetItemList(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineContextMenu*                                   arg1   = (Dali::WebEngineContextMenu*)webObj;
  std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>* result = nullptr;
  {
    try
    {
      result                                                                = new std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>();
      std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>> itemList = (arg1)->GetItemList();
      result->swap(itemList);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_RemoveItem(void* webObj, void* jarg2)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContextMenu* arg1   = (Dali::WebEngineContextMenu*)webObj;
  bool                        result = 0;
  {
    try
    {
      result = (arg1)->RemoveItem(*((Dali::WebEngineContextMenuItem*)jarg2));
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_AppendItemAsAction(void* webObj, int jarg2, const char* jarg3, bool jarg4)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContextMenu* arg1   = (Dali::WebEngineContextMenu*)webObj;
  bool                        result = 0;
  {
    try
    {
      result = (arg1)->AppendItemAsAction((Dali::WebEngineContextMenuItem::ItemTag)jarg2, jarg3, jarg4);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_AppendItem(void* webObj, int jarg2, const char* jarg3, const char* jarg4, bool jarg5)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContextMenu* arg1   = (Dali::WebEngineContextMenu*)webObj;
  bool                        result = 0;
  {
    try
    {
      result = (arg1)->AppendItem((Dali::WebEngineContextMenuItem::ItemTag)jarg2, jarg3, jarg4, jarg5);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_SelectItem(void* webObj, void* jarg2)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContextMenu* arg1   = (Dali::WebEngineContextMenu*)webObj;
  bool                        result = 0;
  {
    try
    {
      result = (arg1)->SelectItem(*((Dali::WebEngineContextMenuItem*)jarg2));
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_Hide(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContextMenu* arg1   = (Dali::WebEngineContextMenu*)webObj;
  bool                        result = 0;
  {
    try
    {
      result = (arg1)->Hide();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebContextMenuItem---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebContextMenuItem(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebContextMenuItem is null", 0);
    return;
  }

  Dali::WebEngineContextMenuItem* arg1 = (Dali::WebEngineContextMenuItem*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetTag(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineContextMenuItem* arg1   = (Dali::WebEngineContextMenuItem*)webObj;
  int                             result = 0;
  {
    try
    {
      result = (int)(arg1)->GetTag();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetType(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineContextMenuItem* arg1   = (Dali::WebEngineContextMenuItem*)webObj;
  int                             result = 0;
  {
    try
    {
      result = (int)(arg1)->GetType();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenuItem_IsEnabled(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineContextMenuItem* arg1   = (Dali::WebEngineContextMenuItem*)webObj;
  bool                            result = 0;
  {
    try
    {
      result = (arg1)->IsEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetLinkUrl(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineContextMenuItem* arg1 = (Dali::WebEngineContextMenuItem*)webObj;
  std::string                     result;
  {
    try
    {
      result = (arg1)->GetLinkUrl();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetImageUrl(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineContextMenuItem* arg1 = (Dali::WebEngineContextMenuItem*)webObj;
  std::string                     result;
  {
    try
    {
      result = (arg1)->GetImageUrl();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetTitle(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineContextMenuItem* arg1 = (Dali::WebEngineContextMenuItem*)webObj;
  std::string                     result;
  {
    try
    {
      result = (arg1)->GetTitle();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetParentMenu(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineContextMenuItem* arg1   = (Dali::WebEngineContextMenuItem*)webObj;
  Dali::WebEngineContextMenu*     result = 0;
  {
    try
    {
      std::unique_ptr<Dali::WebEngineContextMenu> item = (arg1)->GetParentMenu();
      result                                           = item.release();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

//----------------------------------WebCookieManager---------------------------------------------------
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebCookieManager_GetCookieAcceptPolicy(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineCookieManager* arg1 = (Dali::WebEngineCookieManager*)0;
  int                           ret;

  arg1 = (Dali::WebEngineCookieManager*)webObj;
  {
    try
    {
      ret = (int)(arg1)->GetCookieAcceptPolicy();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_SetCookieAcceptPolicy(void* webObj, int jarg2)
{
  Dali::WebEngineCookieManager* arg1 = (Dali::WebEngineCookieManager*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineCookieManager*)webObj;
  {
    try
    {
      (arg1)->SetCookieAcceptPolicy(
        (Dali::WebEngineCookieManager::CookieAcceptPolicy)jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_SetPersistentStorage(void* webObj, const char* jarg2, int jarg3)
{
  Dali::WebEngineCookieManager* arg1 = (Dali::WebEngineCookieManager*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineCookieManager*)webObj;
  std::string                                           arg2_str(jarg2);
  Dali::WebEngineCookieManager::CookiePersistentStorage arg3_enum = (Dali::WebEngineCookieManager::CookiePersistentStorage)jarg3;
  {
    try
    {
      (arg1)->SetPersistentStorage(arg2_str, arg3_enum);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_ClearCookies(void* webObj)
{
  Dali::WebEngineCookieManager* arg1 = (Dali::WebEngineCookieManager*)0;
  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::WebEngineCookieManager*)webObj;
  {
    try
    {
      (arg1)->ClearCookies();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_ChangesWatch(void* webObj, void* jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineCookieManager* arg1 = (Dali::WebEngineCookieManager*)webObj;
  void (*callback)()                 = (void (*)())jarg2;
  {
    try
    {
      (arg1)->ChangesWatch(callback);
    }
    CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebFormRepostDecision---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebFormRepostDecision(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebFormRepostDecision is null", 0);
    return;
  }

  Dali::WebEngineFormRepostDecision* arg1 = (Dali::WebEngineFormRepostDecision*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebFormRepostDecision_Reply(void* webObj, bool jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineFormRepostDecision* arg1 = (Dali::WebEngineFormRepostDecision*)webObj;
  {
    try
    {
      arg1->Reply(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebFrame---------------------------------------------------
SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebFrame_IsMainFrame(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineFrame* arg1   = (Dali::WebEngineFrame*)webObj;
  bool                  result = false;
  {
    try
    {
      result = (arg1)->IsMainFrame();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebPolicyDecision-----------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebPolicyDecision(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebPolicyDecision is null", 0);
    return;
  }

  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetUrl(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)webObj;
  std::string                    result;
  {
    try
    {
      result = arg1->GetUrl();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetCookie(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)webObj;
  std::string                    result;
  {
    try
    {
      result = arg1->GetCookie();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetDecisionType(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)webObj;
  int                            result;
  {
    try
    {
      result = (int)arg1->GetDecisionType();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetResponseMime(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)webObj;
  std::string                    result;
  {
    try
    {
      result = arg1->GetResponseMime();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetResponseStatusCode(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)webObj;
  int                            result;
  {
    try
    {
      result = arg1->GetResponseStatusCode();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetNavigationType(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)webObj;
  int                            result;
  {
    try
    {
      result = (int)arg1->GetNavigationType();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetFrame(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEnginePolicyDecision* arg1   = (Dali::WebEnginePolicyDecision*)webObj;
  Dali::WebEngineFrame*          result = 0;
  {
    try
    {
      result = &((arg1)->GetFrame());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetScheme(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)webObj;
  std::string                    result;
  {
    try
    {
      result = arg1->GetScheme();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebPolicyDecision_Use(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEnginePolicyDecision* arg1   = (Dali::WebEnginePolicyDecision*)webObj;
  bool                           result = false;
  {
    try
    {
      result = arg1->Use();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebPolicyDecision_Ignore(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEnginePolicyDecision* arg1   = (Dali::WebEnginePolicyDecision*)webObj;
  bool                           result = false;
  {
    try
    {
      result = arg1->Ignore();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebPolicyDecision_Suspend(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEnginePolicyDecision* arg1   = (Dali::WebEnginePolicyDecision*)webObj;
  bool                           result = false;
  {
    try
    {
      result = arg1->Suspend();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebRequestInterceptorPtr---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebRequestInterceptorPtr(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebRequestInterceptorPtr is null", 0);
    return;
  }

  Dali::WebEngineRequestInterceptorPtr* arg1 = (Dali::WebEngineRequestInterceptorPtr*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebRequestInterceptorPtr_Get(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineRequestInterceptorPtr* arg1   = (Dali::WebEngineRequestInterceptorPtr*)webObj;
  Dali::WebEngineRequestInterceptor*    result = 0;
  {
    try
    {
      result = arg1->Get();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebRequestInterceptor---------------------------------------------------
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_GetWebView(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebRequestInterceptor is null", 0);
    return 0;
  }

  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)jarg1;
  Dali::Toolkit::WebView             result;

  Dali::WebEnginePlugin* plugin = nullptr;
  {
    try
    {
      plugin = (arg1)->GetWebEngine();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  if(!plugin)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebEnginePlugin is null", 0);
    return 0;
  }

  {
    try
    {
      result = Dali::Toolkit::WebView::FindWebView(plugin);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  void* jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_GetUrl(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  std::string                        result;
  {
    try
    {
      result = (arg1)->GetUrl();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_GetMethod(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  std::string                        result;
  {
    try
    {
      result = (arg1)->GetMethod();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_GetHeaders(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineRequestInterceptor* arg1   = (Dali::WebEngineRequestInterceptor*)webObj;
  Dali::Property::Map*               result = 0;
  {
    try
    {
      Dali::Property::Map headers = (arg1)->GetHeaders();
      result                      = new Dali::Property::Map(headers);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_Ignore(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  bool                               ret  = false;
  {
    try
    {
      ret = (arg1)->Ignore();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_SetResponseStatus(void* webObj, int jarg2, const char* jarg3)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  bool                               ret  = false;
  std::string                        arg3_str(jarg3);
  {
    try
    {
      ret = (arg1)->SetResponseStatus(jarg2, arg3_str);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_AddResponseHeader(void* webObj, const char* jarg2, const char* jarg3)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  bool                               ret  = false;
  std::string                        arg2_str(jarg2);
  std::string                        arg3_str(jarg3);
  {
    try
    {
      ret = (arg1)->AddResponseHeader(arg2_str, arg3_str);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_AddResponseHeaders(void* webObj, void* jarg2)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  Dali::Property::Map*               arg2 = (Dali::Property::Map*)jarg2;
  bool                               ret  = false;
  {
    try
    {
      ret = (arg1)->AddResponseHeaders(*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_AddResponseBody(void* webObj, const int8_t* jarg2, uint32_t jarg3)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  bool                               ret  = false;
  {
    try
    {
      ret = (arg1)->AddResponseBody(jarg2, jarg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_AddResponse(void* webObj, const char* jarg2, const int8_t* jarg3, uint32_t jarg4)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  bool                               ret  = false;
  std::string                        arg2_str(jarg2);
  {
    try
    {
      ret = (arg1)->AddResponse(arg2_str, jarg3, jarg4);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_WriteResponseChunk(void* webObj, const int8_t* jarg2, uint32_t jarg3)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)webObj;
  bool                               ret  = false;
  {
    try
    {
      ret = (arg1)->WriteResponseChunk(jarg2, jarg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

//----------------------------------WebHttpAuthHandler---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebHttpAuthHandler(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebHttpAuthHandler is null", 0);
    return;
  }

  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHttpAuthHandler_GetRealm(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)webObj;
  std::string                     result;
  {
    try
    {
      result = (arg1)->GetRealm();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebHttpAuthHandler_Suspend(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)webObj;
  {
    try
    {
      (arg1)->Suspend();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebHttpAuthHandler_UseCredential(
  void* webObj, const char* jarg2, const char* jarg3)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)webObj;
  std::string                     arg2_str(jarg2);
  std::string                     arg3_str(jarg3);
  {
    try
    {
      (arg1)->UseCredential(arg2_str, arg3_str);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebHttpAuthHandler_CancelCredential(void* webObj)
{
  WEBOBJ_NULL_CHECK();
  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)webObj;
  {
    try
    {
      (arg1)->CancelCredential();
    }
    CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebPasswordData---------------------------------------------------
SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPasswordData_GetUrl(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineContext::PasswordData* arg1 = (Dali::WebEngineContext::PasswordData*)webObj;
  std::string                           result;
  {
    try
    {
      result = (arg1)->url;
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebPasswordData_GetUseFingerprint(void* webObj)
{
  WEBOBJ_NULL_CHECK(false);
  Dali::WebEngineContext::PasswordData* arg1   = (Dali::WebEngineContext::PasswordData*)webObj;
  bool                                  result = false;
  {
    try
    {
      result = (arg1)->useFingerprint;
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebLoadError-----------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebLoadError(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebLoadError is null", 0);
    return;
  }

  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebLoadError_GetUrl(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)webObj;
  std::string               result;
  {
    try
    {
      result = arg1->GetUrl();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebLoadError_GetCode(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)webObj;
  int                       result;
  {
    try
    {
      result = (int)arg1->GetCode();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebLoadError_GetDescription(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)webObj;
  std::string               result;
  {
    try
    {
      result = arg1->GetDescription();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebLoadError_GetType(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)webObj;
  int                       result;
  {
    try
    {
      result = (int)arg1->GetType();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebPasswordDataList---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebPasswordDataList(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebEngineContext::PasswordData List is null", 0);
    return;
  }

  std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebPasswordDataList_GetItemCount(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>* arg1   = (std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*)webObj;
  uint32_t                                                            result = 0;
  {
    try
    {
      result = (arg1)->size();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebPasswordDataList_ValueOfIndex(void* webObj, unsigned int jarg2)
{
  WEBOBJ_NULL_CHECK(nullptr);
  std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>* arg1   = (std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*)webObj;
  Dali::WebEngineContext::PasswordData*                               result = 0;
  {
    try
    {
      result = ((arg1)->operator[](jarg2)).get();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

//----------------------------------WebSecurityOrigin---------------------------------------------------
SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebSecurityOrigin_GetHost(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineSecurityOrigin* arg1 = (Dali::WebEngineSecurityOrigin*)webObj;
  std::string                    result;
  {
    try
    {
      result = (arg1)->GetHost();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebSecurityOrigin_GetProtocol(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineSecurityOrigin* arg1 = (Dali::WebEngineSecurityOrigin*)webObj;
  std::string                    result;
  {
    try
    {
      result = (arg1)->GetProtocol();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

//----------------------------------WebSecurityOriginList---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebSecurityOriginList(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebEngineSecurityOrigin List is null", 0);
    return;
  }

  std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebSecurityOriginList_GetItemCount(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* arg1   = (std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*)webObj;
  uint32_t                                                     result = 0;
  {
    try
    {
      result = (arg1)->size();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebSecurityOriginList_ValueOfIndex(void* webObj, unsigned int jarg2)
{
  WEBOBJ_NULL_CHECK(nullptr);
  std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* arg1   = (std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*)webObj;
  Dali::WebEngineSecurityOrigin*                               result = 0;
  {
    try
    {
      result = ((arg1)->operator[](jarg2)).get();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebHitTest---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebHitTest(void* jarg1)
{
  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebEngineHitTest is null", 0);
    return;
  }

  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebHitTest_GetResultContext(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  int                     ret;
  {
    try
    {
      ret = (int)(arg1)->GetResultContext();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHitTest_GetLinkUri(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  std::string             result;
  {
    try
    {
      result = (arg1)->GetLinkUri();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHitTest_GetLinkTitle(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  std::string             result;
  {
    try
    {
      result = (arg1)->GetLinkTitle();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHitTest_GetLinkLabel(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  std::string             result;
  {
    try
    {
      result = (arg1)->GetLinkLabel();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHitTest_GetImageUri(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  std::string             result;
  {
    try
    {
      result = (arg1)->GetImageUri();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHitTest_GetMediaUri(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  std::string             result;
  {
    try
    {
      result = (arg1)->GetMediaUri();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHitTest_GetTagName(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  std::string             result;
  {
    try
    {
      result = (arg1)->GetTagName();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHitTest_GetNodeValue(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  std::string             result;
  {
    try
    {
      result = (arg1)->GetNodeValue();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebHitTest_GetAttributes(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1   = (Dali::WebEngineHitTest*)webObj;
  Dali::Property::Map*    result = 0;
  {
    try
    {
      Dali::Property::Map attributes = (arg1)->GetAttributes();
      result                         = new Dali::Property::Map(attributes);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebHitTest_GetImageFileNameExtension(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  std::string             result;
  {
    try
    {
      result = (arg1)->GetImageFileNameExtension();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebHitTest_GetImageBuffer(void* webObj)
{
  WEBOBJ_NULL_CHECK(nullptr);
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)webObj;
  Dali::PixelData         result;
  {
    try
    {
      result = (arg1)->GetImageBuffer();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  Dali::PixelData* jresult = new Dali::PixelData((const Dali::PixelData&)result);
  return (void*)jresult;
}

//----------------------------------WebSettings---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowMixedContents(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->AllowMixedContents(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableSpatialNavigation(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableSpatialNavigation(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebSettings_GetDefaultFontSize(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  int                         ret;

  WEBOBJ_NULL_CHECK(0);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->GetDefaultFontSize();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetDefaultFontSize(void* webObj, int jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->SetDefaultFontSize(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableWebSecurity(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableWebSecurity(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableCacheBuilder(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableCacheBuilder(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_UseScrollbarThumbFocusNotifications(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->UseScrollbarThumbFocusNotifications(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableDoNotTrack(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableDoNotTrack(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowFileAccessFromExternalUrl(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->AllowFileAccessFromExternalUrl(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsJavaScriptEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsJavaScriptEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableJavaScript(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableJavaScript(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsAutoFittingEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsAutoFittingEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableAutoFitting(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableAutoFitting(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_ArePluginsEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->ArePluginsEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnablePlugins(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnablePlugins(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsPrivateBrowsingEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsPrivateBrowsingEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnablePrivateBrowsing(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnablePrivateBrowsing(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsLinkMagnifierEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsLinkMagnifierEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableLinkMagnifier(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableLinkMagnifier(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsKeypadWithoutUserActionUsed(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsKeypadWithoutUserActionUsed();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_UseKeypadWithoutUserAction(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->UseKeypadWithoutUserAction(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsAutofillPasswordFormEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsAutofillPasswordFormEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableAutofillPasswordForm(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableAutofillPasswordForm(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsFormCandidateDataEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsFormCandidateDataEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableFormCandidateData(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableFormCandidateData(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsTextSelectionEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsTextSelectionEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableTextSelection(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableTextSelection(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsTextAutosizingEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsTextAutosizingEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableTextAutosizing(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableTextAutosizing(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsArrowScrollEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsArrowScrollEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableArrowScroll(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableArrowScroll(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsClipboardEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsClipboardEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableClipboard(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableClipboard(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsImePanelEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsImePanelEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableImePanel(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->EnableImePanel(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowScriptsOpenWindows(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->AllowScriptsOpenWindows(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_AreImagesLoadedAutomatically(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->AreImagesLoadedAutomatically();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowImagesLoadAutomatically(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->AllowImagesLoadAutomatically(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebSettings_GetDefaultTextEncodingName(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  std::string                 result;

  WEBOBJ_NULL_CHECK(nullptr);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      result = (arg1)->GetDefaultTextEncodingName();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetDefaultTextEncodingName(void* webObj, const char* jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  std::string arg2_str(jarg2);
  {
    try
    {
      (arg1)->SetDefaultTextEncodingName(arg2_str);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_SetViewportMetaTag(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->SetViewportMetaTag(jarg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_SetForceZoom(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->SetForceZoom(jarg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsZoomForced(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsZoomForced();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_SetTextZoomEnabled(void* webObj, bool jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->SetTextZoomEnabled(jarg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsTextZoomEnabled(void* webObj)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsTextZoomEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetExtraFeature(void* webObj, const char* jarg2, bool jarg3)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  std::string                 arg2(jarg2);

  WEBOBJ_NULL_CHECK();
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      (arg1)->SetExtraFeature(arg2, jarg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsExtraFeatureEnabled(void* webObj, const char* jarg2)
{
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*)0;
  std::string                 arg2(jarg2);
  bool                        ret;

  WEBOBJ_NULL_CHECK(false);
  arg1 = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      ret = (arg1)->IsExtraFeatureEnabled(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetImeStyle(void* webObj, int jarg2)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebSettings* settings = (Dali::Toolkit::WebSettings*)webObj;
  {
    try
    {
      settings->SetImeStyle(jarg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebSettings_GetImeStyle(void* webObj)
{
  WEBOBJ_NULL_CHECK(0);
  Dali::Toolkit::WebSettings* settings = (Dali::Toolkit::WebSettings*)webObj;
  int                         style;
  {
    try
    {
      style = settings->GetImeStyle();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return style;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetDefaultAudioInputDevice(void* webObj, const char* id)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebSettings* settings = (Dali::Toolkit::WebSettings*)webObj;
  std::string                 deviceId(id);
  {
    try
    {
      settings->SetDefaultAudioInputDevice(deviceId);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableDragAndDrop(void* webObj, bool enable)
{
  WEBOBJ_NULL_CHECK();
  Dali::Toolkit::WebSettings* settings = (Dali::Toolkit::WebSettings*)webObj;

  try
  {
    settings->EnableDragAndDrop(enable);
  }
  CALL_CATCH_EXCEPTION();
}

#ifdef __cplusplus
} // end extern "C"
#endif
