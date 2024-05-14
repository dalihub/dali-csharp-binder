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

// EXTERNAL INCLUDES
#include <dali/dali.h>
#include <dali/devel-api/adaptor-framework/image-loading.h>
#include <dali/devel-api/adaptor-framework/native-image-source-devel.h>
#include <dali/devel-api/adaptor-framework/pixel-buffer.h>
#include <dali/devel-api/adaptor-framework/window-system-devel.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

// SWIGINTERN - the relevant parts of the generated code can be seen the below.

SWIGINTERN bool Dali_Signal_Sl_bool_Sp__SP__Sg__Empty(Dali::Signal< bool () > const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_bool_Sp__SP__Sg__GetConnectionCount(Dali::Signal< bool () > const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp__SP__Sg__Connect(Dali::Signal< bool () > *self,bool (*func)())
{
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_bool_Sp__SP__Sg__Disconnect(Dali::Signal< bool () > *self,bool (*func)())
{
  self->Disconnect( func );
}
SWIGINTERN bool Dali_Signal_Sl_bool_Sp__SP__Sg__Emit(Dali::Signal< bool () > *self)
{
  return self->Emit();
}

using namespace Dali;

// keep argWidgetCs and argWidgetV so they're always available to DALi
int argWidgetC = 1;
char **argWidgetV = NULL;


#ifdef __cplusplus
extern "C" {
#endif


// Method


// WindowSystem

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetScreenSize() {
  void * jresult ;
  int width, height;

  try {
    Dali::DevelWindowSystem::GetScreenSize(width, height);
  } CALL_CATCH_EXCEPTION(0);

  jresult = new Dali::Size(width, height);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SetGeometryHittestEnabled(bool enable) {

  try {
    Dali::DevelWindowSystem::SetGeometryHittestEnabled(enable);
  } CALL_CATCH_EXCEPTION();

}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_IsGeometryHittestEnabled() {
  bool ret = false;
  try {
    ret = Dali::DevelWindowSystem::IsGeometryHittestEnabled();
  } CALL_CATCH_EXCEPTION(0);
  return ret;
}


// Timer

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Timer__SWIG_0() {
  void * jresult ;
  Dali::Timer *result = 0 ;

  {
    try {
      result = (Dali::Timer *)new Dali::Timer();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Timer_New(unsigned int jarg1) {
  void * jresult ;
  unsigned int arg1 ;
  Dali::Timer result;

  arg1 = (unsigned int)jarg1;
  {
    try {
      result = Dali::Timer::New(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Timer((const Dali::Timer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Timer__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Timer *arg1 = 0 ;
  Dali::Timer *result = 0 ;

  arg1 = (Dali::Timer *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Timer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Timer *)new Dali::Timer((Dali::Timer const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Timer_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Timer *arg1 = (Dali::Timer *) 0 ;
  Dali::Timer *arg2 = 0 ;
  Dali::Timer *result = 0 ;

  arg1 = (Dali::Timer *)jarg1;
  arg2 = (Dali::Timer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Timer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Timer *) &(arg1)->operator =((Dali::Timer const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Timer(void * jarg1) {
  Dali::Timer *arg1 = (Dali::Timer *) 0 ;

  arg1 = (Dali::Timer *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Timer_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Timer result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Timer::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Timer((const Dali::Timer &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Timer_Start(void * jarg1) {
  Dali::Timer *arg1 = (Dali::Timer *) 0 ;

  arg1 = (Dali::Timer *)jarg1;
  {
    try {
      (arg1)->Start();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Timer_Stop(void * jarg1) {
  Dali::Timer *arg1 = (Dali::Timer *) 0 ;

  arg1 = (Dali::Timer *)jarg1;
  {
    try {
      (arg1)->Stop();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Timer_SetInterval(void * jarg1, unsigned int jarg2) {
  Dali::Timer *arg1 = (Dali::Timer *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Timer *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->SetInterval(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Timer_GetInterval(void * jarg1) {
  unsigned int jresult ;
  Dali::Timer *arg1 = (Dali::Timer *) 0 ;
  unsigned int result;

  arg1 = (Dali::Timer *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Timer const *)arg1)->GetInterval();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Timer_IsRunning(void * jarg1) {
  bool jresult ;
  Dali::Timer *arg1 = (Dali::Timer *) 0 ;
  bool result;

  arg1 = (Dali::Timer *)jarg1;
  {
    try {
      result = (bool)((Dali::Timer const *)arg1)->IsRunning();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Timer_TickSignal(void * jarg1) {
  void * jresult ;
  Dali::Timer *arg1 = (Dali::Timer *) 0 ;
  Dali::Timer::TimerSignalType *result = 0 ;

  arg1 = (Dali::Timer *)jarg1;
  {
    try {
      result = (Dali::Timer::TimerSignalType *) &(arg1)->TickSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TimerSignalType_Empty(void * jarg1) {
  bool jresult ;
  Dali::Signal< bool () > *arg1 = (Dali::Signal< bool () > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< bool () > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_bool_Sp__SP__Sg__Empty((Dali::Signal< bool () > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_TimerSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< bool () > *arg1 = (Dali::Signal< bool () > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< bool () > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_bool_Sp__SP__Sg__GetConnectionCount((Dali::Signal< bool () > const *)arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TimerSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< bool () > *arg1 = (Dali::Signal< bool () > *) 0 ;
  bool (*arg2)() = (bool (*)()) 0 ;

  arg1 = (Dali::Signal< bool () > *)jarg1;
  arg2 = (bool (*)())jarg2;
  {
    try {
      Dali_Signal_Sl_bool_Sp__SP__Sg__Connect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TimerSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< bool () > *arg1 = (Dali::Signal< bool () > *) 0 ;
  bool (*arg2)() = (bool (*)()) 0 ;

  arg1 = (Dali::Signal< bool () > *)jarg1;
  arg2 = (bool (*)())jarg2;
  {
    try {
      Dali_Signal_Sl_bool_Sp__SP__Sg__Disconnect(arg1,arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_TimerSignalType_Emit(void * jarg1) {
  bool jresult ;
  Dali::Signal< bool () > *arg1 = (Dali::Signal< bool () > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< bool () > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_bool_Sp__SP__Sg__Emit(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TimerSignalType() {
  void * jresult ;
  Dali::Signal< bool () > *result = 0 ;

  {
    try {
      result = (Dali::Signal< bool () > *)new Dali::Signal< bool () >();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TimerSignalType(void * jarg1) {
  Dali::Signal< bool () > *arg1 = (Dali::Signal< bool () > *) 0 ;

  arg1 = (Dali::Signal< bool () > *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


// PixelBuffer

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_PixelBuffer_SWIGUpcast(Dali::Devel::PixelBuffer *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PixelBuffer_New(unsigned int jarg1, unsigned int jarg2, int jarg3) {
  void * jresult ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  Dali::Pixel::Format arg3 ;
  Dali::Devel::PixelBuffer result;

  arg1 = (unsigned int)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (Dali::Pixel::Format)jarg3;
  {
    try {
      result = Dali::Devel::PixelBuffer::New(arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PixelBuffer__SWIG_0() {
  void * jresult ;
  Dali::Devel::PixelBuffer *result = 0 ;

  {
    try {
      result = (Dali::Devel::PixelBuffer *)new Dali::Devel::PixelBuffer();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PixelBuffer(void * jarg1) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_PixelBuffer__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Devel::PixelBuffer *arg1 = 0 ;
  Dali::Devel::PixelBuffer *result = 0 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Devel::PixelBuffer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Devel::PixelBuffer *)new Dali::Devel::PixelBuffer((Dali::Devel::PixelBuffer const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PixelBuffer_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  Dali::Devel::PixelBuffer *arg2 = 0 ;
  Dali::Devel::PixelBuffer *result = 0 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  arg2 = (Dali::Devel::PixelBuffer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Devel::PixelBuffer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Devel::PixelBuffer *) &(arg1)->operator =((Dali::Devel::PixelBuffer const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PixelBuffer_Convert(void * jarg1) {
  void * jresult ;
  Dali::Devel::PixelBuffer *arg1 = 0 ;
  Dali::PixelData result;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Devel::PixelBuffer & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Devel::PixelBuffer::Convert(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::PixelData((const Dali::PixelData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PixelBuffer_CreatePixelData(void * jarg1) {
  void * jresult ;
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  Dali::PixelData result;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  {
    try {
      result = ((Dali::Devel::PixelBuffer const *)arg1)->CreatePixelData();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::PixelData((const Dali::PixelData &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PixelBuffer_GetBuffer(void * jarg1) {
  void * jresult ;
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  unsigned char *result = 0 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  {
    try {
      result = (unsigned char *)(arg1)->GetBuffer();
    } CALL_CATCH_EXCEPTION(0);
  }
   jresult = (void *)result;
   return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PixelBuffer_GetWidth(void * jarg1) {
  unsigned int jresult ;
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  unsigned int result;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Devel::PixelBuffer const *)arg1)->GetWidth();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PixelBuffer_GetHeight(void * jarg1) {
  unsigned int jresult ;
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  unsigned int result;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Devel::PixelBuffer const *)arg1)->GetHeight();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PixelBuffer_GetPixelFormat(void * jarg1) {
  int jresult ;
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  Dali::Pixel::Format result;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  {
    try {
      result = (Dali::Pixel::Format)((Dali::Devel::PixelBuffer const *)arg1)->GetPixelFormat();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PixelBuffer_ApplyMask__SWIG_0(void * jarg1, void * jarg2, float jarg3, bool jarg4) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  Dali::Devel::PixelBuffer arg2 ;
  float arg3 ;
  bool arg4 ;
  Dali::Devel::PixelBuffer *argp2 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  argp2 = (Dali::Devel::PixelBuffer *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Devel::PixelBuffer", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (float)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try {
      (arg1)->ApplyMask(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PixelBuffer_ApplyMask__SWIG_1(void * jarg1, void * jarg2, float jarg3) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  Dali::Devel::PixelBuffer arg2 ;
  float arg3 ;
  Dali::Devel::PixelBuffer *argp2 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  argp2 = (Dali::Devel::PixelBuffer *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Devel::PixelBuffer", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ApplyMask(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PixelBuffer_ApplyMask__SWIG_2(void * jarg1, void * jarg2) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  Dali::Devel::PixelBuffer arg2 ;
  Dali::Devel::PixelBuffer *argp2 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  argp2 = (Dali::Devel::PixelBuffer *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Devel::PixelBuffer", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->ApplyMask(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PixelBuffer_ApplyGaussianBlur(void * jarg1, float jarg2) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  float arg2 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->ApplyGaussianBlur(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PixelBuffer_Crop(void * jarg1, unsigned short jarg2, unsigned short jarg3, unsigned short jarg4, unsigned short jarg5) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  uint16_t arg2 ;
  uint16_t arg3 ;
  uint16_t arg4 ;
  uint16_t arg5 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  arg2 = (uint16_t)jarg2;
  arg3 = (uint16_t)jarg3;
  arg4 = (uint16_t)jarg4;
  arg5 = (uint16_t)jarg5;
  {
    try {
      (arg1)->Crop(arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PixelBuffer_Resize(void * jarg1, unsigned short jarg2, unsigned short jarg3) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  uint16_t arg2 ;
  uint16_t arg3 ;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  arg2 = (uint16_t)jarg2;
  arg3 = (uint16_t)jarg3;
  {
    try {
      (arg1)->Resize(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_PixelBuffer_Rotate(void * jarg1, void* jarg2) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  Dali::Degree * arg2 ;

  bool result = false;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  arg2 = (Dali::Degree *)jarg2;
  {
    try {
      result = (arg1)->Rotate(*arg2);
    } CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PixelBuffer_GetBrightness(void * jarg1) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *) 0 ;
  uint32_t result = 0;

  arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  {
    try {
      result = (arg1)->GetBrightness();
    } CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromFile__SWIG_0(char * jarg1, void * jarg2, int jarg3, int jarg4, bool jarg5) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  bool arg5 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = Dali::LoadImageFromFile((std::string const &)*arg1,arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromFile__SWIG_1(char * jarg1, void * jarg2, int jarg3, int jarg4) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  {
    try {
      result = Dali::LoadImageFromFile((std::string const &)*arg1,arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromFile__SWIG_2(char * jarg1, void * jarg2, int jarg3) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  {
    try {
      result = Dali::LoadImageFromFile((std::string const &)*arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromFile__SWIG_3(char * jarg1, void * jarg2) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = Dali::LoadImageFromFile((std::string const &)*arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromFile__SWIG_4(char * jarg1) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::LoadImageFromFile((std::string const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromBuffer__SWIG_0(void * jarg1, void * jarg2, int jarg3, int jarg4, bool jarg5) {
  void * jresult ;
  Dali::Vector<uint8_t> *arg1 = (Dali::Vector<uint8_t> *) 0;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  bool arg5 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null buffer", 0);
    return 0;
  }
  arg1 = (Dali::Vector<uint8_t> *)jarg1;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = Dali::LoadImageFromBuffer((const Dali::Vector<uint8_t>&)*arg1, arg2, arg3, arg4, arg5);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromBuffer__SWIG_1(void * jarg1, void * jarg2, int jarg3, int jarg4) {
  void * jresult ;
  Dali::Vector<uint8_t> *arg1 = (Dali::Vector<uint8_t> *) 0;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null buffer", 0);
    return 0;
  }
  arg1 = (Dali::Vector<uint8_t> *)jarg1;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  {
    try {
      result = Dali::LoadImageFromBuffer((const Dali::Vector<uint8_t>&)*arg1, arg2, arg3, arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromBuffer__SWIG_2(void * jarg1, void * jarg2, int jarg3) {
  void * jresult ;
  Dali::Vector<uint8_t> *arg1 = (Dali::Vector<uint8_t> *) 0;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null buffer", 0);
    return 0;
  }
  arg1 = (Dali::Vector<uint8_t> *)jarg1;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  {
    try {
      result = Dali::LoadImageFromBuffer((const Dali::Vector<uint8_t>&)*arg1, arg2, arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromBuffer__SWIG_3(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Vector<uint8_t> *arg1 = (Dali::Vector<uint8_t> *) 0;
  Dali::ImageDimensions arg2 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null buffer", 0);
    return 0;
  }
  arg1 = (Dali::Vector<uint8_t> *)jarg1;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = Dali::LoadImageFromBuffer((const Dali::Vector<uint8_t>&)*arg1, arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LoadImageFromBuffer__SWIG_4(void * jarg1) {
  void * jresult ;
  Dali::Vector<uint8_t> *arg1 = (Dali::Vector<uint8_t> *) 0;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null buffer", 0);
    return 0;
  }
  arg1 = (Dali::Vector<uint8_t> *)jarg1;
  {
    try {
      result = Dali::LoadImageFromBuffer((const Dali::Vector<uint8_t>&)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DownloadImageSynchronously__SWIG_0(char * jarg1, void * jarg2, int jarg3, int jarg4, bool jarg5) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  bool arg5 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = Dali::DownloadImageSynchronously((std::string const &)*arg1,arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DownloadImageSynchronously__SWIG_1(char * jarg1, void * jarg2, int jarg3, int jarg4) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  {
    try {
      result = Dali::DownloadImageSynchronously((std::string const &)*arg1,arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DownloadImageSynchronously__SWIG_2(char * jarg1, void * jarg2, int jarg3) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  {
    try {
      result = Dali::DownloadImageSynchronously((std::string const &)*arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DownloadImageSynchronously__SWIG_3(char * jarg1, void * jarg2) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::ImageDimensions *argp2 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = Dali::DownloadImageSynchronously((std::string const &)*arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DownloadImageSynchronously__SWIG_4(char * jarg1) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::Devel::PixelBuffer result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::DownloadImageSynchronously((std::string const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetOriginalImageSize(char * jarg1, bool jarg2) {
  void * jresult ;
  std::string *arg1 = 0 ;
  bool arg2 ;
  Dali::ImageDimensions result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  arg2 = jarg2 ? true : false;
  {
    try {
      result = Dali::GetOriginalImageSize((std::string const &)*arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::ImageDimensions((const Dali::ImageDimensions &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetClosestImageSize__SWIG_0(char * jarg1, void * jarg2, int jarg3, int jarg4, bool jarg5) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  bool arg5 ;
  Dali::ImageDimensions *argp2 ;
  Dali::ImageDimensions result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = Dali::GetClosestImageSize((std::string const &)*arg1,arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::ImageDimensions((const Dali::ImageDimensions &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetClosestImageSize__SWIG_1(char * jarg1, void * jarg2, int jarg3, int jarg4) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::SamplingMode::Type arg4 ;
  Dali::ImageDimensions *argp2 ;
  Dali::ImageDimensions result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  arg4 = (Dali::SamplingMode::Type)jarg4;
  {
    try {
      result = Dali::GetClosestImageSize((std::string const &)*arg1,arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::ImageDimensions((const Dali::ImageDimensions &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetClosestImageSize__SWIG_2(char * jarg1, void * jarg2, int jarg3) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::FittingMode::Type arg3 ;
  Dali::ImageDimensions *argp2 ;
  Dali::ImageDimensions result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  arg3 = (Dali::FittingMode::Type)jarg3;
  {
    try {
      result = Dali::GetClosestImageSize((std::string const &)*arg1,arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::ImageDimensions((const Dali::ImageDimensions &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetClosestImageSize__SWIG_3(char * jarg1, void * jarg2) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions arg2 ;
  Dali::ImageDimensions *argp2 ;
  Dali::ImageDimensions result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  argp2 = (Dali::ImageDimensions *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = Dali::GetClosestImageSize((std::string const &)*arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::ImageDimensions((const Dali::ImageDimensions &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetClosestImageSize__SWIG_4(char * jarg1) {
  void * jresult ;
  std::string *arg1 = 0 ;
  Dali::ImageDimensions result;

  if (!jarg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::GetClosestImageSize((std::string const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::ImageDimensions((const Dali::ImageDimensions &)result);
  return jresult;
}


// NativeImageSource

struct NativeImageSourcePtrHandle
{
  NativeImageSourcePtr Ptr;
};

SWIGEXPORT NativeImageInterface* SWIGSTDCALL CSharp_Dali_NativeImageSource_Upcast(void* jarg1)
{
  NativeImageSource* arg1 = (NativeImageSource*)jarg1;
  return (NativeImageInterface*)(arg1);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageSource_New_Handle(unsigned int jarg1, unsigned int jarg2, int jarg3)
{
  void* jresult;
  NativeImageSourcePtrHandle* handle = new NativeImageSourcePtrHandle();
  {
    try {
      handle->Ptr = ( NativeImageSource::New(jarg1, jarg2, (NativeImageSource::ColorDepth)jarg3) );
    }
    catch (std::out_of_range & e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    }
    catch (std::exception & e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    }
    catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    }
    catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)handle;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageSource_New(void* jarg1)
{
  void* jresult;
  NativeImageSourcePtrHandle* handle = (NativeImageSourcePtrHandle*)jarg1;
  jresult = (void*)( handle->Ptr.Get() );
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_NativeImageSource_Delete(void* jarg1) {
  NativeImageSourcePtrHandle* arg1 = (NativeImageSourcePtrHandle*)jarg1;
  {
    try {
      delete arg1;
    }
    catch (std::out_of_range & e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return;
      };
    }
    catch (std::exception & e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return;
      };
    }
    catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return;
      };
    }
    catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return;
      };
    }
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_NativeImageSource_AcquireBuffer(void* jarg1, int* jarg2, int* jarg3, int* jarg4)
{
  void* jresult;
  NativeImageSource* arg1 = (NativeImageSource*)jarg1;
  uint32_t* arg2 = (uint32_t*)(jarg2);
  uint32_t* arg3 = (uint32_t*)(jarg3);
  uint32_t* arg4 = (uint32_t*)(jarg4);
  {
    try {
      jresult = (void *)Dali::DevelNativeImageSource::AcquireBuffer( *arg1, *arg2, *arg3, *arg4 );
    }
    catch (std::out_of_range & e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    }
    catch (std::exception & e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    }
    catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    }
    catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_NativeImageSource_ReleaseBuffer(void* jarg1)
{
  bool jresult;
  NativeImageSource* arg1 = (NativeImageSource*)jarg1;

  {
    try {
      jresult = Dali::DevelNativeImageSource::ReleaseBuffer(*arg1, Rect<uint32_t>{});
    }
    catch (std::out_of_range & e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    }
    catch (std::exception & e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    }
    catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    }
    catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_NativeImageSource_EnableBackBuffer(void* nativeImageHandle, bool enable)
{
  NativeImageSource* nativeImage = static_cast<NativeImageSource*>(nativeImageHandle);

  if(!nativeImage)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "nativeImageHandle is null", 0);
    return;
  }
  {
    try
    {
      Dali::DevelNativeImageSource::EnableBackBuffer(*nativeImage, enable);
    }
    CALL_CATCH_EXCEPTION();
  }
}


/*
 * Widget binding
 */
SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_Widget_SWIGUpcast(Dali::Widget *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT Dali::BaseObject * SWIGSTDCALL CSharp_Dali_WidgetImpl_SWIGUpcast(Dali::Internal::Adaptor::Widget *jarg1) {
    return (Dali::BaseObject *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_New__SWIG_0() {
  void * jresult ;
  Dali::Widget result;

  {
    try {
      result = Dali::Widget::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Widget((const Dali::Widget &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_New__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Internal::Adaptor::Widget *arg1 = 0 ;
  Dali::Widget result;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;

  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Internal::Adaptor::Widget & type is null", 0);
    return 0;
  }
  {
    try {
      jresult = new Dali::Widget(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Widget() {
  void * jresult ;
  Dali::Widget *result = 0 ;

  {
    try {
      result = (Dali::Widget *)new Dali::Widget();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Widget_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;
  Dali::Widget *arg2 = 0 ;
  Dali::Widget *result = 0 ;

  arg1 = (Dali::Widget *)jarg1;
  arg2 = (Dali::Widget *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Widget const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Widget *) &(arg1)->operator =((Dali::Widget const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Widget(void * jarg1) {
  Dali::Widget *arg1 = (Dali::Widget *) 0 ;

  arg1 = (Dali::Widget *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnCreate(void * jarg1, char * jarg2, void * jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Window arg3 ;
  Dali::Window *argp3 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::Window *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->OnCreate((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnCreateSwigExplicitWidgetImpl(void * jarg1, char * jarg2, void * jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Window arg3 ;
  Dali::Window *argp3 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  argp3 = (Dali::Window *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->Dali::Internal::Adaptor::Widget::OnCreate((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnTerminate(void * jarg1, char * jarg2, int jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Widget::Termination arg3 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Widget::Termination)jarg3;
  {
    try {
      (arg1)->OnTerminate((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnTerminateSwigExplicitWidgetImpl(void * jarg1, char * jarg2, int jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Widget::Termination arg3 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Widget::Termination)jarg3;
  {
    try {
      (arg1)->Dali::Internal::Adaptor::Widget::OnTerminate((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnPause(void * jarg1) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  {
    try {
      (arg1)->OnPause();
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnPauseSwigExplicitWidgetImpl(void * jarg1) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  {
    try {
      (arg1)->Dali::Internal::Adaptor::Widget::OnPause();
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnResume(void * jarg1) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  {
    try {
      (arg1)->OnResume();
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnResumeSwigExplicitWidgetImpl(void * jarg1) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  {
    try {
      (arg1)->Dali::Internal::Adaptor::Widget::OnResume();
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnResize(void * jarg1, void * jarg2) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  Dali::Window arg2 ;
  Dali::Window *argp2 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  argp2 = (Dali::Window *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->OnResize(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnResizeSwigExplicitWidgetImpl(void * jarg1, void * jarg2) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  Dali::Window arg2 ;
  Dali::Window *argp2 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  argp2 = (Dali::Window *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->Dali::Internal::Adaptor::Widget::OnResize(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnUpdate(void * jarg1, char * jarg2, int jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  std::string *arg2 = 0 ;
  int arg3 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (int)jarg3;
  {
    try {
      (arg1)->OnUpdate((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_OnUpdateSwigExplicitWidgetImpl(void * jarg1, char * jarg2, int jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  std::string *arg2 = 0 ;
  int arg3 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (int)jarg3;
  {
    try {
      (arg1)->Dali::Internal::Adaptor::Widget::OnUpdate((std::string const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_SignalConnected(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  Dali::SlotObserver *arg2 = (Dali::SlotObserver *) 0 ;
  Dali::CallbackBase *arg3 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  arg2 = (Dali::SlotObserver *)jarg2;
  arg3 = (Dali::CallbackBase *)jarg3;
  {
    try {
      (arg1)->SignalConnected(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_SignalConnectedSwigExplicitWidgetImpl(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  Dali::SlotObserver *arg2 = (Dali::SlotObserver *) 0 ;
  Dali::CallbackBase *arg3 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  arg2 = (Dali::SlotObserver *)jarg2;
  arg3 = (Dali::CallbackBase *)jarg3;
  {
    try {
      (arg1)->Dali::Internal::Adaptor::Widget::SignalConnected(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_SignalDisconnected(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  Dali::SlotObserver *arg2 = (Dali::SlotObserver *) 0 ;
  Dali::CallbackBase *arg3 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  arg2 = (Dali::SlotObserver *)jarg2;
  arg3 = (Dali::CallbackBase *)jarg3;
  {
    try {
      (arg1)->SignalDisconnected(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_SignalDisconnectedSwigExplicitWidgetImpl(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  Dali::SlotObserver *arg2 = (Dali::SlotObserver *) 0 ;
  Dali::CallbackBase *arg3 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  arg2 = (Dali::SlotObserver *)jarg2;
  arg3 = (Dali::CallbackBase *)jarg3;
  {
    try {
      (arg1)->Dali::Internal::Adaptor::Widget::SignalDisconnected(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_SetContentInfo(void * jarg1, char * jarg2) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetContentInfo((std::string const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_SetUsingKeyEvent(void * jwidget, bool jflag) {
  Dali::Internal::Adaptor::Widget *widget = (Dali::Internal::Adaptor::Widget *) 0 ;
  bool flag;

  widget = (Dali::Internal::Adaptor::Widget *)jwidget;
  flag = jflag ? true : false;
  {
    try {
      (widget)->SetUsingKeyEvent(flag);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetImpl_SetImpl(void * jarg1, void * jarg2) {
  Dali::Internal::Adaptor::Widget *arg1 = (Dali::Internal::Adaptor::Widget *) 0 ;
  Dali::Internal::Adaptor::Widget::Impl *arg2 = (Dali::Internal::Adaptor::Widget::Impl *) 0 ;

  arg1 = (Dali::Internal::Adaptor::Widget *)jarg1;
  arg2 = (Dali::Internal::Adaptor::Widget::Impl *)jarg2;
  {
    try {
      (arg1)->SetImpl(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_New(int jarg1, char * jarg2, char * jarg3) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  std::string *arg3 = 0 ;
  Dali::WidgetApplication result;
  {
    int index = 0;
    int length = 0;
    char *retPtr;
    char *nextPtr;
    argWidgetC = jarg1;
    argWidgetV = new char*[jarg1 + 1];

    retPtr = strtok_r( jarg2, " ", &nextPtr);
    if( retPtr )
    {
      length = strlen(retPtr);
    }
    argWidgetV[index] = new char[length + 1];
    if( retPtr )
    {
      strncpy(argWidgetV[index], retPtr, length);
    }
    argWidgetV[index][length] = '\0';
    index++;

    while (index < jarg1)
    {
      length = 0;
      retPtr = strtok_r(NULL, " ", &nextPtr);
      if( retPtr )
      {
        length = strlen(retPtr);
      }
      argWidgetV[index] = new char[length + 1];
      if( retPtr )
      {
        strncpy(argWidgetV[index], retPtr, length);
      }
      argWidgetV[index][length] = '\0';
      index++;
    }

    argWidgetV[jarg1] = NULL;
    argWidgetC = jarg1;

    arg1 = &argWidgetC;
    arg2 = &argWidgetV;
  }

  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = Dali::WidgetApplication::New(arg1,arg2,(std::string const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::WidgetApplication((const Dali::WidgetApplication &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetApplication__SWIG_0() {
  void * jresult ;
  Dali::WidgetApplication *result = 0 ;

  {
    try {
      result = (Dali::WidgetApplication *)new Dali::WidgetApplication();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WidgetApplication__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = 0 ;
  Dali::WidgetApplication *result = 0 ;

  arg1 = (Dali::WidgetApplication *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetApplication const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WidgetApplication *)new Dali::WidgetApplication((Dali::WidgetApplication const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WidgetApplication_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  Dali::WidgetApplication *arg2 = 0 ;
  Dali::WidgetApplication *result = 0 ;

  arg1 = (Dali::WidgetApplication *)jarg1;
  arg2 = (Dali::WidgetApplication *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetApplication const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WidgetApplication *) &(arg1)->operator =((Dali::WidgetApplication const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WidgetApplication(void * jarg1) {
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;

  arg1 = (Dali::WidgetApplication *)jarg1;
  {
    try {
      delete arg1;
      if( argWidgetV )
      {
        // free string data
        for( int i=0; i < argWidgetC+1; i++)
        {
          delete [] argWidgetV[i];
        }
        delete [] argWidgetV;
      }
    } CALL_CATCH_EXCEPTION();
  }
}


typedef Dali::Widget*(SWIGSTDCALL *CSharpCreateWidgetFunction)(const std::string&);
CSharpCreateWidgetFunction _CSharpCreateWidgetFunction = NULL;

static Dali::Widget SWIGSTDCALL WidgetFactoryFunction( const std::string& widgetName )
{
  Widget* widget = _CSharpCreateWidgetFunction( widgetName.c_str() );
  return *widget;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_WidgetApplication_RegisterWidgetCreatingFunction(void * jarg1, char** jarg2, void * jarg3) {
  Dali::WidgetApplication *arg1 = (Dali::WidgetApplication *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::WidgetApplication *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(*jarg2);
  arg2 = &arg2_str;

  if(!_CSharpCreateWidgetFunction)
  {
    _CSharpCreateWidgetFunction = (Dali::Widget*(*)(const std::string&))jarg3;
  }

  {
    try {
      (arg1)->RegisterWidgetCreatingFunction((std::string const &)*arg2, WidgetFactoryFunction);
    } CALL_CATCH_EXCEPTION();
  }
  *jarg2 = SWIG_csharp_string_callback(arg2->c_str());
}


#ifdef __cplusplus
}
#endif
