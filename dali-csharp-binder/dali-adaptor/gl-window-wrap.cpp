/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/adaptor-framework/gl-window.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

/* Callback for returning strings to C# without leaking memory */
typedef char *(SWIGSTDCALL *SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

/* TODO Adding signal definition */
SWIGINTERN bool Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty(Dali::Signal<void(Dali::GlWindow, bool)> const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::GlWindow, bool)> const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(Dali::Signal<void(Dali::GlWindow, bool)> *self, void (*func)(Dali::GlWindow, bool))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(Dali::Signal<void(Dali::GlWindow, bool)> *self, void (*func)(Dali::GlWindow, bool))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(Dali::Signal<void(Dali::GlWindow, bool)> *self, Dali::GlWindow arg, bool focusIn)
{
  self->Emit(arg, focusIn);
}

/*ResizeSignal*/
SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__Empty(Dali::Signal<void(Dali::GlWindow::WindowSize)> const *self)
{
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__GetConnectionCount(Dali::Signal<void(Dali::GlWindow::WindowSize)> const *self)
{
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__Connect(Dali::Signal<void(Dali::GlWindow::WindowSize)> *self, void (*func)(Dali::GlWindow::WindowSize))
{
  self->Connect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__Disconnect(Dali::Signal<void(Dali::GlWindow::WindowSize)> *self, void (*func)(Dali::GlWindow::WindowSize))
{
  self->Disconnect(func);
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__Emit(Dali::Signal<void(Dali::GlWindow::WindowSize)> *self, Dali::GlWindow::WindowSize arg)
{
  self->Emit(arg);
}

#ifdef __cplusplus
extern "C"
{
#endif

  /*Window binding*/
  SWIGEXPORT Dali::BaseHandle *SWIGSTDCALL CSharp_Dali_GlWindow_SWIGUpcast(Dali::GlWindow *jarg1)
  {
    return (Dali::BaseHandle *)jarg1;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlWindow_New__SWIG_0()
  {
    void *jresult;
    Dali::GlWindow result;
    {
      try
      {

        result = Dali::GlWindow::New();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::GlWindow((const Dali::GlWindow &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlWindow_New__SWIG_1(void *jarg1, char *jarg2, char *jarg3, unsigned int jarg4)
  {
    void *jresult;
    Dali::PositionSize arg1;
    std::string *arg2 = 0;
    std::string *arg3 = 0;
    bool arg4;
    Dali::PositionSize *argp1;
    Dali::GlWindow result;

    argp1 = (Dali::PositionSize *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::PositionSize", 0);
      return 0;
    }
    arg1 = *argp1;
    if (!jarg2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg2_str(jarg2);
    arg2 = &arg2_str;
    if (!jarg3)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg3_str(jarg3);
    arg3 = &arg3_str;
    arg4 = jarg4 ? true : false;

    {
      try
      {
        result = Dali::GlWindow::New(arg1, (std::string const &)*arg2, (std::string const &)*arg3, arg4);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::GlWindow((const Dali::GlWindow &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_GlWindow__SWIG_0()
  {
    void *jresult;
    Dali::GlWindow *result = 0;

    {
      try
      {
        result = (Dali::GlWindow *)new Dali::GlWindow();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GlWindow(void *jarg1)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;

    arg1 = (Dali::GlWindow *)jarg1;
    {
      try
      {
        delete arg1;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_GlWindow__SWIG_1(void *jarg1)
  {
    void *jresult;
    Dali::GlWindow *arg1 = 0;
    Dali::GlWindow *result = 0;

    arg1 = (Dali::GlWindow *)jarg1;
    if (!arg1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::GlWindow const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::GlWindow *)new Dali::GlWindow((Dali::GlWindow const &)*arg1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlWindow_Assign(void *jarg1, void *jarg2)
  {
    void *jresult;
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;
    Dali::GlWindow *arg2 = 0;
    Dali::GlWindow *result = 0;

    arg1 = (Dali::GlWindow *)jarg1;
    arg2 = (Dali::GlWindow *)jarg2;
    if (!arg2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::GlWindow const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::GlWindow *)&(arg1)->operator=((Dali::GlWindow const &)*arg2);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_SetGraphicsConfig(void *jarg1, unsigned int jarg2, unsigned int jarg3, int jarg4, int jarg5)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;
    bool arg2;
    bool arg3;
    int arg4;
    Dali::GlWindow::GlesVersion arg5;

    arg1 = (Dali::GlWindow *)jarg1;
    arg2 = (bool)jarg2;
    arg3 = (bool)jarg3;
    arg4 = jarg4;
    arg5 = static_cast<Dali::GlWindow::GlesVersion>(jarg5);
    {
      try
      {
        (arg1)->SetGraphicsConfig(arg2, arg3, arg4, arg5);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Raise(void *jarg1)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;

    arg1 = (Dali::GlWindow *)jarg1;
    {
      try
      {
        (arg1)->Raise();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Lower(void *jarg1)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;

    arg1 = (Dali::GlWindow *)jarg1;
    {
      try
      {
        (arg1)->Lower();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Activate(void *jarg1)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;

    arg1 = (Dali::GlWindow *)jarg1;
    {
      try
      {
        (arg1)->Activate();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Show(void *jarg1)
  {
    Dali::GlWindow arg1;
    Dali::GlWindow *argp1;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return;
    }
    arg1 = *argp1;
    {
      try
      {
        arg1.Show();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Hide(void *jarg1)
  {
    Dali::GlWindow arg1;
    Dali::GlWindow *argp1;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return;
    }
    arg1 = *argp1;
    {
      try
      {
        arg1.Hide();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_SetPositionSize(void *jarg1, void *jarg2)
  {
    Dali::GlWindow arg1;
    Dali::GlWindow *argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return;
    }
    arg1 = *argp1;
    Dali::Rect<int> *positionSize = (Dali::Rect<int> *)jarg2;
    if (!positionSize)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Rect< int > const & type is null", 0);
      return;
    }
    {
      try
      {
        arg1.SetPositionSize(*positionSize);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlWindow_GetPositionSize(void *jarg1)
  {
    void *jresult;
    Dali::GlWindow arg1;
    Dali::GlWindow *argp1;
    Dali::PositionSize result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    {
      try
      {
        result = arg1.GetPositionSize();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::PositionSize((const Dali::PositionSize &)result);
    return jresult;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_GetSupportedAuxiliaryHintCount(void *jarg1)
  {
    unsigned int jresult;
    Dali::GlWindow arg1;
    Dali::GlWindow *argp1;
    unsigned int result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    {
      try
      {
        result = (unsigned int)arg1.GetSupportedAuxiliaryHintCount();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;
    return jresult;
  }

  SWIGEXPORT char *SWIGSTDCALL CSharp_Dali_GlWindow_GetSupportedAuxiliaryHint(void *jarg1, unsigned int jarg2)
  {
    char *jresult;
    Dali::GlWindow arg1;
    unsigned int arg2;
    Dali::GlWindow *argp1;
    std::string result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    arg2 = (unsigned int)jarg2;
    {
      try
      {
        result = arg1.GetSupportedAuxiliaryHint(arg2);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = SWIG_csharp_string_callback((&result)->c_str());
    return jresult;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_AddAuxiliaryHint(void *jarg1, char *jarg2, char *jarg3)
  {
    unsigned int jresult;
    Dali::GlWindow arg1;
    std::string *arg2 = 0;
    std::string *arg3 = 0;
    Dali::GlWindow *argp1;
    unsigned int result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    if (!jarg2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg2_str(jarg2);
    arg2 = &arg2_str;
    if (!jarg3)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg3_str(jarg3);
    arg3 = &arg3_str;
    {
      try
      {
        result = (unsigned int)arg1.AddAuxiliaryHint((std::string const &)*arg2, (std::string const &)*arg3);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;

    return jresult;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_RemoveAuxiliaryHint(void *jarg1, unsigned int jarg2)
  {
    unsigned int jresult;
    Dali::GlWindow arg1;
    unsigned int arg2;
    Dali::GlWindow *argp1;
    bool result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    arg2 = (unsigned int)jarg2;
    {
      try
      {
        result = (bool)arg1.RemoveAuxiliaryHint(arg2);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;
    return jresult;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_SetAuxiliaryHintValue(void *jarg1, unsigned int jarg2, char *jarg3)
  {
    unsigned int jresult;
    Dali::GlWindow arg1;
    unsigned int arg2;
    std::string *arg3 = 0;
    Dali::GlWindow *argp1;
    bool result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    arg2 = (unsigned int)jarg2;
    if (!jarg3)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg3_str(jarg3);
    arg3 = &arg3_str;
    {
      try
      {
        result = (bool)arg1.SetAuxiliaryHintValue(arg2, (std::string const &)*arg3);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;

    //argout typemap for const std::string&

    return jresult;
  }

  SWIGEXPORT char *SWIGSTDCALL CSharp_Dali_GlWindow_GetAuxiliaryHintValue(void *jarg1, unsigned int jarg2)
  {
    char *jresult;
    Dali::GlWindow arg1;
    unsigned int arg2;
    Dali::GlWindow *argp1;
    std::string result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    arg2 = (unsigned int)jarg2;
    {
      try
      {
        result = arg1.GetAuxiliaryHintValue(arg2);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = SWIG_csharp_string_callback((&result)->c_str());
    return jresult;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_GetAuxiliaryHintId(void *jarg1, char *jarg2)
  {
    unsigned int jresult;
    Dali::GlWindow arg1;
    std::string *arg2 = 0;
    Dali::GlWindow *argp1;
    unsigned int result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    if (!jarg2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string arg2_str(jarg2);
    arg2 = &arg2_str;
    {
      try
      {
        result = (unsigned int)arg1.GetAuxiliaryHintId((std::string const &)*arg2);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;

    //argout typemap for const std::string&

    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_SetInputRegion(void *jarg1, void *jarg2)
  {
    Dali::GlWindow arg1;
    Dali::Rect<int> *arg2 = 0;
    Dali::GlWindow *argp1;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return;
    }
    arg1 = *argp1;
    arg2 = (Dali::Rect<int> *)jarg2;
    if (!arg2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Rect< int > const & type is null", 0);
      return;
    }
    {
      try
      {
        arg1.SetInputRegion((Dali::Rect<int> const &)*arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_SetOpaqueState(void *jarg1, unsigned int jarg2)
  {
    Dali::GlWindow arg1;
    bool arg2;
    Dali::GlWindow *argp1;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return;
    }
    arg1 = *argp1;
    arg2 = jarg2 ? true : false;
    {
      try
      {
        arg1.SetOpaqueState(arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_IsOpaqueState(void *jarg1)
  {
    unsigned int jresult;
    Dali::GlWindow arg1;
    Dali::GlWindow *argp1;
    bool result;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    {
      try
      {
        result = (bool)arg1.IsOpaqueState();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;
    return jresult;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GlWindow_GetCurrentOrientation(void *jarg1)
  {
    int jresult;
    Dali::WindowOrientation result;
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;
    arg1 = (Dali::GlWindow *)jarg1;
    if (!arg1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    {
      try
      {
        result = (arg1)->GetCurrentOrientation();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (int)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_SetAvailableOrientations(void *jarg1, void *jarg2, int jarg3)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)jarg1;
    if (!arg1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return;
    }
    Dali::Property::Array *arg2 = (static_cast<Dali::Property::Array *>(jarg2));
    unsigned int count = static_cast<unsigned int>(jarg3);

    Dali::Vector<Dali::WindowOrientation> angles;
    angles.Resize(count);
    for (Dali::Property::Array::SizeType i = 0; i < count; ++i)
    {
      int angle = arg2->GetElementAt(i).Get<int>();
      angles[i] = static_cast<Dali::WindowOrientation>(angle);
    }
    {
      try
      {
        arg1->SetAvailableOrientations(angles);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_SetPreferredOrientation(void *jarg1, int jarg2)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;
    Dali::WindowOrientation arg2;
    int angle = jarg2;

    arg1 = (Dali::GlWindow *)jarg1;
    arg2 = (Dali::WindowOrientation)angle;
    {
      try
      {
        (arg1)->SetPreferredOrientation(arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_RegisterGlCallbacks(void *jarg1, void *initCallback, int *RenderFrameCallback, void *terminateCallback)
  {
    Dali::GlWindow *argp1 = (Dali::GlWindow *)jarg1;
    void (*initCB)() = (void (*)())initCallback;
    int (*renderFrameCB)() = (int (*)())RenderFrameCallback;
    void (*terminateCB)() = (void (*)())terminateCallback;

    if (!argp1 || !initCB || !renderFrameCB || !terminateCB)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null", 0);
      return;
    }
    Dali::GlWindow arg1 = *argp1;
    try
    {
      arg1.RegisterGlCallbacks(Dali::MakeCallback(initCB), Dali::MakeCallback(renderFrameCB), Dali::MakeCallback(terminateCB));
    }
    CALL_CATCH_EXCEPTION();
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_RenderOnce(void *jarg1)
  {
    Dali::GlWindow *argp1 = (Dali::GlWindow *)jarg1;
    Dali::GlWindow arg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return;
    }
    arg1 = *argp1;
    {
      try
      {
        arg1.RenderOnce();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GlWindow_GetRenderingMode(void *jarg1)
  {
    int jresult;
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;
    Dali::GlWindow::RenderingMode result;

    arg1 = (Dali::GlWindow *)jarg1;
    if (!arg1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }

    {
      try
      {
        result = (Dali::GlWindow::RenderingMode)(arg1)->GetRenderingMode();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (int)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_SetRenderingMode(void *jarg1, int jarg2)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;
    Dali::GlWindow::RenderingMode arg2;

    arg1 = (Dali::GlWindow *)jarg1;
    if (!arg1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return;
    }
    arg2 = (Dali::GlWindow::RenderingMode)jarg2;
    {
      try
      {
        (arg1)->SetRenderingMode(arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  /* Signals binding*/

  /* Focus change binding */
  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlWindow_FocusChangedSignal(void *jarg1)
  {
    void *jresult;
    Dali::GlWindow arg1;
    Dali::GlWindow *argp1;
    Dali::GlWindow::FocusChangeSignalType *result = 0;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    {
      try
      {
        result = (Dali::GlWindow::FocusChangeSignalType *)&arg1.FocusChangeSignal();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_FocusSignalType_Empty(void *jarg1)
  {
    unsigned int jresult;
    Dali::Signal<void(Dali::GlWindow, bool)> *arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)0;
    bool result;

    arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)jarg1;
    {
      try
      {
        result = (bool)Dali_Signal_Sl_void_Sp_bool_SP__Sg__Empty((Dali::Signal<void(Dali::GlWindow, bool)> const *)arg1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;
    return jresult;
  }

  SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_GlWindow_FocusSignalType_GetConnectionCount(void *jarg1)
  {
    unsigned long jresult;
    Dali::Signal<void(Dali::GlWindow, bool)> *arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)0;
    std::size_t result;

    arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)jarg1;
    {
      try
      {
        result = Dali_Signal_Sl_void_Sp_bool_SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::GlWindow, bool)> const *)arg1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (unsigned long)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_FocusSignalType_Connect(void *jarg1, void *jarg2)
  {
    Dali::Signal<void(Dali::GlWindow, bool)> *arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)0;
    void (*arg2)(Dali::GlWindow, bool) = (void (*)(Dali::GlWindow, bool))0;

    arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)jarg1;
    arg2 = (void (*)(Dali::GlWindow, bool))jarg2;
    {
      try
      {
        Dali_Signal_Sl_void_Sp_bool_SP__Sg__Connect(arg1, arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_FocusSignalType_Disconnect(void *jarg1, void *jarg2)
  {
    Dali::Signal<void(Dali::GlWindow, bool)> *arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)0;
    void (*arg2)(Dali::GlWindow, bool) = (void (*)(Dali::GlWindow, bool))0;

    arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)jarg1;
    arg2 = (void (*)(Dali::GlWindow, bool))jarg2;
    {
      try
      {
        Dali_Signal_Sl_void_Sp_bool_SP__Sg__Disconnect(arg1, arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_FocusSignalType_Emit(void *jarg1, void *jarg2, unsigned int jarg3)
  {
    Dali::Signal<void(Dali::GlWindow, bool)> *arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)jarg1;
    Dali::GlWindow *arg2 = (Dali::GlWindow *)jarg2;
    bool arg3 = jarg3 ? true : false;
    ;

    if (arg1 == nullptr || arg2 == nullptr)
    {
      DALI_LOG_ERROR("[ERR] arg1 == nullptr or arg2 == nullptr");
      return;
    }

    {
      try
      {
        Dali_Signal_Sl_void_Sp_bool_SP__Sg__Emit(arg1, *arg2, arg3);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_GlWindow_FocusSignalType()
  {
    void *jresult;
    Dali::Signal<void(Dali::GlWindow, bool)> *result = 0;

    {
      try
      {
        result = (Dali::Signal<void(Dali::GlWindow, bool)> *)new Dali::Signal<void(Dali::GlWindow, bool)>();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GlWindow_FocusSignalType(void *jarg1)
  {
    Dali::Signal<void(Dali::GlWindow, bool)> *arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)0;

    arg1 = (Dali::Signal<void(Dali::GlWindow, bool)> *)jarg1;
    {
      try
      {
        delete arg1;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  /* Touch Event Binding */
  GENERATE_SIGNAL(Dali::GlWindow*, void(*)(Dali::TouchEvent const&), Dali_GlWindow, TouchedSignal)
  // CSharp_Dali_GLWindow_TouchedSignal_Connect
  // CSharp_Dali_GLWindow_TouchedSignal_Disconnect

  /*Key Event Binding */

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlWindow_KeyEventSignal(void *jarg1)
  {
    void *jresult;
    Dali::GlWindow *arg1 = (Dali::GlWindow *)0;
    Dali::GlWindow::KeyEventSignalType *result = 0;

    arg1 = (Dali::GlWindow *)jarg1;
    {
      try
      {
        result = (Dali::GlWindow::KeyEventSignalType *)&(arg1->KeyEventSignal());
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  /* visibility change */

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlWindow_Visibility_Changed_Signal(void *jarg1)
  {
    Dali::GlWindow *arg1 = (Dali::GlWindow *)jarg1;
    Dali::GlWindow::VisibilityChangedSignalType *result = 0;

    {
      try
      {
        result = (Dali::GlWindow::VisibilityChangedSignalType *)&(arg1->VisibilityChangedSignal());
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return (void *)result;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_Visibility_Changed_Signal_GetConnectionCount(void *jarg1)
  {
    unsigned int result;
    Dali::GlWindow::VisibilityChangedSignalType *arg1 = (Dali::GlWindow::VisibilityChangedSignalType *)jarg1;

    if (arg1 == nullptr)
    {
      DALI_LOG_ERROR("[ERR] arg1 == nullptr");
      return 0;
    }

    {
      try
      {
        result = arg1->GetConnectionCount();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Visibility_Changed_Signal_Connect(void *jarg1, void *jarg2)
  {
    Dali::GlWindow::VisibilityChangedSignalType *arg1 = (Dali::GlWindow::VisibilityChangedSignalType *)jarg1;
    void (*arg2)(Dali::GlWindow, bool) = (void (*)(Dali::GlWindow, bool))jarg2;

    if (arg1 == nullptr)
    {
      DALI_LOG_ERROR("[ERR] arg1 == nullptr");
      return;
    }

    {
      try
      {
        arg1->Connect(arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Visibility_Changed_Signal_Disconnect(void *jarg1, void *jarg2)
  {
    Dali::GlWindow::VisibilityChangedSignalType *arg1 = (Dali::GlWindow::VisibilityChangedSignalType *)jarg1;
    void (*arg2)(Dali::GlWindow, bool) = (void (*)(Dali::GlWindow, bool))jarg2;

    if (arg1 == nullptr)
    {
      DALI_LOG_ERROR("[ERR] arg1 == nullptr");
      return;
    }

    {
      try
      {
        arg1->Disconnect(arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Visibility_Changed_Signal_Emit(void *jarg1, void *jarg2, bool jarg3)
  {
    Dali::GlWindow::VisibilityChangedSignalType *arg1 = (Dali::GlWindow::VisibilityChangedSignalType *)jarg1;
    Dali::GlWindow *arg2 = (Dali::GlWindow *)jarg2;
    bool arg3 = jarg3;

    if (arg1 == nullptr || arg2 == nullptr)
    {
      DALI_LOG_ERROR("[ERR] arg1 == nullptr or arg2 == nullptr");
      return;
    }

    {
      try
      {
        arg1->Emit(*arg2, arg3);
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_Visibility_Changed_Signal_delete(void *jarg1)
  {
    Dali::GlWindow::VisibilityChangedSignalType *arg1 = (Dali::GlWindow::VisibilityChangedSignalType *)jarg1;

    {
      try
      {
        delete arg1;
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  /*ResizeSignal binding*/
  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlWindow_ResizedSignal(void *jarg1)
  {
    void *jresult;
    Dali::GlWindow arg1;
    Dali::GlWindow *argp1;
    Dali::GlWindow::ResizeSignalType *result = 0;

    argp1 = (Dali::GlWindow *)jarg1;
    if (!argp1)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow", 0);
      return 0;
    }
    arg1 = *argp1;
    {
      try
      {
        result = (Dali::GlWindow::ResizeSignalType *)&arg1.ResizeSignal();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_GlWindow_ResizedSignal_Empty(void *jarg1)
  {
    unsigned int jresult;
    Dali::Signal<void(Dali::GlWindow::WindowSize)> *arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)0;
    bool result;

    arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)jarg1;
    {
      try
      {
        result = (bool)Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__Empty((Dali::Signal<void(Dali::GlWindow::WindowSize)> const *)arg1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = result;
    return jresult;
  }

  SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_GlWindow_ResizedSignal_GetConnectionCount(void *jarg1)
  {
    unsigned long jresult;
    Dali::Signal<void(Dali::GlWindow::WindowSize)> *arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)0;
    std::size_t result;

    arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)jarg1;
    {
      try
      {
        result = Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__GetConnectionCount((Dali::Signal<void(Dali::GlWindow::WindowSize)> const *)arg1);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (unsigned long)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_ResizedSignal_Connect(void *jarg1, void *jarg2)
  {
    Dali::Signal<void(Dali::GlWindow::WindowSize)> *arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)0;
    void (*arg2)(Dali::GlWindow::WindowSize) = (void (*)(Dali::GlWindow::WindowSize))0;

    arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)jarg1;
    arg2 = (void (*)(Dali::GlWindow::WindowSize))jarg2;
    {
      try
      {
        Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__Connect(arg1, arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_ResizedSignal_Disconnect(void *jarg1, void *jarg2)
  {
    Dali::Signal<void(Dali::GlWindow::WindowSize)> *arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)0;
    void (*arg2)(Dali::GlWindow::WindowSize) = (void (*)(Dali::GlWindow::WindowSize))0;

    arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)jarg1;
    arg2 = (void (*)(Dali::GlWindow::WindowSize))jarg2;
    {
      try
      {
        Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__Disconnect(arg1, arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_ResizedSignal_Emit(void *jarg1, void *jarg2)
  {
    Dali::Signal<void(Dali::GlWindow::WindowSize)> *arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)0;
    Dali::GlWindow::WindowSize arg2;
    Dali::GlWindow::WindowSize *argp2;

    arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)jarg1;
    if (arg1 == nullptr)
    {
      DALI_LOG_ERROR("[ERR] arg1 == nullptr or arg2 == nullptr");
      return;
    }
    argp2 = (Dali::GlWindow::WindowSize *)jarg2;
    if (!argp2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::GlWindow::WindowSize", 0);
      return;
    }
    arg2 = *argp2;
    {
      try
      {
        Dali_Signal_Sl_void_Sp_Dali_GlWindow_WindowSize_SP__Sg__Emit(arg1, arg2);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_GlWindow_ResizedSignal()
  {
    void *jresult;
    Dali::Signal<void(Dali::GlWindow::WindowSize)> *result = 0;

    {
      try
      {
        result = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)new Dali::Signal<void(Dali::GlWindow::WindowSize)>();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlWindow_delete_ResizedSignal(void *jarg1)
  {
    Dali::Signal<void(Dali::GlWindow::WindowSize)> *arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)0;

    arg1 = (Dali::Signal<void(Dali::GlWindow::WindowSize)> *)jarg1;
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
