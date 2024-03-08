/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/adaptor-framework/application-devel.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>
#include <dali/public-api/adaptor-framework/application.h>
#include <dali/public-api/adaptor-framework/window-enumerations.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

/* Callback for returning strings to C# without leaking memory */
typedef char*(SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char*);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

namespace
{
// keep argcs and argv so they're always available to DALi
// Note : This argments used only if argv comes externally.
int    gArgC = 0;
char** gArgV = nullptr;

void ReleaseArgVMemory()
{
  if(gArgV)
  {
    // free string data
    for(int i = 0; i < gArgC + 1; ++i)
    {
      delete[] gArgV[i];
    }
    delete[] gArgV;
    gArgV = nullptr;
  }
  gArgC = 0;
}

void GenerationArgV(int argc, char* argv)
{
  // TODO : What should we do if already generated argv exist?
  ReleaseArgVMemory();
  // generate argv data from the C# args
  int   index  = 0;
  int   length = 0;
  char* retPtr = NULL;
  char* nextPtr;

  gArgV = new char*[argc + 1];

  for(retPtr = strtok_r(argv, " ", &nextPtr);
      retPtr != NULL && index < argc;
      retPtr = strtok_r(NULL, " ", &nextPtr))
  {
    length       = 0;
    length       = strlen(retPtr);
    gArgV[index] = new char[length + 1];
    strncpy(gArgV[index], retPtr, length);
    gArgV[index][length] = '\0';
    index++;
  }

  while(index < argc)
  {
    //if jarg1 - index >1, maybe cause error.
    gArgV[index] = NULL;
    index++;
  }

  gArgV[argc] = NULL;
  gArgC        = argc;
}

} // unnamed namespace

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Empty(Dali::Signal<void(Dali::DeviceStatus::Battery::Status)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::DeviceStatus::Battery::Status)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Connect(Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* self, void (*func)(Dali::DeviceStatus::Battery::Status))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Disconnect(Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* self, void (*func)(Dali::DeviceStatus::Battery::Status))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Emit(Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* self, Dali::DeviceStatus::Battery::Status arg)
{
  self->Emit(arg);
}
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Empty(Dali::Signal<void(Dali::DeviceStatus::Memory::Status)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::DeviceStatus::Memory::Status)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Connect(Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* self, void (*func)(Dali::DeviceStatus::Memory::Status))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Disconnect(Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* self, void (*func)(Dali::DeviceStatus::Memory::Status))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Emit(Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* self, Dali::DeviceStatus::Memory::Status arg)
{
  self->Emit(arg);
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__Empty(Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__Connect(Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* self, void (*func)(Dali::DeviceStatus::Orientation::Status))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__Disconnect(Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* self, void (*func)(Dali::DeviceStatus::Orientation::Status))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__Emit(Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* self, Dali::DeviceStatus::Orientation::Status arg)
{
  self->Emit(arg);
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Empty(Dali::Signal<void(Dali::Application&)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::Application&)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Connect(Dali::Signal<void(Dali::Application&)>* self, void (*func)(Dali::Application&))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Disconnect(Dali::Signal<void(Dali::Application&)>* self, void (*func)(Dali::Application&))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Emit(Dali::Signal<void(Dali::Application&)>* self, Dali::Application& arg)
{
  self->Emit(arg);
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Empty(Dali::Signal<void(Dali::Application&, void*)> const* self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::Application&, void*)> const* self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Connect(Dali::Signal<void(Dali::Application&, void*)>* self, void (*func)(Dali::Application&, void*))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Disconnect(Dali::Signal<void(Dali::Application&, void*)>* self, void (*func)(Dali::Application&, void*))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Emit(Dali::Signal<void(Dali::Application&, void*)>* self, Dali::Application& arg1, void* arg2)
{
  self->Emit(arg1, arg2);
}

#ifdef __cplusplus
extern "C" {
#endif

/*Application binding*/

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_PreInitialize()
{
  ApplicationPreInitialize(nullptr, nullptr);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New__SWIG_0()
{
  void*             jresult;
  Dali::Application result;

  {
    try
    {
      result = Dali::Application::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Application((const Dali::Application&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New__SWIG_1(int jarg1)
{
  void* jresult;

  Dali::Application result;
  {
    try
    {
      result = Dali::Application::New(nullptr, nullptr);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Application((const Dali::Application&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New__SWIG_2(int jarg1, char* jarg3)
{
  void*        jresult;
  std::string* arg3 = 0;

  Dali::Application result;
  if(!jarg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try
    {
      result = Dali::Application::New(nullptr, nullptr, (std::string const&)*arg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Application((const Dali::Application&)result);

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New__SWIG_3(int jarg1, char* jarg3, int jarg4)
{
  void*                          jresult;
  Dali::Application::WINDOW_MODE arg4;

  Dali::Application result;
  if(!jarg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3(jarg3);
  arg4 = (Dali::Application::WINDOW_MODE)jarg4;
  {
    try
    {
      result = Dali::Application::New(nullptr, nullptr, arg3, arg4);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Application((const Dali::Application&)result);

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New__MANUAL_4(int jarg1, char* jarg2, char* jarg3, int jarg4)
{
  void*                          jresult;
  int*                           argc = nullptr;
  char***                        argv = nullptr;
  Dali::Application::WINDOW_MODE arg4;
  Dali::Application              result;

  {
    // TODO : What should we do if already generated argv exist?
    ReleaseArgVMemory();
    // generate argv data from the C# args
    int   index  = 0;
    int   length = 0;
    char* retPtr = NULL;
    char* nextPtr;

    gArgV = new char*[jarg1 + 1];

    for(retPtr = strtok_r(jarg2, " ", &nextPtr);
        retPtr != NULL && index < jarg1;
        retPtr = strtok_r(NULL, " ", &nextPtr))
    {
      length       = 0;
      length       = strlen(retPtr);
      gArgV[index] = new char[length + 1];
      strncpy(gArgV[index], retPtr, length);
      gArgV[index][length] = '\0';
      index++;
    }

    while(index < jarg1)
    {
      //if jarg1 - index >1, maybe cause error.
      gArgV[index] = NULL;
      index++;
    }

    gArgV[jarg1] = NULL;
    gArgC        = jarg1;

    argc = &gArgC;
    argv = &gArgV;
  }

  std::string arg3(jarg3);
  arg4 = (Dali::Application::WINDOW_MODE)jarg4;
  {
    try
    {
      result = Dali::Application::New(argc, argv, arg3, arg4);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Application((const Dali::Application&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Application__SWIG_0()
{
  void*              jresult;
  Dali::Application* result = 0;

  {
    try
    {
      result = (Dali::Application*)new Dali::Application();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Application__SWIG_1(void* jarg1)
{
  void*              jresult;
  Dali::Application* arg1   = 0;
  Dali::Application* result = 0;

  arg1 = (Dali::Application*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Application*)new Dali::Application((Dali::Application const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_Assign(void* jarg1, void* jarg2)
{
  void*              jresult;
  Dali::Application* arg1   = (Dali::Application*)0;
  Dali::Application* arg2   = 0;
  Dali::Application* result = 0;

  arg1 = (Dali::Application*)jarg1;
  arg2 = (Dali::Application*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Application*)&(arg1)->operator=((Dali::Application const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Application(void* jarg1)
{
  Dali::Application* arg1 = (Dali::Application*)0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      delete arg1;
      ReleaseArgVMemory();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_MainLoop__SWIG_0(void* jarg1)
{
  Dali::Application* arg1 = (Dali::Application*)0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      (arg1)->MainLoop();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_Lower(void* jarg1)
{
  Dali::Application* arg1 = (Dali::Application*)0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      (arg1)->Lower();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_Quit(void* jarg1)
{
  Dali::Application* arg1 = (Dali::Application*)0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      (arg1)->Quit();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Application_AddIdle(void* jarg1, void* jarg2)
{
  unsigned int        jresult;
  Dali::Application*  arg1 = (Dali::Application*)0;
  Dali::CallbackBase* arg2 = (Dali::CallbackBase*)0;
  bool                result;

  arg1 = (Dali::Application*)jarg1;
  arg2 = (Dali::CallbackBase*)jarg2;
  {
    try
    {
      result = (bool)(arg1)->AddIdle(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_GetWindow(void* jarg1)
{
  void*              jresult;
  Dali::Application* arg1 = (Dali::Application*)0;
  Dali::Window       result;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (arg1)->GetWindow();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Window((const Dali::Window&)result);
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Application_GetWindowsListSize()
{
  unsigned int          jresult;
  Dali::WindowContainer result;
  {
    try
    {
      result  = Dali::Adaptor::Get().GetWindows();
      jresult = result.size();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_GetWindowsFromList(unsigned int jarg1)
{
  void*                 jresult;
  unsigned int          index = jarg1;
  Dali::WindowContainer result;

  {
    try
    {
      result = Dali::Adaptor::Get().GetWindows();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Window((const Dali::Window&)result[index]);
  return jresult;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Application_GetResourcePath()
{
  char*       jresult;
  std::string result;

  {
    try
    {
      result = Dali::Application::GetResourcePath();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Application_GetRegion(void* jarg1)
{
  char*              jresult;
  Dali::Application* arg1 = (Dali::Application*)0;
  std::string        result;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (arg1)->GetRegion();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_Application_GetLanguage(void* jarg1)
{
  char*              jresult;
  Dali::Application* arg1 = (Dali::Application*)0;
  std::string        result;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (arg1)->GetLanguage();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_InitSignal(void* jarg1)
{
  void*                             jresult;
  Dali::Application*                arg1   = (Dali::Application*)0;
  Dali::Application::AppSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(arg1)->InitSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TerminateSignal(void* jarg1)
{
  void*                             jresult;
  Dali::Application*                arg1   = (Dali::Application*)0;
  Dali::Application::AppSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(arg1)->TerminateSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_PauseSignal(void* jarg1)
{
  void*                             jresult;
  Dali::Application*                arg1   = (Dali::Application*)0;
  Dali::Application::AppSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(arg1)->PauseSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_ResumeSignal(void* jarg1)
{
  void*                             jresult;
  Dali::Application*                arg1   = (Dali::Application*)0;
  Dali::Application::AppSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(arg1)->ResumeSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_ResetSignal(void* jarg1)
{
  void*                             jresult;
  Dali::Application*                arg1   = (Dali::Application*)0;
  Dali::Application::AppSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(arg1)->ResetSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_AppControlSignal(void* jarg1)
{
  void*                                    jresult;
  Dali::Application*                       arg1   = (Dali::Application*)0;
  Dali::Application::AppControlSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::AppControlSignalType*)&(arg1)->AppControlSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_LanguageChangedSignal(void* jarg1)
{
  void*                             jresult;
  Dali::Application*                arg1   = (Dali::Application*)0;
  Dali::Application::AppSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(arg1)->LanguageChangedSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_RegionChangedSignal(void* jarg1)
{
  void*                             jresult;
  Dali::Application*                arg1   = (Dali::Application*)0;
  Dali::Application::AppSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(arg1)->RegionChangedSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_LowBatterySignal(void* jarg1)
{
  void*                                    jresult;
  Dali::Application*                       arg1   = (Dali::Application*)0;
  Dali::Application::LowBatterySignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::LowBatterySignalType*)&(arg1)->LowBatterySignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_LowMemorySignal(void* jarg1)
{
  void*                                   jresult;
  Dali::Application*                      arg1   = (Dali::Application*)0;
  Dali::Application::LowMemorySignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::LowMemorySignalType*)&(arg1)->LowMemorySignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_DeviceOrientationChangedSignal(void* jarg1)
{
  void*                                   jresult;
  Dali::Application*                      arg1   = (Dali::Application*)0;
  Dali::Application::DeviceOrientationChangedSignalType* result = 0;

  arg1 = (Dali::Application*)jarg1;
  {
    try
    {
      result = (Dali::Application::DeviceOrientationChangedSignalType*)&(arg1)->DeviceOrientationChangedSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TaskInitSignal(void* app)
{
  void*                             jresult;
  Dali::Application*                application = (Dali::Application*)0;
  Dali::Application::AppSignalType* result      = 0;

  application = (Dali::Application*)app;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(application)->TaskInitSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TaskTerminateSignal(void* app)
{
  void*                             jresult;
  Dali::Application*                application = (Dali::Application*)0;
  Dali::Application::AppSignalType* result      = 0;

  application = (Dali::Application*)app;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(application)->TaskTerminateSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TaskAppControlSignal(void* app)
{
  void*                                    jresult;
  Dali::Application*                       application = (Dali::Application*)0;
  Dali::Application::AppControlSignalType* result      = 0;

  application = (Dali::Application*)app;
  {
    try
    {
      result = (Dali::Application::AppControlSignalType*)&(application)->TaskAppControlSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TaskLanguageChangedSignal(void* app)
{
  void*                             jresult;
  Dali::Application*                application = (Dali::Application*)0;
  Dali::Application::AppSignalType* result      = 0;

  application = (Dali::Application*)app;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(application)->TaskLanguageChangedSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TaskRegionChangedSignal(void* app)
{
  void*                             jresult;
  Dali::Application*                application = (Dali::Application*)0;
  Dali::Application::AppSignalType* result      = 0;

  application = (Dali::Application*)app;
  {
    try
    {
      result = (Dali::Application::AppSignalType*)&(application)->TaskRegionChangedSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TaskLowBatterySignal(void* app)
{
  void*                                    jresult;
  Dali::Application*                       application = (Dali::Application*)0;
  Dali::Application::LowBatterySignalType* result      = 0;

  application = (Dali::Application*)app;
  {
    try
    {
      result = (Dali::Application::LowBatterySignalType*)&(application)->TaskLowBatterySignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TaskLowMemorySignal(void* app)
{
  void*                                   jresult;
  Dali::Application*                      application = (Dali::Application*)0;
  Dali::Application::LowMemorySignalType* result      = 0;

  application = (Dali::Application*)app;
  {
    try
    {
      result = (Dali::Application::LowMemorySignalType*)&(application)->TaskLowMemorySignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_TaskDeviceOrientationChangedSignal(void* app)
{
  void*                                   jresult;
  Dali::Application*                      application = (Dali::Application*)0;
  Dali::Application::DeviceOrientationChangedSignalType* result      = 0;

  application = (Dali::Application*)app;
  {
    try
    {
      result = (Dali::Application::DeviceOrientationChangedSignalType*)&(application)->TaskDeviceOrientationChangedSignal();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Application_LowBatterySignalType_Empty(void* jarg1)
{
  unsigned int                                             jresult;
  Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)0;
  bool                                                     result;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Empty((Dali::Signal<void(Dali::DeviceStatus::Battery::Status)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Application_LowBatterySignalType_GetConnectionCount(void* jarg1)
{
  unsigned long                                            jresult;
  Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)0;
  std::size_t                                              result;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::DeviceStatus::Battery::Status)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_LowBatterySignalType_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)0;
  void (*arg2)(Dali::DeviceStatus::Battery::Status)             = (void (*)(Dali::DeviceStatus::Battery::Status))0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Battery::Status))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_LowBatterySignalType_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)0;
  void (*arg2)(Dali::DeviceStatus::Battery::Status)             = (void (*)(Dali::DeviceStatus::Battery::Status))0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Battery::Status))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_LowBatterySignalType_Emit(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)0;
  Dali::DeviceStatus::Battery::Status                      arg2;
  Dali::DeviceStatus::Battery::Status*                     argp2;

  arg1  = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)jarg1;
  argp2 = (Dali::DeviceStatus::Battery::Status*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DeviceStatus::Battery::Status", 0);
    return;
  }
  arg2 = *argp2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Battery_Status_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_new_LowBatterySignalType()
{
  void*                                                    jresult;
  Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)new Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_delete_LowBatterySignalType(void* jarg1)
{
  Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Battery::Status)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Application_LowMemorySignalType_Empty(void* jarg1)
{
  unsigned int                                            jresult;
  Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)0;
  bool                                                    result;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Empty((Dali::Signal<void(Dali::DeviceStatus::Memory::Status)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Application_LowMemorySignalType_GetConnectionCount(void* jarg1)
{
  unsigned long                                           jresult;
  Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)0;
  std::size_t                                             result;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::DeviceStatus::Memory::Status)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_LowMemorySignalType_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)0;
  void (*arg2)(Dali::DeviceStatus::Memory::Status)             = (void (*)(Dali::DeviceStatus::Memory::Status))0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Memory::Status))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_LowMemorySignalType_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)0;
  void (*arg2)(Dali::DeviceStatus::Memory::Status)             = (void (*)(Dali::DeviceStatus::Memory::Status))0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Memory::Status))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_LowMemorySignalType_Emit(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)0;
  Dali::DeviceStatus::Memory::Status                      arg2;
  Dali::DeviceStatus::Memory::Status*                     argp2;

  arg1  = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)jarg1;
  argp2 = (Dali::DeviceStatus::Memory::Status*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DeviceStatus::Memory::Status", 0);
    return;
  }
  arg2 = *argp2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Memory_Status_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_new_LowMemorySignalType()
{
  void*                                                   jresult;
  Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)new Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_delete_LowMemorySignalType(void* jarg1)
{
  Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Memory::Status)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Application_DeviceOrientationChangedSignalType_Empty(void* jarg1)
{
  unsigned int                                            jresult;
  Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)0;
  bool                                                    result;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__Empty((Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Application_DeviceOrientationChangedSignalType_GetConnectionCount(void* jarg1)
{
  unsigned long                                           jresult;
  Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)0;
  std::size_t                                             result;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_DeviceOrientationChangedSignalType_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)0;
  void (*arg2)(Dali::DeviceStatus::Orientation::Status)             = (void (*)(Dali::DeviceStatus::Orientation::Status))0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Orientation::Status))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_DeviceOrientationChangedSignalType_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)0;
  void (*arg2)(Dali::DeviceStatus::Orientation::Status)             = (void (*)(Dali::DeviceStatus::Orientation::Status))0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)jarg1;
  arg2 = (void (*)(Dali::DeviceStatus::Orientation::Status))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_DeviceOrientationChangedSignalType_Emit(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)0;
  Dali::DeviceStatus::Orientation::Status                      arg2;
  Dali::DeviceStatus::Orientation::Status*                     argp2;

  arg1  = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)jarg1;
  argp2 = (Dali::DeviceStatus::Orientation::Status*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::DeviceStatus::Orientation::Status", 0);
    return;
  }
  arg2 = *argp2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_DeviceStatus_Orientation_Status_SP__Sg__Emit(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_new_DeviceOrientationChangedSignalType()
{
  void*                                                   jresult;
  Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)new Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_delete_DeviceOrientationChangedSignalType(void* jarg1)
{
  Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>* arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)0;

  arg1 = (Dali::Signal<void(Dali::DeviceStatus::Orientation::Status)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ApplicationSignal_Empty(void* jarg1)
{
  unsigned int                            jresult;
  Dali::Signal<void(Dali::Application&)>* arg1 = (Dali::Signal<void(Dali::Application&)>*)0;
  bool                                    result;

  arg1 = (Dali::Signal<void(Dali::Application&)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Empty((Dali::Signal<void(Dali::Application&)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ApplicationSignal_GetConnectionCount(void* jarg1)
{
  unsigned long                           jresult;
  Dali::Signal<void(Dali::Application&)>* arg1 = (Dali::Signal<void(Dali::Application&)>*)0;
  std::size_t                             result;

  arg1 = (Dali::Signal<void(Dali::Application&)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::Application&)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationSignal_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Application&)>* arg1 = (Dali::Signal<void(Dali::Application&)>*)0;
  void (*arg2)(Dali::Application&)             = (void (*)(Dali::Application&))0;

  arg1 = (Dali::Signal<void(Dali::Application&)>*)jarg1;
  arg2 = (void (*)(Dali::Application&))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationSignal_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Application&)>* arg1 = (Dali::Signal<void(Dali::Application&)>*)0;
  void (*arg2)(Dali::Application&)             = (void (*)(Dali::Application&))0;

  arg1 = (Dali::Signal<void(Dali::Application&)>*)jarg1;
  arg2 = (void (*)(Dali::Application&))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationSignal_Emit(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Application&)>* arg1 = (Dali::Signal<void(Dali::Application&)>*)0;
  Dali::Application*                      arg2 = 0;

  arg1 = (Dali::Signal<void(Dali::Application&)>*)jarg1;
  arg2 = (Dali::Application*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application & type is null", 0);
    return;
  }
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__SP__Sg__Emit(arg1, *arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ApplicationSignal()
{
  void*                                   jresult;
  Dali::Signal<void(Dali::Application&)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::Application&)>*)new Dali::Signal<void(Dali::Application&)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ApplicationSignal(void* jarg1)
{
  Dali::Signal<void(Dali::Application&)>* arg1 = (Dali::Signal<void(Dali::Application&)>*)0;

  arg1 = (Dali::Signal<void(Dali::Application&)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_Empty(void* jarg1)
{
  unsigned int                                   jresult;
  Dali::Signal<void(Dali::Application&, void*)>* arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)0;
  bool                                           result;

  arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)jarg1;
  {
    try
    {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Empty((Dali::Signal<void(Dali::Application&, void*)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_GetConnectionCount(void* jarg1)
{
  unsigned long                                  jresult;
  Dali::Signal<void(Dali::Application&, void*)>* arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)0;
  std::size_t                                    result;

  arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)jarg1;
  {
    try
    {
      result = Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::Application&, void*)> const*)arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_Connect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Application&, void*)>* arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)0;
  void (*arg2)(Dali::Application&, void*)             = (void (*)(Dali::Application&, void*))0;

  arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)jarg1;
  arg2 = (void (*)(Dali::Application&, void*))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Connect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_Disconnect(void* jarg1, void* jarg2)
{
  Dali::Signal<void(Dali::Application&, void*)>* arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)0;
  void (*arg2)(Dali::Application&, void*)             = (void (*)(Dali::Application&, void*))0;

  arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)jarg1;
  arg2 = (void (*)(Dali::Application&, void*))jarg2;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Disconnect(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ApplicationControlSignal_Emit(void* jarg1, void* jarg2, void* jarg3)
{
  Dali::Signal<void(Dali::Application&, void*)>* arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)0;
  Dali::Application*                             arg2 = 0;
  void*                                          arg3 = (void*)0;

  arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)jarg1;
  arg2 = (Dali::Application*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Application & type is null", 0);
    return;
  }
  arg3 = jarg3;
  {
    try
    {
      Dali_Signal_Sl_void_Sp_Dali_Application_SA__Sc_void_Sm__SP__Sg__Emit(arg1, *arg2, arg3);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ApplicationControlSignal()
{
  void*                                          jresult;
  Dali::Signal<void(Dali::Application&, void*)>* result = 0;

  {
    try
    {
      result = (Dali::Signal<void(Dali::Application&, void*)>*)new Dali::Signal<void(Dali::Application&, void*)>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ApplicationControlSignal(void* jarg1)
{
  Dali::Signal<void(Dali::Application&, void*)>* arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)0;

  arg1 = (Dali::Signal<void(Dali::Application&, void*)>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

/*application-devel binding*/

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New__SWIG_4(int jarg1, char* jarg3, int jarg4, void* jarg5)
{
  void*                          jresult;
  int*                           argc = nullptr;
  char***                        argv = nullptr;
  Dali::Application::WINDOW_MODE arg4;
  Dali::PositionSize             arg5;
  Dali::PositionSize*            argp5;
  Dali::Application              result;

  if(!jarg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3(jarg3);
  arg4  = (Dali::Application::WINDOW_MODE)jarg4;
  argp5 = (Dali::PositionSize*)jarg5;
  if(!argp5)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }
  arg5 = *argp5;
  {
    try
    {
      result = Dali::Application::New(argc, argv, arg3, arg4, arg5);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Application((const Dali::Application&)result);

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New__SWIG_5(int nuiArgc, char* nuiArgv, char* nuiStyleSheet, int nuiWindowMode, void* initRectangle, int nuiWindowType)
{
  void*                          jresult;
  int*                           argc = nullptr;
  char***                        argv = nullptr;
  Dali::Application::WINDOW_MODE windowMode;
  Dali::PositionSize             rect;
  Dali::PositionSize*            rectp;
  Dali::WindowType               windowType;
  Dali::Application              result;

  GenerationArgV(nuiArgc, nuiArgv);
  argc = &gArgC;
  argv = &gArgV;

  if(!nuiStyleSheet)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string styleSheet(nuiStyleSheet);
  windowMode  = (Dali::Application::WINDOW_MODE)nuiWindowMode;
  rectp = (Dali::PositionSize*)initRectangle;
  windowType  = (Dali::WindowType)nuiWindowType;

  if(!rectp)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }
  rect = *rectp;
  {
    try
    {
      result = Dali::DevelApplication::New(argc, argv, styleSheet, windowMode, rect, windowType);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Application((const Dali::Application&)result);

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New__SWIG_6(int nuiArgc, char* nuiArgv, char* nuiStyleSheet, int nuiWindowMode, void* nuiPositionSize, bool nuiUseUiThread)
{
  void*                          jresult;
  int*                           argc = nullptr;
  char***                        argv = nullptr;
  Dali::Application::WINDOW_MODE windowMode;
  Dali::PositionSize             positionSize;
  Dali::PositionSize*            positionSizeP;
  bool                           useUiThread;
  Dali::Application              result;

  if(!nuiStyleSheet)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string styleSheet(nuiStyleSheet);
  windowMode    = (Dali::Application::WINDOW_MODE)nuiWindowMode;
  positionSizeP = (Dali::PositionSize*)nuiPositionSize;
  useUiThread   = nuiUseUiThread;

  if(!positionSizeP)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }

  GenerationArgV(nuiArgc, nuiArgv);
  argc = &gArgC;
  argv = &gArgV;

  positionSize = *positionSizeP;
  {
    try
    {
      result = Dali::Application::New(argc, argv, styleSheet, windowMode, positionSize, useUiThread);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Application((const Dali::Application&)result);

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New_WithWindowSizePosition(int jarg1, char* jarg2, char* jarg3, int jarg4, void* jarg5)
{
  void*                          jresult;
  int*                           argc = nullptr;
  char***                        argv = nullptr;
  Dali::Application::WINDOW_MODE arg4;
  Dali::PositionSize             arg5;
  Dali::PositionSize*            argp5;
  Dali::Application              result;

  {
    // TODO : What should we do if already generated argv exist?
    ReleaseArgVMemory();
    // generate argv data from the C# args
    int   index  = 0;
    int   length = 0;
    char* retPtr = NULL;
    char* nextPtr;

    gArgV = new char*[jarg1 + 1];

    for(retPtr = strtok_r(jarg2, " ", &nextPtr);
        retPtr != NULL && index < jarg1;
        retPtr = strtok_r(NULL, " ", &nextPtr))
    {
      length       = 0;
      length       = strlen(retPtr);
      gArgV[index] = new char[length + 1];
      strncpy(gArgV[index], retPtr, length);
      gArgV[index][length] = '\0';
      index++;
    }

    while(index < jarg1)
    {
      //if jarg1 - index >1, maybe cause error.
      gArgV[index] = NULL;
      index++;
    }

    gArgV[jarg1] = NULL;
    gArgC        = jarg1;

    argc = &gArgC;
    argv = &gArgV;
  }

  std::string arg3(jarg3);
  arg4  = (Dali::Application::WINDOW_MODE)jarg4;
  argp5 = (Dali::PositionSize*)jarg5;
  if(!argp5)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }
  arg5 = *argp5;
  {
    try
    {
      result = Dali::Application::New(argc, argv, arg3, arg4, arg5);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Application((const Dali::Application&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Application_New_WithWindowData(int nuiArgc, char* nuiArgv, char* nuiStyleSheet, bool nuiUIThread, void* nuiWindowData)
{
  void*             jresult;
  int*              argc = nullptr;
  char***           argv = nullptr;
  Dali::WindowData* pWindowData;
  Dali::Application result;

  {
    // TODO : What should we do if already generated argv exist?
    ReleaseArgVMemory();
    // generate argv data from the C# args
    int   index  = 0;
    int   length = 0;
    char* retPtr = NULL;
    char* nextPtr;

    gArgV = new char*[nuiArgc + 1];

    for(retPtr = strtok_r(nuiArgv, " ", &nextPtr);
        retPtr != NULL && index < nuiArgc;
        retPtr = strtok_r(NULL, " ", &nextPtr))
    {
      length       = 0;
      length       = strlen(retPtr);
      gArgV[index] = new char[length + 1];
      strncpy(gArgV[index], retPtr, length);
      gArgV[index][length] = '\0';
      index++;
    }

    while(index < nuiArgc)
    {
      // if nuiArgc - index >1, maybe cause error.
      gArgV[index] = NULL;
      index++;
    }

    gArgV[nuiArgc] = NULL;
    gArgC          = nuiArgc;

    argc = &gArgC;
    argv = &gArgV;
  }

  std::string styleSheet(nuiStyleSheet);
  pWindowData = (Dali::WindowData*)nuiWindowData;
  if(!pWindowData)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
    return 0;
  }

  {
    try
    {
      result = Dali::Application::New(argc, argv, styleSheet, nuiUIThread, *pWindowData);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::Application((const Dali::Application&)result);
  return jresult;
}


SWIGEXPORT int32_t SWIGSTDCALL CSharp_Dali_Application_GetRenderThreadId(void* jarg1)
{
  Dali::Application* arg1 = (Dali::Application*)jarg1;

  int32_t result;
  try
  {
    result = Dali::DevelApplication::GetRenderThreadId(*arg1);
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Application_FlushUpdateMessages(void* jarg1)
{
  Dali::Application* arg1 = (Dali::Application*)jarg1;

  try
  {
    Dali::DevelApplication::FlushUpdateMessages(*arg1);
  }
  CALL_CATCH_EXCEPTION();
}

#ifdef __cplusplus
}
#endif
