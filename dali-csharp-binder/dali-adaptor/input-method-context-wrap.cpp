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
#include <dali/integration-api/adaptor-framework/input-method-context-integ.h>
#include <dali/integration-api/adaptor-framework/input-method-options.h>
#include <dali/public-api/adaptor-framework/ui-context.h>
#include <unordered_map>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

// Since we only support communicate C#-C++ by pointer,
// We should connect new signal here, who use reference, and emit signal to C# by pointer.
namespace InputMethodContextIntegration = Dali::Integration::InputMethodContext;

using InputMethodCallbackData                    = InputMethodContextIntegration::CallbackData;
using InputMethodEventData                       = InputMethodContextIntegration::EventData;
using InputMethodEventType                       = InputMethodContextIntegration::EventType;
using InputMethodKeyboardEventSignalType         = InputMethodContextIntegration::KeyboardEventSignalType;
using InputMethodLegacyStatusSignalType          = InputMethodContextIntegration::LegacyStatusChangedSignalType;
using InputMethodLegacyKeyboardTypeSignalType    = InputMethodContextIntegration::LegacyKeyboardTypeChangedSignalType;
using InputMethodLegacyKeyboardResizedSignalType = InputMethodContextIntegration::LegacyKeyboardResizedSignalType;
using InputMethodLegacyLanguageChangedSignalType = InputMethodContextIntegration::LegacyLanguageChangedSignalType;
using InputMethodLegacyContentSignalType         = InputMethodContextIntegration::LegacyContentReceivedSignalType;

typedef InputMethodCallbackData*(SWIGSTDCALL* SWIG_CallbackEventReceived)(Dali::InputMethodContext*, InputMethodEventData*);

std::unordered_map<InputMethodKeyboardEventSignalType*, SWIG_CallbackEventReceived> swig_callbackOnEventReceivedMapper;

InputMethodCallbackData OnEventReceivedCallback(Dali::InputMethodContext inputMethodContext, const InputMethodEventData& eventData)
{
  InputMethodCallbackData*  callbackDataP;
  InputMethodCallbackData   callbackData;
  Dali::InputMethodContext* inputMethodContextP = NULL;
  InputMethodEventData*     eventDataP          = NULL;

  if(inputMethodContext)
  {
    inputMethodContextP = (Dali::InputMethodContext*)&inputMethodContext;
  }

  eventDataP = const_cast<InputMethodEventData*>(&eventData);

  if(DALI_LIKELY(inputMethodContextP))
  {
    auto* keyboardEventSignal = &InputMethodContextIntegration::EventReceivedSignal(*inputMethodContextP);

    auto iter = swig_callbackOnEventReceivedMapper.find(keyboardEventSignal);
    if(iter != swig_callbackOnEventReceivedMapper.end())
    {
      auto callbackEventReceived = iter->second;
      if(callbackEventReceived)
      {
        callbackDataP = (InputMethodCallbackData*)callbackEventReceived(inputMethodContextP, eventDataP);
        if(callbackDataP)
        {
          callbackData = *callbackDataP;
        }
      }
    }
  }

  return callbackData;
}

// Signals

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Empty(Dali::Signal<void(Dali::InputMethodContext)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::InputMethodContext)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Connect(Dali::Signal<void(Dali::InputMethodContext)>* self, void (*func)(Dali::InputMethodContext))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Disconnect(Dali::Signal<void(Dali::InputMethodContext)>* self, void (*func)(Dali::InputMethodContext))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Emit(Dali::Signal<void(Dali::InputMethodContext)>* self, Dali::InputMethodContext arg)
{
  self->Emit(arg);
}

SWIGINTERN bool Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Empty(InputMethodKeyboardEventSignalType const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__GetConnectionCount(InputMethodKeyboardEventSignalType const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Connect(InputMethodKeyboardEventSignalType* self, InputMethodCallbackData (*func)(Dali::InputMethodContext, const InputMethodEventData&))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Disconnect(InputMethodKeyboardEventSignalType* self, InputMethodCallbackData (*func)(Dali::InputMethodContext, const InputMethodEventData&))
{
  self->Disconnect(func);
}
SWIGINTERN InputMethodCallbackData Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Emit(InputMethodKeyboardEventSignalType* self, Dali::InputMethodContext arg1, const InputMethodEventData& arg2)
{
  return self->Emit(arg1, arg2);
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty(Dali::Signal<void(bool)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount(Dali::Signal<void(bool)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(Dali::Signal<void(bool)>* self, void (*func)(bool))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(Dali::Signal<void(bool)>* self, void (*func)(bool))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(Dali::Signal<void(bool)>* self, bool arg)
{
  self->Emit(arg);
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Empty(Dali::Signal<void(Dali::InputMethodContext::KeyboardType)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::InputMethodContext::KeyboardType)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Connect(Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* self, void (*func)(Dali::InputMethodContext::KeyboardType))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Disconnect(Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* self, void (*func)(Dali::InputMethodContext::KeyboardType))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Emit(Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* self, Dali::InputMethodContext::KeyboardType arg)
{
  self->Emit(arg);
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty(Dali::Signal<void(int)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount(Dali::Signal<void(int)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(Dali::Signal<void(int)>* self, void (*func)(int))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(Dali::Signal<void(int)>* self, void (*func)(int))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(Dali::Signal<void(int)>* self, int arg)
{
  self->Emit(arg);
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__Empty(InputMethodLegacyContentSignalType const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__GetConnectionCount(InputMethodLegacyContentSignalType const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__Connect(InputMethodLegacyContentSignalType* self, void (*func)(const char*, const char*, const char*))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__Disconnect(InputMethodLegacyContentSignalType* self, void (*func)(const char*, const char*, const char*))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__Emit(InputMethodLegacyContentSignalType* self, const char* arg1, const char* arg2, const char* arg3)
{
  self->Emit(arg1, arg2, arg3);
}

// Functions

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_InputMethodContext_EventData__SWIG_0()
{
  void*                                jresult;
  InputMethodEventData* eventData = 0;

  {
    try
    {
      eventData = (InputMethodEventData*)new InputMethodEventData();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)eventData;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_InputMethodContext_EventData__SWIG_1(int csEventType, char* csPredictiveString, int csCursorOffset, int csNumberOfChars)
{
  void*                                jresult;
  InputMethodEventType eventType;
  std::string*         predictiveString = 0;
  int                  cursorOffset;
  int                  numberOfChars;
  InputMethodEventData* eventData = 0;

  eventType = (InputMethodEventType)csEventType;
  if(!csPredictiveString)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string predictiveStringStr(csPredictiveString);
  predictiveString = &predictiveStringStr;
  cursorOffset     = (int)csCursorOffset;
  numberOfChars    = (int)csNumberOfChars;
  {
    try
    {
      eventData = (InputMethodEventData*)new InputMethodEventData(eventType, Dali::String(predictiveString->c_str()), cursorOffset, numberOfChars);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)eventData;

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_predictiveString_set(void* csEventData, char* csPredictiveString)
{
  InputMethodEventData* eventData    = (InputMethodEventData*)0;
  std::string*          resultString = 0;

  eventData = (InputMethodEventData*)csEventData;
  if(!csPredictiveString)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string pPredictiveString(csPredictiveString);
  resultString = &pPredictiveString;
  if(eventData)
  {
    (eventData)->predictiveString = resultString->c_str();
  }

  //argout typemap for const std::string&
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_predictiveString_get(void* csEventData)
{
  char*                                jresult;
  InputMethodEventData* eventData = (InputMethodEventData*)0;

  eventData = (InputMethodEventData*)csEventData;
  jresult   = SWIG_csharp_string_callback((eventData)->predictiveString.CStr());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_eventName_set(void* csEventData, int csEventType)
{
  InputMethodEventData* eventData = (InputMethodEventData*)0;
  InputMethodEventType  eventType;

  eventData = (InputMethodEventData*)csEventData;
  eventType = (InputMethodEventType)csEventType;
  if(eventData)
  {
    (eventData)->eventName = eventType;
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_eventName_get(void* csEventData)
{
  int                                  jresult;
  InputMethodEventData* eventData = (InputMethodEventData*)0;
  InputMethodEventType  eventType;

  eventData = (InputMethodEventData*)csEventData;
  eventType = (InputMethodEventType)((eventData)->eventName);
  jresult   = (int)eventType;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_cursorOffset_set(void* csEventData, int csCursorOffset)
{
  InputMethodEventData* eventData = (InputMethodEventData*)0;
  int                                  pCursorOffset;

  eventData     = (InputMethodEventData*)csEventData;
  pCursorOffset = (int)csCursorOffset;
  if(eventData)
  {
    (eventData)->cursorOffset = pCursorOffset;
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_cursorOffset_get(void* csEventData)
{
  int                                  jresult;
  InputMethodEventData* eventData = (InputMethodEventData*)0;
  int                                  pCursorOffset;

  eventData     = (InputMethodEventData*)csEventData;
  pCursorOffset = (int)((eventData)->cursorOffset);
  jresult       = pCursorOffset;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_numberOfChars_set(void* csEventData, int csNumberOfChars)
{
  InputMethodEventData* eventData = (InputMethodEventData*)0;
  int                                  pNumberOfChars;

  eventData      = (InputMethodEventData*)csEventData;
  pNumberOfChars = (int)csNumberOfChars;
  if(eventData)
  {
    (eventData)->numberOfChars = pNumberOfChars;
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_numberOfChars_get(void* csEventData)
{
  int                                  jresult;
  InputMethodEventData* eventData = (InputMethodEventData*)0;
  int                                  pNumberOfChars;

  eventData      = (InputMethodEventData*)csEventData;
  pNumberOfChars = (int)((eventData)->numberOfChars);
  jresult        = pNumberOfChars;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext_EventData(void* csEventData)
{
  InputMethodEventData* eventData = (InputMethodEventData*)0;

  eventData = (InputMethodEventData*)csEventData;
  {
    try
    {
      delete eventData;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_InputMethodContext_CallbackData__SWIG_0()
{
  void*                                   jresult;
  InputMethodCallbackData* callbackData = 0;

  {
    try
    {
      callbackData = (InputMethodCallbackData*)new InputMethodCallbackData();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)callbackData;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_InputMethodContext_CallbackData__SWIG_1(unsigned int csUpdate, int csCursorPosition, char* csCurrentText, unsigned int csPreeditResetRequired)
{
  void*                                   jresult;
  bool                                    isUpdated;
  int                                     cursorPosition;
  std::string*                            currentText = 0;
  bool                                    isPreeditResetRequired;
  InputMethodCallbackData* result = 0;

  isUpdated      = csUpdate ? true : false;
  cursorPosition = (int)csCursorPosition;
  if(!csCurrentText)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string currentTextStr(csCurrentText);
  currentText            = &currentTextStr;
  isPreeditResetRequired = csPreeditResetRequired ? true : false;
  {
    try
    {
      result = (InputMethodCallbackData*)new InputMethodCallbackData(isUpdated, cursorPosition, Dali::String(currentText->c_str()), isPreeditResetRequired);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_currentText_set(void* csCallbackData, char* csCurrentText)
{
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;
  std::string*                            currentText  = 0;

  callbackData = (InputMethodCallbackData*)csCallbackData;
  if(!csCurrentText)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string currentTextStr(csCurrentText);
  currentText = &currentTextStr;
  if(callbackData) (callbackData)->currentText = currentText->c_str();

  //argout typemap for const std::string&
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_currentText_get(void* csCallbackData)
{
  char*                                   jresult;
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;

  callbackData = (InputMethodCallbackData*)csCallbackData;
  jresult      = SWIG_csharp_string_callback((callbackData)->currentText.CStr());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_cursorPosition_set(void* csCallbackData, int csCursorPosition)
{
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;
  int                                     cursorPosition;

  callbackData   = (InputMethodCallbackData*)csCallbackData;
  cursorPosition = (int)csCursorPosition;
  if(callbackData) (callbackData)->cursorPosition = cursorPosition;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_cursorPosition_get(void* csCallbackData)
{
  int                                     jresult;
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;
  int                                     result;

  callbackData = (InputMethodCallbackData*)csCallbackData;
  result       = (int)((callbackData)->cursorPosition);
  jresult      = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_update_set(void* csCallbackData, unsigned int csUpdate)
{
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;
  bool                                    isUpdated;

  callbackData = (InputMethodCallbackData*)csCallbackData;
  isUpdated    = csUpdate ? true : false;
  if(callbackData) (callbackData)->update = isUpdated;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_update_get(void* csCallbackData)
{
  unsigned int                            jresult;
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;
  bool                                    isUpdated;

  callbackData = (InputMethodCallbackData*)csCallbackData;
  isUpdated    = (bool)((callbackData)->update);
  jresult      = isUpdated;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_preeditResetRequired_set(void* csCallbackData, unsigned int csPreeditResetRequired)
{
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;
  bool                                    isPreeditResetRequired;

  callbackData           = (InputMethodCallbackData*)csCallbackData;
  isPreeditResetRequired = csPreeditResetRequired ? true : false;
  if(callbackData) (callbackData)->preeditResetRequired = isPreeditResetRequired;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_preeditResetRequired_get(void* csCallbackData)
{
  unsigned int                            jresult;
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;
  bool                                    isPreeditResetRequired;

  callbackData           = (InputMethodCallbackData*)csCallbackData;
  isPreeditResetRequired = (bool)((callbackData)->preeditResetRequired);
  jresult                = isPreeditResetRequired;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext_CallbackData(void* csCallbackData)
{
  InputMethodCallbackData* callbackData = (InputMethodCallbackData*)0;

  callbackData = (InputMethodCallbackData*)csCallbackData;
  {
    try
    {
      delete callbackData;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Finalize(void* csInputMethodContext)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      InputMethodContextIntegration::Finalize(*inputMethodContext);
      auto& eventReceivedCallback = InputMethodContextIntegration::EventReceivedSignal(*inputMethodContext);
      auto  iter                  = swig_callbackOnEventReceivedMapper.find(&eventReceivedCallback);
      if(iter != swig_callbackOnEventReceivedMapper.end())
      {
        swig_callbackOnEventReceivedMapper.erase(iter);
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext(void* csInputMethodContext)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      // TODO : Should we consider case the InputMethodContext which don't call Finalize?
      // TODO : Should we consider case that InputMethodContext BaseObject destroyed at DALi side?
      //        If then, How can we remove swig_callbackOnEventReceivedMapper?
      delete inputMethodContext;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_New()
{
  void*                    jresult;
  Dali::InputMethodContext inputMethodContext;

  {
    try
    {
      inputMethodContext = InputMethodContextIntegration::New(Dali::UiContext::Get().GetDefaultWindow().GetRootLayer());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::InputMethodContext((const Dali::InputMethodContext)inputMethodContext);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_InputMethodContext__SWIG_1(void* csInputMethodContext)
{
  void*                     jresult;
  Dali::InputMethodContext* inputMethodContext = 0;
  Dali::InputMethodContext* result             = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  if(!inputMethodContext)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::InputMethodContext*)new Dali::InputMethodContext((Dali::InputMethodContext const&)*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_Assign(void* csInputMethodContext, void* rInputMethodContext)
{
  void*                     jresult;
  Dali::InputMethodContext* inputMethodContext         = (Dali::InputMethodContext*)0;
  Dali::InputMethodContext* assignedInputMethodContext = 0;
  Dali::InputMethodContext* result                     = 0;

  inputMethodContext         = (Dali::InputMethodContext*)csInputMethodContext;
  assignedInputMethodContext = (Dali::InputMethodContext*)rInputMethodContext;
  if(!assignedInputMethodContext)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::InputMethodContext*)&(inputMethodContext)->operator=((Dali::InputMethodContext const&)*assignedInputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_DownCast(void* jarg1)
{
  void*                    jresult;
  Dali::BaseHandle         arg1;
  Dali::BaseHandle*        argp1;
  Dali::InputMethodContext result;

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
      result = Dali::InputMethodContext::DownCast(arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::InputMethodContext((const Dali::InputMethodContext)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Activate(void* csInputMethodContext)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      InputMethodContextIntegration::Activate(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Deactivate(void* csInputMethodContext)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      InputMethodContextIntegration::Deactivate(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_RestoreAfterFocusLost(void* csInputMethodContext)
{
  unsigned int              jresult;
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      status;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      status = (bool)((Dali::InputMethodContext const*)inputMethodContext)->IsRestoreAfterFocusLostEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = status;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetRestoreAfterFocusLost(void* csInputMethodContext, unsigned int csToggle)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      toggle;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  toggle             = csToggle ? true : false;
  {
    try
    {
      (inputMethodContext)->SetRestoreAfterFocusLostEnabled(toggle);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Reset(void* csInputMethodContext)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      InputMethodContextIntegration::Reset(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_NotifyCursorPosition(void* csInputMethodContext)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      InputMethodContextIntegration::NotifyCursorPosition(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetCursorPosition(void* csInputMethodContext, unsigned int csCursorPosition)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  unsigned int              cursorPosition;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  cursorPosition     = (unsigned int)csCursorPosition;
  {
    try
    {
      InputMethodContextIntegration::SetCursorPosition(*inputMethodContext, cursorPosition);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetCursorPosition(void* csInputMethodContext)
{
  unsigned int              jresult;
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  unsigned int              cursorPosition;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      cursorPosition = (unsigned int)InputMethodContextIntegration::GetCursorPosition(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = cursorPosition;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetSurroundingText(void* csInputMethodContext, char* csText)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  std::string*              text               = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  if(!csText)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string textStr(csText);
  text = &textStr;
  {
    try
    {
      InputMethodContextIntegration::SetSurroundingText(*inputMethodContext, Dali::String(text->c_str()));
    }
    CALL_CATCH_EXCEPTION();
  }

  //argout typemap for const std::string&
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_InputMethodContext_GetSurroundingText(void* csInputMethodContext)
{
  char*                     jresult;
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  Dali::String              text;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      text = InputMethodContextIntegration::GetSurroundingText(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = SWIG_csharp_string_callback(text.CStr());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_NotifyTextInputMultiLine(void* csInputMethodContext, unsigned int csMultiLine)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      isMultiLine;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  isMultiLine        = csMultiLine ? true : false;
  {
    try
    {
      InputMethodContextIntegration::NotifyTextInputMultiLine(*inputMethodContext, isMultiLine);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetTextDirection(void* csInputMethodContext)
{
  int                                     jresult;
  Dali::InputMethodContext*                   inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodContextIntegration::TextDirection direction;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      direction = (InputMethodContextIntegration::TextDirection)InputMethodContextIntegration::GetTextDirection(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)direction;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputMethodArea(void* csInputMethodContext)
{
  void*                     jresult;
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  Dali::BoundsInteger       area;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      area = (inputMethodContext)->GetInputPanelArea();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::BoundsInteger((const Dali::BoundsInteger&)area);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_ApplyOptions(void* csInputMethodContext, void* csInputMethodOptions)
{
  Dali::InputMethodContext*              inputMethodContext = (Dali::InputMethodContext*)0;
  Dali::Integration::InputMethodOptions* inputMethodOptions = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  inputMethodOptions = (Dali::Integration::InputMethodOptions*)csInputMethodOptions;
  if(!inputMethodOptions)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "InputMethodOptions const & type is null", 0);
    return;
  }
  {
    try
    {
      InputMethodContextIntegration::ApplyOptions(*inputMethodContext, (const Dali::Integration::InputMethodOptions&)*inputMethodOptions);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetInputPanelUserData(void* csInputMethodContext, char* csData)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  std::string*              data               = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  if(!csData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string dataStr(csData);
  data = &dataStr;
  {
    try
    {
      (inputMethodContext)->SetInputPanelUserData(Dali::String(data->c_str()));
    }
    CALL_CATCH_EXCEPTION();
  }

  //argout typemap for const std::string&
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelUserData(void* csInputMethodContext, char** csData)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  Dali::String              data;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;

  //typemap in
  {
    try
    {
      data = (inputMethodContext)->GetInputPanelUserData();
    }
    CALL_CATCH_EXCEPTION();
  }

  //Typemap argout in c++ file.
  //This will convert c++ string to c# string
  *csData = SWIG_csharp_string_callback(data.CStr());
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelState(void* csInputMethodContext)
{
  int                             jresult;
  Dali::InputMethodContext*       inputMethodContext = (Dali::InputMethodContext*)0;
  Dali::InputMethodContext::State result;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      result = (Dali::InputMethodContext::State)(inputMethodContext)->GetInputPanelState();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  // TizenFX keeps State.Default = 0 for compatibility. Native State no longer
  // has DEFAULT, so map native SHOW/HIDE/WILL_SHOW (0/1/2) to managed
  // Show/Hide/WillShow (1/2/3).
  jresult = static_cast<int>(result) + 1;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetReturnKeyState(void* csInputMethodContext, unsigned int csVisible)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      isVisible;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  isVisible          = csVisible ? true : false;
  {
    try
    {
      (inputMethodContext)->SetReturnKeyEnabled(isVisible);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_AutoEnableInputPanel(void* csInputMethodContext, unsigned int csEnabled)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      isEnabled;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  isEnabled          = csEnabled ? true : false;
  {
    try
    {
      (inputMethodContext)->SetInputPanelAutoShowEnabled(isEnabled);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_ShowInputPanel(void* csInputMethodContext)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      (inputMethodContext)->ShowInputPanel();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_HideInputPanel(void* csInputMethodContext)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      (inputMethodContext)->HideInputPanel();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetKeyboardType(void* csInputMethodContext)
{
  int                                    jresult;
  Dali::InputMethodContext*              inputMethodContext = (Dali::InputMethodContext*)0;
  Dali::InputMethodContext::KeyboardType type;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      type = (Dali::InputMethodContext::KeyboardType)(inputMethodContext)->GetKeyboardType();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = static_cast<int>(type);
  return jresult;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelLocale(void* csInputMethodContext)
{
  char*                     jresult;
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  Dali::String              locale;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      locale = (inputMethodContext)->GetInputPanelLanguageLocale();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = SWIG_csharp_string_callback(locale.CStr());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_AllowTextPrediction(void* csInputMethodContext, unsigned int csPrediction)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      prediction;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  prediction         = csPrediction ? true : false;
  {
    try
    {
      (inputMethodContext)->SetTextPredictionEnabled(prediction);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_IsTextPredictionAllowed(void* csInputMethodContext)
{
  unsigned int              jresult;
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      prediction;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      prediction = (bool)((Dali::InputMethodContext const*)inputMethodContext)->IsTextPredictionEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = prediction;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetFullScreenMode(void* csInputMethodContext, unsigned int csFullScreen)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      fullScreen;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  fullScreen         = csFullScreen ? true : false;
  {
    try
    {
      (inputMethodContext)->SetFullScreenModeEnabled(fullScreen);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_IsFullScreenMode(void* csInputMethodContext)
{
  unsigned int              jresult;
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  bool                      fullScreen;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      fullScreen = (bool)((Dali::InputMethodContext const*)inputMethodContext)->IsFullScreenModeEnabled();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = fullScreen;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetMIMEType(void* csInputMethodContext, char* csMimeTypes)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  std::string*              mimeTypes          = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  if(!csMimeTypes)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string mimeTypesString(csMimeTypes);
  mimeTypes = &mimeTypesString;
  {
    try
    {
      InputMethodContextIntegration::SetContentMimeTypes(*inputMethodContext, Dali::String(mimeTypes->c_str()));
    }
    CALL_CATCH_EXCEPTION();
  }

  //argout typemap for const std::string&
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetInputPanelLanguage(void* csInputMethodContext, int csLanguage)
{
  Dali::InputMethodContext*                                  inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodContextIntegration::InputPanelLanguage          language;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  if(inputMethodContext == nullptr)
  {
    DALI_LOG_ERROR("[ERR] inputMethodContext == nullptr");
    return;
  }

  language = static_cast<InputMethodContextIntegration::InputPanelLanguage>(csLanguage);
  {
    try
    {
      InputMethodContextIntegration::SetInputPanelLanguage(*inputMethodContext, language);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelLanguage(void* csInputMethodContext)
{
  int                                                        jresult;
  Dali::InputMethodContext*                                  inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodContextIntegration::InputPanelLanguage          language;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  if(inputMethodContext == nullptr)
  {
    DALI_LOG_ERROR("[ERR] inputMethodContext == nullptr");
    return false;
  }
  {
    try
    {
      language = InputMethodContextIntegration::GetInputPanelLanguage(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)language;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetInputPanelPosition(void* csInputMethodContext, unsigned int csXCoord, unsigned int csYCoord)
{
  Dali::InputMethodContext* inputMethodContext = (Dali::InputMethodContext*)0;
  unsigned int              x;
  unsigned int              y;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  x                  = (unsigned int)csXCoord;
  y                  = (unsigned int)csYCoord;
  {
    try
    {
      (inputMethodContext)->SetInputPanelPosition(x, y);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_InputMethodContext_SetInputPanelPositionAlign(void* csInputMethodContext, int csXCoord, int csYCoord, int csAlign)
{
  Dali::InputMethodContext*                 inputMethodContext = (Dali::InputMethodContext*)0;
  int                                       x;
  int                                       y;
  Dali::InputMethodContext::InputPanelAlign align;
  bool                                      result = false;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  if(inputMethodContext == nullptr)
  {
    DALI_LOG_ERROR("inputMethodContext == nullptr\n");
    return false;
  }

  x     = (int)csXCoord;
  y     = (int)csYCoord;
  align = (Dali::InputMethodContext::InputPanelAlign)csAlign;
  {
    try
    {
      result = (inputMethodContext)->SetInputPanelPositionAlign(x, y, align);
    }
    CALL_CATCH_EXCEPTION(false);
  }

  return result;
}

// Signals
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_ActivatedSignal(void* csInputMethodContext)
{
  void*                                          jresult;
  Dali::InputMethodContext*                      inputMethodContext = (Dali::InputMethodContext*)0;
  Dali::InputMethodContext::ActivatedSignalType* type               = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      type = (Dali::InputMethodContext::ActivatedSignalType*)&(inputMethodContext)->ActivatedSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)type;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_EventReceivedSignal(void* csInputMethodContext)
{
  void*                                              jresult;
  Dali::InputMethodContext*      inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodKeyboardEventSignalType* type          = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      type = (InputMethodKeyboardEventSignalType*)&InputMethodContextIntegration::EventReceivedSignal(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)type;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_StatusChangedSignal(void* csInputMethodContext)
{
  void*                            jresult;
  Dali::InputMethodContext*        inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodLegacyStatusSignalType* type             = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      type = &InputMethodContextIntegration::LegacyStatusChangedSignal(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)type;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_ResizedSignal(void* csInputMethodContext)
{
  void*                                        jresult;
  Dali::InputMethodContext*                    inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodLegacyKeyboardResizedSignalType*  type               = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      type = &InputMethodContextIntegration::LegacyResizedSignal(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)type;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_LanguageChangedSignal(void* csInputMethodContext)
{
  void*                                          jresult;
  Dali::InputMethodContext*                      inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodLegacyLanguageChangedSignalType*     type               = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      type = &InputMethodContextIntegration::LegacyLanguageChangedSignal(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)type;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_KeyboardTypeChangedSignal(void* csInputMethodContext)
{
  void*                                       jresult;
  Dali::InputMethodContext*                   inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodLegacyKeyboardTypeSignalType*    type               = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      type = &InputMethodContextIntegration::LegacyKeyboardTypeChangedSignal(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)type;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_InputMethodContext_ContentReceivedSignal(void* csInputMethodContext)
{
  void*                            jresult;
  Dali::InputMethodContext*        inputMethodContext = (Dali::InputMethodContext*)0;
  InputMethodLegacyContentSignalType* type            = 0;

  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  {
    try
    {
      type = &InputMethodContextIntegration::LegacyContentReceivedSignal(*inputMethodContext);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)type;
  return jresult;
}

// ActivatedSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Empty(void* csSignal)
{
  unsigned int                                  jresult;
  Dali::Signal<void(Dali::InputMethodContext)>* signal = (Dali::Signal<void(Dali::InputMethodContext)>*)0;
  bool                                          result;

  signal = (Dali::Signal<void(Dali::InputMethodContext)>*)csSignal;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Empty((Dali::Signal<void(Dali::InputMethodContext)> const*)signal);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ActivatedSignalType_GetConnectionCount(void* csSignal)
{
  unsigned long                                 jresult;
  Dali::Signal<void(Dali::InputMethodContext)>* signal = (Dali::Signal<void(Dali::InputMethodContext)>*)0;
  std::size_t                                   result;

  signal = (Dali::Signal<void(Dali::InputMethodContext)>*)csSignal;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::InputMethodContext)> const*)signal);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Connect(void* csSignal, void* csInputMethodContext)
{
  Dali::Signal<void(Dali::InputMethodContext)>* signal = (Dali::Signal<void(Dali::InputMethodContext)>*)0;
  void (*inputMethodContext)(Dali::InputMethodContext) = (void (*)(Dali::InputMethodContext))0;

  signal             = (Dali::Signal<void(Dali::InputMethodContext)>*)csSignal;
  inputMethodContext = (void (*)(Dali::InputMethodContext))csInputMethodContext;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Connect(signal, inputMethodContext);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Disconnect(void* csSignal, void* csInputMethodContext)
{
  Dali::Signal<void(Dali::InputMethodContext)>* signal = (Dali::Signal<void(Dali::InputMethodContext)>*)0;
  void (*inputMethodContext)(Dali::InputMethodContext) = (void (*)(Dali::InputMethodContext))0;

  signal             = (Dali::Signal<void(Dali::InputMethodContext)>*)csSignal;
  inputMethodContext = (void (*)(Dali::InputMethodContext))csInputMethodContext;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Disconnect(signal, inputMethodContext);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Emit(void* csSignal, void* csInputMethodContext)
{
  Dali::Signal<void(Dali::InputMethodContext)>* signal             = (Dali::Signal<void(Dali::InputMethodContext)>*)0;
  Dali::InputMethodContext*                     inputMethodContext = 0;

  signal             = (Dali::Signal<void(Dali::InputMethodContext)>*)csSignal;
  inputMethodContext = (Dali::InputMethodContext*)csInputMethodContext;
  if(!inputMethodContext)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext & type is null", 0);
    return;
  }
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Emit(signal, *inputMethodContext);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ActivatedSignalType()
{
  void*                                         jresult;
  Dali::Signal<void(Dali::InputMethodContext)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::InputMethodContext)>*)new Dali::Signal<void(Dali::InputMethodContext)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ActivatedSignalType(void* csSignal)
{
  Dali::Signal<void(Dali::InputMethodContext)>* signal = (Dali::Signal<void(Dali::InputMethodContext)>*)0;

  signal = (Dali::Signal<void(Dali::InputMethodContext)>*)csSignal;
  {
    try
    {
      delete signal;
    }
    CALL_CATCH_EXCEPTION();
  }
}

// KeyboardEventSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Empty(void* csKeyboardEventSignal)
{
  unsigned int                                                                                                                jresult;
  InputMethodKeyboardEventSignalType* arg1 = (InputMethodKeyboardEventSignalType*)0;
  bool                                                                                                                        result;

  arg1 = (InputMethodKeyboardEventSignalType*)csKeyboardEventSignal;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Empty((InputMethodKeyboardEventSignalType const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_GetConnectionCount(void* csKeyboardEventSignal)
{
  unsigned long                                                                                                               jresult;
  InputMethodKeyboardEventSignalType* arg1 = (InputMethodKeyboardEventSignalType*)0;
  std::size_t                                                                                                                 result;

  arg1 = (InputMethodKeyboardEventSignalType*)csKeyboardEventSignal;
  {
    try
    {
      result = Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__GetConnectionCount((InputMethodKeyboardEventSignalType const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Connect(void* csKeyboardEventSignal, SWIG_CallbackEventReceived callbackOnEventReceived)
{
  InputMethodKeyboardEventSignalType* arg1 = (InputMethodKeyboardEventSignalType*)0;
  arg1                                    = (InputMethodKeyboardEventSignalType*)csKeyboardEventSignal;

  auto iter = swig_callbackOnEventReceivedMapper.find(arg1);
  if(iter == swig_callbackOnEventReceivedMapper.end())
  {
    InputMethodCallbackData (*arg2)(Dali::InputMethodContext, const InputMethodEventData&) = nullptr;

    arg2 = OnEventReceivedCallback;
    {
      try
      {
        Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Connect(arg1, arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
    swig_callbackOnEventReceivedMapper[arg1] = callbackOnEventReceived;
  }
  else
  {
    // Replace callback
    // TODO : Should we consider multiple signal connection?
    iter->second = callbackOnEventReceived;
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Disconnect(void* csKeyboardEventSignal, SWIG_CallbackEventReceived callbackOnEventReceived)
{
  InputMethodKeyboardEventSignalType* arg1 = (InputMethodKeyboardEventSignalType*)0;
  arg1                                    = (InputMethodKeyboardEventSignalType*)csKeyboardEventSignal;

  auto iter = swig_callbackOnEventReceivedMapper.find(arg1);
  if(iter != swig_callbackOnEventReceivedMapper.end())
  {
    InputMethodCallbackData (*arg2)(Dali::InputMethodContext, const InputMethodEventData&) = nullptr;

    arg2 = OnEventReceivedCallback;
    {
      try
      {
        Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Disconnect(arg1, arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
    swig_callbackOnEventReceivedMapper.erase(iter);
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Emit(void* csKeyboardEventSignal, void* csInputMethodContext, void* csEventData)
{
  void*                                                                                                                       jresult;
  InputMethodKeyboardEventSignalType* arg1   = (InputMethodKeyboardEventSignalType*)0;
  Dali::InputMethodContext*           arg2   = 0;
  InputMethodEventData*               arg3   = 0;
  InputMethodCallbackData             result;

  arg1 = (InputMethodKeyboardEventSignalType*)csKeyboardEventSignal;
  arg2 = (Dali::InputMethodContext*)csInputMethodContext;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext & type is null", 0);
    return 0;
  }
  arg3 = (InputMethodEventData*)csEventData;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Integration::InputMethodContext::EventData const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Emit(arg1, *arg2, (const InputMethodEventData&)*arg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new InputMethodCallbackData((const InputMethodCallbackData&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_KeyboardEventSignalType()
{
  void*                                                                                                                       jresult;
  InputMethodKeyboardEventSignalType* result = 0;

  {
    try
    {
      result = (InputMethodKeyboardEventSignalType*)new InputMethodKeyboardEventSignalType();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardEventSignalType(void* jarg1)
{
  InputMethodKeyboardEventSignalType* arg1 = (InputMethodKeyboardEventSignalType*)0;

  arg1 = (InputMethodKeyboardEventSignalType*)jarg1;
  {
    try
    {
      auto iter = swig_callbackOnEventReceivedMapper.find(arg1);
      if(iter != swig_callbackOnEventReceivedMapper.end())
      {
        swig_callbackOnEventReceivedMapper.erase(iter);
      }
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

// VoidSignalType

//StatusSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_StatusSignalType_Empty(void* jarg1)
{
  unsigned int              jresult;
  Dali::Signal<void(bool)>* arg1 = (Dali::Signal<void(bool)>*)0;
  bool                      result;

  arg1 = (Dali::Signal<void(bool)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty((Dali::Signal<void(bool)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_StatusSignalType_GetConnectionCount(void* jarg1)
{
  unsigned long             jresult;
  Dali::Signal<void(bool)>* arg1 = (Dali::Signal<void(bool)>*)0;
  std::size_t               result;

  arg1 = (Dali::Signal<void(bool)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount((Dali::Signal<void(bool)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(bool)>* arg1 = (Dali::Signal<void(bool)>*)0;
  void (*arg2)(bool)             = (void (*)(bool))0;

  arg1 = (Dali::Signal<void(bool)>*)jarg1;
  arg2 = (void (*)(bool))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(bool)>* arg1 = (Dali::Signal<void(bool)>*)0;
  void (*arg2)(bool)             = (void (*)(bool))0;

  arg1 = (Dali::Signal<void(bool)>*)jarg1;
  arg2 = (void (*)(bool))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Emit(void* jarg1, unsigned int jarg2)
{
  Dali::Signal<void(bool)>* arg1 = (Dali::Signal<void(bool)>*)0;
  bool                      arg2;

  arg1 = (Dali::Signal<void(bool)>*)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_StatusSignalType()
{
  void*                     jresult;
  Dali::Signal<void(bool)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(bool)>*)new Dali::Signal<void(bool)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_StatusSignalType(void* jarg1)
{
  Dali::Signal<void(bool)>* arg1 = (Dali::Signal<void(bool)>*)0;

  arg1 = (Dali::Signal<void(bool)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

//KeyboardTypeSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Empty(void* jarg1)
{
  unsigned int                                                jresult;
  Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)0;
  bool                                                        result;

  arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Empty((Dali::Signal<void(Dali::InputMethodContext::KeyboardType)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_GetConnectionCount(void* jarg1)
{
  unsigned long                                               jresult;
  Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)0;
  std::size_t                                                 result;

  arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::InputMethodContext::KeyboardType)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)0;
  void (*arg2)(Dali::InputMethodContext::KeyboardType)             = (void (*)(Dali::InputMethodContext::KeyboardType))0;

  arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)jarg1;
  arg2 = (void (*)(Dali::InputMethodContext::KeyboardType))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)0;
  void (*arg2)(Dali::InputMethodContext::KeyboardType)             = (void (*)(Dali::InputMethodContext::KeyboardType))0;

  arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)jarg1;
  arg2 = (void (*)(Dali::InputMethodContext::KeyboardType))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Emit(void* jarg1, int jarg2)
{
  Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)0;
  Dali::InputMethodContext::KeyboardType                      arg2;

  arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)jarg1;
  arg2 = (Dali::InputMethodContext::KeyboardType)jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_KeyboardTypeSignalType()
{
  void*                                                       jresult;
  Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)new Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardTypeSignalType(void* jarg1)
{
  Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>* arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)0;

  arg1 = (Dali::Signal<void(Dali::InputMethodContext::KeyboardType)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

//LanguageChangedSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Empty(void* jarg1)
{
  unsigned int             jresult;
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  bool                     result;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty((Dali::Signal<void(int)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_GetConnectionCount(void* jarg1)
{
  unsigned long            jresult;
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  std::size_t              result;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount((Dali::Signal<void(int)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  void (*arg2)(int)             = (void (*)(int))0;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  void (*arg2)(int)             = (void (*)(int))0;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Emit(void* jarg1, int jarg2)
{
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  int                      arg2;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_LanguageChangedSignalType()
{
  void*                    jresult;
  Dali::Signal<void(int)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(int)>*)new Dali::Signal<void(int)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LanguageChangedSignalType(void* jarg1)
{
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

//KeyboardTypeSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Empty(void* jarg1)
{
  unsigned int             jresult;
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  bool                     result;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty((Dali::Signal<void(int)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_GetConnectionCount(void* jarg1)
{
  unsigned long            jresult;
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  std::size_t              result;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount((Dali::Signal<void(int)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  void (*arg2)(int)             = (void (*)(int))0;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  void (*arg2)(int)             = (void (*)(int))0;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Emit(void* jarg1, int jarg2)
{
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;
  int                      arg2;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_KeyboardResizedSignalType()
{
  void*                    jresult;
  Dali::Signal<void(int)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(int)>*)new Dali::Signal<void(int)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardResizedSignalType(void* jarg1)
{
  Dali::Signal<void(int)>* arg1 = (Dali::Signal<void(int)>*)0;

  arg1 = (Dali::Signal<void(int)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

//ContentReceivedSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Empty(void* jarg1)
{
  unsigned int                        jresult;
  InputMethodLegacyContentSignalType* arg1 = (InputMethodLegacyContentSignalType*)0;
  bool                                result;

  arg1 = (InputMethodLegacyContentSignalType*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__Empty((InputMethodLegacyContentSignalType const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_GetConnectionCount(void* jarg1)
{
  unsigned long                       jresult;
  InputMethodLegacyContentSignalType* arg1 = (InputMethodLegacyContentSignalType*)0;
  std::size_t                         result;

  arg1 = (InputMethodLegacyContentSignalType*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__GetConnectionCount((InputMethodLegacyContentSignalType const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Connect(void* jarg1, void* jarg2)
{
  InputMethodLegacyContentSignalType* arg1 = (InputMethodLegacyContentSignalType*)0;
  void (*arg2)(const char*, const char*, const char*) = (void (*)(const char*, const char*, const char*))0;

  arg1 = (InputMethodLegacyContentSignalType*)jarg1;
  arg2 = (void (*)(const char*, const char*, const char*))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Disconnect(void* jarg1, void* jarg2)
{
  InputMethodLegacyContentSignalType* arg1 = (InputMethodLegacyContentSignalType*)0;
  void (*arg2)(const char*, const char*, const char*) = (void (*)(const char*, const char*, const char*))0;

  arg1 = (InputMethodLegacyContentSignalType*)jarg1;
  arg2 = (void (*)(const char*, const char*, const char*))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Emit(void* jarg1, char* jarg2, char* jarg3, char* jarg4)
{
  InputMethodLegacyContentSignalType* arg1 = (InputMethodLegacyContentSignalType*)0;
  const char*                          arg2 = jarg2 ? jarg2 : "";
  const char*                          arg3 = jarg3 ? jarg3 : "";
  const char*                          arg4 = jarg4 ? jarg4 : "";

  arg1 = (InputMethodLegacyContentSignalType*)jarg1;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_char_const_p_char_const_p_char_const_p_SP__Sg__Emit(arg1, arg2, arg3, arg4);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ContentReceivedSignalType()
{
  void*                               jresult;
  InputMethodLegacyContentSignalType* result = 0;

  {
    try
    {
      result = (InputMethodLegacyContentSignalType*)new InputMethodLegacyContentSignalType();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ContentReceivedSignalType(void* jarg1)
{
  InputMethodLegacyContentSignalType* arg1 = (InputMethodLegacyContentSignalType*)0;

  arg1 = (InputMethodLegacyContentSignalType*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
