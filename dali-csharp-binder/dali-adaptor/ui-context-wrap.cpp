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
#include <dali/public-api/adaptor-framework/ui-context.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

/* Callback for returning strings to C# without leaking memory */
typedef char*(SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char*);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_UiContext_Get()
{
  Dali::UiContext result;
  {
    try
    {
      result = Dali::UiContext::Get();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return new Dali::UiContext(result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_UiContext()
{
  Dali::UiContext* result = nullptr;
  {
    try
    {
      result = new Dali::UiContext();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_UiContext_Copy(void* uiContext)
{
  Dali::UiContext* source = static_cast<Dali::UiContext*>(uiContext);
  Dali::UiContext* result = nullptr;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::UiContext const & type is null", 0);
    return nullptr;
  }
  {
    try
    {
      result = new Dali::UiContext(*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_UiContext(void* uiContext)
{
  Dali::UiContext* context = static_cast<Dali::UiContext*>(uiContext);
  {
    try
    {
      delete context;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_UiContext_Assign(void* destination, void* source)
{
  Dali::UiContext* dst    = static_cast<Dali::UiContext*>(destination);
  Dali::UiContext* src    = static_cast<Dali::UiContext*>(source);
  Dali::UiContext* result = nullptr;

  if(!src)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::UiContext const & type is null", 0);
    return nullptr;
  }
  {
    try
    {
      result = &(dst->operator=(*src));
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_UiContext_GetDefaultWindow(void* uiContext)
{
  Dali::UiContext* context = static_cast<Dali::UiContext*>(uiContext);
  Dali::Window     result;

  {
    try
    {
      result = context->GetDefaultWindow();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return new Dali::Window(result);
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_UiContext_AddIdle(void* uiContext, void* callback)
{
  Dali::UiContext*    context      = static_cast<Dali::UiContext*>(uiContext);
  Dali::CallbackBase* idleCallback = static_cast<Dali::CallbackBase*>(callback);
  bool                result       = false;

  {
    try
    {
      result = context->AddIdle(idleCallback);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_UiContext_RemoveIdle(void* uiContext, void* callback)
{
  Dali::UiContext*    context      = static_cast<Dali::UiContext*>(uiContext);
  Dali::CallbackBase* idleCallback = static_cast<Dali::CallbackBase*>(callback);

  {
    try
    {
      context->RemoveIdle(idleCallback);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_UiContext_FlushUpdateMessages(void* uiContext)
{
  Dali::UiContext* context = static_cast<Dali::UiContext*>(uiContext);
  {
    try
    {
      context->FlushUpdateMessages();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_UiContext_SetApplicationLocale(void* uiContext, char* locale)
{
  Dali::UiContext* context = static_cast<Dali::UiContext*>(uiContext);

  if(!locale)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  {
    try
    {
      context->SetApplicationLocale(Dali::String(locale));
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
