/** Copyright (c) 2020 Samsung Electronics Co., Ltd.
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

#include <dali/devel-api/adaptor-framework/web-engine-frame.h>
#include <dali/devel-api/adaptor-framework/web-engine-policy-decision.h>

#include <dali/public-api/common/dali-common.h>
#include <dali-toolkit/devel-api/controls/web-view/web-back-forward-list.h>
#include <dali-toolkit/devel-api/controls/web-view/web-back-forward-list-item.h>
#include <dali-toolkit/devel-api/controls/web-view/web-context.h>
#include <dali-toolkit/devel-api/controls/web-view/web-cookie-manager.h>
#include <dali-toolkit/devel-api/controls/web-view/web-settings.h>
#include <dali-toolkit/devel-api/controls/web-view/web-view.h>

#define CALL_CATCH_EXCEPTION(ret)          \
          catch (std::out_of_range& e)            \
          {                                                                                                                                \
            SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));   \
            return ret;\
          }                                                                                                                                 \
          catch (std::exception& e)                                                                                         \
          {                                                                                                                                 \
            SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));\
            return ret;\
          }                                                                                                                                 \
          catch (Dali::DaliException e)                                                                                            \
          {                                                                                                                                 \
            SWIG_CSharpException(SWIG_UnknownError, e.condition);                            \
            return ret;\
          }                                                                                                                                 \
          catch (...)                                                                                                                  \
          {                                                                                                                                 \
            SWIG_CSharpException(SWIG_UnknownError, "unknown error");                  \
            return ret;\
          }

/* Callback for returning strings to C# without leaking memory */
using SWIG_CSharpStringHelperCallback = char* (SWIGSTDCALL*)(const char*);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

//----------------------------------WebView---------------------------------------------------
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_New() {
  void * jresult ;
  Dali::Toolkit::WebView result;

  {
    try {
      result = Dali::Toolkit::WebView::New();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_New_2(char * jarg1, char * jarg2) {
  void * jresult ;
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
      result = Dali::Toolkit::WebView::New( (std::string const &)*arg1, (std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView &)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_New_3( int jarg1, char** jarg2 ) {
  if ( !jarg2 ) {
    SWIG_CSharpSetPendingExceptionArgument( SWIG_CSharpArgumentNullException, "jarg2 is null string", 0 );
    return 0;
  }

  Dali::Toolkit::WebView result;
  {
    try {
      result = Dali::Toolkit::WebView::New( jarg1, jarg2 );
    } CALL_CATCH_EXCEPTION(0);
  }
  void* jresult = new Dali::Toolkit::WebView( ( const Dali::Toolkit::WebView& ) result );
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WebView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::WebView *arg1 = 0 ;
  Dali::Toolkit::WebView *result = 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::WebView *)new Dali::Toolkit::WebView((Dali::Toolkit::WebView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebView(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;
  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;
  Dali::Toolkit::WebView *arg2 = 0 ;
  Dali::Toolkit::WebView *result = 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  arg2 = (Dali::Toolkit::WebView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::WebView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::WebView *) &(arg1)->operator =((Dali::Toolkit::WebView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WebView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::WebView result;

  argp1 = (Dali::BaseHandle *)jarg1;
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
  jresult = new Dali::Toolkit::WebView((const Dali::Toolkit::WebView &)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetBackForwardList( void* jarg1 ) {
  void* jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*) 0;
  Dali::Toolkit::WebBackForwardList* result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  {
    try {
      result = arg1->GetBackForwardList();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetContext( void* jarg1 ) {
  void* jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*) 0;
  Dali::Toolkit::WebContext* result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  {
    try {
      result = arg1->GetContext();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetCookieManager( void* jarg1 ) {
  void* jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*) 0;
  Dali::Toolkit::WebCookieManager* result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  {
    try {
      result = arg1->GetCookieManager();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebView_GetSettings( void* jarg1 ) {
  void* jresult;
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*) 0;
  Dali::Toolkit::WebSettings* result = 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;

  {
    try {
      result = arg1->GetSettings();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebView_Property_URL_get() {
  return (int) Dali::Toolkit::WebView::Property::URL;
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
  return (int) Dali::Toolkit::WebView::Property::VIDEO_HOLE_ENABLED;
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
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;
  std::string *arg2;

  arg1 = (Dali::Toolkit::WebView *)jarg1;

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
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;
  std::string *arg2;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
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
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_LoadHTMLString(void* jarg1, char* jarg2) {
  CSharp_Dali_WebView_LoadHtmlString(jarg1, jarg2);
}

SWIGEXPORT const void* SWIGSTDCALL CSharp_Dali_WebView_GetFavicon( void* jarg1 ) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;
  Dali::Toolkit::ImageView* result = 0;
  {
    try {
      Dali::Toolkit::ImageView favicon = (arg1)->GetFavicon();
      if (favicon)
      {
        result = new Dali::Toolkit::ImageView((const Dali::Toolkit::ImageView &)favicon);
      }
    } CALL_CATCH_EXCEPTION( 0 );
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Reload(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->Reload();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_StopLoading(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->StopLoading();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Suspend(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->Suspend();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_Resume(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->Resume();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ScrollBy( void* jarg1, int jarg2, int jarg3 ) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*) 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->ScrollBy( jarg2, jarg3 );
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_GoBack(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->GoBack();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_GoForward(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->GoForward();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CanGoBack(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;
  bool ret;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      ret = (arg1)->CanGoBack();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebView_CanGoForward(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;
  bool ret;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      ret = (arg1)->CanGoForward();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_EvaluateJavaScript(void * jarg1, char * jarg2, void* jarg3) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;
  std::string *arg2;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string jarg2_str = std::string(jarg2);
  arg2 = &jarg2_str;

  {
    try {
      if (jarg3) {
        void (*handler)(char*) = (void (*)(char*)) jarg3;
        (arg1)->EvaluateJavaScript((std::string const &)*arg2, [handler](const std::string& result) {
          handler(SWIG_csharp_string_callback(result.c_str()));
        });
      } else {
        (arg1)->EvaluateJavaScript((std::string const &)*arg2);
      }
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_AddJavaScriptMessageHandler(void* jarg1, char* jarg2, void* jarg3)
{
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView *) jarg1;
  std::string exposedObjectName = jarg2;
  void (*handler)(char*) = (void (*)(char*)) jarg3;

  {
    try {
      webview->AddJavaScriptMessageHandler(exposedObjectName, [handler](const std::string& message) {
        handler(SWIG_csharp_string_callback(message.c_str()));
      });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearAllTilesResources( void* jarg1 ) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      ( arg1 )->ClearAllTilesResources();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearHistory(void * jarg1) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *) 0 ;

  arg1 = (Dali::Toolkit::WebView *)jarg1;
  {
    try {
      (arg1)->ClearHistory();
    } CALL_CATCH_EXCEPTION();
  }
}

//@DEPRECATED_2_0.9.
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearCache(void* jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*) 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->GetContext()->ClearCache();
    } CALL_CATCH_EXCEPTION();
  }
}

//@DEPRECATED_2_0.9.
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_ClearCookies(void* jarg1) {
  Dali::Toolkit::WebView* arg1 = (Dali::Toolkit::WebView*) 0;

  arg1 = (Dali::Toolkit::WebView*)jarg1;
  {
    try {
      (arg1)->GetCookieManager()->ClearCookies();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_WebView_SWIGUpcast(Dali::Toolkit::WebView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterPageLoadStartedCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  void (*handler)(char*) = (void (*)(char*))jarg2;
  {
    try {
      (arg1)->RegisterPageLoadStartedCallback([handler](const std::string& url) {
            handler(SWIG_csharp_string_callback(url.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterPageLoadFinishedCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  void (*handler)(char*) = (void (*)(char*))jarg2;
  {
    try {
      (arg1)->RegisterPageLoadFinishedCallback([handler](const std::string& url) {
            handler(SWIG_csharp_string_callback(url.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterPageLoadErrorCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  void (*handler)(char*, int) = (void (*)(char*, int))jarg2;
  {
    try {
      (arg1)->RegisterPageLoadErrorCallback([handler](const std::string& url, int code) {
            handler(SWIG_csharp_string_callback(url.c_str()), code);
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterScrollEdgeReachedCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  void (*handler)(int) = (void (*)(int))jarg2;
  {
    try {
      (arg1)->RegisterScrollEdgeReachedCallback([handler](Dali::WebEnginePlugin::ScrollEdge edge) {
            handler((int)edge);
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterUrlChangedCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  void (*handler)(char*) = (void (*)(char*))jarg2;
  {
    try {
      (arg1)->RegisterUrlChangedCallback([handler](const std::string& url) {
            handler(SWIG_csharp_string_callback(url.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterNavigationPolicyDecidedCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  void (*handler)(Dali::WebEnginePolicyDecision*) = (void (*)(Dali::WebEnginePolicyDecision*))jarg2;
  {
    try {
      (arg1)->RegisterNavigationPolicyDecidedCallback([handler](std::unique_ptr<Dali::WebEnginePolicyDecision> decision) {
            handler(decision.release());
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_RegisterNewWindowCreatedCallback(void * jarg1, void * jarg2) {
  Dali::Toolkit::WebView *arg1 = (Dali::Toolkit::WebView *)jarg1;
  void (*handler)(Dali::Toolkit::WebView*&) = (void (*)(Dali::Toolkit::WebView*&))jarg2;
  {
    try {
      (arg1)->RegisterNewWindowCreatedCallback([handler](Dali::WebEnginePlugin*& plugin) {
            Dali::Toolkit::WebView* outView = nullptr;
            handler(outView);
            if (outView != nullptr)
            {
              plugin = outView->GetPlugin();
            }
          });
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_SetTtsFocus(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebView* webview = (Dali::Toolkit::WebView*)jarg1;
  try {
    webview->SetTtsFocus(jarg2);
  } CALL_CATCH_EXCEPTION();
}

//----------------------------------WebBackForwardListItem-----------------------------------------------------
SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetUrl( void* jarg1 ) {
  Dali::Toolkit::WebBackForwardListItem* arg1 = (Dali::Toolkit::WebBackForwardListItem*) 0;
  std::string result;
  arg1 = (Dali::Toolkit::WebBackForwardListItem*)jarg1;
  {
    try {
      result = arg1->GetUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetTitle( void* jarg1 ) {
  Dali::Toolkit::WebBackForwardListItem* arg1 = (Dali::Toolkit::WebBackForwardListItem*) 0;
  std::string result;
  arg1 = (Dali::Toolkit::WebBackForwardListItem*)jarg1;
  {
    try {
      result = (arg1)->GetTitle();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebBackForwardListItem_GetOriginalUrl( void* jarg1 ) {
  Dali::Toolkit::WebBackForwardListItem* arg1 = (Dali::Toolkit::WebBackForwardListItem*) 0;
  std::string result;
  arg1 = (Dali::Toolkit::WebBackForwardListItem*)jarg1;
  {
    try {
      result = (arg1)->GetOriginalUrl();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

//----------------------------------WebBackForwardList-----------------------------------------------------
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetItemCount( void* jarg1 ) {
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*) 0;
  unsigned int result = 0;
  arg1 = (Dali::Toolkit::WebBackForwardList*)jarg1;
  {
    try {
      result = (arg1)->GetItemCount();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetCurrentItem( void* jarg1 ) {
  Dali::Toolkit::WebBackForwardListItem* result = 0;
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*)jarg1;
  {
    try {
      result = (arg1)->GetCurrentItem();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_WebBackForwardList_GetItemAtIndex( void* jarg1, int jarg2 ) {
  Dali::Toolkit::WebBackForwardListItem* result = 0;
  Dali::Toolkit::WebBackForwardList* arg1 = (Dali::Toolkit::WebBackForwardList*)jarg1;
  {
    try {
      result = (arg1)->GetItemAtIndex( jarg2 );
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

//----------------------------------WebContext-----------------------------------------------------
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebContext_GetCacheModel( void* jarg1 ) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;
  int ret;
  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  {
    try {
      ret = (int)(arg1)->GetCacheModel();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetCacheModel( void* jarg1, int jarg2 ) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  {
    try {
      (arg1)->SetCacheModel( ( Dali::WebEngineContext::CacheModel )jarg2 );
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetProxyUri( void* jarg1, const char* jarg2 ) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  std::string arg2_str(jarg2);
  {
    try {
      (arg1)->SetProxyUri(arg2_str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetCertificateFilePath( void* jarg1, const char* jarg2 ) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  std::string arg2_str(jarg2);
  {
    try {
      (arg1)->SetCertificateFilePath(arg2_str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DisableCache(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  {
    try {
      (arg1)->DisableCache(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_SetDefaultProxyAuth(void* jarg1, const char* jarg2, const char* jarg3) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  std::string arg2_str(jarg2);
  std::string arg3_str(jarg3);
  {
    try {
      (arg1)->SetDefaultProxyAuth(arg2_str, arg3_str);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteWebDatabase(void* jarg1) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  {
    try {
      (arg1)->DeleteWebDatabase();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteWebStorage(void* jarg1) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  {
     try {
      (arg1)->DeleteWebStorage();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_DeleteLocalFileSystem(void* jarg1) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  {
    try {
      (arg1)->DeleteLocalFileSystem();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebContext_ClearCache(void* jarg1) {
  Dali::Toolkit::WebContext* arg1 = (Dali::Toolkit::WebContext*) 0;

  arg1 = (Dali::Toolkit::WebContext*)jarg1;
  {
    try {
      (arg1)->ClearCache();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebView_GetPlainTextAsynchronously(void * nuiWebView, void * nuiCallback) {
  Dali::Toolkit::WebView *webview = (Dali::Toolkit::WebView *)nuiWebView;
  void (*callback)(char*) = (void (*)(char*))nuiCallback;
  {
    try {
      webview->GetPlainTextAsynchronously([callback](const std::string& url) {
            callback(SWIG_csharp_string_callback(url.c_str()));
          });
    } CALL_CATCH_EXCEPTION();
  }
}

//----------------------------------WebCookieManager---------------------------------------------------
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebCookieManager_GetCookieAcceptPolicy(void* jarg1) {
  Dali::Toolkit::WebCookieManager* arg1 = (Dali::Toolkit::WebCookieManager*) 0;
  int ret;

  arg1 = (Dali::Toolkit::WebCookieManager*)jarg1;
  {
    try {
      ret = (int)(arg1)->GetCookieAcceptPolicy();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_SetCookieAcceptPolicy(void* jarg1, int jarg2) {
  Dali::Toolkit::WebCookieManager* arg1 = (Dali::Toolkit::WebCookieManager*) 0;

  arg1 = (Dali::Toolkit::WebCookieManager*)jarg1;
  {
    try {
      (arg1)->SetCookieAcceptPolicy( ( Dali::WebEngineCookieManager::CookieAcceptPolicy )jarg2 );
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_SetPersistentStorage(void* jarg1, const char* jarg2, int jarg3) {
  Dali::Toolkit::WebCookieManager* arg1 = (Dali::Toolkit::WebCookieManager*) 0;

  arg1 = (Dali::Toolkit::WebCookieManager*)jarg1;
  std::string arg2_str(jarg2);
  Dali::WebEngineCookieManager::CookiePersistentStorage arg3_enum = ( Dali::WebEngineCookieManager::CookiePersistentStorage )jarg3;
  {
    try {
      (arg1)->SetPersistentStorage( arg2_str, arg3_enum );
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebCookieManager_ClearCookies(void* jarg1) {
  Dali::Toolkit::WebCookieManager* arg1 = (Dali::Toolkit::WebCookieManager*) 0;

  arg1 = (Dali::Toolkit::WebCookieManager*)jarg1;
  {
    try {
      (arg1)->ClearCookies();
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
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WebPolicyDecision(void * jarg1) {
  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "WebPolicyDecision is null", 0);
    return;
  }

  Dali::WebEnginePolicyDecision* arg1 = (Dali::WebEnginePolicyDecision*)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

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

//----------------------------------WebSettings---------------------------------------------------
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowMixedContents(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->AllowMixedContents( jarg2 );
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableSpatialNavigation(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
     try {
       (arg1)->EnableSpatialNavigation(jarg2);
     } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WebSettings_GetDefaultFontSize(void* jarg1) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;
  int ret;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      ret = (arg1)->GetDefaultFontSize();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetDefaultFontSize(void* jarg1, int jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->SetDefaultFontSize(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableWebSecurity(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableWebSecurity(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowFileAccessFromExternalUrl(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->AllowFileAccessFromExternalUrl(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_IsJavaScriptEnabled(void* jarg1) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      ret = (arg1)->IsJavaScriptEnabled();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_EnableJavaScript(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->EnableJavaScript(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowScriptsOpenWindows(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->AllowScriptsOpenWindows(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_WebSettings_AreImagesLoadedAutomatically(void* jarg1) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;
  bool ret;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      ret = (arg1)->AreImagesLoadedAutomatically();
    } CALL_CATCH_EXCEPTION(0);
  }
  return ret;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_AllowImagesLoadAutomatically(void* jarg1, bool jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      (arg1)->AllowImagesLoadAutomatically(jarg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT const char* SWIGSTDCALL CSharp_Dali_WebSettings_GetDefaultTextEncodingName(void* jarg1) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;
  std::string result;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  {
    try {
      result = (arg1)->GetDefaultTextEncodingName();
    } CALL_CATCH_EXCEPTION(0);
  }
  char* jresult = SWIG_csharp_string_callback(result.c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WebSettings_SetDefaultTextEncodingName(void* jarg1, const char* jarg2) {
  Dali::Toolkit::WebSettings* arg1 = (Dali::Toolkit::WebSettings*) 0;

  arg1 = (Dali::Toolkit::WebSettings*)jarg1;
  std::string arg2_str(jarg2);
  {
    try {
      (arg1)->SetDefaultTextEncodingName(arg2_str);
    } CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
} // end extern "C"
#endif

