/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd.
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

#define SWIGSTDCALL

// INCLUDES
#include <dali/devel-api/adaptor-framework/clipboard.h>
#include <dali/integration-api/debug.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

using namespace Dali;

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


#ifdef __cplusplus
extern "C" {
#endif


SWIGINTERN bool Dali_Signal_Dali_Adaptor_Clipboard_Empty(Dali::Signal<void (Dali::Clipboard)> const *self)
{
  return self->Empty();
}

SWIGINTERN std::size_t Dali_Signal_Dali_Adaptor_Clipboard_GetConnectionCount(Dali::Signal<void (Dali::Clipboard)> const *self)
{
  return self->GetConnectionCount();
}

SWIGINTERN void Dali_Signal_Dali_Adaptor_Clipboard_Connect(Dali::Signal<void (Dali::Clipboard)> *self, void (*func)(Dali::Clipboard))
{
  self->Connect(func);
}

SWIGINTERN void Dali_Signal_Dali_Adaptor_Clipboard_Disconnect(Dali::Signal<void (Dali::Clipboard)> *self, void (*func)(Dali::Clipboard))
{
  self->Disconnect(func);
}

SWIGINTERN void Dali_Signal_Dali_Adaptor_Clipboard_Emit(Dali::Signal<void (Dali::Clipboard)> *self, Dali::Clipboard clipboard)
{
  self->Emit(clipboard);
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Clipboard_Get()
{
  void *pClipboard = nullptr;
  Dali::Clipboard clipboard;
  try
  {
    clipboard = Dali::Clipboard::Get();
  } CALL_CATCH_EXCEPTION(0);
  pClipboard = new Dali::Clipboard((const Dali::Clipboard &)clipboard);

  return pClipboard;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Clipboard_SetData(void * argClipboard, char * argMimeType, char * argData)
{
  Dali::Clipboard *clipboard = (Dali::Clipboard *) 0;
  bool result = false;

  clipboard = (Dali::Clipboard *)argClipboard;
  {
    Dali::Clipboard::ClipData clipData(argMimeType, argData);
    try
    {
      result = clipboard->SetData(clipData);
    } CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Clipboard_GetData(void * argClipboard, char * argMimeType)
{
  Dali::Clipboard *clipboard = (Dali::Clipboard *) 0;
  uint32_t id = 0u;
  clipboard = (Dali::Clipboard *)argClipboard;
  {
    try
    {
      id = clipboard->GetData(argMimeType);
    } CALL_CATCH_EXCEPTION(0);
  }

  return (unsigned int) id;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Clipboard_DataSentSignal(void * argClipboard)
{
  Dali::Clipboard *clipboard = (Dali::Clipboard *) 0 ;
  Dali::Clipboard::DataSentSignalType *signal = 0 ;

  clipboard = (Dali::Clipboard *)argClipboard;
  {
    try
    {
      signal = (Dali::Clipboard::DataSentSignalType *) &(clipboard)->DataSentSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  return (void *)signal;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Clipboard_DataReceivedSignal(void * argClipboard)
{
  Dali::Clipboard *clipboard = (Dali::Clipboard *) 0 ;
  Dali::Clipboard::DataReceivedSignalType *signal = 0 ;

  clipboard = (Dali::Clipboard *)argClipboard;
  {
    try
    {
      signal = (Dali::Clipboard::DataReceivedSignalType *) &(clipboard)->DataReceivedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  return (void *)signal;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ClipboardSignal_Empty(void * argSignal)
{
  Dali::Signal<void (Dali::Clipboard)> *signal = (Dali::Signal<void (Dali::Clipboard)> *) 0;
  bool result;

  signal = (Dali::Signal<void (Dali::Clipboard)> *)argSignal;
  {
    try
    {
      result = (bool)Dali_Signal_Dali_Adaptor_Clipboard_Empty((Dali::Signal<void (Dali::Clipboard)> const *)signal);
    } CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ClipboardSignal_GetConnectionCount(void * argSignal)
{
  Dali::Signal<void (Dali::Clipboard)> *signal = (Dali::Signal<void (Dali::Clipboard)> *) 0;
  std::size_t result;

  signal = (Dali::Signal<void (Dali::Clipboard)> *)argSignal;
  {
    try
    {
      result = Dali_Signal_Dali_Adaptor_Clipboard_GetConnectionCount((Dali::Signal<void (Dali::Clipboard)> const *)signal);
    } CALL_CATCH_EXCEPTION(0);
  }

  return (unsigned long)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ClipboardSignal_Connect(void * argSignal, void * argClipboard)
{
  Dali::Signal<void (Dali::Clipboard)> *signal = (Dali::Signal<void (Dali::Clipboard)> *) 0;
  void (*clipboard)(Dali::Clipboard) = (void (*)(Dali::Clipboard)) 0;

  signal    = (Dali::Signal<void (Dali::Clipboard)> *)argSignal;
  clipboard = (void (*)(Dali::Clipboard))argClipboard;
  {
    try
    {
      Dali_Signal_Dali_Adaptor_Clipboard_Connect(signal, clipboard);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ClipboardSignal_Disconnect(void * argSignal, void * argClipboard)
{
  Dali::Signal<void (Dali::Clipboard)> *signal = (Dali::Signal<void (Dali::Clipboard)> *) 0;
  void (*clipboard)(Dali::Clipboard) = (void (*)(Dali::Clipboard)) 0;

  signal    = (Dali::Signal<void (Dali::Clipboard)> *)argSignal;
  clipboard = (void (*)(Dali::Clipboard))argClipboard;
  {
    try
    {
      Dali_Signal_Dali_Adaptor_Clipboard_Disconnect(signal, clipboard);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ClipboardSignal_Emit(void * argSignal, void * argClipboard)
{
  Dali::Signal<void (Dali::Clipboard)> *signal = (Dali::Signal<void (Dali::Clipboard)> *) 0;
  Dali::Clipboard clipboard;
  Dali::Clipboard *pClipboard;

  signal     = (Dali::Signal<void (Dali::Clipboard)> *)argSignal;
  pClipboard = (Dali::Clipboard *)argClipboard;
  if (!pClipboard)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Clipboard", 0);
    return ;
  }
  clipboard = *pClipboard;
  {
    try
    {
      Dali_Signal_Dali_Adaptor_Clipboard_Emit(signal, clipboard);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ClipboardSignal()
{
  Dali::Signal<void (Dali::Clipboard)> *result = 0;
  {
    try
    {
      result = (Dali::Signal<void (Dali::Clipboard)> *)new Dali::Signal<void (Dali::Clipboard)>();
    } CALL_CATCH_EXCEPTION(0);
  }

  return (void *)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ClipboardSignal(void * argSignal)
{
  Dali::Signal<void (Dali::Clipboard)> *signal = (Dali::Signal<void (Dali::Clipboard)> *) 0;

  signal = (Dali::Signal<void (Dali::Clipboard)> *)argSignal;
  {
    try
    {
      delete signal;
    } CALL_CATCH_EXCEPTION();
  }
}


#ifdef __cplusplus
} // end extern "C"
#endif
