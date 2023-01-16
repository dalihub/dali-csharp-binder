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
#include <dali/public-api/actors/layer.h>

// INTERNAL INCLUDES
#include "common.h"

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


using namespace Dali;


#ifdef __cplusplus
extern "C" {
#endif


// Property

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Layer_Property_CLIPPING_ENABLE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Layer::Property::CLIPPING_ENABLE;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Layer_Property_CLIPPING_BOX_get() {
  int jresult ;
  int result;

  result = (int)Dali::Layer::Property::CLIPPING_BOX;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Layer_Property_BEHAVIOR_get() {
  int jresult ;
  int result;

  result = (int)Dali::Layer::Property::BEHAVIOR;
  jresult = (int)result;
  return jresult;
}


// Creation

SWIGEXPORT Dali::Actor * SWIGSTDCALL CSharp_Dali_Layer_SWIGUpcast(Dali::Layer *jarg1) {
    return (Dali::Actor *)jarg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Layer_Property() {
  void * jresult ;
  Dali::Layer::Property *result = 0 ;

  {
    try {
      result = (Dali::Layer::Property *)new Dali::Layer::Property();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Layer_Property(void * jarg1) {
  Dali::Layer::Property *arg1 = (Dali::Layer::Property *) 0 ;

  arg1 = (Dali::Layer::Property *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Layer__SWIG_0() {
  void * jresult ;
  Dali::Layer *result = 0 ;

  {
    try {
      result = (Dali::Layer *)new Dali::Layer();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Layer_New() {
  void * jresult ;
  Dali::Layer result;

  {
    try {
      result = Dali::Layer::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Layer((const Dali::Layer &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Layer_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Layer result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Layer::DownCast(arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Layer((const Dali::Layer &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Layer(void * jarg1) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Layer__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Layer *arg1 = 0 ;
  Dali::Layer *result = 0 ;

  arg1 = (Dali::Layer *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Layer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Layer *)new Dali::Layer((Dali::Layer const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Layer_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::Layer *arg2 = 0 ;
  Dali::Layer *result = 0 ;

  arg1 = (Dali::Layer *)jarg1;
  arg2 = (Dali::Layer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Layer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Layer *) &(arg1)->operator =((Dali::Layer const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}


// Method

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Layer_GetDepth(void * jarg1) {
  unsigned int jresult ;
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  unsigned int result;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Layer const *)arg1)->GetProperty< int >( Layer::Property::DEPTH );
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_Raise(void * jarg1) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      (arg1)->Raise();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_Lower(void * jarg1) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      (arg1)->Lower();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_RaiseAbove(void * jarg1, void * jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::Layer arg2 ;
  Dali::Layer *argp2 ;

  arg1 = (Dali::Layer *)jarg1;
  argp2 = (Dali::Layer *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Layer", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->RaiseAbove(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_LowerBelow(void * jarg1, void * jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::Layer arg2 ;
  Dali::Layer *argp2 ;

  arg1 = (Dali::Layer *)jarg1;
  argp2 = (Dali::Layer *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Layer", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->LowerBelow(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_RaiseToTop(void * jarg1) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      (arg1)->RaiseToTop();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_LowerToBottom(void * jarg1) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      (arg1)->LowerToBottom();
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_MoveAbove(void * jarg1, void * jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::Layer arg2 ;
  Dali::Layer *argp2 ;

  arg1 = (Dali::Layer *)jarg1;
  argp2 = (Dali::Layer *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Layer", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->MoveAbove(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_MoveBelow(void * jarg1, void * jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::Layer arg2 ;
  Dali::Layer *argp2 ;

  arg1 = (Dali::Layer *)jarg1;
  argp2 = (Dali::Layer *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Layer", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->MoveBelow(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetBehavior(void * jarg1, int jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::Layer::Behavior arg2 ;

  arg1 = (Dali::Layer *)jarg1;
  arg2 = (Dali::Layer::Behavior)jarg2;
  {
    try {
      (arg1)->SetProperty( Layer::Property::BEHAVIOR, arg2 );
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Layer_GetBehavior(void * jarg1) {
  int jresult ;
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::Layer::Behavior result;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      result = (Dali::Layer::Behavior)((Dali::Layer const *)arg1)->GetProperty<Dali::Layer::Behavior>( Dali::Layer::Property::BEHAVIOR );
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetClipping(void * jarg1, bool jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Layer *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetProperty( Dali::Layer::Property::CLIPPING_ENABLE, arg2 );
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Layer_IsClipping(void * jarg1) {
  bool jresult ;
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  bool result;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      result = (bool)((Dali::Layer const *)arg1)->GetProperty< bool >( Dali::Layer::Property::CLIPPING_ENABLE );
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetClippingBox__SWIG_0(void * jarg1, int jarg2, int jarg3, int jarg4, int jarg5) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  int arg5 ;

  arg1 = (Dali::Layer *)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  arg4 = (int)jarg4;
  arg5 = (int)jarg5;
  {
    try {
      (arg1)->SetProperty( Dali::Layer::Property::CLIPPING_BOX, Rect<int32_t>( arg2,arg3,arg4,arg5 ) );
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetClippingBox__SWIG_1(void * jarg1, void * jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::ClippingBox arg2 ;
  Dali::ClippingBox *argp2 ;

  arg1 = (Dali::Layer *)jarg1;
  argp2 = (Dali::ClippingBox *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::ClippingBox", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetProperty( Dali::Layer::Property::CLIPPING_BOX, arg2 );
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Layer_GetClippingBox(void * jarg1) {
  void * jresult ;
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::ClippingBox result;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      result = ((Dali::Layer const *)arg1)->GetProperty< Rect<int32_t> >( Layer::Property::CLIPPING_BOX );
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::ClippingBox((const Dali::ClippingBox &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetDepthTestDisabled(void * jarg1, bool jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Layer *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetProperty( Layer::Property::DEPTH_TEST, !arg2 );
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Layer_IsDepthTestDisabled(void * jarg1) {
  bool jresult ;
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  bool result;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      result = !(bool)((Dali::Layer const *)arg1)->GetProperty< bool >( Layer::Property::DEPTH_TEST );
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetSortFunction(void * jarg1, void * jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  Dali::Layer::SortFunctionType arg2 = (Dali::Layer::SortFunctionType) 0 ;

  arg1 = (Dali::Layer *)jarg1;
  arg2 = (Dali::Layer::SortFunctionType)jarg2;
  {
    try {
      (arg1)->SetSortFunction(arg2);
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetTouchConsumed(void * jarg1, bool jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Layer *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetProperty( Layer::Property::CONSUMES_TOUCH, arg2 );
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Layer_IsTouchConsumed(void * jarg1) {
  bool jresult ;
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  bool result;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      result = (bool)((Dali::Layer const *)arg1)->GetProperty< bool >( Layer::Property::CONSUMES_TOUCH );
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Layer_SetHoverConsumed(void * jarg1, bool jarg2) {
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Layer *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetProperty( Layer::Property::CONSUMES_HOVER, arg2 );
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Layer_IsHoverConsumed(void * jarg1) {
  bool jresult ;
  Dali::Layer *arg1 = (Dali::Layer *) 0 ;
  bool result;

  arg1 = (Dali::Layer *)jarg1;
  {
    try {
      result = (bool)((Dali::Layer const *)arg1)->GetProperty< bool >( Layer::Property::CONSUMES_HOVER );
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}



#ifdef __cplusplus
}
#endif
