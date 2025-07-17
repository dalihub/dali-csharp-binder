/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/public-api/controls/scrollable/item-view/item-layout.h>
#include <dali-toolkit/public-api/controls/scrollable/item-view/item-view.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/dali-toolkit-demo/item-factory.h>

#ifdef __cplusplus
extern "C" {
#endif

// Item factory

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ItemFactory() {
  void * jresult ;
  Dali::Toolkit::ItemFactory *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::ItemFactory *)new SwigDirector_ItemFactory();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemFactory(void * jarg1) {
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemFactory_GetNumberOfItems(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  {
    try {
      result = (unsigned int)(arg1)->GetNumberOfItems();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemFactory_NewItem(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;
  unsigned int arg2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (arg1)->NewItem(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemFactory_ItemReleased(void * jarg1, unsigned int jarg2, void * jarg3) {
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;
  unsigned int arg2 ;
  Dali::Actor arg3 ;
  Dali::Actor *argp3 ;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Actor *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->ItemReleased(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemFactory_ItemReleasedSwigExplicitItemFactory(void * jarg1, unsigned int jarg2, void * jarg3) {
  Dali::Toolkit::ItemFactory *arg1 = (Dali::Toolkit::ItemFactory *) 0 ;
  unsigned int arg2 ;
  Dali::Actor arg3 ;
  Dali::Actor *argp3 ;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Actor *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->Dali::Toolkit::ItemFactory::ItemReleased(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemFactory_director_connect(void *objarg, SwigDirector_ItemFactory::SWIG_Callback0_t callback0, SwigDirector_ItemFactory::SWIG_Callback1_t callback1, SwigDirector_ItemFactory::SWIG_Callback2_t callback2) {
  Dali::Toolkit::ItemFactory *obj = (Dali::Toolkit::ItemFactory *)objarg;
  SwigDirector_ItemFactory *director = dynamic_cast<SwigDirector_ItemFactory *>(obj);
  if (director) {
    director->swig_connect_director(callback0, callback1, callback2);
  }
}

// Item layout

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemLayout(void * jarg1) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_SetLayoutProperties(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Property::Map *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetLayoutProperties((Dali::Property::Map const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemLayout_GetLayoutProperties(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Property::Map result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (arg1)->GetLayoutProperties();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Property::Map((const Dali::Property::Map &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemSize(void * jarg1, unsigned int jarg2, void * jarg3, void * jarg4) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  unsigned int arg2 ;
  Dali::Vector3 *arg3 = 0 ;
  Dali::Vector3 *arg4 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (Dali::Vector3 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 & type is null", 0);
    return ;
  }
  {
    try {
      ((Dali::Toolkit::ItemLayout const *)arg1)->GetItemSize(arg2,(Dali::Vector3 const &)*arg3,*arg4);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_SetItemSize(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Vector3 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetItemSize((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetMinimumLayoutPosition(void * jarg1, unsigned int jarg2, void * jarg3) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  unsigned int arg2 ;
  Dali::Vector3 arg3 ;
  Dali::Vector3 *argp3 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Vector3 *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector3", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetMinimumLayoutPosition(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetClosestAnchorPosition(void * jarg1, float jarg2) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float arg2 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetClosestAnchorPosition(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemScrollToPosition(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  unsigned int arg2 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetItemScrollToPosition(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemsWithinArea(void * jarg1, float jarg2, void * jarg3) {
  void * jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float arg2 ;
  Dali::Vector3 arg3 ;
  Dali::Vector3 *argp3 ;
  SwigValueWrapper< Dali::Toolkit::ItemRange > result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (float)jarg2;
  argp3 = (Dali::Vector3 *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector3", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = ((Dali::Toolkit::ItemLayout const *)arg1)->GetItemsWithinArea(arg2,arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemRange((const Dali::Toolkit::ItemRange &)result);
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetClosestOnScreenLayoutPosition(void * jarg1, int jarg2, float jarg3, void * jarg4) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  int arg2 ;
  float arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (int)jarg2;
  arg3 = (float)jarg3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (float)(arg1)->GetClosestOnScreenLayoutPosition(arg2,arg3,(Dali::Vector3 const &)*arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemLayout_GetReserveItemCount(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Vector3 arg2 ;
  Dali::Vector3 *argp2 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  argp2 = (Dali::Vector3 *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector3", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::ItemLayout const *)arg1)->GetReserveItemCount(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_GetDefaultItemSize(void * jarg1, unsigned int jarg2, void * jarg3, void * jarg4) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  unsigned int arg2 ;
  Dali::Vector3 *arg3 = 0 ;
  Dali::Vector3 *arg4 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  arg3 = (Dali::Vector3 *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 & type is null", 0);
    return ;
  }
  {
    try {
      ((Dali::Toolkit::ItemLayout const *)arg1)->GetDefaultItemSize(arg2,(Dali::Vector3 const &)*arg3,*arg4);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemLayout_GetScrollDirection(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Degree result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ItemLayout const *)arg1)->GetScrollDirection();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Degree((const Dali::Degree &)result);
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetScrollSpeedFactor(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetScrollSpeedFactor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetMaximumSwipeSpeed(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetMaximumSwipeSpeed();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemFlickAnimationDuration(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetItemFlickAnimationDuration();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemLayout_GetNextFocusItemID(void * jarg1, int jarg2, int jarg3, int jarg4, bool jarg5) {
  int jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  int arg2 ;
  int arg3 ;
  Dali::Toolkit::Control::KeyboardFocus::Direction arg4 ;
  bool arg5 ;
  int result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  arg4 = (Dali::Toolkit::Control::KeyboardFocus::Direction)jarg4;
  arg5 = jarg5 ? true : false;
  {
    try {
      result = (int)(arg1)->GetNextFocusItemID(arg2,arg3,arg4,arg5);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemLayout_GetFlickSpeedFactor(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemLayout const *)arg1)->GetFlickSpeedFactor();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemLayout_ApplyConstraints(void * jarg1, void * jarg2, int jarg3, void * jarg4, void * jarg5) {
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  Dali::Actor *arg2 = 0 ;
  int arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  Dali::Actor *arg5 = 0 ;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (Dali::Actor *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor & type is null", 0);
    return ;
  }
  arg3 = (int)jarg3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  arg5 = (Dali::Actor *)jarg5;
  if (!arg5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->ApplyConstraints(*arg2,arg3,(Dali::Vector3 const &)*arg4,(Dali::Actor const &)*arg5);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemLayout_GetItemPosition(void * jarg1, int jarg2, float jarg3, void * jarg4) {
  void * jresult ;
  Dali::Toolkit::ItemLayout *arg1 = (Dali::Toolkit::ItemLayout *) 0 ;
  int arg2 ;
  float arg3 ;
  Dali::Vector3 *arg4 = 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Toolkit::ItemLayout *)jarg1;
  arg2 = (int)jarg2;
  arg3 = (float)jarg3;
  arg4 = (Dali::Vector3 *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return 0;
  }
  {
    try {
      result = ((Dali::Toolkit::ItemLayout const *)arg1)->GetItemPosition(arg2,arg3,(Dali::Vector3 const &)*arg4);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}

// Item range

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ItemRange__SWIG_0(unsigned int jarg1, unsigned int jarg2) {
  void * jresult ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  Dali::Toolkit::ItemRange *result = 0 ;

  arg1 = (unsigned int)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (Dali::Toolkit::ItemRange *)new Dali::Toolkit::ItemRange(arg1,arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ItemRange__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemRange *arg1 = 0 ;
  Dali::Toolkit::ItemRange *result = 0 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemRange const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ItemRange *)new Dali::Toolkit::ItemRange((Dali::Toolkit::ItemRange const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemRange_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  Dali::Toolkit::ItemRange *arg2 = 0 ;
  Dali::Toolkit::ItemRange *result = 0 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (Dali::Toolkit::ItemRange *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemRange const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::ItemRange *) &(arg1)->operator =((Dali::Toolkit::ItemRange const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ItemRange_Within(void * jarg1, unsigned int jarg2) {
  bool jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int arg2 ;
  bool result;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (bool)(arg1)->Within(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemRange_Intersection(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  Dali::Toolkit::ItemRange *arg2 = 0 ;
  SwigValueWrapper< Dali::Toolkit::ItemRange > result;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (Dali::Toolkit::ItemRange *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemRange const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (arg1)->Intersection((Dali::Toolkit::ItemRange const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemRange((const Dali::Toolkit::ItemRange &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemRange_begin_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->begin = arg2;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemRange_begin_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  result = (unsigned int) ((arg1)->begin);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemRange_end_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->end = arg2;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemRange_end_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  result = (unsigned int) ((arg1)->end);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemRange(void * jarg1) {
  Dali::Toolkit::ItemRange *arg1 = (Dali::Toolkit::ItemRange *) 0 ;

  arg1 = (Dali::Toolkit::ItemRange *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

// Item view

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_MINIMUM_SWIPE_SPEED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::MINIMUM_SWIPE_SPEED;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_MINIMUM_SWIPE_DISTANCE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::MINIMUM_SWIPE_DISTANCE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_WHEEL_SCROLL_DISTANCE_STEP_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::WHEEL_SCROLL_DISTANCE_STEP;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_SNAP_TO_ITEM_ENABLED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::SNAP_TO_ITEM_ENABLED;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_REFRESH_INTERVAL_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::REFRESH_INTERVAL;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_LAYOUT_POSITION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::LAYOUT_POSITION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_SCROLL_SPEED_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::SCROLL_SPEED;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_OVERSHOOT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::OVERSHOOT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_SCROLL_DIRECTION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::SCROLL_DIRECTION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_LAYOUT_ORIENTATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::LAYOUT_ORIENTATION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemView_Property_SCROLL_CONTENT_SIZE_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::ItemView::Property::SCROLL_CONTENT_SIZE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemView(void * jarg1) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_New(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemFactory *arg1 = 0 ;
  Dali::Toolkit::ItemView result;

  arg1 = (Dali::Toolkit::ItemFactory *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemFactory & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Toolkit::ItemView::New(*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemView((const Dali::Toolkit::ItemView &)result);
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemView_GetLayoutCount(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::ItemView const *)arg1)->GetLayoutCount();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_AddLayout(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemLayout *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemLayout *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemLayout & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->AddLayout(*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_RemoveLayout(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->RemoveLayout(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetLayout(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  unsigned int arg2 ;
  SwigValueWrapper< Dali::IntrusivePtr< Dali::Toolkit::ItemLayout > > result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetLayout(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemLayoutPtr((const Dali::Toolkit::ItemLayoutPtr &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetActiveLayout(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  SwigValueWrapper< Dali::IntrusivePtr< Dali::Toolkit::ItemLayout > > result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetActiveLayout();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::ItemLayoutPtr((const Dali::Toolkit::ItemLayoutPtr &)result);
  return jresult;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemView_GetCurrentLayoutPosition(void * jarg1, unsigned int jarg2) {
  float jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemId arg2 ;
  float result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemId)jarg2;
  {
    try {
      result = (float)((Dali::Toolkit::ItemView const *)arg1)->GetCurrentLayoutPosition(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_ActivateLayout(void * jarg1, unsigned int jarg2, void * jarg3, float jarg4) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  unsigned int arg2 ;
  Dali::Vector3 arg3 ;
  float arg4 ;
  Dali::Vector3 *argp3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (unsigned int)jarg2;
  argp3 = (Dali::Vector3 *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector3", 0);
    return ;
  }
  arg3 = *argp3;
  arg4 = (float)jarg4;
  {
    try {
      (arg1)->ActivateLayout(arg2,arg3,arg4);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_DeactivateCurrentLayout(void * jarg1) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      (arg1)->DeactivateCurrentLayout();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetAnchoring(void * jarg1, bool jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetAnchoring(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ItemView_GetAnchoring(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::ItemView const *)arg1)->GetAnchoring();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetAnchoringDuration(void * jarg1, float jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      (arg1)->SetAnchoringDuration(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ItemView_GetAnchoringDuration(void * jarg1) {
  float jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (float)((Dali::Toolkit::ItemView const *)arg1)->GetAnchoringDuration();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_ScrollToItem(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemId arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemId)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ScrollToItem(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_Refresh(void * jarg1) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      (arg1)->Refresh();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetItem(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemId arg2 ;
  Dali::Actor result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemId)jarg2;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetItem(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Actor((const Dali::Actor &)result);
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemView_GetItemId(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Actor arg2 ;
  Dali::Actor *argp2 ;
  Dali::Toolkit::ItemId result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (Dali::Toolkit::ItemId)((Dali::Toolkit::ItemView const *)arg1)->GetItemId(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_InsertItem(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::Item arg2 ;
  float arg3 ;
  Dali::Toolkit::Item *argp2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  argp2 = (Dali::Toolkit::Item *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Item", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->InsertItem(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_InsertItems(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemContainer *arg2 = 0 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemContainer const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->InsertItems((Dali::Toolkit::ItemContainer const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_RemoveItem(void * jarg1, unsigned int jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemId arg2 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemId)jarg2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->RemoveItem(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_RemoveItems(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemIdContainer *arg2 = 0 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemIdContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemIdContainer const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->RemoveItems((Dali::Toolkit::ItemIdContainer const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_ReplaceItem(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::Item arg2 ;
  float arg3 ;
  Dali::Toolkit::Item *argp2 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  argp2 = (Dali::Toolkit::Item *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Item", 0);
    return ;
  }
  arg2 = *argp2;
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ReplaceItem(arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_ReplaceItems(void * jarg1, void * jarg2, float jarg3) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemContainer *arg2 = 0 ;
  float arg3 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemContainer const & type is null", 0);
    return ;
  }
  arg3 = (float)jarg3;
  {
    try {
      (arg1)->ReplaceItems((Dali::Toolkit::ItemContainer const &)*arg2,arg3);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetItemsParentOrigin(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Vector3 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetItemsParentOrigin((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetItemsParentOrigin(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetItemsParentOrigin();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_SetItemsAnchorPoint(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Vector3 *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Vector3 *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->SetItemsAnchorPoint((Dali::Vector3 const &)*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_GetItemsAnchorPoint(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Vector3 result;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::ItemView const *)arg1)->GetItemsAnchorPoint();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector3((const Dali::Vector3 &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemView_GetItemsRange(void * jarg1, void * jarg2) {
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemRange *arg2 = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  arg2 = (Dali::Toolkit::ItemRange *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::ItemRange & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->GetItemsRange(*arg2);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ItemView_LayoutActivatedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::ItemView *arg1 = (Dali::Toolkit::ItemView *) 0 ;
  Dali::Toolkit::ItemView::LayoutActivatedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::ItemView *)jarg1;
  {
    try {
      result = (Dali::Toolkit::ItemView::LayoutActivatedSignalType *) &(arg1)->LayoutActivatedSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void *)result;
  return jresult;
}

#ifdef __cplusplus
}
#endif
