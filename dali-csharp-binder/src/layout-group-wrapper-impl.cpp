/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
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

// CLASS HEADER
#include "layout-group-wrapper-impl.h"

// INTERNAL INCLUDES

#ifdef __cplusplus
extern "C" {
#endif

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

using namespace Dali::Toolkit;

SwigDirector_LayoutGroupWrapperImpl::SwigDirector_LayoutGroupWrapperImpl() : Dali::Toolkit::Internal::LayoutGroup()
{
  swig_init_callbacks();
}

SwigDirector_LayoutGroupWrapperImpl::~SwigDirector_LayoutGroupWrapperImpl()
{

}

Dali::Toolkit::Internal::LayoutParent *SwigDirector_LayoutGroupWrapperImpl::GetParent()
{
  Dali::Toolkit::Internal::LayoutParent *c_result = 0 ;
  void * jresult = 0 ;

  if (!swig_callbackGetParent)
  {
    return Dali::Toolkit::Internal::LayoutItem::GetParent();
  }
  else
  {
    jresult = (void *) swig_callbackGetParent();
    c_result = (Dali::Toolkit::Internal::LayoutParent *)jresult;
  }
  return c_result;
}

void SwigDirector_LayoutGroupWrapperImpl::OnMeasure(Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec)
{
  void * jwidthMeasureSpec  ;
  void * jheightMeasureSpec  ;

  if (!swig_callbackOnMeasure)
  {
    Dali::Toolkit::Internal::LayoutItem::OnMeasure(widthMeasureSpec,heightMeasureSpec);
    return;
  }
  else
  {
    jwidthMeasureSpec = (void *)new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)widthMeasureSpec);
    jheightMeasureSpec = (void *)new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)heightMeasureSpec);
    swig_callbackOnMeasure(jwidthMeasureSpec, jheightMeasureSpec);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::OnLayout(bool changed, Dali::Toolkit::LayoutLength left, Dali::Toolkit::LayoutLength top, Dali::Toolkit::LayoutLength right, Dali::Toolkit::LayoutLength bottom)
{
  unsigned int jchanged  ;
  void * jleft  ;
  void * jtop  ;
  void * jright  ;
  void * jbottom  ;

  if (!swig_callbackOnLayout)
  {
    Dali::Toolkit::Internal::LayoutItem::OnLayout(changed,left,top,right,bottom);
    return;
  }
  else
  {
    jchanged = changed;
    jleft = (void *)new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)left);
    jtop = (void *)new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)top);
    jright = (void *)new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)right);
    jbottom = (void *)new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)bottom);
    swig_callbackOnLayout(jchanged, jleft, jtop, jright, jbottom);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::OnSizeChanged(LayoutSize newSize, LayoutSize oldSize)
{
  void * jnewSize  ;
  void * joldSize  ;

  if (!swig_callbackOnSizeChanged)
  {
    Dali::Toolkit::Internal::LayoutItem::OnSizeChanged(newSize,oldSize);
    return;
  }
  else
  {
    jnewSize = (void *)new LayoutSize((const LayoutSize &)newSize);
    joldSize = (void *)new LayoutSize((const LayoutSize &)oldSize);
    swig_callbackOnSizeChanged(jnewSize, joldSize);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::OnChildAdd(Dali::Toolkit::Internal::LayoutItem &child)
{
  void * jchild = 0 ;

  if (!swig_callbackOnChildAdd)
  {
    Dali::Toolkit::Internal::LayoutGroup::OnChildAdd(child);
    return;
  }
  else
  {
    jchild = (Dali::Toolkit::Internal::LayoutItem *) &child;
    swig_callbackOnChildAdd(jchild);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::OnChildRemove(Dali::Toolkit::Internal::LayoutItem &child)
{
  void * jchild = 0 ;

  if (!swig_callbackOnChildRemove)
  {
    Dali::Toolkit::Internal::LayoutGroup::OnChildRemove(child);
    return;
  }
  else
  {
    jchild = (Dali::Toolkit::Internal::LayoutItem *) &child;
    swig_callbackOnChildRemove(jchild);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::DoInitialize()
{
  if (!swig_callbackDoInitialize)
  {
    Dali::Toolkit::Internal::LayoutGroup::DoInitialize();
    return;
  }
  else
  {
    swig_callbackDoInitialize();
  }
}

void SwigDirector_LayoutGroupWrapperImpl::DoRegisterChildProperties(std::string const &containerType)
{
  char * jcontainerType = 0 ;

  if (!swig_callbackDoRegisterChildProperties)
  {
    Dali::Toolkit::Internal::LayoutGroup::DoRegisterChildProperties(containerType);
    return;
  }
  else
  {
    jcontainerType = SWIG_csharp_string_callback((&containerType)->c_str());
    swig_callbackDoRegisterChildProperties(jcontainerType);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::GenerateDefaultChildPropertyValues(Dali::Handle child)
{
  void * jchild  ;

  if (!swig_callbackGenerateDefaultChildPropertyValues)
  {
    Dali::Toolkit::Internal::LayoutGroup::GenerateDefaultChildPropertyValues(child);
    return;
  }
  else
  {
    jchild = (void *)new Dali::Handle((const Dali::Handle &)child);
    swig_callbackGenerateDefaultChildPropertyValues(jchild);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::MeasureChildren(Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec)
{
  void * jwidthMeasureSpec  ;
  void * jheightMeasureSpec  ;

  if (!swig_callbackMeasureChildren)
  {
    Dali::Toolkit::Internal::LayoutGroup::MeasureChildren(widthMeasureSpec,heightMeasureSpec);
    return;
  }
  else
  {
    jwidthMeasureSpec = (void *)new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)widthMeasureSpec);
    jheightMeasureSpec = (void *)new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)heightMeasureSpec);
    swig_callbackMeasureChildren(jwidthMeasureSpec, jheightMeasureSpec);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::MeasureChild(Dali::Toolkit::Internal::LayoutItemPtr child, Dali::Toolkit::MeasureSpec parentWidthMeasureSpec, Dali::Toolkit::MeasureSpec parentHeightMeasureSpec)
{
  void * jchild  ;
  void * jparentWidthMeasureSpec  ;
  void * jparentHeightMeasureSpec  ;

  if (!swig_callbackMeasureChild)
  {
    Dali::Toolkit::Internal::LayoutGroup::MeasureChild(child,parentWidthMeasureSpec,parentHeightMeasureSpec);
    return;
  }
  else
  {
    jchild = (void *)new Dali::Toolkit::Internal::LayoutItemPtr((const Dali::Toolkit::Internal::LayoutItemPtr &)child);
    jparentWidthMeasureSpec = (void *)new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)parentWidthMeasureSpec);
    jparentHeightMeasureSpec = (void *)new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)parentHeightMeasureSpec);
    swig_callbackMeasureChild(jchild, jparentWidthMeasureSpec, jparentHeightMeasureSpec);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::MeasureChildWithMargins(Dali::Toolkit::Internal::LayoutItemPtr child, Dali::Toolkit::MeasureSpec parentWidthMeasureSpec, Dali::Toolkit::LayoutLength widthUsed, Dali::Toolkit::MeasureSpec parentHeightMeasureSpec, Dali::Toolkit::LayoutLength heightUsed)
{
  void * jchild  ;
  void * jparentWidthMeasureSpec  ;
  void * jwidthUsed  ;
  void * jparentHeightMeasureSpec  ;
  void * jheightUsed  ;

  if (!swig_callbackMeasureChildWithMargins)
  {
    Dali::Toolkit::Internal::LayoutGroup::MeasureChildWithMargins(child,parentWidthMeasureSpec,widthUsed,parentHeightMeasureSpec,heightUsed);
    return;
  }
  else
  {
    jchild = (void *)new Dali::Toolkit::Internal::LayoutItemPtr((const Dali::Toolkit::Internal::LayoutItemPtr &)child);
    jparentWidthMeasureSpec = (void *)new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)parentWidthMeasureSpec);
    jwidthUsed = (void *)new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)widthUsed);
    jparentHeightMeasureSpec = (void *)new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)parentHeightMeasureSpec);
    jheightUsed = (void *)new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)heightUsed);
    swig_callbackMeasureChildWithMargins(jchild, jparentWidthMeasureSpec, jwidthUsed, jparentHeightMeasureSpec, jheightUsed);
  }
}

void SwigDirector_LayoutGroupWrapperImpl::swig_connect_director(SWIG_Callback0_t callbackGetParent, SWIG_Callback3_t callbackOnMeasure, SWIG_Callback4_t callbackOnLayout, SWIG_Callback5_t callbackOnSizeChanged, SWIG_Callback6_t callbackOnInitialize, SWIG_Callback7_t callbackOnChildAdd, SWIG_Callback8_t callbackOnChildRemove, SWIG_Callback9_t callbackDoInitialize, SWIG_Callback10_t callbackDoRegisterChildProperties, SWIG_Callback11_t callbackGenerateDefaultChildPropertyValues, SWIG_Callback12_t callbackMeasureChildren, SWIG_Callback13_t callbackMeasureChild, SWIG_Callback14_t callbackMeasureChildWithMargins)
{
  swig_callbackGetParent = callbackGetParent;
  swig_callbackOnMeasure = callbackOnMeasure;
  swig_callbackOnLayout = callbackOnLayout;
  swig_callbackOnSizeChanged = callbackOnSizeChanged;
  swig_callbackOnInitialize = callbackOnInitialize;
  swig_callbackOnChildAdd = callbackOnChildAdd;
  swig_callbackOnChildRemove = callbackOnChildRemove;
  swig_callbackDoInitialize = callbackDoInitialize;
  swig_callbackDoRegisterChildProperties = callbackDoRegisterChildProperties;
  swig_callbackGenerateDefaultChildPropertyValues = callbackGenerateDefaultChildPropertyValues;
  swig_callbackMeasureChildren = callbackMeasureChildren;
  swig_callbackMeasureChild = callbackMeasureChild;
  swig_callbackMeasureChildWithMargins = callbackMeasureChildWithMargins;
}

void SwigDirector_LayoutGroupWrapperImpl::swig_init_callbacks()
{
  swig_callbackGetParent = 0;
  swig_callbackOnMeasure = 0;
  swig_callbackOnLayout = 0;
  swig_callbackOnSizeChanged = 0;
  swig_callbackOnInitialize = 0;
  swig_callbackOnChildAdd = 0;
  swig_callbackOnChildRemove = 0;
  swig_callbackDoInitialize = 0;
  swig_callbackDoRegisterChildProperties = 0;
  swig_callbackGenerateDefaultChildPropertyValues = 0;
  swig_callbackMeasureChildren = 0;
  swig_callbackMeasureChild = 0;
  swig_callbackMeasureChildWithMargins = 0;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_Add(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = 0 ;
  Dali::Toolkit::LayoutGroup::LayoutId result;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::LayoutItem & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutGroup::LayoutId)(arg1)->Add(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_Remove__SWIG_0(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutGroup::LayoutId arg2 ;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::LayoutGroup::LayoutId)jarg2;
  {
    try {
      (arg1)->Remove(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_Remove__SWIG_1(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::LayoutItem & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Remove(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_RemoveAll(void * jarg1) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  {
    try {
      (arg1)->RemoveAll();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_GetChildCount(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::Internal::LayoutGroup const *)arg1)->GetChildCount();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_GetChildAt(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  unsigned int arg2 ;
  Dali::Toolkit::Internal::LayoutItemPtr result;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutGroup const *)arg1)->GetChildAt(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = new Dali::Toolkit::Internal::LayoutItemPtr((const Dali::Toolkit::Internal::LayoutItemPtr &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_GetChildId(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = 0 ;
  Dali::Toolkit::LayoutGroup::LayoutId result;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::LayoutItem & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutGroup::LayoutId)((Dali::Toolkit::Internal::LayoutGroup const *)arg1)->GetChildId(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_GetChild(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutGroup::LayoutId arg2 ;
  Dali::Toolkit::Internal::LayoutItemPtr result;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::LayoutGroup::LayoutId)jarg2;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutGroup const *)arg1)->GetChild(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = new Dali::Toolkit::Internal::LayoutItemPtr((const Dali::Toolkit::Internal::LayoutItemPtr &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_OnChildAdd(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::LayoutItem & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->OnChildAdd(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_OnChildAddSwigExplicitLayoutGroupWrapperImpl(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::LayoutItem & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Dali::Toolkit::Internal::LayoutGroup::OnChildAdd(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_OnChildRemove(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::LayoutItem & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->OnChildRemove(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_OnChildRemoveSwigExplicitLayoutGroupWrapperImpl(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Internal::LayoutItem & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Dali::Toolkit::Internal::LayoutGroup::OnChildRemove(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_GetChildMeasureSpec(void * jarg1, void * jarg2, void * jarg3) {
  void * jresult ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg1 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg3 ;
  Dali::Toolkit::MeasureSpec *argp1 ;
  Dali::Toolkit::LayoutLength *argp2 ;
  Dali::Toolkit::LayoutLength *argp3 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > result;

  argp1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return 0;
  }
  arg1 = *argp1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return 0;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::LayoutLength *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = Dali::Toolkit::Internal::LayoutGroup::GetChildMeasureSpec(arg1,arg2,arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_DoInitialize(void * jarg1) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->DoInitialize();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_DoInitializeSwigExplicitLayoutGroupWrapperImpl(void * jarg1) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->DoInitializeSwigPublic();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_DoRegisterChildProperties(void * jarg1, char * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  std::string *arg2 = 0 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->DoRegisterChildProperties((std::string const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_DoRegisterChildPropertiesSwigExplicitLayoutGroupWrapperImpl(void * jarg1, char * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  std::string *arg2 = 0 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->DoRegisterChildPropertiesSwigPublic((std::string const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_GenerateDefaultChildPropertyValues(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Handle arg2 ;
  Dali::Handle *argp2 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  argp2 = (Dali::Handle *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Handle", 0);
    return ;
  }
  arg2 = *argp2;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->GenerateDefaultChildPropertyValues(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_GenerateDefaultChildPropertyValuesSwigExplicitLayoutGroupWrapperImpl(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Handle arg2 ;
  Dali::Handle *argp2 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  argp2 = (Dali::Handle *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Handle", 0);
    return ;
  }
  arg2 = *argp2;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->GenerateDefaultChildPropertyValuesSwigPublic(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_MeasureChildren(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  argp2 = (Dali::Toolkit::MeasureSpec *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasureSpec *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg3 = *argp3;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->MeasureChildren(arg2,arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_MeasureChildrenSwigExplicitLayoutGroupWrapperImpl(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  argp2 = (Dali::Toolkit::MeasureSpec *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasureSpec *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg3 = *argp3;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->MeasureChildrenSwigPublic(arg2,arg3);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_MeasureChild(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItemPtr arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg4 ;
  Dali::Toolkit::Internal::LayoutItemPtr *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  Dali::Toolkit::MeasureSpec *argp4 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  argp2 = (Dali::Toolkit::Internal::LayoutItemPtr *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Internal::LayoutItemPtr", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasureSpec *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::Toolkit::MeasureSpec *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg4 = *argp4;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->MeasureChild(arg2,arg3,arg4);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_MeasureChildSwigExplicitLayoutGroupWrapperImpl(void * jarg1, void * jarg2, void * jarg3, void * jarg4) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItemPtr arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg4 ;
  Dali::Toolkit::Internal::LayoutItemPtr *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  Dali::Toolkit::MeasureSpec *argp4 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  argp2 = (Dali::Toolkit::Internal::LayoutItemPtr *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Internal::LayoutItemPtr", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasureSpec *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::Toolkit::MeasureSpec *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg4 = *argp4;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->MeasureChildSwigPublic(arg2,arg3,arg4);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_MeasureChildWithMargins(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5, void * jarg6) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItemPtr arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg4 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg5 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg6 ;
  Dali::Toolkit::Internal::LayoutItemPtr *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  Dali::Toolkit::LayoutLength *argp4 ;
  Dali::Toolkit::MeasureSpec *argp5 ;
  Dali::Toolkit::LayoutLength *argp6 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  argp2 = (Dali::Toolkit::Internal::LayoutItemPtr *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Internal::LayoutItemPtr", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasureSpec *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::Toolkit::LayoutLength *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::Toolkit::MeasureSpec *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg5 = *argp5;
  argp6 = (Dali::Toolkit::LayoutLength *)jarg6;
  if (!argp6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg6 = *argp6;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->MeasureChildWithMargins(arg2,arg3,arg4,arg5,arg6);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_MeasureChildWithMarginsSwigExplicitLayoutGroupWrapperImpl(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5, void * jarg6) {
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::Internal::LayoutItemPtr arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg4 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg5 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg6 ;
  Dali::Toolkit::Internal::LayoutItemPtr *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  Dali::Toolkit::LayoutLength *argp4 ;
  Dali::Toolkit::MeasureSpec *argp5 ;
  Dali::Toolkit::LayoutLength *argp6 ;
  SwigDirector_LayoutGroupWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  argp2 = (Dali::Toolkit::Internal::LayoutItemPtr *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Internal::LayoutItemPtr", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasureSpec *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::Toolkit::LayoutLength *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::Toolkit::MeasureSpec *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg5 = *argp5;
  argp6 = (Dali::Toolkit::LayoutLength *)jarg6;
  if (!argp6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg6 = *argp6;
  darg = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(arg1);
  {
    try {
      (darg)->MeasureChildWithMarginsSwigPublic(arg2,arg3,arg4,arg5,arg6);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_director_connect(void *objarg, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback0_t callback0, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback3_t callback3, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback4_t callback4, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback5_t callback5, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback6_t callback6, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback7_t callback7, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback8_t callback8, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback9_t callback9, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback10_t callback10, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback11_t callback11, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback12_t callback12, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback13_t callback13, SwigDirector_LayoutGroupWrapperImpl::SWIG_Callback14_t callback14) {
  Dali::Toolkit::Internal::LayoutGroup *obj = (Dali::Toolkit::Internal::LayoutGroup *)objarg;
  SwigDirector_LayoutGroupWrapperImpl *director = dynamic_cast<SwigDirector_LayoutGroupWrapperImpl *>(obj);
  if (director) {
    director->swig_connect_director(callback0, callback3, callback4, callback5, callback6, callback7, callback8, callback9, callback10, callback11, callback12, callback13, callback14);
  }
}


/*SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetImplementation__SWIG_2(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutGroup *arg1 = 0 ;
  Dali::Toolkit::Internal::LayoutGroup *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutGroup & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutGroup *) &Dali::Toolkit::GetImplementation(*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}*/

SWIGEXPORT Dali::Toolkit::Internal::LayoutItem * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapperImpl_SWIGUpcast(Dali::Toolkit::Internal::LayoutGroup *jarg1) {
    return (Dali::Toolkit::Internal::LayoutItem *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutGroupWrapperImpl()
{
  void * jresult ;
  Dali::Toolkit::Internal::LayoutGroup *result = 0 ;

  try
  {
    result = (Dali::Toolkit::Internal::LayoutGroup *) new SwigDirector_LayoutGroupWrapperImpl();
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (Dali::DaliException e)
  {
    SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }

  jresult = (void *)result;
  return jresult;
}

#ifdef __cplusplus
}
#endif