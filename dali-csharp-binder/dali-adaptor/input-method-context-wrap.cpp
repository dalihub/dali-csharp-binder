/*
 * Copyright (c) 2024 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/common/stage.h>
#include <dali/devel-api/adaptor-framework/input-method-context.h>
#include <unordered_map>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

// Since we only support communicate C#-C++ by pointer,
// We should connect new signal here, who use reference, and emit signal to C# by pointer.
typedef Dali::InputMethodContext::CallbackData* (SWIGSTDCALL* SWIG_CallbackEventReceived)(Dali::InputMethodContext *, Dali::InputMethodContext::EventData *);
std::unordered_map<Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *, SWIG_CallbackEventReceived> swig_callbackOnEventReceivedMapper;


Dali::InputMethodContext::CallbackData OnEventReceivedCallback(Dali::InputMethodContext inputMethodContext, Dali::InputMethodContext::EventData eventData)
{
  Dali::InputMethodContext::CallbackData *callbackDataP;
  Dali::InputMethodContext::CallbackData callbackData;
  Dali::InputMethodContext *inputMethodContextP = NULL;
  Dali::InputMethodContext::EventData *eventDataP = NULL;

  if (inputMethodContext)
  {
    inputMethodContextP = (Dali::InputMethodContext *)&inputMethodContext;
  }

  eventDataP = (Dali::InputMethodContext::EventData *)&eventData;

  auto* keyboardEventSignal = &inputMethodContextP->EventReceivedSignal();

  auto iter = swig_callbackOnEventReceivedMapper.find(keyboardEventSignal);
  if(iter != swig_callbackOnEventReceivedMapper.end())
  {
    auto callbackEventReceived = iter->second;
    if(callbackEventReceived)
    {
      callbackDataP = (Dali::InputMethodContext::CallbackData *)callbackEventReceived(inputMethodContextP, eventDataP);
      if (callbackDataP)
      {
        callbackData = *callbackDataP;
      }
    }
  }

  return callbackData;
}

// Signals

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Empty(Dali::Signal< void (Dali::InputMethodContext &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::InputMethodContext &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Connect(Dali::Signal< void (Dali::InputMethodContext &) > *self,void (*func)(Dali::InputMethodContext &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::InputMethodContext &) > *self,void (*func)(Dali::InputMethodContext &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Emit(Dali::Signal< void (Dali::InputMethodContext &) > *self,Dali::InputMethodContext &arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Empty(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Connect(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *self,Dali::InputMethodContext::CallbackData (*func)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *self,Dali::InputMethodContext::CallbackData (*func)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &)){
  self->Disconnect( func );
}
SWIGINTERN Dali::InputMethodContext::CallbackData Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Emit(Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *self,Dali::InputMethodContext &arg1,Dali::InputMethodContext::EventData const &arg2){
  return self->Emit( arg1, arg2 );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty(Dali::Signal< void (bool) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount(Dali::Signal< void (bool) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(Dali::Signal< void (bool) > *self,void (*func)(bool)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(Dali::Signal< void (bool) > *self,void (*func)(bool)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(Dali::Signal< void (bool) > *self,bool arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Empty(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Connect(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *self,void (*func)(Dali::InputMethodContext::KeyboardType)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Disconnect(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *self,void (*func)(Dali::InputMethodContext::KeyboardType)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Emit(Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *self,Dali::InputMethodContext::KeyboardType arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty(Dali::Signal< void (int) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount(Dali::Signal< void (int) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(Dali::Signal< void (int) > *self,void (*func)(int)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(Dali::Signal< void (int) > *self,void (*func)(int)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(Dali::Signal< void (int) > *self,int arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Empty(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__GetConnectionCount(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Connect(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *self,void (*func)(std::string const &, std::string const &, std::string const &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Disconnect(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *self,void (*func)(std::string const &, std::string const &, std::string const &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Emit(Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *self,std::string const &arg1,std::string const &arg2,std::string const &arg3){
  self->Emit( arg1, arg2, arg3 );
}

// Functions

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_InputMethodContext_SWIGUpcast(Dali::InputMethodContext *jarg1) {
  return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext_EventData__SWIG_0() {
  void * jresult ;
  Dali::InputMethodContext::EventData *eventData = 0 ;

  {
    try {
      eventData = (Dali::InputMethodContext::EventData *)new Dali::InputMethodContext::EventData();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)eventData;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext_EventData__SWIG_1(int csEventType, char * csPredictiveString, int csCursorOffset, int csNumberOfChars) {
  void * jresult ;
  Dali::InputMethodContext::EventType eventType ;
  std::string *predictiveString = 0 ;
  int cursorOffset ;
  int numberOfChars ;
  Dali::InputMethodContext::EventData *eventData = 0 ;

  eventType = (Dali::InputMethodContext::EventType)csEventType;
  if (!csPredictiveString) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string predictiveStringStr(csPredictiveString);
  predictiveString = &predictiveStringStr;
  cursorOffset = (int)csCursorOffset;
  numberOfChars = (int)csNumberOfChars;
  {
    try {
      eventData = (Dali::InputMethodContext::EventData *)new Dali::InputMethodContext::EventData(eventType,(std::string const &)*predictiveString,cursorOffset,numberOfChars);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)eventData;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_predictiveString_set(void* csEventData, char* csPredictiveString) {
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0;
  std::string *resultString = 0;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  if (!csPredictiveString)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string pPredictiveString(csPredictiveString);
  resultString = &pPredictiveString;
  if (eventData)
  {
    (eventData)->predictiveString = *resultString;
  }

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_predictiveString_get(void* csEventData) {
  char* jresult;
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0;
  std::string *result = 0;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  result = (std::string *) & ((eventData)->predictiveString);
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_eventName_set(void* csEventData, int csEventType) {
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0;
  Dali::InputMethodContext::EventType eventType;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  eventType = (Dali::InputMethodContext::EventType)csEventType;
  if (eventData)
  {
    (eventData)->eventName = eventType;
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_eventName_get(void* csEventData) {
  int jresult;
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0;
  Dali::InputMethodContext::EventType eventType;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  eventType = (Dali::InputMethodContext::EventType) ((eventData)->eventName);
  jresult = (int)eventType;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_cursorOffset_set(void* csEventData, int csCursorOffset) {
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0;
  int pCursorOffset;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  pCursorOffset = (int)csCursorOffset;
  if (eventData)
  {
    (eventData)->cursorOffset = pCursorOffset;
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_cursorOffset_get(void* csEventData) {
  int jresult;
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0;
  int pCursorOffset;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  pCursorOffset = (int) ((eventData)->cursorOffset);
  jresult = pCursorOffset;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_numberOfChars_set(void * csEventData, int csNumberOfChars) {
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0;
  int pNumberOfChars;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  pNumberOfChars = (int)csNumberOfChars;
  if (eventData)
  {
    (eventData)->numberOfChars = pNumberOfChars;
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_EventData_numberOfChars_get(void * csEventData) {
  int jresult;
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0;
  int pNumberOfChars;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  pNumberOfChars = (int) ((eventData)->numberOfChars);
  jresult = pNumberOfChars;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext_EventData(void * csEventData) {
  Dali::InputMethodContext::EventData *eventData = (Dali::InputMethodContext::EventData *) 0 ;

  eventData = (Dali::InputMethodContext::EventData *)csEventData;
  {
    try {
      delete eventData;
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext_CallbackData__SWIG_0() {
  void * jresult ;
  Dali::InputMethodContext::CallbackData *callbackData = 0 ;

  {
    try {
      callbackData = (Dali::InputMethodContext::CallbackData *)new Dali::InputMethodContext::CallbackData();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)callbackData;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext_CallbackData__SWIG_1(unsigned int csUpdate, int csCursorPosition, char * csCurrentText, unsigned int csPreeditResetRequired) {
  void * jresult ;
  bool isUpdated ;
  int cursorPosition ;
  std::string *currentText = 0 ;
  bool isPreeditResetRequired ;
  Dali::InputMethodContext::CallbackData *result = 0 ;

  isUpdated = csUpdate ? true : false;
  cursorPosition = (int)csCursorPosition;
  if (!csCurrentText) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string currentTextStr(csCurrentText);
  currentText = &currentTextStr;
  isPreeditResetRequired = csPreeditResetRequired ? true : false;
  {
    try {
      result = (Dali::InputMethodContext::CallbackData *)new Dali::InputMethodContext::CallbackData(isUpdated,cursorPosition,(std::string const &)*currentText,isPreeditResetRequired);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_currentText_set(void * csCallbackData, char * csCurrentText) {
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;
  std::string *currentText = 0 ;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  if (!csCurrentText) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string currentTextStr(csCurrentText);
  currentText = &currentTextStr;
  if (callbackData) (callbackData)->currentText = *currentText;

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_currentText_get(void * csCallbackData) {
  char * jresult ;
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;
  std::string *currentText = 0 ;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  currentText = (std::string *) & ((callbackData)->currentText);
  jresult = SWIG_csharp_string_callback(currentText->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_cursorPosition_set(void * csCallbackData, int csCursorPosition) {
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;
  int cursorPosition ;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  cursorPosition = (int)csCursorPosition;
  if (callbackData) (callbackData)->cursorPosition = cursorPosition;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_cursorPosition_get(void * csCallbackData) {
  int jresult ;
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;
  int result;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  result = (int) ((callbackData)->cursorPosition);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_update_set(void * csCallbackData, unsigned int csUpdate) {
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;
  bool isUpdated ;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  isUpdated = csUpdate ? true : false;
  if (callbackData) (callbackData)->update = isUpdated;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_update_get(void * csCallbackData) {
  unsigned int jresult ;
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;
  bool isUpdated;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  isUpdated = (bool) ((callbackData)->update);
  jresult = isUpdated;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_preeditResetRequired_set(void * csCallbackData, unsigned int csPreeditResetRequired) {
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;
  bool isPreeditResetRequired ;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  isPreeditResetRequired = csPreeditResetRequired ? true : false;
  if (callbackData) (callbackData)->preeditResetRequired = isPreeditResetRequired;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_CallbackData_preeditResetRequired_get(void * csCallbackData) {
  unsigned int jresult ;
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;
  bool isPreeditResetRequired;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  isPreeditResetRequired = (bool) ((callbackData)->preeditResetRequired);
  jresult = isPreeditResetRequired;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext_CallbackData(void * csCallbackData) {
  Dali::InputMethodContext::CallbackData *callbackData = (Dali::InputMethodContext::CallbackData *) 0 ;

  callbackData = (Dali::InputMethodContext::CallbackData *)csCallbackData;
  {
    try {
      delete callbackData;
    } CALL_CATCH_EXCEPTION();  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Finalize(void * csInputMethodContext) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      (inputMethodContext)->Finalize();
      auto& eventReceivedCallback = inputMethodContext->EventReceivedSignal();
      auto iter = swig_callbackOnEventReceivedMapper.find(&eventReceivedCallback);
      if(iter != swig_callbackOnEventReceivedMapper.end())
      {
        swig_callbackOnEventReceivedMapper.erase(iter);
      }
    } CALL_CATCH_EXCEPTION();  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext__SWIG_0() {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = 0 ;

  {
    try {
      inputMethodContext = (Dali::InputMethodContext *)new Dali::InputMethodContext();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)inputMethodContext;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodContext(void * csInputMethodContext) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      // TODO : Should we consider case the InputMethodContext which don't call Finalize?
      // TODO : Should we consider case that InputMethodContext BaseObject destroyed at DALi side?
      //        If then, How can we remove swig_callbackOnEventReceivedMapper?
      delete inputMethodContext;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_New() {
  void * jresult ;
  Dali::InputMethodContext inputMethodContext;

  {
    try {
      inputMethodContext = Dali::InputMethodContext::New( Dali::Stage::GetCurrent().GetRootLayer() );
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::InputMethodContext((const Dali::InputMethodContext &)inputMethodContext);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodContext__SWIG_1(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = 0 ;
  Dali::InputMethodContext *result = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  if (!inputMethodContext) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::InputMethodContext *)new Dali::InputMethodContext((Dali::InputMethodContext const &)*inputMethodContext);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_Assign(void * csInputMethodContext, void * rInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext *assignedInputMethodContext = 0 ;
  Dali::InputMethodContext *result = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  assignedInputMethodContext = (Dali::InputMethodContext *)rInputMethodContext;
  if (!assignedInputMethodContext) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::InputMethodContext *) &(inputMethodContext)->operator =((Dali::InputMethodContext const &)*assignedInputMethodContext);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::InputMethodContext result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::InputMethodContext::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::InputMethodContext((const Dali::InputMethodContext &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Activate(void * csInputMethodContext) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      (inputMethodContext)->Activate();
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Deactivate(void * csInputMethodContext) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      (inputMethodContext)->Deactivate();
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_RestoreAfterFocusLost(void * csInputMethodContext) {
  unsigned int jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  bool status ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      status = (bool)((Dali::InputMethodContext const *)inputMethodContext)->RestoreAfterFocusLost();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = status;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetRestoreAfterFocusLost(void * csInputMethodContext, unsigned int csToggle) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  bool toggle ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  toggle = csToggle ? true : false;
  {
    try {
      (inputMethodContext)->SetRestoreAfterFocusLost(toggle);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_Reset(void * csInputMethodContext) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      (inputMethodContext)->Reset();
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_NotifyCursorPosition(void * csInputMethodContext) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      (inputMethodContext)->NotifyCursorPosition();
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetCursorPosition(void * csInputMethodContext, unsigned int csCursorPosition) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  unsigned int cursorPosition ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  cursorPosition = (unsigned int)csCursorPosition;
  {
    try {
      (inputMethodContext)->SetCursorPosition(cursorPosition);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetCursorPosition(void * csInputMethodContext) {
  unsigned int jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  unsigned int cursorPosition;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      cursorPosition = (unsigned int)((Dali::InputMethodContext const *)inputMethodContext)->GetCursorPosition();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = cursorPosition;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetSurroundingText(void * csInputMethodContext, char * csText) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  std::string *text = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  if (!csText) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string textStr(csText);
  text = &textStr;
  {
    try {
      (inputMethodContext)->SetSurroundingText((std::string const &)*text);
    } CALL_CATCH_EXCEPTION();  }

  //argout typemap for const std::string&

}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_InputMethodContext_GetSurroundingText(void * csInputMethodContext) {
  char * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  std::string *text = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      text = (std::string *) &((Dali::InputMethodContext const *)inputMethodContext)->GetSurroundingText();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = SWIG_csharp_string_callback(text->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_NotifyTextInputMultiLine(void * csInputMethodContext, unsigned int csMultiLine) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  bool isMultiLine ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  isMultiLine = csMultiLine ? true : false;
  {
    try {
      (inputMethodContext)->NotifyTextInputMultiLine(isMultiLine);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetTextDirection(void * csInputMethodContext) {
  int jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::TextDirection direction;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      direction = (Dali::InputMethodContext::TextDirection)(inputMethodContext)->GetTextDirection();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (int)direction;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputMethodArea(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::Rect< int > area;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      area = (inputMethodContext)->GetInputMethodArea();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = new Dali::Rect< int >((const Dali::Rect< int > &)area);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_ApplyOptions(void * csInputMethodContext, void * csInputMethodOptions) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodOptions *inputMethodOptions = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  inputMethodOptions = (Dali::InputMethodOptions *)csInputMethodOptions;
  if (!inputMethodOptions) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "InputMethodOptions const & type is null", 0);
    return ;
  }
  {
    try {
      (inputMethodContext)->ApplyOptions((Dali::InputMethodOptions const &)*inputMethodOptions);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetInputPanelUserData(void * csInputMethodContext, char * csData) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  std::string *data = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  if (!csData) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string dataStr(csData);
  data = &dataStr;
  {
    try {
      (inputMethodContext)->SetInputPanelData((std::string const &)*data);
    } CALL_CATCH_EXCEPTION();  }

  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelUserData(void * csInputMethodContext, char** csData) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  std::string *data = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;

  //typemap in
  std::string temp;
  data = &temp;

  {
    try {
      (inputMethodContext)->GetInputPanelData(*data);
    } CALL_CATCH_EXCEPTION();  }

  //Typemap argout in c++ file.
  //This will convert c++ string to c# string
  *csData = SWIG_csharp_string_callback(data->c_str());

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelState(void * csInputMethodContext) {
  int jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::State result;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      result = (Dali::InputMethodContext::State)(inputMethodContext)->GetInputPanelState();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetReturnKeyState(void * csInputMethodContext, unsigned int csVisible) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  bool isVisible ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  isVisible = csVisible ? true : false;
  {
    try {
      (inputMethodContext)->SetReturnKeyState(isVisible);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_AutoEnableInputPanel(void * csInputMethodContext, unsigned int csEnabled) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  bool isEnabled ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  isEnabled = csEnabled ? true : false;
  {
    try {
      (inputMethodContext)->AutoEnableInputPanel(isEnabled);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_ShowInputPanel(void * csInputMethodContext) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      (inputMethodContext)->ShowInputPanel();
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_HideInputPanel(void * csInputMethodContext) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      (inputMethodContext)->HideInputPanel();
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetKeyboardType(void * csInputMethodContext) {
  int jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::KeyboardType type;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      type = (Dali::InputMethodContext::KeyboardType)(inputMethodContext)->GetKeyboardType();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (int)type;
  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelLocale(void * csInputMethodContext) {
  char * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  std::string locale;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      locale = (inputMethodContext)->GetInputPanelLocale();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = SWIG_csharp_string_callback((&locale)->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_AllowTextPrediction(void * csInputMethodContext, unsigned int csPrediction) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  bool prediction ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  prediction = csPrediction ? true : false;
  {
    try {
      (inputMethodContext)->AllowTextPrediction(prediction);
    } CALL_CATCH_EXCEPTION();  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodContext_IsTextPredictionAllowed(void * csInputMethodContext) {
  unsigned int jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  bool prediction;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      prediction = (bool)((Dali::InputMethodContext const *)inputMethodContext)->IsTextPredictionAllowed();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = prediction;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetMIMEType(void * csInputMethodContext, char * csMimeTypes) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  std::string *mimeTypes = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  if (!csMimeTypes) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string mimeTypesString(csMimeTypes);
  mimeTypes = &mimeTypesString;
  {
    try {
      (inputMethodContext)->SetContentMIMETypes((std::string const &)*mimeTypes);
    } CALL_CATCH_EXCEPTION();  }

  //argout typemap for const std::string&

}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetInputPanelLanguage(void * csInputMethodContext, int csLanguage) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::InputPanelLanguage language ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  if (inputMethodContext == nullptr) {
    DALI_LOG_ERROR("[ERR] inputMethodContext == nullptr");
    return;
  }

  language = (Dali::InputMethodContext::InputPanelLanguage)csLanguage;
  {
    try {
      (inputMethodContext)->SetInputPanelLanguage(language);
    } CALL_CATCH_EXCEPTION();  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_InputMethodContext_GetInputPanelLanguage(void * csInputMethodContext) {
  int jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::InputPanelLanguage language;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  if (inputMethodContext == nullptr) {
    DALI_LOG_ERROR("[ERR] inputMethodContext == nullptr");
    return false;
  }
  {
    try {
      language = (Dali::InputMethodContext::InputPanelLanguage)(inputMethodContext)->GetInputPanelLanguage();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (int)language;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodContext_SetInputPanelPosition(void * csInputMethodContext, unsigned int csXCoord, unsigned int csYCoord) {
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  unsigned int x ;
  unsigned int y ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  x = (unsigned int)csXCoord;
  y = (unsigned int)csYCoord;
  {
    try {
      (inputMethodContext)->SetInputPanelPosition(x, y);
    } CALL_CATCH_EXCEPTION();  }
}


// Signals
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_ActivatedSignal(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::ActivatedSignalType *type = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      type = (Dali::InputMethodContext::ActivatedSignalType *) &(inputMethodContext)->ActivatedSignal();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)type;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_EventReceivedSignal(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::KeyboardEventSignalType *type = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      type = (Dali::InputMethodContext::KeyboardEventSignalType *) &(inputMethodContext)->EventReceivedSignal();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)type;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_StatusChangedSignal(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::StatusSignalType *type = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      type = (Dali::InputMethodContext::StatusSignalType *) &(inputMethodContext)->StatusChangedSignal();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)type;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_ResizedSignal(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::KeyboardResizedSignalType *type = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      type = (Dali::InputMethodContext::KeyboardResizedSignalType *) &(inputMethodContext)->ResizedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)type;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_LanguageChangedSignal(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::LanguageChangedSignalType *type = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      type = (Dali::InputMethodContext::LanguageChangedSignalType *) &(inputMethodContext)->LanguageChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)type;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_KeyboardTypeChangedSignal(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::KeyboardTypeSignalType *type = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      type = (Dali::InputMethodContext::KeyboardTypeSignalType *) &(inputMethodContext)->KeyboardTypeChangedSignal();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)type;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_InputMethodContext_ContentReceivedSignal(void * csInputMethodContext) {
  void * jresult ;
  Dali::InputMethodContext *inputMethodContext = (Dali::InputMethodContext *) 0 ;
  Dali::InputMethodContext::ContentReceivedSignalType *type = 0 ;

  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  {
    try {
      type = (Dali::InputMethodContext::ContentReceivedSignalType *) &(inputMethodContext)->ContentReceivedSignal();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)type;
  return jresult;
}

// ActivatedSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Empty(void * csSignal) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::InputMethodContext &) > *signal = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  bool result;

  signal = (Dali::Signal< void (Dali::InputMethodContext &) > *)csSignal;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Empty((Dali::Signal< void (Dali::InputMethodContext &) > const *)signal);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ActivatedSignalType_GetConnectionCount(void * csSignal) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::InputMethodContext &) > *signal = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  std::size_t result;

  signal = (Dali::Signal< void (Dali::InputMethodContext &) > *)csSignal;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::InputMethodContext &) > const *)signal);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Connect(void * csSignal, void * csInputMethodContext) {
  Dali::Signal< void (Dali::InputMethodContext &) > *signal = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  void (*inputMethodContext)(Dali::InputMethodContext &) = (void (*)(Dali::InputMethodContext &)) 0 ;

  signal = (Dali::Signal< void (Dali::InputMethodContext &) > *)csSignal;
  inputMethodContext = (void (*)(Dali::InputMethodContext &))csInputMethodContext;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Connect(signal,inputMethodContext);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Disconnect(void * csSignal, void * csInputMethodContext) {
  Dali::Signal< void (Dali::InputMethodContext &) > *signal = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  void (*inputMethodContext)(Dali::InputMethodContext &) = (void (*)(Dali::InputMethodContext &)) 0 ;

  signal = (Dali::Signal< void (Dali::InputMethodContext &) > *)csSignal;
  inputMethodContext = (void (*)(Dali::InputMethodContext &))csInputMethodContext;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Disconnect(signal,inputMethodContext);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ActivatedSignalType_Emit(void * csSignal, void * csInputMethodContext) {
  Dali::Signal< void (Dali::InputMethodContext &) > *signal = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;
  Dali::InputMethodContext *inputMethodContext = 0 ;

  signal = (Dali::Signal< void (Dali::InputMethodContext &) > *)csSignal;
  inputMethodContext = (Dali::InputMethodContext *)csInputMethodContext;
  if (!inputMethodContext) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_SA__SP__Sg__Emit(signal,*inputMethodContext);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ActivatedSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::InputMethodContext &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::InputMethodContext &) > *)new Dali::Signal< void (Dali::InputMethodContext &) >();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ActivatedSignalType(void * csSignal) {
  Dali::Signal< void (Dali::InputMethodContext &) > *signal = (Dali::Signal< void (Dali::InputMethodContext &) > *) 0 ;

  signal = (Dali::Signal< void (Dali::InputMethodContext &) > *)csSignal;
  {
    try {
      delete signal;
    } CALL_CATCH_EXCEPTION();  }
}

// KeyboardEventSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Empty(void * csKeyboardEventSignal) {
  unsigned int jresult ;
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)csKeyboardEventSignal;
  {
    try {
      result = (bool)Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Empty((Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_GetConnectionCount(void * csKeyboardEventSignal) {
  unsigned long jresult ;
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)csKeyboardEventSignal;
  {
    try {
      result = Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Connect(void * csKeyboardEventSignal, SWIG_CallbackEventReceived callbackOnEventReceived) {

  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)csKeyboardEventSignal;

  auto iter = swig_callbackOnEventReceivedMapper.find(arg1);
  if(iter == swig_callbackOnEventReceivedMapper.end())
  {
    Dali::InputMethodContext::CallbackData (*arg2)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) = (Dali::InputMethodContext::CallbackData (*)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &)) 0 ;

    arg2 = (Dali::InputMethodContext::CallbackData (*)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &))OnEventReceivedCallback;
    {
      try {
        Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Connect(arg1,arg2);
      } CALL_CATCH_EXCEPTION();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Disconnect(void * csKeyboardEventSignal, SWIG_CallbackEventReceived callbackOnEventReceived) {

  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)csKeyboardEventSignal;

  auto iter = swig_callbackOnEventReceivedMapper.find(arg1);
  if(iter != swig_callbackOnEventReceivedMapper.end())
  {
    Dali::InputMethodContext::CallbackData (*arg2)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) = (Dali::InputMethodContext::CallbackData (*)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &)) 0 ;

    arg2 = (Dali::InputMethodContext::CallbackData (*)(Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &))OnEventReceivedCallback;
    {
      try {
        Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
      } CALL_CATCH_EXCEPTION();
    }
    swig_callbackOnEventReceivedMapper.erase(iter);
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_KeyboardEventSignalType_Emit(void * csKeyboardEventSignal, void * csInputMethodContext, void * csEventData) {
  void * jresult ;
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;
  Dali::InputMethodContext *arg2 = 0 ;
  Dali::InputMethodContext::EventData *arg3 = 0 ;
  Dali::InputMethodContext::CallbackData result;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)csKeyboardEventSignal;
  arg2 = (Dali::InputMethodContext *)csInputMethodContext;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext & type is null", 0);
    return 0;
  }
  arg3 = (Dali::InputMethodContext::EventData *)csEventData;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodContext::EventData const & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali_Signal_Sl_Dali_InputMethodContext_CallbackData_Sp_Dali_InputMethodContext_SA__Sc_Dali_InputMethodContext_EventData_SS_const_SA__SP__Sg__Emit(arg1,*arg2,(Dali::InputMethodContext::EventData const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = new Dali::InputMethodContext::CallbackData((const Dali::InputMethodContext::CallbackData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_KeyboardEventSignalType() {
  void * jresult ;
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)new Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) >();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardEventSignalType(void * jarg1) {
  Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *) 0 ;

  arg1 = (Dali::Signal< Dali::InputMethodContext::CallbackData (Dali::InputMethodContext &,Dali::InputMethodContext::EventData const &) > *)jarg1;
  {
    try {
      auto iter = swig_callbackOnEventReceivedMapper.find(arg1);
      if(iter != swig_callbackOnEventReceivedMapper.end())
      {
        swig_callbackOnEventReceivedMapper.erase(iter);
      }
      delete arg1;
    } CALL_CATCH_EXCEPTION();  }
}


// VoidSignalType
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_VoidSignalType() {
  void * jresult ;
  Dali::Signal< void () > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void () > *)new Dali::Signal< void () >();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VoidSignalType(void * jarg1) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_VoidSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void () > *)jarg1;
  {
    try {
      result = (bool)((Dali::Signal< void () > const *)arg1)->Empty();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_VoidSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void () > *)jarg1;
  {
    try {
      result = ((Dali::Signal< void () > const *)arg1)->GetConnectionCount();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VoidSignalType_Connect__SWIG_0(void * jarg1, void * jarg2) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  void (*arg2)() = (void (*)()) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  arg2 = (void (*)())jarg2;
  {
    try {
      (arg1)->Connect(arg2);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VoidSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  void (*arg2)() = (void (*)()) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  arg2 = (void (*)())jarg2;
  {
    try {
      (arg1)->Disconnect(arg2);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VoidSignalType_Connect__SWIG_4(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;
  Dali::ConnectionTrackerInterface *arg2 = (Dali::ConnectionTrackerInterface *) 0 ;
  Dali::FunctorDelegate *arg3 = (Dali::FunctorDelegate *) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  arg2 = (Dali::ConnectionTrackerInterface *)jarg2;
  arg3 = (Dali::FunctorDelegate *)jarg3;
  {
    try {
      (arg1)->Connect(arg2,arg3);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VoidSignalType_Emit(void * jarg1) {
  Dali::Signal< void () > *arg1 = (Dali::Signal< void () > *) 0 ;

  arg1 = (Dali::Signal< void () > *)jarg1;
  {
    try {
      (arg1)->Emit();
    } CALL_CATCH_EXCEPTION();  }
}

//StatusSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_StatusSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty((Dali::Signal< void (bool) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_StatusSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount((Dali::Signal< void (bool) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  void (*arg2)(bool) = (void (*)(bool)) 0 ;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  arg2 = (void (*)(bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  void (*arg2)(bool) = (void (*)(bool)) 0 ;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  arg2 = (void (*)(bool))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StatusSignalType_Emit(void * jarg1, unsigned int jarg2) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_StatusSignalType() {
  void * jresult ;
  Dali::Signal< void (bool) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (bool) > *)new Dali::Signal< void (bool) >();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_StatusSignalType(void * jarg1) {
  Dali::Signal< void (bool) > *arg1 = (Dali::Signal< void (bool) > *) 0 ;

  arg1 = (Dali::Signal< void (bool) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();  }
}

//KeyboardTypeSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Empty((Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  void (*arg2)(Dali::InputMethodContext::KeyboardType) = (void (*)(Dali::InputMethodContext::KeyboardType)) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  arg2 = (void (*)(Dali::InputMethodContext::KeyboardType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  void (*arg2)(Dali::InputMethodContext::KeyboardType) = (void (*)(Dali::InputMethodContext::KeyboardType)) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  arg2 = (void (*)(Dali::InputMethodContext::KeyboardType))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardTypeSignalType_Emit(void * jarg1, int jarg2) {
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;
  Dali::InputMethodContext::KeyboardType arg2 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  arg2 = (Dali::InputMethodContext::KeyboardType)jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_InputMethodContext_KeyboardType_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_KeyboardTypeSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)new Dali::Signal< void (Dali::InputMethodContext::KeyboardType) >();
    } CALL_CATCH_EXCEPTION(0);  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardTypeSignalType(void * jarg1) {
  Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::InputMethodContext::KeyboardType) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();  }
}

//LanguageChangedSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty((Dali::Signal< void (int) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount((Dali::Signal< void (int) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LanguageChangedSignalType_Emit(void * jarg1, int jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  int arg2 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LanguageChangedSignalType() {
  void * jresult ;
  Dali::Signal< void (int) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (int) > *)new Dali::Signal< void (int) >();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LanguageChangedSignalType(void * jarg1) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

//KeyboardTypeSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_int_SP__Sg__Empty((Dali::Signal< void (int) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_int_SP__Sg__GetConnectionCount((Dali::Signal< void (int) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  void (*arg2)(int) = (void (*)(int)) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (void (*)(int))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_KeyboardResizedSignalType_Emit(void * jarg1, int jarg2) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;
  int arg2 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_int_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_KeyboardResizedSignalType() {
  void * jresult ;
  Dali::Signal< void (int) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (int) > *)new Dali::Signal< void (int) >();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_KeyboardResizedSignalType(void * jarg1) {
  Dali::Signal< void (int) > *arg1 = (Dali::Signal< void (int) > *) 0 ;

  arg1 = (Dali::Signal< void (int) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

//ContentReceivedSignalType

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Empty((Dali::Signal< void (std::string const &, std::string const &, std::string const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__GetConnectionCount((Dali::Signal< void (std::string const &, std::string const &, std::string const &) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  void (*arg2)(std::string const &, std::string const &, std::string const &) = (void (*)(std::string const &, std::string const &, std::string const &)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  arg2 = (void (*)(std::string const &, std::string const &, std::string const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  void (*arg2)(std::string const &, std::string const &, std::string const &) = (void (*)(std::string const &, std::string const &, std::string const &)) 0 ;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  arg2 = (void (*)(std::string const &, std::string const &, std::string const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ContentReceivedSignalType_Emit(void * jarg1, char * jarg2, char * jarg3, char * jarg4) {
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  std::string *arg4 = 0 ;

  arg1 = (Dali::Signal<  void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  std::string arg4_str(jarg4);
  arg4 = &arg4_str;
  {
    try {
      Dali_Signal_Sl_void_Sp_string_string_string_SP__Sg__Emit(arg1,(std::string const &)*arg2,(std::string const &)*arg3,(std::string const &)*arg4);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ContentReceivedSignalType() {
  void * jresult ;
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)new Dali::Signal< void (std::string const &, std::string const &, std::string const &) >();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ContentReceivedSignalType(void * jarg1) {
  Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *) 0 ;

  arg1 = (Dali::Signal< void (std::string const &, std::string const &, std::string const &) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif

