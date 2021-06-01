/** Copyright (c) 2021 Samsung Electronics Co., Ltd.
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

#ifndef CSHARP_WEB_VIEW
#define CSHARP_WEB_VIEW
#endif

// EXTERNAL INCLUDES
#include "common.h"

#include "web-view-signal-converter.h"

#include <dali-toolkit/devel-api/controls/web-view/web-back-forward-list.h>
#include <dali-toolkit/devel-api/controls/web-view/web-context.h>
#include <dali-toolkit/devel-api/controls/web-view/web-cookie-manager.h>
#include <dali-toolkit/devel-api/controls/web-view/web-settings.h>
#include <dali-toolkit/devel-api/controls/web-view/web-view.h>
#include <dali/devel-api/adaptor-framework/web-engine-certificate.h>
#include <dali/devel-api/adaptor-framework/web-engine-context-menu.h>
#include <dali/devel-api/adaptor-framework/web-engine-context-menu-item.h>
#include <dali/devel-api/adaptor-framework/web-engine-console-message.h>
#include <dali/devel-api/adaptor-framework/web-engine-form-repost-decision.h>
#include <dali/devel-api/adaptor-framework/web-engine-frame.h>
#include <dali/devel-api/adaptor-framework/web-engine-hit-test.h>
#include <dali/devel-api/adaptor-framework/web-engine-http-auth-handler.h>
#include <dali/devel-api/adaptor-framework/web-engine-load-error.h>
#include <dali/devel-api/adaptor-framework/web-engine-policy-decision.h>
#include <dali/devel-api/adaptor-framework/web-engine-request-interceptor.h>
#include <dali/devel-api/adaptor-framework/web-engine-security-origin.h>
#include <dali/devel-api/adaptor-framework/web-engine-back-forward-list-item.h>
#include <dali/public-api/common/dali-common.h>

#define CALL_CATCH_EXCEPTION(ret)                                              \
  catch (std::out_of_range & e) {                                              \
    SWIG_CSharpException(SWIG_IndexError, const_cast<char *>(e.what()));       \
    return ret;                                                                \
  }                                                                            \
  catch (std::exception & e) {                                                 \
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char *>(e.what()));     \
    return ret;                                                                \
  }                                                                            \
  catch (Dali::DaliException e) {                                              \
    SWIG_CSharpException(SWIG_UnknownError, e.condition);                      \
    return ret;                                                                \
  }                                                                            \
  catch (...) {                                                                \
    SWIG_CSharpException(SWIG_UnknownError, "unknown error");                  \
    return ret;                                                                \
  }

/* Callback for returning strings to C# without leaking memory */
typedef char *(SWIGSTDCALL *SWIG_CSharpStringHelperCallback)(const char*);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

//----------------------------------WebView---------------------------------------------------
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_New() {
  void * jresult;
  Dali::Toolkit::WebView result;

  {
    try {
      result = Dali::Toolkit::WebView::New();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_New_2(char * jarg1, char * jarg2) {
  void * jresult;
  Dali::Toolkit::WebView result;

  std::string *arg1;
  std::string *arg2;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg1 is null string", 0);
    return 0;
  }
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return 0;
  }

  std::string jarg1_str = std::string(jarg1);
  std::string jarg2_str = std::string(jarg2);

  arg1 = &jarg1_str;
  arg2 = &jarg2_str;

  {
    try {
      result = Dali::Toolkit::WebView::New((std::string const &)*arg1, (std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_New_3(uint32_t jarg1, char ** jarg2) {
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "jarg2 is null string", 0);
    return 0;
  }

  Dali::Toolkit::WebView result;
  {
    try {
      result = Dali::Toolkit::WebView::New(jarg1, jarg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  void * jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebView__SWIG_1(void * jarg1) {
  void * jresult;
  Dali::Toolkit::WebView* arg1 = 0;
  Dali::Toolkit::WebView* result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::WebView*)new Dali::Toolkit::WebView((Dali::Toolkit::WebView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebView(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_Assign(void * jarg1, void * jarg2) {
  void * jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  Dali::Toolkit::WebView* arg2 = 0;
  Dali::Toolkit::WebView* result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  arg2 = (Dali::Toolkit::WebView*)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::WebView*)&(arg1)->operator=((Dali::Toolkit::WebView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_DownCast(void * jarg1) {
  void * jresult;
  Dali::BaseHandle arg1;
  Dali::BaseHandle* argp1;
  Dali::Toolkit::WebView result;

  argp1 = (Dali::BaseHandle*)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::WebView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView&)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_GetBackForwardList(void * jarg1) {
  void * jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  Dali::Toolkit::WebBackForwardList *result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  {
    try {
      result = arg1->GetBackForwardList();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_GetContext(void * jarg1) {
  void * jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  Dali::Toolkit::WebContext *result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  {
    try {
      result = arg1->GetContext();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_GetCookieManager(void * jarg1) {
  void * jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  Dali::Toolkit::WebCookieManager *result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  {
    try {
      result = arg1->GetCookieManager();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_GetSettings(void * jarg1) {
  void * jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  Dali::Toolkit::WebSettings *result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  {
    try {
      result = arg1->GetSettings();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_URL_get() {
  return (int)Dali::Toolkit::WebView::Property::URL;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_SCROLL_POSITION_get() {
  return (int)Dali::Toolkit::WebView::Property::SCROLL_POSITION;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_SCROLL_SIZE_get() {
  return (int)Dali::Toolkit::WebView::Property::SCROLL_SIZE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_CONTENT_SIZE_get() {
  return (int)Dali::Toolkit::WebView::Property::CONTENT_SIZE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_TITLE_get() {
  return (int)Dali::Toolkit::WebView::Property::TITLE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_VIDEO_HOLE_ENABLED_get() {
  return (int)Dali::Toolkit::WebView::Property::VIDEO_HOLE_ENABLED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_MOUSE_EVENTS_ENABLED_get() {
  return (int) Dali::Toolkit::WebView::Property::MOUSE_EVENTS_ENABLED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_KEY_EVENTS_ENABLED_get() {
  return (int) Dali::Toolkit::WebView::Property::KEY_EVENTS_ENABLED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_DOCUMENT_BACKGROUND_COLOR_get() {
  return (int)Dali::Toolkit::WebView::Property::DOCUMENT_BACKGROUND_COLOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_TILES_CLEARED_WHEN_HIDDEN_get() {
  return (int)Dali::Toolkit::WebView::Property::TILES_CLEARED_WHEN_HIDDEN;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_TILE_COVER_AREA_MULTIPLIER_get() {
  return (int)Dali::Toolkit::WebView::Property::TILE_COVER_AREA_MULTIPLIER;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_CURSOR_ENABLED_BY_CLIENT_get() {
  return (int)Dali::Toolkit::WebView::Property::CURSOR_ENABLED_BY_CLIENT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_SELECTED_TEXT_get() {
  return (int)Dali::Toolkit::WebView::Property::SELECTED_TEXT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_PAGE_ZOOM_FACTOR_get() {
  return (int)Dali::Toolkit::WebView::Property::PAGE_ZOOM_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_TEXT_ZOOM_FACTOR_get() {
  return (int)Dali::Toolkit::WebView::Property::TEXT_ZOOM_FACTOR;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_LOAD_PROGRESS_PERCENTAGE_get() {
  return (int)Dali::Toolkit::WebView::Property::LOAD_PROGRESS_PERCENTAGE;
}

//@DEPRECATED_2_0.9.
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_CACHE_MODEL_get() {
  return 0;
}

//@DEPRECATED_2_0.9.
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_COOKIE_ACCEPT_POLICY_get() {
  return 0;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_USER_AGENT_get() {
  return (int)Dali::Toolkit::WebView::Property::USER_AGENT;
}

//@DEPRECATED_2_0.9.
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_ENABLE_JAVASCRIPT_get() {
  return 0;
}

//@DEPRECATED_2_0.9.
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_LOAD_IMAGES_AUTOMATICALLY_get() {
  return 0;
}

//@DEPRECATED_2_0.9.
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_DEFAULT_TEXT_ENCODING_NAME_get() {
  return 0;
}

//@DEPRECATED_2_0.9.
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_DEFAULT_FONT_SIZE_get() {
  return 0;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_LoadUrl(void * jarg1, char * jarg2) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  std::string *arg2;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  std::string jarg2str = std::string(jarg2);
  arg2 = &jarg2str;
  {
    try {
      (arg1)->LoadUrl((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_LoadHtmlString(void * jarg1, char * jarg2) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  std::string *arg2;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string jarg2str = std::string(jarg2);
  arg2 = &jarg2str;
  {
    try {
      (arg1)->LoadHtmlString((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

//@DEPRECATED_2_0.9.
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_LoadHTMLString(void * jarg1, char * jarg2) {
  CSharp_Dali_WebView_LoadHtmlString(jarg1, jarg2);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_LoadHtmlStringOverrideCurrentEntry(void * jarg1, const char *jarg2, const char *jarg3, const char *jarg4) {
  if (!jarg2 || !jarg3 || !jarg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  std::string jarg2str = std::string(jarg2);
  std::string jarg3str = std::string(jarg3);
  std::string jarg4str = std::string(jarg4);
  bool result = false;
  {
    try {
      result = (arg1)->LoadHtmlStringOverrideCurrentEntry(jarg2str, jarg3str, jarg4str);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_LoadContents(void * jarg1, const char *jarg2, uint32_t jarg3, const char *jarg4, const char *jarg5, const char *jarg6) {
  if (!jarg2 || !jarg4 || !jarg5 || !jarg6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  std::string jarg2str = std::string(jarg2);
  std::string jarg4str = std::string(jarg4);
  std::string jarg5str = std::string(jarg5);
  std::string jarg6str = std::string(jarg6);
  bool result = false;
  {
    try {
      result = (arg1)->LoadContents(jarg2str, jarg3, jarg4str, jarg5str, jarg6str);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const void * SWIGSTDCALL CSharp_Dali_WebView_GetFavicon(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;
  Dali::Toolkit::ImageView* result = 0;
  {
    try {
      result = (Dali::Toolkit::ImageView*)&(arg1)->GetFavicon();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Reload(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->Reload();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_ReloadWithoutCache(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  bool result = false;
  {
    try {
      result = (arg1)->ReloadWithoutCache();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_StopLoading(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->StopLoading();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Suspend(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->Suspend();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Resume(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->Resume();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_SuspendNetworkLoading(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->SuspendNetworkLoading();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ResumeNetworkLoading(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->ResumeNetworkLoading();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_AddCustomHeader(void * jarg1, const char *jarg2, const char *jarg3) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  std::string jarg2str = std::string(jarg2);
  std::string jarg3str = std::string(jarg3);
  bool result = false;
  {
    try {
      result = (arg1)->AddCustomHeader(jarg2str, jarg3str);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_RemoveCustomHeader(void * jarg1, const char *jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  std::string jarg2str = std::string(jarg2);
  bool result = false;
  {
    try {
      result = (arg1)->RemoveCustomHeader(jarg2str);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebView_StartInspectorServer(void * jarg1, uint32_t jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  uint32_t result = 0;
  {
    try {
      result = (arg1)->StartInspectorServer(jarg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_StopInspectorServer(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  bool result = false;
  {
    try {
      result = (arg1)->StopInspectorServer();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ScrollBy(void * jarg1, int32_t jarg2, int32_t jarg3) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->ScrollBy(jarg2, jarg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_ScrollEdgeBy(void * jarg1, int32_t jarg2, int32_t jarg3) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  bool result = false;
  {
    try {
      result = (arg1)->ScrollEdgeBy(jarg2, jarg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_GoBack(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->GoBack();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_GoForward(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->GoForward();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CanGoBack(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      ret = (arg1)->CanGoBack();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CanGoForward(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      ret = (arg1)->CanGoForward();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_EvaluateJavaScript(void * jarg1, char * jarg2, void * jarg3) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;
  std::string *arg2;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string jarg2_str = std::string(jarg2);
  arg2 = &jarg2_str;

  {
    try {
      if (jarg3) {
        void (*handler)(char *) = (void (*)(char *))jarg3;
        (arg1)->EvaluateJavaScript((std::string const &)*arg2, [handler](const std::string &result) {
              handler(SWIG_csharp_string_callback(result.c_str()));
            });
      }
      else {
        (arg1)->EvaluateJavaScript((std::string const &)*arg2);
      }
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_AddJavaScriptMessageHandler(void * jarg1, char * jarg2, void * jarg3) {
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  std::string exposedObjectName = jarg2;
  void (*handler)(char*) = (void (*)(char*))jarg3;

  {
    try {
      webview->AddJavaScriptMessageHandler(exposedObjectName, [handler](const std::string &message) {
            handler(SWIG_csharp_string_callback(message.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterJavaScriptAlertCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  bool (*handler)(char*) = (bool (*)(char*))jarg2;
  {
    try {
      webview->RegisterJavaScriptAlertCallback([handler](const std::string &message) -> bool {
            return handler(SWIG_csharp_string_callback(message.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_JavaScriptAlertReply(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->JavaScriptAlertReply();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterJavaScriptConfirmCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  bool (*handler)(char*) = (bool (*)(char*))jarg2;

  {
    try {
      webview->RegisterJavaScriptConfirmCallback([handler](const std::string &message) -> bool {
            return handler(SWIG_csharp_string_callback(message.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_JavaScriptConfirmReply(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->JavaScriptConfirmReply(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterJavaScriptPromptCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  bool (*handler)(char *, char*) = (bool (*)(char *, char*))jarg2;

  {
    try {
      webview->RegisterJavaScriptPromptCallback([handler](const std::string &message1,
                    const std::string &message2) -> bool {
            return handler(SWIG_csharp_string_callback(message1.c_str()),
                           SWIG_csharp_string_callback(message2.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_JavaScriptPromptReply(void * jarg1, char * jarg2) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;
  std::string jarg2str = std::string(jarg2);
  {
    try {
      (arg1)->JavaScriptPromptReply(jarg2str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WebView_CreateHitTest(void * jarg1, int32_t jarg2, int32_t jarg3, int jarg4) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;
  Dali::WebEngineHitTest* result = 0;
  {
    try {
      std::unique_ptr<Dali::WebEngineHitTest> hitTest = (arg1)->CreateHitTest(jarg2, jarg3, (Dali::WebEngineHitTest::HitTestMode)jarg4);
      result = hitTest.release();
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CreateHitTestAsynchronously(void * jarg1, int32_t jarg2, int32_t jarg3, int jarg4, void * jarg5) {
  Dali::Toolkit::WebView *webview = (Dali::Toolkit::WebView *)jarg1;
  bool (*handler)(Dali::WebEngineHitTest*) = (bool (*)(Dali::WebEngineHitTest*))jarg5;
  bool result = false;
  {
    try {
      result = webview->CreateHitTestAsynchronously(jarg2, jarg3, (Dali::WebEngineHitTest::HitTestMode)jarg4,
          [handler](std::unique_ptr<Dali::WebEngineHitTest> hitTest) -> bool {
            return handler(hitTest.release());
          });
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearHistory(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->ClearHistory();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearAllTilesResources(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->ClearAllTilesResources();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_SetScaleFactor(void * jarg1, float jarg2, void * jarg3) {
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector2 is null", 0);
    return;
  }

  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  Dali::Vector2 *arg3 = (Dali::Vector2 *)jarg3;
  {
    try {
      (arg1)->SetScaleFactor(jarg2, *arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_WebView_GetScaleFactor(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  float result = 0.0f;
  {
    try {
      result = (arg1)->GetScaleFactor();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ActivateAccessibility(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->ActivateAccessibility(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_HighlightText(void * jarg1, const char *jarg2, int jarg3, uint32_t jarg4) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  std::string jarg2str = std::string(jarg2);
  bool result = false;
  {
    try {
      result = (arg1)->HighlightText(
          jarg2str, (Dali::WebEnginePlugin::FindOption)jarg3, jarg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_AddDynamicCertificatePath(void * jarg1, const char *jarg2, const char *jarg3) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  std::string jarg2str = std::string(jarg2);
  std::string jarg3str = std::string(jarg3);
  {
    try {
      (arg1)->AddDynamicCertificatePath(jarg2str, jarg3str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WebView_GetScreenshot(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  Dali::Rect<int32_t> *arg = (Dali::Rect<int32_t> *)jarg2;
  Dali::Toolkit::ImageView result;
  {
    try {
      result = (arg1)->GetScreenshot(*arg, jarg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  void * jresult =
      new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView &)result);
  return jresult;
}

using SWIG_CallbackWebViewScreenshotCaptured = void(SWIGSTDCALL *)(Dali::Toolkit::ImageView *);
SWIG_CallbackWebViewScreenshotCaptured swig_callbackOnWebViewScreenshotCaptured;

void OnWebViewScreenshotCapturedCallback(Dali::Toolkit::ImageView imageView) {
  Dali::Toolkit::ImageView *pImageView = &imageView;
  swig_callbackOnWebViewScreenshotCaptured(pImageView);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_GetScreenshotAsynchronously(void * jarg1, void * jarg2, float jarg3, void * jarg4) {
  swig_callbackOnWebViewScreenshotCaptured = (SWIG_CallbackWebViewScreenshotCaptured)jarg4;
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  Dali::Rect<int32_t> *arg2 = (Dali::Rect<int32_t> *)jarg2;
  Dali::Toolkit::WebView::WebViewScreenshotCapturedCallback callback = OnWebViewScreenshotCapturedCallback;
  bool result;
  {
    try {
      result = (arg1)->GetScreenshotAsynchronously(*arg2, jarg3, callback);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CheckVideoPlayingAsynchronously(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  void (*handler)(bool) = (void (*)(bool))jarg2;
  bool result;
  {
    try {
      result = (arg1)->CheckVideoPlayingAsynchronously([handler](bool isPlaying) { handler(isPlaying); });
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterGeolocationPermissionCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  bool (*handler)(char *, char *) = (bool (*)(char *, char *))jarg2;
  {
    try {
      (arg1)->RegisterGeolocationPermissionCallback([handler](const std::string &host, const std::string &protocol) -> bool {
            return handler(SWIG_csharp_string_callback(host.c_str()),
                           SWIG_csharp_string_callback(protocol.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

//@DEPRECATED_2_0.9.
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearCache(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->GetContext()->ClearCache();
    } CALL_CATCH_EXCEPTION();
  }
}

//@DEPRECATED_2_0.9.
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearCookies(void * jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->GetCookieManager()->ClearCookies();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT Dali::Toolkit::Control *SWIGSTDCALL CSharp_Dali_WebView_SWIGUpcast(Dali::Toolkit::WebView* jarg1) {
  return (Dali::Toolkit::Control*)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewPageLoadSignal_PageLoadStarted(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewPageLoadSignal *result = 0;
  {
    try {
      result = new SignalConverter::WebViewPageLoadSignal(&webview->PageLoadStartedSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewPageLoadSignal_PageLoadInProgress(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewPageLoadSignal *result = 0;
  {
    try {
      result = new SignalConverter::WebViewPageLoadSignal(&webview->PageLoadInProgressSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewPageLoadSignal_PageLoadFinished(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewPageLoadSignal *result = 0;
  {
    try {
      result = new SignalConverter::WebViewPageLoadSignal(&webview->PageLoadFinishedSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewPageLoadSignal(void * jarg1) {
  SignalConverter::WebViewPageLoadSignal *object = (SignalConverter::WebViewPageLoadSignal*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewPageLoadSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewPageLoadSignal* proxy = (SignalConverter::WebViewPageLoadSignal*)jarg1;
  SignalConverter::WebViewPageLoadSignal::CallbackType callback = (SignalConverter::WebViewPageLoadSignal::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewPageLoadSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewPageLoadSignal* proxy = (SignalConverter::WebViewPageLoadSignal*)jarg1;
  SignalConverter::WebViewPageLoadSignal::CallbackType callback = (SignalConverter::WebViewPageLoadSignal::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewPageLoadErrorSignal_PageLoadError(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>(&webview->PageLoadErrorSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewPageLoadErrorSignal(void * jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>* object = (SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewPageLoadErrorSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewPageLoadErrorSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineLoadError>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewScrollEdgeReachedSignal_ScrollEdgeReached(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewScrollEdgeReachedSignal* result = 0;
  {
    try {
      result = new SignalConverter::WebViewScrollEdgeReachedSignal(&webview->ScrollEdgeReachedSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewScrollEdgeReachedSignal(void * jarg1) {
  SignalConverter::WebViewScrollEdgeReachedSignal*object = (SignalConverter::WebViewScrollEdgeReachedSignal*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewScrollEdgeReachedSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewScrollEdgeReachedSignal* proxy = (SignalConverter::WebViewScrollEdgeReachedSignal*)jarg1;
  SignalConverter::WebViewScrollEdgeReachedSignal::CallbackType callback = (SignalConverter::WebViewScrollEdgeReachedSignal::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewScrollEdgeReachedSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewScrollEdgeReachedSignal* proxy = (SignalConverter::WebViewScrollEdgeReachedSignal*)jarg1;
  SignalConverter::WebViewScrollEdgeReachedSignal::CallbackType callback = (SignalConverter::WebViewScrollEdgeReachedSignal::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewUrlChangedSignal_UrlChanged(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewUrlChangedSignal* result = 0;
  {
    try {
      result = new SignalConverter::WebViewUrlChangedSignal(&webview->UrlChangedSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewUrlChangedSignal(void * jarg1) {
  SignalConverter::WebViewUrlChangedSignal* object = (SignalConverter::WebViewUrlChangedSignal*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewUrlChangedSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewUrlChangedSignal* proxy = (SignalConverter::WebViewUrlChangedSignal*)jarg1;
  SignalConverter::WebViewUrlChangedSignal::CallbackType callback = (SignalConverter::WebViewUrlChangedSignal::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewUrlChangedSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewUrlChangedSignal* proxy = (SignalConverter::WebViewUrlChangedSignal*)jarg1;
  SignalConverter::WebViewUrlChangedSignal::CallbackType callback = (SignalConverter::WebViewUrlChangedSignal::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_WebViewContextMenuCustomizedSignal_ContextMenuCustomized(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>(&webview->ContextMenuCustomizedSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewContextMenuCustomizedSignal(void * jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>* object = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewContextMenuCustomizedSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewContextMenuCustomizedSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenu>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_WebViewContextMenuItemSelectedSignal_ContextMenuItemSelected(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>(&webview->ContextMenuItemSelectedSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewContextMenuItemSelectedSignal(void * jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>* object = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewContextMenuItemSelectedSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewContextMenuItemSelectedSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineContextMenuItem>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WebViewFormRepostDecisionSignal_FormRepostDecision(void* jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>(&webview->FormRepostDecisionSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewFormRepostDecisionSignal(void* jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>* object = (SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewFormRepostDecisionSignal_Connect(void* jarg1, void* jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewFormRepostDecisionSignal_Disconnect(void* jarg1, void* jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineFormRepostDecision>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebViewFrameRenderedSignal_FrameRendered(void* jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  Dali::Toolkit::WebView::WebViewFrameRenderedSignalType* result = 0;
  {
    try {
      result = (Dali::Toolkit::WebView::WebViewFrameRenderedSignalType*)(&(webview->FrameRenderedSignal()));
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewFrameRenderedSignal_Connect(void* jarg1, void* jarg2) {
  Dali::Toolkit::WebView::WebViewFrameRenderedSignalType* proxy = (Dali::Toolkit::WebView::WebViewFrameRenderedSignalType*)jarg1;
  void (*callback)(Dali::Toolkit::WebView) = (void (*)(Dali::Toolkit::WebView))jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewFrameRenderedSignal_Disconnect(void* jarg1, void* jarg2) {
  Dali::Toolkit::WebView::WebViewFrameRenderedSignalType* proxy = (Dali::Toolkit::WebView::WebViewFrameRenderedSignalType*)jarg1;
  void (*callback)(Dali::Toolkit::WebView) = (void (*)(Dali::Toolkit::WebView))jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewRequestInterceptorSignal_RequestInterceptor(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>(&webview->RequestInterceptorSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewRequestInterceptorSignal(void* jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>* object = (SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewRequestInterceptorSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewRequestInterceptorSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineRequestInterceptor>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WebViewConsoleMessageSignal_ConsoleMessage(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>(&webview->ConsoleMessageSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewConsoleMessageSignal(void * jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>* object = (SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewConsoleMessageSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewConsoleMessageSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineConsoleMessage>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebViewCertificateSignal_CertificateConfirm(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>(&webview->CertificateConfirmSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WebViewCertificateSignal_SslCertificateChanged(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>(&webview->SslCertificateChangedSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewCertificateSignal(void * jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>* object = (SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewCertificateSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewCertificateSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineCertificate>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WebViewResponsePolicyDecisionSignal_ResponsePolicyDecision(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>(&webview->ResponsePolicyDecisionSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewResponsePolicyDecisionSignal(void * jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>* object = (SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewPolicyDecisionSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewPolicyDecisionSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEnginePolicyDecision>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_WebViewHttpAuthHandlerSignal_HttpAuthHandler(void * jarg1) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>* result = 0;
  {
    try {
      result = new SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>(&webview->HttpAuthHandlerSignal());
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebViewHttpAuthHandlerSignal(void * jarg1) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>* object = (SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>*)jarg1;
  {
    try {
      delete object;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewHttpAuthHandlerSignal_Connect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>::CallbackType)jarg2;
  {
    try {
      proxy->Connect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebViewHttpAuthHandlerSignal_Disconnect(void * jarg1, void * jarg2) {
  SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>* proxy = (SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>*)jarg1;
  SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>::CallbackType callback = (SignalConverter::WebViewProxySignal<Dali::WebEngineHttpAuthHandler>::CallbackType)jarg2;
  {
    try {
      proxy->Disconnect(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebBackForwardListItem-----------------------------------------------------
SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetUrl(void * jarg1) {
  Dali::WebEngineBackForwardListItem *arg1 = (Dali::WebEngineBackForwardListItem *)0;
  std::string result;
  arg1 = (Dali::WebEngineBackForwardListItem *)jarg1;
  {
    try {
      result = arg1->GetUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetTitle(void * jarg1) {
  Dali::WebEngineBackForwardListItem *arg1 = (Dali::WebEngineBackForwardListItem *)0;
  std::string result;
  arg1 = (Dali::WebEngineBackForwardListItem *)jarg1;
  {
    try {
      result = (arg1)->GetTitle();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetOriginalUrl(void * jarg1) {
  Dali::WebEngineBackForwardListItem *arg1 = (Dali::WebEngineBackForwardListItem *)0;
  std::string result;
  arg1 = (Dali::WebEngineBackForwardListItem *)jarg1;
  {
    try {
      result = (arg1)->GetOriginalUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

//----------------------------------WebBackForwardList-----------------------------------------------------
SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetItemCount(void * jarg1) {
  Dali::Toolkit::WebBackForwardList *arg1 = (Dali::Toolkit::WebBackForwardList *)0;
  uint32_t result = 0;
  arg1 = (Dali::Toolkit::WebBackForwardList *)jarg1;
  {
    try {
      result = (arg1)->GetItemCount();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetCurrentItem(void *jarg1) {
  Dali::WebEngineBackForwardListItem *result = 0;
  Dali::Toolkit::WebBackForwardList *arg1 = (Dali::Toolkit::WebBackForwardList *)jarg1;
  {
    try {
      std::unique_ptr<Dali::WebEngineBackForwardListItem> temp = (arg1)->GetCurrentItem();
      result = temp.release();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetPreviousItem(void* jarg1) {
  Dali::WebEngineBackForwardListItem *result = 0;
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList *)jarg1;
  {
    try {
      std::unique_ptr<Dali::WebEngineBackForwardListItem> temp = (arg1)->GetPreviousItem();
      result = temp.release();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetNextItem(void* jarg1) {
  Dali::WebEngineBackForwardListItem *result = 0;
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList *)jarg1;
  {
    try {
      std::unique_ptr<Dali::WebEngineBackForwardListItem> temp = (arg1)->GetNextItem();
      result = temp.release();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetItemAtIndex(void *jarg1, int jarg2) {
  Dali::WebEngineBackForwardListItem *result = 0;
  Dali::Toolkit::WebBackForwardList *arg1 = (Dali::Toolkit::WebBackForwardList *)jarg1;
  {
    try {
      std::unique_ptr<Dali::WebEngineBackForwardListItem> temp = (arg1)->GetItemAtIndex(jarg2);
      result = temp.release();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebBackForwardList_DeleteItem(void *jarg1) {
  Dali::WebEngineBackForwardListItem *arg1 = (Dali::WebEngineBackForwardListItem *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetBackwardItems(void *jarg1, int jarg2) {
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> *result = 0;
  Dali::Toolkit::WebBackForwardList *arg1 = (Dali::Toolkit::WebBackForwardList *)jarg1;
  {
    try {
      result = new std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>();
      std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> temp = (arg1)->GetBackwardItems(jarg2);
      result->swap(temp);
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetForwardItems(void *jarg1, int jarg2) {
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> *result = 0;
  Dali::Toolkit::WebBackForwardList *arg1 = (Dali::Toolkit::WebBackForwardList *)jarg1;
  {
    try {
      result = new std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>>();
      std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> temp = (arg1)->GetForwardItems(jarg2);
      result->swap(temp);
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebBackForwardList_DeleteCopiedItems(void *jarg1) {
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> *arg1 = (std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetCopiedItemsCount(void *jarg1) {
  unsigned int result = 0;
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> *arg1 = (std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> *)jarg1;
  {
    try {
      result = (arg1)->size();
    } CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetItemAtIndexFromCopiedItems(void *jarg1, unsigned int jarg2) {
  Dali::WebEngineBackForwardListItem *result = 0;
  std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> *arg1 = (std::vector<std::unique_ptr<Dali::WebEngineBackForwardListItem>> *)jarg1;
  {
    try {
      result = (arg1)->operator[](jarg2).get();
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

//----------------------------------WebConsoleMessage-----------------------------------------------------
SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebConsoleMessage_GetSource(void* jarg1) {
  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)jarg1;
  std::string result;
  {
    try {
      result = arg1->GetSource();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebConsoleMessage_GetLine(void* jarg1) {
  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)jarg1;
  uint32_t result;
  {
    try {
      result = arg1->GetLine();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebConsoleMessage_GetSeverityLevel(void* jarg1) {
  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)jarg1;
  int result;
  {
    try {
      result = (int)arg1->GetSeverityLevel();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebConsoleMessage_GetText(void* jarg1) {
  Dali::WebEngineConsoleMessage* arg1 = (Dali::WebEngineConsoleMessage*)jarg1;
  std::string result;
  {
    try {
      result = arg1->GetText();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

//----------------------------------WebCertificate-----------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCertificate_Allow(void * jarg1, bool jarg2) {
  Dali::WebEngineCertificate *arg1 = (Dali::WebEngineCertificate*)jarg1;
  {
    try {
      (arg1)->Allow(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebCertificate_IsFromMainFrame(void * jarg1) {
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)jarg1;
  bool ret;
  {
    try {
      ret = (arg1)->IsFromMainFrame();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT const char *SWIGSTDCALL CSharp_Dali_WebCertificate_GetPem(void * jarg1) {
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetPem();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebCertificate_IsContextSecure(void * jarg1) {
  Dali::WebEngineCertificate* arg1 = (Dali::WebEngineCertificate*)jarg1;
  bool ret;
  {
    try {
      ret = (arg1)->IsContextSecure();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

//----------------------------------WebContext-----------------------------------------------------
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebContext_GetCacheModel(void * jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  int ret;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      ret = (int)(arg1)->GetCacheModel();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetCacheModel(void * jarg1, int jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->SetCacheModel((Dali::WebEngineContext::CacheModel)jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetProxyUri(void * jarg1, const char * jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  std::string arg2_str(jarg2);
  {
    try {
      (arg1)->SetProxyUri(arg2_str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetCertificateFilePath(void * jarg1, const char * jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  std::string arg2_str(jarg2);
  {
    try {
      (arg1)->SetCertificateFilePath(arg2_str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetDefaultProxyAuth(void * jarg1, const char * jarg2, const char * jarg3) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  std::string arg2_str(jarg2);
  std::string arg3_str(jarg3);
  {
    try {
      (arg1)->SetDefaultProxyAuth(arg2_str, arg3_str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllWebDatabase(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->DeleteAllWebDatabase();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_GetWebDatabaseOrigins(void *jarg1, void *jarg2) {
  Dali::Toolkit::WebContext * arg1 = (Dali::Toolkit::WebContext *)jarg1;
  void (*handler)(std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*) = (void (*)(std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*))jarg2;
  bool result = false;
  {
    try {
      result = (arg1)->GetWebDatabaseOrigins(
                 [handler](std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>& originList) {
                    std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* webOriginList = new std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>();
                    webOriginList->swap(originList);
                    handler(webOriginList);
                 });
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteWebDatabase(void *jarg1, void *jarg2) {
  Dali::Toolkit::WebContext * arg1 = (Dali::Toolkit::WebContext *)jarg1;
  Dali::WebEngineSecurityOrigin * origin = (Dali::WebEngineSecurityOrigin *)jarg2;
  bool result = false;
  {
    try {
      result = (arg1)->DeleteWebDatabase(*origin);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_GetWebStorageOrigins(void *jarg1, void *jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  void (*handler)(std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*) = (void (*)(std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*))jarg2;
  bool result = false;
  {
    try {
      result = (arg1)->GetWebStorageOrigins(
                 [handler](std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>& originList) {
                    std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* contextOriginList = new std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>();
                    contextOriginList->swap(originList);
                    handler(contextOriginList);
                 });
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_GetWebStorageUsageForOrigin(void *jarg1, void *jarg2, void *jarg3) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  Dali::WebEngineSecurityOrigin *origin = (Dali::WebEngineSecurityOrigin *)jarg2;
  void (*callback)(uint64_t) = (void (*)(uint64_t))jarg3;
  bool result = false;
  {
    try {
      result = (arg1)->GetWebStorageUsageForOrigin(*origin, callback);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllWebStorage(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->DeleteAllWebStorage();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteWebStorage(void *jarg1, void *jarg2) {
  Dali::Toolkit::WebContext * arg1 = (Dali::Toolkit::WebContext *)jarg1;
  Dali::WebEngineSecurityOrigin * origin = (Dali::WebEngineSecurityOrigin *)jarg2;
  bool result = false;
  {
    try {
      result = (arg1)->DeleteWebStorage(*origin);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteLocalFileSystem(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->DeleteLocalFileSystem();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_ClearCache(void * jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->ClearCache();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteApplicationCache(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebContext * arg1 = (Dali::Toolkit::WebContext *)jarg1;
  Dali::WebEngineSecurityOrigin * origin = (Dali::WebEngineSecurityOrigin *)jarg2;
  bool result = false;
  {
    try {
      result = (arg1)->DeleteApplicationCache(*origin);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_GetFormPasswordList(void *jarg1, void *jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  void (*handler)(std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*) = (void (*)(std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*))jarg2;
  {
    try {
      (arg1)->GetFormPasswordList(
                 [handler](std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>& passwordList) {
                    std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>* contextPasswordList = new std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>();
                    contextPasswordList->swap(passwordList);
                    handler(contextPasswordList);
                 });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterDownloadStartedCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  void (*handler)(char *) = (void (*)(char *))jarg2;
  {
    try {
      (arg1)->RegisterDownloadStartedCallback(
                 [handler](const std::string& url) {
                   handler(SWIG_csharp_string_callback(url.c_str()));
                 });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterMimeOverriddenCallback(void *jarg1, void *jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)jarg1;
  bool (*handler)(char *, char *, char *) = (bool (*)(char *, char *, char *))jarg2;
  {
    try {
      (arg1)->RegisterMimeOverriddenCallback(
          [handler](const std::string& url, const std::string& mime, std::string& newMime) -> bool {
            return handler(SWIG_csharp_string_callback(url.c_str()),
                           SWIG_csharp_string_callback(mime.c_str()),
                           SWIG_csharp_string_callback(newMime.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_EnableCache(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->EnableCache(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_IsCacheEnabled(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  bool ret;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      ret = (arg1)->IsCacheEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebContext_GetContextCertificateFile(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  char *jresult;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      const std::string str = (arg1)->GetContextCertificateFile();
      jresult = SWIG_csharp_string_callback(str.c_str());
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetContextAppId(void *jarg1, char *jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  const std::string str(jarg2);
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->SetContextAppId(str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_SetContextAppVersion(void *jarg1, char *jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return false;
  }

  const std::string str(jarg2);
  bool ret;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      ret = (arg1)->SetContextAppVersion(str);
    } CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetContextApplicationType(void *jarg1, int jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->SetContextApplicationType((Dali::WebEngineContext::ApplicationType)jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetContextTimeOffset(void *jarg1, float jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->SetContextTimeOffset(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetContextTimeZoneOffset(void *jarg1, float jarg2, float jarg3) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->SetContextTimeZoneOffset(jarg2, jarg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterUrlSchemesAsCorsEnabled(void *jarg1, char **jarg2, unsigned int jarg3) {
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      std::vector<std::string> vecStr;
      for (unsigned int i=0; i<jarg3; i++)
      {
        if (!jarg2[i]) {
          SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
          return;
        }
        std::string str(jarg2[i]);
        vecStr.push_back(str);
      }
      (arg1)->RegisterUrlSchemesAsCorsEnabled(vecStr);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_RegisterJsPluginMimeTypes(void *jarg1, char **jarg2, unsigned int jarg3) {
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      std::vector<std::string> vecStr;
      for (unsigned int i=0; i<jarg3; i++)
      {
        if (!jarg2[i]) {
          SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
          return;
        }
        std::string str(jarg2[i]);
        vecStr.push_back(str);
      }
      (arg1)->RegisterJsPluginMimeTypes(vecStr);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetDefaultZoomFactor(void *jarg1, float jarg2) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->SetDefaultZoomFactor(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_WebContext_GetContextDefaultZoomFactor(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  float ret;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      ret = (arg1)->GetContextDefaultZoomFactor();
    } CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllApplicationCache(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  bool ret;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      ret = (arg1)->DeleteAllApplicationCache();
    } CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllWebIndexedDatabase(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  bool ret;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      ret = (arg1)->DeleteAllWebIndexedDatabase();
    } CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteFormPasswordDataList(void *jarg1, char **jarg2, unsigned int jarg3) {
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      std::vector<std::string> vecStr;
      for (unsigned int i=0; i<jarg3; i++)
      {
        if (!jarg2[i]) {
          SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
          return;
        }
        std::string str(jarg2[i]);
        vecStr.push_back(str);
      }
      (arg1)->DeleteFormPasswordDataList(vecStr);
    } CALL_CATCH_EXCEPTION()
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllFormPasswordData(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->DeleteAllFormPasswordData();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteAllFormCandidateData(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->DeleteAllFormCandidateData();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebContext_GetContextProxy(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  char *jresult;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      const std::string str = (arg1)->GetContextProxy();
      jresult = SWIG_csharp_string_callback(str.c_str());
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetContextProxy(void *jarg1, char *jarg2, char *jarg3) {
  if (!jarg2 || !jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  const std::string arg2(jarg2);
  const std::string arg3(jarg3);

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      (arg1)->SetContextProxy(arg2, arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebContext_GetProxyBypassRule(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  char *jresult;

  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      const std::string str = (arg1)->GetProxyBypassRule();
      jresult = SWIG_csharp_string_callback(str.c_str());
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContext_FreeUnusedMemory(void *jarg1) {
  Dali::Toolkit::WebContext *arg1 = (Dali::Toolkit::WebContext *)0;
  bool ret;
  arg1 = (Dali::Toolkit::WebContext *)jarg1;
  {
    try {
      ret = (arg1)->FreeUnusedMemory();
    } CALL_CATCH_EXCEPTION(0);
  }

  return ret;
}

//----------------------------------WebContextMenu---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebContextMenu(void * jarg1) {
  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebContextMenu is null", 0);
    return;
  }

  Dali::WebEngineContextMenu* arg1 = (Dali::WebEngineContextMenu*)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebContextMenu_GetItemCount(void *jarg1) {
  Dali::WebEngineContextMenu *arg1 = (Dali::WebEngineContextMenu *)jarg1;
  uint32_t ret;
  {
    try {
      ret = (arg1)->GetItemCount();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebContextMenu_GetItemAt(void *jarg1, uint32_t jarg2) {
  Dali::WebEngineContextMenu *arg1 = (Dali::WebEngineContextMenu *)jarg1;
  Dali::WebEngineContextMenuItem *result = 0;
  {
    try {
      std::unique_ptr<Dali::WebEngineContextMenuItem> item = (arg1)->GetItemAt(jarg2);
      result = item.release();
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebContextMenu_GetItemList(void *jarg1) {
  Dali::WebEngineContextMenu *arg1 = (Dali::WebEngineContextMenu *)jarg1;
  std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>* result = nullptr;
  {
    try {
      result = new std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>();
      std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>> itemList = (arg1)->GetItemList();
      result->swap(itemList);
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebContextMenu_GetPosition(void * jarg1) {
  Dali::WebEngineContextMenu* arg1 = (Dali::WebEngineContextMenu*)jarg1;
  Dali::Vector2 result;
  {
    try {
      result = (arg1)->GetPosition();
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)new Dali::Vector2((const Dali::Vector2&)result);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_RemoveItem(void *jarg1, void *jarg2) {
  Dali::WebEngineContextMenu *arg1 = (Dali::WebEngineContextMenu *)jarg1;
  bool result = 0;
  {
    try {
      result = (arg1)->RemoveItem(*((Dali::WebEngineContextMenuItem*)jarg2));
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_AppendItemAsAction(void *jarg1, int jarg2, const char *jarg3, bool jarg4) {
  Dali::WebEngineContextMenu *arg1 = (Dali::WebEngineContextMenu *)jarg1;
  bool result = 0;
  {
    try {
      result = (arg1)->AppendItemAsAction((Dali::WebEngineContextMenuItem::ItemTag)jarg2, jarg3, jarg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_AppendItem(void *jarg1, int jarg2, const char *jarg3, const char *jarg4, bool jarg5) {
  Dali::WebEngineContextMenu *arg1 = (Dali::WebEngineContextMenu *)jarg1;
  bool result = 0;
  {
    try {
      result = (arg1)->AppendItem((Dali::WebEngineContextMenuItem::ItemTag)jarg2, jarg3, jarg4, jarg5);
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_SelectItem(void *jarg1, void *jarg2) {
  Dali::WebEngineContextMenu *arg1 = (Dali::WebEngineContextMenu *)jarg1;
  bool result = 0;
  {
    try {
      result = (arg1)->SelectItem(*((Dali::WebEngineContextMenuItem*)jarg2));
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenu_Hide(void *jarg1) {
  Dali::WebEngineContextMenu *arg1 = (Dali::WebEngineContextMenu *)jarg1;
  bool result = 0;
  {
    try {
      result = (arg1)->Hide();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebContextMenuItem---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebContextMenuItem(void * jarg1) {
  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebContextMenuItem is null", 0);
    return;
  }

  Dali::WebEngineContextMenuItem* arg1 = (Dali::WebEngineContextMenuItem*)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetTag(void *jarg1) {
  Dali::WebEngineContextMenuItem *arg1 = (Dali::WebEngineContextMenuItem *)jarg1;
  int result = 0;
  {
    try {
      result = (int)(arg1)->GetTag();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetType(void *jarg1) {
  Dali::WebEngineContextMenuItem *arg1 = (Dali::WebEngineContextMenuItem *)jarg1;
  int result = 0;
  {
    try {
      result = (int)(arg1)->GetType();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebContextMenuItem_IsEnabled(void *jarg1) {
  Dali::WebEngineContextMenuItem *arg1 = (Dali::WebEngineContextMenuItem *)jarg1;
  bool result = 0;
  {
    try {
      result = (arg1)->IsEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetLinkUrl(void *jarg1) {
  Dali::WebEngineContextMenuItem *arg1 = (Dali::WebEngineContextMenuItem *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetLinkUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetImageUrl(void *jarg1) {
  Dali::WebEngineContextMenuItem *arg1 = (Dali::WebEngineContextMenuItem *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetImageUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetTitle(void *jarg1) {
  Dali::WebEngineContextMenuItem *arg1 = (Dali::WebEngineContextMenuItem *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetTitle();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebContextMenuItem_GetParentMenu(void *jarg1) {
  Dali::WebEngineContextMenuItem* arg1 = (Dali::WebEngineContextMenuItem*)jarg1;
  Dali::WebEngineContextMenu* result = 0;
  {
    try {
      std::unique_ptr<Dali::WebEngineContextMenu> item = (arg1)->GetParentMenu();
      result = item.release();
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

//----------------------------------WebContextMenuItemList---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebContextMenu_ItemList(void * jarg1) {
  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebContextMenu ItemList is null", 0);
    return;
  }

  std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>*)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebContextMenu_ItemList_GetItemCount(void* jarg1) {
  std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>*)jarg1;
  uint32_t result = 0;
  {
    try {
      result = (arg1)->size();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebContextMenu_ItemList_ValueOfIndex(void* jarg1, unsigned int jarg2) {
  std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineContextMenuItem>>*)jarg1;
  Dali::WebEngineContextMenuItem* result = 0;
  {
    try {
      result = ((arg1)->operator[](jarg2)).get();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebCookieManager---------------------------------------------------
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebCookieManager_GetCookieAcceptPolicy(void * jarg1) {
  Dali::Toolkit::WebCookieManager* arg1 = (Dali::Toolkit::WebCookieManager*)0;
  int ret;

  arg1 = (Dali::Toolkit::WebCookieManager*)jarg1;
  {
    try {
      ret = (int)(arg1)->GetCookieAcceptPolicy();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_SetCookieAcceptPolicy(void * jarg1, int jarg2) {
  Dali::Toolkit::WebCookieManager* arg1 = (Dali::Toolkit::WebCookieManager*)0;
  arg1 = (Dali::Toolkit::WebCookieManager*)jarg1;
  {
    try {
      (arg1)->SetCookieAcceptPolicy(
          (Dali::WebEngineCookieManager::CookieAcceptPolicy)jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_SetPersistentStorage(void * jarg1, const char * jarg2, int jarg3) {
  Dali::Toolkit::WebCookieManager* arg1 = (Dali::Toolkit::WebCookieManager*)0;

  arg1 = (Dali::Toolkit::WebCookieManager*)jarg1;
  std::string arg2_str(jarg2);
  Dali::WebEngineCookieManager::CookiePersistentStorage arg3_enum = (Dali::WebEngineCookieManager::CookiePersistentStorage)jarg3;
  {
    try {
      (arg1)->SetPersistentStorage(arg2_str, arg3_enum);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_ClearCookies(void * jarg1) {
  Dali::Toolkit::WebCookieManager* arg1 = (Dali::Toolkit::WebCookieManager*)0;

  arg1 = (Dali::Toolkit::WebCookieManager*)jarg1;
  {
    try {
      (arg1)->ClearCookies();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_ChangesWatch(void *jarg1, void *jarg2) {
  Dali::Toolkit::WebCookieManager *arg1 = (Dali::Toolkit::WebCookieManager *)jarg1;
  void (*callback)() = (void (*)())jarg2;
  {
    try {
      (arg1)->ChangesWatch(callback);
    } CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebFormRepostDecision---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebFormRepostDecision_Reply(void *jarg1, bool jarg2) {
  Dali::WebEngineFormRepostDecision* arg1 = (Dali::WebEngineFormRepostDecision*)jarg1;
  {
    try {
      arg1->Reply(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebFrame---------------------------------------------------
SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebFrame_IsMainFrame(void* jarg1) {
  Dali::WebEngineFrame* arg1 = (Dali::WebEngineFrame*)jarg1;
  bool result = false;
  {
    try {
      result = (arg1)->IsMainFrame();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebPolicyDecision-----------------------------------------------------
SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetUrl(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  std::string result;
  {
    try {
      result = arg1->GetUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetCookie(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  std::string result;
  {
    try {
      result = arg1->GetCookie();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetDecisionType(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  int result;
  {
    try {
      result = (int)arg1->GetDecisionType();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetResponseMime(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  std::string result;
  {
    try {
      result = arg1->GetResponseMime();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetResponseStatusCode(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  int result;
  {
    try {
      result = arg1->GetResponseStatusCode();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetNavigationType(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  int result;
  {
    try {
      result = (int)arg1->GetNavigationType();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetFrame(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  Dali::WebEngineFrame* result = 0;
  {
    try {
      result = &((arg1)->GetFrame());
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebPolicyDecision_GetScheme(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  std::string result;
  {
    try {
      result = arg1->GetScheme();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebPolicyDecision_Use(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  bool result;
  {
    try {
      result = arg1->Use();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebPolicyDecision_Ignore(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  bool result;
  {
    try {
      result = arg1->Ignore();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebPolicyDecision_Suspend(void* jarg1) {
  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  bool result;
  {
    try {
      result = arg1->Suspend();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebRequestInterceptor---------------------------------------------------
SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_GetUrl(void * jarg1) {
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_Ignore(void * jarg1) {
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)jarg1;
  bool ret = false;
  {
    try {
      ret = (arg1)->Ignore();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_SetResponseStatus(void * jarg1, int jarg2, const char *jarg3) {
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)jarg1;
  bool ret = false;
  std::string arg3_str(jarg3);
  {
    try {
      ret = (arg1)->SetResponseStatus(jarg2, arg3_str);
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_AddResponseHeader(void * jarg1, const char *jarg2, const char *jarg3) {
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)jarg1;
  bool ret = false;
  std::string arg2_str(jarg2);
  std::string arg3_str(jarg3);
  {
    try {
      ret = (arg1)->AddResponseHeader(arg2_str, arg3_str);
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebRequestInterceptor_AddResponseBody(void * jarg1, const char *jarg2, uint32_t length) {
  Dali::WebEngineRequestInterceptor* arg1 = (Dali::WebEngineRequestInterceptor*)jarg1;
  bool ret = false;
  std::string arg2_str(jarg2);
  {
    try {
      ret = (arg1)->AddResponseBody(arg2_str, length);
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

//----------------------------------WebHttpAuthHandler---------------------------------------------------
SWIGEXPORT const char *SWIGSTDCALL CSharp_Dali_WebHttpAuthHandler_GetRealm(void * jarg1) {
  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetRealm();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebHttpAuthHandler_Suspend(void * jarg1) {
  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)jarg1;
  {
    try {
      (arg1)->Suspend();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebHttpAuthHandler_UseCredential(
    void * jarg1, const char *jarg2, const char *jarg3) {
  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)jarg1;
  std::string arg2_str(jarg2);
  std::string arg3_str(jarg3);
  {
    try {
      (arg1)->UseCredential(arg2_str, arg3_str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebHttpAuthHandler_CancelCredential(void * jarg1) {
  Dali::WebEngineHttpAuthHandler* arg1 = (Dali::WebEngineHttpAuthHandler*)jarg1;
  {
    try {
      (arg1)->CancelCredential();
    } CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebPasswordData---------------------------------------------------
SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebPasswordData_GetUrl(void * jarg1) {
  Dali::WebEngineContext::PasswordData *arg1 = (Dali::WebEngineContext::PasswordData *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->url;
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebPasswordData_GetUseFingerprint(void * jarg1) {
  Dali::WebEngineContext::PasswordData * arg1 = (Dali::WebEngineContext::PasswordData *)jarg1;
  bool result = false;
  {
    try {
      result = (arg1)->useFingerprint;
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebLoadError-----------------------------------------------------
SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebLoadError_GetUrl(void* jarg1) {
  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)jarg1;
  std::string result;
  {
    try {
      result = arg1->GetUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebLoadError_GetCode(void* jarg1) {
  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)jarg1;
  int result;
  {
    try {
      result = (int)arg1->GetCode();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebLoadError_GetDescription(void* jarg1) {
  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)jarg1;
  std::string result;
  {
    try {
      result = arg1->GetDescription();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebLoadError_GetType(void* jarg1) {
  Dali::WebEngineLoadError* arg1 = (Dali::WebEngineLoadError*)jarg1;
  int result;
  {
    try {
      result = (int)arg1->GetType();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebPasswordDataList---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebPasswordDataList(void * jarg1) {
  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebEngineContext::PasswordData List is null", 0);
    return;
  }

  std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebPasswordDataList_GetItemCount(void* jarg1) {
  std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*)jarg1;
  uint32_t result = 0;
  {
    try {
      result = (arg1)->size();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebPasswordDataList_ValueOfIndex(void * jarg1, unsigned int jarg2) {
  std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineContext::PasswordData>>*)jarg1;
  Dali::WebEngineContext::PasswordData* result = 0;
  {
    try {
      result = ((arg1)->operator[](jarg2)).get();
    } CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

//----------------------------------WebSecurityOrigin---------------------------------------------------
SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebSecurityOrigin_GetHost(void * jarg1) {
  Dali::WebEngineSecurityOrigin *arg1 = (Dali::WebEngineSecurityOrigin *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetHost();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebSecurityOrigin_GetProtocol(void * jarg1) {
  Dali::WebEngineSecurityOrigin *arg1 = (Dali::WebEngineSecurityOrigin *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetProtocol();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

//----------------------------------WebSecurityOriginList---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebSecurityOriginList(void *jarg1) {
  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebEngineSecurityOrigin List is null", 0);
    return;
  }

  std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_WebSecurityOriginList_GetItemCount(void* jarg1) {
  std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*)jarg1;
  uint32_t result = 0;
  {
    try {
      result = (arg1)->size();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebSecurityOriginList_ValueOfIndex(void *jarg1, unsigned int jarg2) {
  std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>* arg1 = (std::vector<std::unique_ptr<Dali::WebEngineSecurityOrigin>>*)jarg1;
  Dali::WebEngineSecurityOrigin * result = 0;
  {
    try {
      result = ((arg1)->operator[](jarg2)).get();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebHitTest---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebHitTest(void * jarg1) {
  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebEngineHitTest is null", 0);
    return;
  }

  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest*)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebHitTest_GetResultContext(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  int ret;
  {
    try {
      ret = (int)(arg1)->GetResultContext();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebHitTest_GetLinkUri(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetLinkUri();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebHitTest_GetLinkTitle(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetLinkTitle();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebHitTest_GetLinkLabel(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetLinkLabel();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebHitTest_GetImageUri(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetImageUri();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebHitTest_GetMediaUri(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetMediaUri();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebHitTest_GetTagName(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetTagName();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebHitTest_GetNodeValue(void * jarg1) {
  Dali::WebEngineHitTest * arg1 = (Dali::WebEngineHitTest *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetNodeValue();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebHitTest_GetAttributes(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  Dali::Property::Map *result = 0;
  {
    try {
      result = &(arg1)->GetAttributes();
    } CALL_CATCH_EXCEPTION(0);
  }
  return (void *)result;
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebHitTest_GetImageFileNameExtension(void * jarg1) {
  Dali::WebEngineHitTest *arg1 = (Dali::WebEngineHitTest *)jarg1;
  std::string result;
  {
    try {
      result = (arg1)->GetImageFileNameExtension();
    } CALL_CATCH_EXCEPTION(0);
  }
  char *jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebHitTest_GetImageBuffer(void * jarg1) {
  Dali::WebEngineHitTest* arg1 = (Dali::WebEngineHitTest *)jarg1;
  Dali::PixelData result;
  {
    try {
      result = (arg1)->GetImageBuffer();
    } CALL_CATCH_EXCEPTION(0);
  }

  Dali::PixelData* jresult = new Dali::PixelData((const Dali::PixelData &)result);
  return (void *)jresult;
}

//----------------------------------WebSettings---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowMixedContents(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->AllowMixedContents(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableSpatialNavigation(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->EnableSpatialNavigation(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebSettings_GetDefaultFontSize(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  int ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->GetDefaultFontSize();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetDefaultFontSize(void * jarg1, int jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->SetDefaultFontSize(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableWebSecurity(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->EnableWebSecurity(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableCacheBuilder(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableCacheBuilder(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_UseScrollbarThumbFocusNotifications(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->UseScrollbarThumbFocusNotifications(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableDoNotTrack(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableDoNotTrack(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowFileAccessFromExternalUrl(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->AllowFileAccessFromExternalUrl(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsJavaScriptEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsJavaScriptEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableJavaScript(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->EnableJavaScript(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsAutoFittingEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsAutoFittingEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableAutoFitting(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableAutoFitting(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_ArePluginsEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->ArePluginsEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnablePlugins(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnablePlugins(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsPrivateBrowsingEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsPrivateBrowsingEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnablePrivateBrowsing(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnablePrivateBrowsing(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsLinkMagnifierEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsLinkMagnifierEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableLinkMagnifier(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableLinkMagnifier(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsKeypadWithoutUserActionUsed(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsKeypadWithoutUserActionUsed();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_UseKeypadWithoutUserAction(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->UseKeypadWithoutUserAction(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsAutofillPasswordFormEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsAutofillPasswordFormEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableAutofillPasswordForm(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableAutofillPasswordForm(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsFormCandidateDataEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsFormCandidateDataEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableFormCandidateData(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableFormCandidateData(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsTextSelectionEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsTextSelectionEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableTextSelection(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableTextSelection(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsTextAutosizingEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsTextAutosizingEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableTextAutosizing(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableTextAutosizing(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsArrowScrollEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsArrowScrollEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableArrowScroll(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableArrowScroll(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsClipboardEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsClipboardEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableClipboard(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableClipboard(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsImePanelEnabled(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsImePanelEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableImePanel(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableImePanel(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowScriptsOpenWindows(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->AllowScriptsOpenWindows(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_AreImagesLoadedAutomatically(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->AreImagesLoadedAutomatically();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowImagesLoadAutomatically(void * jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->AllowImagesLoadAutomatically(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char * SWIGSTDCALL CSharp_Dali_WebSettings_GetDefaultTextEncodingName(void * jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  std::string result;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      result = (arg1)->GetDefaultTextEncodingName();
    } CALL_CATCH_EXCEPTION(0);
  }
  char * jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetDefaultTextEncodingName(void * jarg1, const char * jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  std::string arg2_str(jarg2);
  {
    try {
      (arg1)->SetDefaultTextEncodingName(arg2_str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_SetViewportMetaTag(void *jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->SetViewportMetaTag(jarg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_SetForceZoom(void *jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->SetForceZoom(jarg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsZoomForced(void *jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsZoomForced();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_SetTextZoomEnabled(void *jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->SetTextZoomEnabled(jarg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsTextZoomEnabled(void *jarg1) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsTextZoomEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetExtraFeature(void *jarg1, const char *jarg2, bool jarg3) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  std::string arg2(jarg2);

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      (arg1)->SetExtraFeature(arg2, jarg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsExtraFeatureEnabled(void *jarg1, const char *jarg2) {
  Dali::Toolkit::WebSettings *arg1 = (Dali::Toolkit::WebSettings *)0;
  std::string arg2(jarg2);
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings *)jarg1;
  {
    try {
      ret = (arg1)->IsExtraFeatureEnabled(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

#ifdef __cplusplus
} // end extern "C"
#endif
