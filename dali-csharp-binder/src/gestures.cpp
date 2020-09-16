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

#ifndef CSHARP_GESTURES
#define CSHARP_GESTURES
#endif

#include "common.h"
#include <dali/public-api/events/rotation-gesture.h>
#include <dali/public-api/events/rotation-gesture-detector.h>

#ifdef __cplusplus
extern "C" {
#endif

using namespace Dali;

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > const *self)
{
  return self->Empty();
}

SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > const *self)
{
  return self->GetConnectionCount();
}

SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *self,void (*func)(Dali::Actor,Dali::RotationGesture const &))
{
  self->Connect( func );
}

SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *self,void (*func)(Dali::Actor,Dali::RotationGesture const &))
{
  self->Disconnect( func );
}

SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *self,Dali::Actor arg1,Dali::RotationGesture const &arg2)
{
  self->Emit( arg1, arg2 );
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RotationGestureDetector__SWIG_0()
{
  void * jresult ;
  Dali::RotationGestureDetector *result = 0 ;

  {
    try {
      result = (Dali::RotationGestureDetector *)new Dali::RotationGestureDetector();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RotationGestureDetector_New() {
  void * jresult ;
  Dali::RotationGestureDetector result;

  {
    try {
      result = Dali::RotationGestureDetector::New();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = new Dali::RotationGestureDetector((const Dali::RotationGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RotationGestureDetector_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::RotationGestureDetector result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::RotationGestureDetector::DownCast(arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = new Dali::RotationGestureDetector((const Dali::RotationGestureDetector &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_RotationGestureDetector(void * jarg1) {
  Dali::RotationGestureDetector *arg1 = (Dali::RotationGestureDetector *) 0 ;

  arg1 = (Dali::RotationGestureDetector *)jarg1;
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
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RotationGestureDetector__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::RotationGestureDetector *arg1 = 0 ;
  Dali::RotationGestureDetector *result = 0 ;

  arg1 = (Dali::RotationGestureDetector *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::RotationGestureDetector const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::RotationGestureDetector *)new Dali::RotationGestureDetector((Dali::RotationGestureDetector const &)*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RotationGestureDetector_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::RotationGestureDetector *arg1 = (Dali::RotationGestureDetector *) 0 ;
  Dali::RotationGestureDetector *arg2 = 0 ;
  Dali::RotationGestureDetector *result = 0 ;

  arg1 = (Dali::RotationGestureDetector *)jarg1;
  arg2 = (Dali::RotationGestureDetector *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::RotationGestureDetector const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::RotationGestureDetector *) &(arg1)->operator =((Dali::RotationGestureDetector const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RotationGestureDetector_DetectedSignal(void * jarg1) {
  void * jresult ;
  Dali::RotationGestureDetector *arg1 = (Dali::RotationGestureDetector *) 0 ;
  Dali::RotationGestureDetector::DetectedSignalType *result = 0 ;

  arg1 = (Dali::RotationGestureDetector *)jarg1;
  {
    try {
      result = (Dali::RotationGestureDetector::DetectedSignalType *) &(arg1)->DetectedSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RotationGesture__SWIG_0() {
  void * jresult ;
  Dali::RotationGesture *result = 0 ;

  {
    try {
      result = (Dali::RotationGesture *)new Dali::RotationGesture();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RotationGesture__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::RotationGesture *arg1 = 0 ;
  Dali::RotationGesture *result = 0 ;

  arg1 = (Dali::RotationGesture *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::RotationGesture const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::RotationGesture *)new Dali::RotationGesture((Dali::RotationGesture const &)*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RotationGesture_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::RotationGesture *arg1 = (Dali::RotationGesture *) 0 ;
  Dali::RotationGesture *arg2 = 0 ;
  Dali::RotationGesture *result = 0 ;

  arg1 = (Dali::RotationGesture *)jarg1;
  arg2 = (Dali::RotationGesture *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::RotationGesture const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::RotationGesture *) &(arg1)->operator =((Dali::RotationGesture const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_RotationGesture(void * jarg1) {
  Dali::RotationGesture *arg1 = (Dali::RotationGesture *) 0 ;

  arg1 = (Dali::RotationGesture *)jarg1;
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
    } catch (Dali::DaliException& e) {
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

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RotationGesture_rotation_get(void * jarg1) {
  float jresult ;
  Dali::RotationGesture *arg1 = (Dali::RotationGesture *) 0 ;
  float result;

  arg1 = (Dali::RotationGesture *)jarg1;
  result = (float) ((arg1)->GetRotation().radian);
  jresult = result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RotationGesture_screenCenterPoint_get(void * jarg1) {
  void * jresult ;
  Dali::RotationGesture *arg1 = (Dali::RotationGesture *) 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::RotationGesture *)jarg1;
  {
    try {
      result = ((Dali::RotationGesture const *)arg1)->GetScreenCenterPoint();
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
  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RotationGesture_localCenterPoint_get(void * jarg1) {
  void * jresult ;
  Dali::RotationGesture *arg1 = (Dali::RotationGesture *) 0 ;
  Dali::Vector2 result;

  arg1 = (Dali::RotationGesture *)jarg1;
  {
    try {
      result = ((Dali::RotationGesture const *)arg1)->GetLocalCenterPoint();
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
  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_RotationGestureDetectedSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_RotationGestureDetectedSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RotationGestureDetectedSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *) 0 ;
  void (*arg2)(Dali::Actor,Dali::RotationGesture const &) = (void (*)(Dali::Actor,Dali::RotationGesture const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *)jarg1;
  arg2 = (void (*)(Dali::Actor,Dali::RotationGesture const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RotationGestureDetectedSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *) 0 ;
  void (*arg2)(Dali::Actor,Dali::RotationGesture const &) = (void (*)(Dali::Actor,Dali::RotationGesture const &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *)jarg1;
  arg2 = (void (*)(Dali::Actor,Dali::RotationGesture const &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RotationGestureDetectedSignal_Emit(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *) 0 ;
  Dali::Actor arg2 ;
  Dali::RotationGesture *arg3 = 0 ;
  Dali::Actor *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (Dali::RotationGesture *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::RotationGesture const & type is null", 0);
    return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Actor_Sc_Dali_RotationGesture_SS_const_SA__SP__Sg__Emit(arg1,arg2,(Dali::RotationGesture const &)*arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RotationGestureDetectedSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *)new Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException& e) {
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_RotationGestureDetectedSignal(void * jarg1) {
  Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Actor,Dali::RotationGesture const &) > *)jarg1;
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
    } catch (Dali::DaliException& e) {
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

SWIGEXPORT Dali::GestureDetector * SWIGSTDCALL CSharp_Dali_RotationGestureDetector_SWIGUpcast(Dali::RotationGestureDetector *jarg1) {
    return (Dali::GestureDetector *)jarg1;
}

SWIGEXPORT Dali::Gesture * SWIGSTDCALL CSharp_Dali_RotationGesture_SWIGUpcast(Dali::RotationGesture *jarg1) {
    return (Dali::Gesture *)jarg1;
}

#ifdef __cplusplus
}
#endif

