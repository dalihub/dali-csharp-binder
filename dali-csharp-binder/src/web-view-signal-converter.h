#ifndef __DALI_CSHARP_BINDER_WEB_VIEW_SIGNAL_CONVERTER_H__
#define __DALI_CSHARP_BINDER_WEB_VIEW_SIGNAL_CONVERTER_H__
/*
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
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
#include <dali/public-api/signals/connection-tracker.h>
#include <dali-toolkit/devel-api/controls/web-view/web-view.h>

/* Callback for returning strings to C# without leaking memory */
typedef char* (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char*);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

namespace SignalConverter
{

// Proxy class of WebViewPageLoadSignal.
// WebViewPageLoadSignal has an argument of std::string type which is not supported at C# side.
// The purpose of this class is to convert signal argument of string type safely.
class WebViewPageLoadSignal : public Dali::ConnectionTracker
{

public:
  using NativeSignalType = Dali::Signal< void( Dali::Toolkit::WebView, const std::string& ) >;
  using ProxySignalType = Dali::Signal< void( Dali::Toolkit::WebView, char* ) >;
  using CallbackType = void ( * )( Dali::Toolkit::WebView, char* );

  WebViewPageLoadSignal( NativeSignalType* signal )
    : mNativeSignalPtr( signal )
  {
  }

  ~WebViewPageLoadSignal()
  {
    if( !mProxySignal.Empty() )
    {
      mNativeSignalPtr->Disconnect( this, &SignalConverter::WebViewPageLoadSignal::OnEmit );
    }
  }

  void Connect( CallbackType csharpCallback )
  {
    if( mNativeSignalPtr->Empty())
    {
      mNativeSignalPtr->Connect( this, &SignalConverter::WebViewPageLoadSignal::OnEmit );
    }
    mProxySignal.Connect( csharpCallback );
  }

  void Disconnect( CallbackType csharpCallback )
  {
    mProxySignal.Disconnect( csharpCallback );
    if( mProxySignal.Empty() )
    {
      mNativeSignalPtr->Disconnect( this, &SignalConverter::WebViewPageLoadSignal::OnEmit );
    }
  }

  void OnEmit( Dali::Toolkit::WebView webview, const std::string& url )
  {
    // Safe string conversion
    mProxySignal.Emit( webview, SWIG_csharp_string_callback( url.c_str() ) );
  }

private:

  NativeSignalType* mNativeSignalPtr;
  ProxySignalType   mProxySignal;
};

// Proxy class of WebViewPageLoadErrorSignal.
// WebViewPageLoadSignal has an argument of std::string type which is not supported at C# side.
// The purpose of this class is to convert signal argument of string type safely.
class WebViewPageLoadErrorSignal : public Dali::ConnectionTracker
{
public:
  using NativeSignalType = Dali::Signal< void( Dali::Toolkit::WebView, const std::string&, Dali::Toolkit::WebView::LoadErrorCode ) >;
  using ProxySignalType = Dali::Signal< void( Dali::Toolkit::WebView, char*, int ) >;
  using CallbackType = void ( * )( Dali::Toolkit::WebView, char*, int );

  WebViewPageLoadErrorSignal( NativeSignalType* signal )
    : mNativeSignalPtr( signal )
  {
  }

  ~WebViewPageLoadErrorSignal()
  {
    if( !mProxySignal.Empty() )
    {
      mNativeSignalPtr->Disconnect( this, &SignalConverter::WebViewPageLoadErrorSignal::OnEmit );
    }
  }

  void Connect( CallbackType csharpCallback )
  {
    if( mNativeSignalPtr->Empty() )
    {
      mNativeSignalPtr->Connect( this, &SignalConverter::WebViewPageLoadErrorSignal::OnEmit );
    }
    mProxySignal.Connect( csharpCallback );
  }

  void Disconnect( CallbackType csharpCallback )
  {
    mProxySignal.Disconnect( csharpCallback );
    if( mProxySignal.Empty() )
    {
      mNativeSignalPtr->Disconnect( this, &SignalConverter::WebViewPageLoadErrorSignal::OnEmit );
    }
  }

  void OnEmit( Dali::Toolkit::WebView webview, const std::string& url, Dali::Toolkit::WebView::LoadErrorCode code )
  {
    // Safe string conversion
    mProxySignal.Emit( webview, SWIG_csharp_string_callback( url.c_str() ), static_cast<int>( code ) );
  }

private:

  NativeSignalType* mNativeSignalPtr;
  ProxySignalType   mProxySignal;
};

// Proxy class of WebViewScrollEdgeReachedSignal.
// WebViewScrollEdgeReachedSignal has an argument of enum type which is not supported at C# side.
// The purpose of this class is to convert signal argument of enum type safely.
class WebViewScrollEdgeReachedSignal : public Dali::ConnectionTracker
{
public:
  using NativeSignalType = Dali::Signal< void( Dali::Toolkit::WebView, Dali::WebEnginePlugin::ScrollEdge ) >;
  using ProxySignalType = Dali::Signal< void( Dali::Toolkit::WebView, int ) >;
  using CallbackType = void ( * )( Dali::Toolkit::WebView, int );

  WebViewScrollEdgeReachedSignal( NativeSignalType* signal )
    : mNativeSignalPtr( signal )
  {
  }

  ~WebViewScrollEdgeReachedSignal()
  {
    if ( !mProxySignal.Empty() )
    {
       mNativeSignalPtr->Disconnect( this, &SignalConverter::WebViewScrollEdgeReachedSignal::OnEmit );
    }
  }

  void Connect( CallbackType csharpCallback )
  {
    if ( mNativeSignalPtr->Empty() )
    {
       mNativeSignalPtr->Connect( this, &SignalConverter::WebViewScrollEdgeReachedSignal::OnEmit );
    }
    mProxySignal.Connect( csharpCallback );
  }

  void Disconnect( CallbackType csharpCallback )
  {
    mProxySignal.Disconnect( csharpCallback );
    if ( mProxySignal.Empty() )
    {
       mNativeSignalPtr->Disconnect( this, &SignalConverter::WebViewScrollEdgeReachedSignal::OnEmit );
    }
  }

  void OnEmit( Dali::Toolkit::WebView webview, Dali::WebEnginePlugin::ScrollEdge edge )
  {
    mProxySignal.Emit( webview, static_cast< int >( edge ) );
  }

private:
  NativeSignalType* mNativeSignalPtr;
  ProxySignalType   mProxySignal;
};

// Proxy class of WebViewUrlChangedSignal.
// WebViewUrlChangedSignal has an argument of string type which is not supported at C# side.
// The purpose of this class is to convert signal argument of string type safely.
class WebViewUrlChangedSignal : public Dali::ConnectionTracker
{
public:
  using NativeSignalType = Dali::Signal< void( Dali::Toolkit::WebView, const std::string& ) >;
  using ProxySignalType = Dali::Signal< void( Dali::Toolkit::WebView, char* ) >;
  using CallbackType = void ( * )( Dali::Toolkit::WebView, char* );

  WebViewUrlChangedSignal( NativeSignalType* signal )
    : mNativeSignalPtr(signal)
  {
  }

  ~WebViewUrlChangedSignal()
  {
    if ( !mProxySignal.Empty() )
    {
      mNativeSignalPtr->Disconnect( this, &SignalConverter::WebViewUrlChangedSignal::OnEmit );
    }
  }

  void Connect( CallbackType csharpCallback )
  {
    if ( mNativeSignalPtr->Empty() )
    {
      mNativeSignalPtr->Connect( this, &SignalConverter::WebViewUrlChangedSignal::OnEmit );
    }
    mProxySignal.Connect( csharpCallback );
  }

  void Disconnect( CallbackType csharpCallback )
  {
    mProxySignal.Disconnect( csharpCallback );
    if ( mProxySignal.Empty() )
    {
      mNativeSignalPtr->Disconnect( this, &SignalConverter::WebViewUrlChangedSignal::OnEmit );
    }
  }

  void OnEmit( Dali::Toolkit::WebView webview, const std::string& url )
  {
    mProxySignal.Emit( webview, SWIG_csharp_string_callback( url.c_str() ) );
  }

private:
  NativeSignalType* mNativeSignalPtr;
  ProxySignalType   mProxySignal;
};

// Proxy class of WebViewFormRepostDecisionSignal.
// WebViewFormRepostDecisionSignal has an argument of std::shared_ptr type which is not supported at C# side.
// The purpose of this class is to convert signal argument of std::shared_ptr type safely.
class WebViewFormRepostDecisionSignal : public Dali::ConnectionTracker
{
public:
  using NativeSignalType = Dali::Signal<void(Dali::Toolkit::WebView, std::shared_ptr<Dali::Toolkit::WebFormRepostDecision>)>;
  using ProxySignalType = Dali::Signal<void(Dali::Toolkit::WebView, Dali::Toolkit::WebFormRepostDecision*)>;
  using CallbackType = void (*)(Dali::Toolkit::WebView, Dali::Toolkit::WebFormRepostDecision*);

  WebViewFormRepostDecisionSignal(NativeSignalType* signal)
    : mNativeSignalPtr(signal)
  {
  }

  ~WebViewFormRepostDecisionSignal()
  {
    if (!mProxySignal.Empty())
    {
      mNativeSignalPtr->Disconnect(this, &SignalConverter::WebViewFormRepostDecisionSignal::OnEmit);
    }
  }

  void Connect(CallbackType csharpCallback)
  {
    if (mNativeSignalPtr->Empty())
    {
      mNativeSignalPtr->Connect(this, &SignalConverter::WebViewFormRepostDecisionSignal::OnEmit);
    }
    mProxySignal.Connect(csharpCallback);
  }

  void Disconnect(CallbackType csharpCallback)
  {
    mProxySignal.Disconnect(csharpCallback);
    if (mProxySignal.Empty())
    {
      mNativeSignalPtr->Disconnect(this, &SignalConverter::WebViewFormRepostDecisionSignal::OnEmit);
    }
  }

  void OnEmit(Dali::Toolkit::WebView webview, std::shared_ptr<Dali::Toolkit::WebFormRepostDecision> decision)
  {
    mFormRepostDecision = std::move(decision);
    mProxySignal.Emit(webview, mFormRepostDecision.get());
  }

private:
  NativeSignalType* mNativeSignalPtr;
  ProxySignalType   mProxySignal;
  std::shared_ptr<Dali::Toolkit::WebFormRepostDecision> mFormRepostDecision;
};

} // namespace SignalConverter

#endif // __DALI_CSHARP_BINDER_WEB_VIEW_SIGNAL_CONVERTER_H__
