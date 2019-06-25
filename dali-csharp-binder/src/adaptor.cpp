/*
 * Copyright (c) 2016 Samsung Electronics Co., Ltd.
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

#ifndef CSHARP_ADAPTOR
#define CSHARP_ADAPTOR
#endif

#include "common.h"
#include <dali/integration-api/adaptors/adaptor.h>
// #include <dali/public-api/adaptor-framework/application-configuration.h>


SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Adaptor &) > const *self){
    return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Adaptor &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Adaptor &) > *self,void (*func)(Dali::Adaptor &)){
    self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Adaptor &) > *self,void (*func)(Dali::Adaptor &)){
    self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Adaptor &) > *self,Dali::Adaptor &arg){
    self->Emit( arg );
}

#ifdef __cplusplus
extern "C" {
#endif


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_New__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::Adaptor *result = 0 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = (Dali::Adaptor *) &Dali::Adaptor::New(arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_New__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::Configuration::ContextLoss arg2 ;
  Dali::Configuration::ContextLoss *argp2 ;
  Dali::Adaptor *result = 0 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  argp2 = (Dali::Configuration::ContextLoss *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Configuration::ContextLoss", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (Dali::Adaptor *) &Dali::Adaptor::New(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_New__SWIG_2(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::RenderSurfaceInterface *arg2 = 0 ;
  Dali::Adaptor *result = 0 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::RenderSurfaceInterface *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::RenderSurface const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Adaptor *) &Dali::Adaptor::New(arg1,(Dali::RenderSurfaceInterface const &)*arg2,Dali::Configuration::APPLICATION_DOES_NOT_HANDLE_CONTEXT_LOSS);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_New__SWIG_3(void * jarg1, void * jarg2, void * jarg3) {
  void * jresult ;
  Dali::Window arg1 ;
  Dali::Window *argp1 ;
  Dali::RenderSurfaceInterface *arg2 = 0 ;
  Dali::Configuration::ContextLoss arg3 ;
  Dali::Configuration::ContextLoss *argp3 ;
  Dali::Adaptor *result = 0 ;

  argp1 = (Dali::Window *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::RenderSurfaceInterface *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::RenderSurface const & type is null", 0);
    return 0;
  }
  argp3 = (Dali::Configuration::ContextLoss *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Configuration::ContextLoss", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = (Dali::Adaptor *) &Dali::Adaptor::New(arg1,(Dali::RenderSurfaceInterface const &)*arg2,arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Adaptor(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_Start(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      (arg1)->Start();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_Pause(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      (arg1)->Pause();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_Resume(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      (arg1)->Resume();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_Stop(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      (arg1)->Stop();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Adaptor_AddIdle(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::CallbackBase *arg2 = (Dali::CallbackBase *) 0 ;
  bool result;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (Dali::CallbackBase *)jarg2;
  {
    try {
      result = (bool)(arg1)->AddIdle(arg2, false);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_RemoveIdle(void * jarg1, void * jarg2) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::CallbackBase *arg2 = (Dali::CallbackBase *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (Dali::CallbackBase *)jarg2;
  {
    try {
      (arg1)->RemoveIdle(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_ReplaceSurface(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::Window arg2 ;
  Dali::Window *argp2 ;
  Dali::RenderSurfaceInterface *arg3 = 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  argp2 = (Dali::Window *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Window", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::RenderSurfaceInterface *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::RenderSurface & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->ReplaceSurface(arg2, *arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_GetSurface(void * jarg1) {
  void * jresult ;
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::RenderSurfaceInterface *result = 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      result = (Dali::RenderSurfaceInterface *) &(arg1)->GetSurface();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_GetNativeWindowHandle(void * jarg1) {
  void * jresult ;
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::Any result;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      result = (arg1)->GetNativeWindowHandle();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = new Dali::Any((const Dali::Any &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_ReleaseSurfaceLock(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      (arg1)->ReleaseSurfaceLock();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_SetRenderRefreshRate(void * jarg1, unsigned int jarg2) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->SetRenderRefreshRate(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_Get() {
  void * jresult ;
  Dali::Adaptor *result = 0 ;

  {
    try {
      result = (Dali::Adaptor *) &Dali::Adaptor::Get();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Adaptor_IsAvailable() {
  unsigned int jresult ;
  bool result;

  {
    try {
      result = (bool)Dali::Adaptor::IsAvailable();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_NotifySceneCreated(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      (arg1)->NotifySceneCreated();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_NotifyLanguageChanged(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      (arg1)->NotifyLanguageChanged();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_FeedTouchPoint(void * jarg1, void * jarg2, int jarg3) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::TouchPoint *arg2 = 0 ;
  int arg3 ;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (Dali::TouchPoint *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TouchPoint & type is null", 0);
    return ;
  }
  arg3 = (int)jarg3;
  {
    try {
      (arg1)->FeedTouchPoint(*arg2,arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_FeedWheelEvent(void * jarg1, void * jarg2) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::WheelEvent *arg2 = 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (Dali::WheelEvent *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WheelEvent & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->FeedWheelEvent(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_FeedKeyEvent(void * jarg1, void * jarg2) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::KeyEvent *arg2 = 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  arg2 = (Dali::KeyEvent *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::KeyEvent & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->FeedKeyEvent(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Adaptor_SceneCreated(void * jarg1) {
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      (arg1)->SceneCreated();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_ResizedSignal(void * jarg1) {
  void * jresult ;
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::Adaptor::AdaptorSignalType *result = 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      result = (Dali::Adaptor::AdaptorSignalType *) &(arg1)->ResizedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Adaptor_LanguageChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Adaptor *arg1 = (Dali::Adaptor *) 0 ;
  Dali::Adaptor::AdaptorSignalType *result = 0 ;

  arg1 = (Dali::Adaptor *)jarg1;
  {
    try {
      result = (Dali::Adaptor::AdaptorSignalType *) &(arg1)->LanguageChangedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AdaptorSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Adaptor &) > *arg1 = (Dali::Signal< void (Dali::Adaptor &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Adaptor &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Adaptor &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_AdaptorSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Adaptor &) > *arg1 = (Dali::Signal< void (Dali::Adaptor &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Adaptor &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Adaptor &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AdaptorSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Adaptor &) > *arg1 = (Dali::Signal< void (Dali::Adaptor &) > *) 0 ;
  void (*arg2)(Dali::Adaptor &) = (void (*)(Dali::Adaptor &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Adaptor &) > *)jarg1;
  arg2 = (void (*)(Dali::Adaptor &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AdaptorSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Adaptor &) > *arg1 = (Dali::Signal< void (Dali::Adaptor &) > *) 0 ;
  void (*arg2)(Dali::Adaptor &) = (void (*)(Dali::Adaptor &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Adaptor &) > *)jarg1;
  arg2 = (void (*)(Dali::Adaptor &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AdaptorSignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Adaptor &) > *arg1 = (Dali::Signal< void (Dali::Adaptor &) > *) 0 ;
  Dali::Adaptor *arg2 = 0 ;

  arg1 = (Dali::Signal< void (Dali::Adaptor &) > *)jarg1;
  arg2 = (Dali::Adaptor *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Adaptor & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Adaptor_SA__SP__Sg__Emit(arg1,*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AdaptorSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::Adaptor &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Adaptor &) > *)new Dali::Signal< void (Dali::Adaptor &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AdaptorSignalType(void * jarg1) {
  Dali::Signal< void (Dali::Adaptor &) > *arg1 = (Dali::Signal< void (Dali::Adaptor &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Adaptor &) > *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


#ifdef __cplusplus
}
#endif


