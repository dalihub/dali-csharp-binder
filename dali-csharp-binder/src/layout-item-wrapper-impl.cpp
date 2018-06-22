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
#include "layout-item-wrapper-impl.h"

// INTERNAL INCLUDES

#ifdef __cplusplus
extern "C" {
#endif

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

using namespace Dali::Toolkit;

SwigDirector_LayoutItemWrapperImpl::SwigDirector_LayoutItemWrapperImpl() : Dali::Toolkit::Internal::LayoutItem()
{
  swig_init_callbacks();
}

SwigDirector_LayoutItemWrapperImpl::~SwigDirector_LayoutItemWrapperImpl()
{

}

Dali::Toolkit::Internal::LayoutParent *SwigDirector_LayoutItemWrapperImpl::GetParent()
{
  Dali::Toolkit::Internal::LayoutParent *c_result = 0;
  void * jresult = 0;

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

void SwigDirector_LayoutItemWrapperImpl::OnUnparent()
{
  if (!swig_callbackOnUnparent)
  {
    Dali::Toolkit::Internal::LayoutItem::OnUnparent();
    return;
  }
  else
  {
    swig_callbackOnUnparent();
  }
}

void SwigDirector_LayoutItemWrapperImpl::OnRegisterChildProperties(std::string const &containerType)
{
  char * jcontainerType = 0;

  if (!swig_callbackOnRegisterChildProperties)
  {
    Dali::Toolkit::Internal::LayoutItem::OnRegisterChildProperties(containerType);
    return;
  }
  else
  {
    jcontainerType = SWIG_csharp_string_callback((&containerType)->c_str());
    swig_callbackOnRegisterChildProperties(jcontainerType);
  }
}

void SwigDirector_LayoutItemWrapperImpl::OnMeasure(Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec)
{
  void * jwidthMeasureSpec;
  void * jheightMeasureSpec;

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

void SwigDirector_LayoutItemWrapperImpl::OnLayout(bool changed, Dali::Toolkit::LayoutLength left, Dali::Toolkit::LayoutLength top, Dali::Toolkit::LayoutLength right, Dali::Toolkit::LayoutLength bottom)
{
  unsigned int jchanged;
  void * jleft;
  void * jtop;
  void * jright;
  void * jbottom;

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

void SwigDirector_LayoutItemWrapperImpl::OnSizeChanged(Dali::Toolkit::LayoutSize newSize, Dali::Toolkit::LayoutSize oldSize)
{
  void * jnewSize;
  void * joldSize;

  if (!swig_callbackOnSizeChanged)
  {
    Dali::Toolkit::Internal::LayoutItem::OnSizeChanged(newSize,oldSize);
    return;
  }
  else
  {
    jnewSize = (void *)new Dali::Toolkit::LayoutSize((const Dali::Toolkit::LayoutSize &)newSize);
    joldSize = (void *)new Dali::Toolkit::LayoutSize((const Dali::Toolkit::LayoutSize &)oldSize);
    swig_callbackOnSizeChanged(jnewSize, joldSize);
  }
}

void SwigDirector_LayoutItemWrapperImpl::OnInitialize()
{
  if (!swig_callbackOnInitialize)
  {
    Dali::Toolkit::Internal::LayoutItem::OnInitialize();
    return;
  }
  else
  {
    swig_callbackOnInitialize();
  }
}

void SwigDirector_LayoutItemWrapperImpl::SetMeasuredDimensions(Dali::Toolkit::MeasuredSize measuredWidth, Dali::Toolkit::MeasuredSize measuredHeight)
{
  Dali::Toolkit::Internal::LayoutItem::SetMeasuredDimensions(measuredWidth, measuredHeight);
}

void SwigDirector_LayoutItemWrapperImpl::swig_connect_director(SWIG_Callback0_t callbackGetParent, SWIG_Callback1_t callbackOnUnparent, SWIG_Callback2_t callbackOnRegisterChildProperties, SWIG_Callback3_t callbackOnMeasure, SWIG_Callback4_t callbackOnLayout, SWIG_Callback5_t callbackOnSizeChanged, SWIG_Callback6_t callbackOnInitialize)
{
  swig_callbackGetParent = callbackGetParent;
  swig_callbackOnUnparent = callbackOnUnparent;
  swig_callbackOnRegisterChildProperties = callbackOnRegisterChildProperties;
  swig_callbackOnMeasure = callbackOnMeasure;
  swig_callbackOnLayout = callbackOnLayout;
  swig_callbackOnSizeChanged = callbackOnSizeChanged;
  swig_callbackOnInitialize = callbackOnInitialize;
}

void SwigDirector_LayoutItemWrapperImpl::swig_init_callbacks()
{
  swig_callbackGetParent = 0;
  swig_callbackOnUnparent = 0;
  swig_callbackOnRegisterChildProperties = 0;
  swig_callbackOnMeasure = 0;
  swig_callbackOnLayout = 0;
  swig_callbackOnSizeChanged = 0;
  swig_callbackOnInitialize = 0;
}



SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutItemWrapperImpl() {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Internal::LayoutItem *)new SwigDirector_LayoutItemWrapperImpl();
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
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_New(void * jarg1) {
  void * jresult ;
  Dali::Handle *arg1 = 0 ;
  Dali::Toolkit::Internal::LayoutItemPtr result;

  arg1 = (Dali::Handle *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Toolkit::Internal::LayoutItem::New(*arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_Initialize(void * jarg1, void * jarg2, char * jarg3) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Handle *arg2 = 0 ;
  std::string *arg3 = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  arg2 = (Dali::Handle *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & type is null", 0);
    return ;
  }
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      (arg1)->Initialize(*arg2,(std::string const &)*arg3);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_Unparent(void * jarg1) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      (arg1)->Unparent();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_SetAnimateLayout(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetAnimateLayout(arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_IsLayoutAnimated(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::Internal::LayoutItem const *)arg1)->IsLayoutAnimated();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_RegisterChildProperties(void * jarg1, char * jarg2) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->RegisterChildProperties((std::string const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_Measure(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
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
  {
    try {
      (arg1)->Measure(arg2,arg3);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_Layout(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg3 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg4 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg5 ;
  Dali::Toolkit::LayoutLength *argp2 ;
  Dali::Toolkit::LayoutLength *argp3 ;
  Dali::Toolkit::LayoutLength *argp4 ;
  Dali::Toolkit::LayoutLength *argp5 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::LayoutLength *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::Toolkit::LayoutLength *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::Toolkit::LayoutLength *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg5 = *argp5;
  {
    try {
      (arg1)->Layout(arg2,arg3,arg4,arg5);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetDefaultSize(void * jarg1, void * jarg2) {
  void * jresult ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg1 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  Dali::Toolkit::LayoutLength *argp1 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  argp1 = (Dali::Toolkit::LayoutLength *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return 0;
  }
  arg1 = *argp1;
  argp2 = (Dali::Toolkit::MeasureSpec *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = Dali::Toolkit::Internal::LayoutItem::GetDefaultSize(arg1,arg2);
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetParent(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Toolkit::Internal::LayoutParent *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutParent *)(arg1)->GetParent();
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
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetParentSwigExplicitLayoutItemWrapperImpl(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Toolkit::Internal::LayoutParent *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutParent *)(arg1)->Dali::Toolkit::Internal::LayoutItem::GetParent();
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
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_RequestLayout(void * jarg1) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      (arg1)->RequestLayout();
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_IsLayoutRequested(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::Internal::LayoutItem const *)arg1)->IsLayoutRequested();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetMeasuredWidth(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetMeasuredWidth();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetMeasuredHeight(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetMeasuredHeight();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetMeasuredWidthAndState(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Toolkit::MeasuredSize result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetMeasuredWidthAndState();
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
  jresult = new Dali::Toolkit::MeasuredSize((const Dali::Toolkit::MeasuredSize &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetMeasuredHeightAndState(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Toolkit::MeasuredSize result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetMeasuredHeightAndState();
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
  jresult = new Dali::Toolkit::MeasuredSize((const Dali::Toolkit::MeasuredSize &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetSuggestedMinimumWidth(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetSuggestedMinimumWidth();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetSuggestedMinimumHeight(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetSuggestedMinimumHeight();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_SetMinimumWidth(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  Dali::Toolkit::LayoutLength *argp2 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetMinimumWidth(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_SetMinimumHeight(void * jarg1, void * jarg2) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  Dali::Toolkit::LayoutLength *argp2 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetMinimumHeight(arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetMinimumWidth(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetMinimumWidth();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetMinimumHeight(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetMinimumHeight();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_GetPadding(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Extents result;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::Internal::LayoutItem const *)arg1)->GetPadding();
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
  jresult = new Dali::Extents((const Dali::Extents &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_SetMeasuredDimensions(void * jarg1, void * jarg2, void * jarg3) {
  SwigDirector_LayoutItemWrapperImpl *arg1 = (SwigDirector_LayoutItemWrapperImpl *) 0 ;
  Dali::Toolkit::MeasuredSize arg2 ;
  Dali::Toolkit::MeasuredSize arg3 ;
  Dali::Toolkit::MeasuredSize *argp2 ;
  Dali::Toolkit::MeasuredSize *argp3 ;

  arg1 = (SwigDirector_LayoutItemWrapperImpl *)jarg1;
  argp2 = (Dali::Toolkit::MeasuredSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasuredSize", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasuredSize *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasuredSize", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (arg1)->SetMeasuredDimensions(arg2,arg3);
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnUnparent(void * jarg1) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnUnparent();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnUnparentSwigExplicitLayoutItemWrapperImpl(void * jarg1) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnUnparentSwigPublic();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnRegisterChildProperties(void * jarg1, char * jarg2) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  std::string *arg2 = 0 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnRegisterChildProperties((std::string const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnRegisterChildPropertiesSwigExplicitLayoutItemWrapperImpl(void * jarg1, char * jarg2) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  std::string *arg2 = 0 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnRegisterChildPropertiesSwigPublic((std::string const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnMeasure(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
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
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnMeasure(arg2,arg3);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnMeasureSwigExplicitLayoutItemWrapperImpl(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
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
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnMeasureSwigPublic(arg2,arg3);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnLayout(void * jarg1, unsigned int jarg2, void * jarg3, void * jarg4, void * jarg5, void * jarg6) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  bool arg2 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg3 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg4 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg5 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg6 ;
  Dali::Toolkit::LayoutLength *argp3 ;
  Dali::Toolkit::LayoutLength *argp4 ;
  Dali::Toolkit::LayoutLength *argp5 ;
  Dali::Toolkit::LayoutLength *argp6 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  arg2 = jarg2 ? true : false;
  argp3 = (Dali::Toolkit::LayoutLength *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::Toolkit::LayoutLength *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::Toolkit::LayoutLength *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg5 = *argp5;
  argp6 = (Dali::Toolkit::LayoutLength *)jarg6;
  if (!argp6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg6 = *argp6;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnLayout(arg2,arg3,arg4,arg5,arg6);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnLayoutSwigExplicitLayoutItemWrapperImpl(void * jarg1, unsigned int jarg2, void * jarg3, void * jarg4, void * jarg5, void * jarg6) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  bool arg2 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg3 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg4 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg5 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg6 ;
  Dali::Toolkit::LayoutLength *argp3 ;
  Dali::Toolkit::LayoutLength *argp4 ;
  Dali::Toolkit::LayoutLength *argp5 ;
  Dali::Toolkit::LayoutLength *argp6 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  arg2 = jarg2 ? true : false;
  argp3 = (Dali::Toolkit::LayoutLength *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::Toolkit::LayoutLength *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::Toolkit::LayoutLength *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg5 = *argp5;
  argp6 = (Dali::Toolkit::LayoutLength *)jarg6;
  if (!argp6) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg6 = *argp6;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnLayoutSwigPublic(arg2,arg3,arg4,arg5,arg6);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnSizeChanged(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Toolkit::LayoutSize arg2 ;
  Dali::Toolkit::LayoutSize arg3 ;
  Dali::Toolkit::LayoutSize *argp2 ;
  Dali::Toolkit::LayoutSize *argp3 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  argp2 = (Dali::Toolkit::LayoutSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutSize", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::LayoutSize *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutSize", 0);
    return ;
  }
  arg3 = *argp3;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnSizeChanged(arg2,arg3);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnSizeChangedSwigExplicitLayoutItemWrapperImpl(void * jarg1, void * jarg2, void * jarg3) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Toolkit::LayoutSize arg2 ;
  Dali::Toolkit::LayoutSize arg3 ;
  Dali::Toolkit::LayoutSize *argp2 ;
  Dali::Toolkit::LayoutSize *argp3 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  argp2 = (Dali::Toolkit::LayoutSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutSize", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::LayoutSize *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutSize", 0);
    return ;
  }
  arg3 = *argp3;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnSizeChangedSwigPublic(arg2,arg3);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnInitialize(void * jarg1) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnInitialize();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_OnInitializeSwigExplicitLayoutItemWrapperImpl(void * jarg1) {
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  SwigDirector_LayoutItemWrapperImpl *darg = 0;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  darg = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(arg1);
  {
    try {
      (darg)->OnInitializeSwigPublic();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_director_connect(void *objarg, SwigDirector_LayoutItemWrapperImpl::SWIG_Callback0_t callback0, SwigDirector_LayoutItemWrapperImpl::SWIG_Callback1_t callback1, SwigDirector_LayoutItemWrapperImpl::SWIG_Callback2_t callback2, SwigDirector_LayoutItemWrapperImpl::SWIG_Callback3_t callback3, SwigDirector_LayoutItemWrapperImpl::SWIG_Callback4_t callback4, SwigDirector_LayoutItemWrapperImpl::SWIG_Callback5_t callback5, SwigDirector_LayoutItemWrapperImpl::SWIG_Callback6_t callback6) {
  Dali::Toolkit::Internal::LayoutItem *obj = (Dali::Toolkit::Internal::LayoutItem *)objarg;
  SwigDirector_LayoutItemWrapperImpl *director = dynamic_cast<SwigDirector_LayoutItemWrapperImpl *>(obj);
  if (director) {
    director->swig_connect_director(callback0, callback1, callback2, callback3, callback4, callback5, callback6);
  }
}

SWIGEXPORT Dali::BaseObject * SWIGSTDCALL CSharp_Dali_LayoutItemWrapperImpl_SWIGUpcast(Dali::Toolkit::Internal::LayoutItem *jarg1) {
    return (Dali::BaseObject *)jarg1;
}


/*SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetImplementation__SWIG_0(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutItem *arg1 = 0 ;
  Dali::Toolkit::Internal::LayoutItem *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutItem *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutItem & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutItem *) &Dali::Toolkit::GetImplementation(*arg1);
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

#ifdef __cplusplus
}
#endif