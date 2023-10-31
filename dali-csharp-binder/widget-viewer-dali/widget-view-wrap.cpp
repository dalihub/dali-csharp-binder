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
#include <widget_viewer_dali/public_api/widget_view/widget_view.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Empty(Dali::Signal< void (Dali::WidgetView::WidgetView) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::WidgetView::WidgetView) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Connect(Dali::Signal< void (Dali::WidgetView::WidgetView) > *self,void (*func)(Dali::WidgetView::WidgetView)){
    self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Disconnect(Dali::Signal< void (Dali::WidgetView::WidgetView) > *self,void (*func)(Dali::WidgetView::WidgetView)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Emit(Dali::Signal< void (Dali::WidgetView::WidgetView) > *self,Dali::WidgetView::WidgetView arg){
  self->Emit( arg );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_WidgetView_SWIGUpcast(Dali::WidgetView::WidgetView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_WIDGET_ID_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::WIDGET_ID;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_INSTANCE_ID_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::INSTANCE_ID;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_CONTENT_INFO_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::CONTENT_INFO;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_TITLE_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::TITLE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_UPDATE_PERIOD_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::UPDATE_PERIOD;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_PREVIEW_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::PREVIEW;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_LOADING_TEXT_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::LOADING_TEXT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_WIDGET_STATE_FAULTED_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::WIDGET_STATE_FAULTED;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_PERMANENT_DELETE_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::PERMANENT_DELETE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_RETRY_TEXT_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::RETRY_TEXT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_EFFECT_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::EFFECT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_WidgetView_Property_KEEP_WIDGET_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::WidgetView::WidgetView::Property::KEEP_WIDGET_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetView_Property() {
  void * jresult ;
  Dali::WidgetView::WidgetView::Property *result = 0 ;

  {
    try {
      result = (Dali::WidgetView::WidgetView::Property *)new Dali::WidgetView::WidgetView::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetView_Property(void * jarg1) {
  Dali::WidgetView::WidgetView::Property *arg1 = (Dali::WidgetView::WidgetView::Property *) 0 ;

  arg1 = (Dali::WidgetView::WidgetView::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_New(char * jarg1, char * jarg2, int jarg3, int jarg4, float jarg5) {
  void * jresult ;
  std::string *arg1 = 0 ;
  std::string *arg2 = 0 ;
  int arg3 ;
  int arg4 ;
  float arg5 ;
  Dali::WidgetView::WidgetView result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (int)jarg3;
  arg4 = (int)jarg4;
  arg5 = (float)jarg5;
  {
    try {
      result = Dali::WidgetView::WidgetView::New((std::string const &)*arg1,(std::string const &)*arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::WidgetView::WidgetView((const Dali::WidgetView::WidgetView &)result);

  //argout typemap for const std::string&


  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::WidgetView::WidgetView result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::WidgetView::WidgetView::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::WidgetView::WidgetView((const Dali::WidgetView::WidgetView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetView__SWIG_0() {
  void * jresult ;
  Dali::WidgetView::WidgetView *result = 0 ;

  {
    try {
      result = (Dali::WidgetView::WidgetView *)new Dali::WidgetView::WidgetView();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetView__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::WidgetView::WidgetView *arg1 = 0 ;
  Dali::WidgetView::WidgetView *result = 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetView::WidgetView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WidgetView::WidgetView *)new Dali::WidgetView::WidgetView((Dali::WidgetView::WidgetView const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  Dali::WidgetView::WidgetView *arg2 = 0 ;
  Dali::WidgetView::WidgetView *result = 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  arg2 = (Dali::WidgetView::WidgetView *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetView::WidgetView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WidgetView::WidgetView *) &(arg1)->operator =((Dali::WidgetView::WidgetView const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetView(void * jarg1) {
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetView_PauseWidget(void * jarg1) {
  unsigned int jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  bool result;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (bool)(arg1)->PauseWidget();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetView_ResumeWidget(void * jarg1) {
  unsigned int jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  bool result;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (bool)(arg1)->ResumeWidget();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetView_CancelTouchEvent(void * jarg1) {
  unsigned int jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  bool result;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (bool)(arg1)->CancelTouchEvent();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetView_ActivateFaultedWidget(void * jarg1) {
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      (arg1)->ActivateFaultedWidget();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetView_TerminateWidget(void * jarg1) {
  unsigned int jresult;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  bool result;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (bool)(arg1)->TerminateWidget();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_WidgetAddedSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  Dali::WidgetView::WidgetView::WidgetViewSignalType *result = 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (Dali::WidgetView::WidgetView::WidgetViewSignalType *) &(arg1)->WidgetAddedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_WidgetDeletedSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  Dali::WidgetView::WidgetView::WidgetViewSignalType *result = 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (Dali::WidgetView::WidgetView::WidgetViewSignalType *) &(arg1)->WidgetDeletedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_WidgetCreationAbortedSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  Dali::WidgetView::WidgetView::WidgetViewSignalType *result = 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (Dali::WidgetView::WidgetView::WidgetViewSignalType *) &(arg1)->WidgetCreationAbortedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_WidgetContentUpdatedSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  Dali::WidgetView::WidgetView::WidgetViewSignalType *result = 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (Dali::WidgetView::WidgetView::WidgetViewSignalType *) &(arg1)->WidgetContentUpdatedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_WidgetUpdatePeriodChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  Dali::WidgetView::WidgetView::WidgetViewSignalType *result = 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (Dali::WidgetView::WidgetView::WidgetViewSignalType *) &(arg1)->WidgetUpdatePeriodChangedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetView_WidgetFaultedSignal(void * jarg1) {
  void * jresult ;
  Dali::WidgetView::WidgetView *arg1 = (Dali::WidgetView::WidgetView *) 0 ;
  Dali::WidgetView::WidgetView::WidgetViewSignalType *result = 0 ;

  arg1 = (Dali::WidgetView::WidgetView *)jarg1;
  {
    try {
      result = (Dali::WidgetView::WidgetView::WidgetViewSignalType *) &(arg1)->WidgetFaultedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}



//For widget view signal
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WidgetViewSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::WidgetView::WidgetView) > *arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Empty((Dali::Signal< void (Dali::WidgetView::WidgetView) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_WidgetViewSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::WidgetView::WidgetView) > *arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::WidgetView::WidgetView) > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetViewSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetView::WidgetView) > *arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *) 0 ;
  void (*arg2)(Dali::WidgetView::WidgetView) = (void (*)(Dali::WidgetView::WidgetView)) 0 ;

  arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetView::WidgetView))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetViewSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetView::WidgetView) > *arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *) 0 ;
  void (*arg2)(Dali::WidgetView::WidgetView) = (void (*)(Dali::WidgetView::WidgetView)) 0 ;

  arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *)jarg1;
  arg2 = (void (*)(Dali::WidgetView::WidgetView))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetViewSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::WidgetView::WidgetView) > *arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *) 0 ;
  Dali::WidgetView::WidgetView arg2 ;
  Dali::WidgetView::WidgetView *argp2 ;

  arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *)jarg1;
  argp2 = (Dali::WidgetView::WidgetView *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::WidgetView::WidgetView", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_WidgetView_WidgetView_SP__Sg__Emit(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetViewSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::WidgetView::WidgetView) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *)new Dali::Signal< void (Dali::WidgetView::WidgetView) >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetViewSignal(void * jarg1) {
  Dali::Signal< void (Dali::WidgetView::WidgetView) > *arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::WidgetView::WidgetView) > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

#ifdef __cplusplus
}
#endif

