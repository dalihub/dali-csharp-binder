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

///////////////////////////////////
//////////////////////////////////
///////////////////////////////////
////////////////////////////////////

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

//////////////////////////////
////////////////////////////////
//////////////////////////////////////
/////////////////////////////////////
////////////////////////////////////


/// LayoutGroupImpl
#if 0
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutGroupImpl()
{
  void * jresult ;
  Dali::Toolkit::Internal::LayoutGroup *result = 0 ;

  try
  {
    result = (Dali::Toolkit::Internal::LayoutGroup *) new SwigDirector_LayoutGroupImpl();
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

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_LayoutGroupImpl_IsLayoutRequested( void * jarg )
{
  Dali::Toolkit::Internal::LayoutGroup *arg = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  arg = ( Dali::Toolkit::Internal::LayoutGroup* ) jarg;
  return arg->IsLayoutRequested();
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_New( void * jarg )
{
  void * jresult ;
  Dali::Toolkit::Internal::LayoutGroup *arg = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutGroup result;

  arg = static_cast<Dali::Toolkit::Internal::LayoutGroup*> (jarg);
  try
  {
    result = LayoutGroup(arg);
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

  jresult = new Dali::Toolkit::LayoutGroup((const Dali::Toolkit::LayoutGroup &)result);
  return jresult;
}

// LayoutGroup
SWIGEXPORT Dali::Toolkit::LayoutGroup * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_SWIGUpcast( Dali::Toolkit::Internal::LayoutGroup *jarg1 )
{
  return (Dali::Toolkit::LayoutGroup *) jarg1;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutGroupWrapper( void * jarg1 )
{
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0;

  arg1 = (Dali::Toolkit::LayoutGroup *) jarg1;
  {
    try
    {
      delete arg1;
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_SetLayout(void * jarg1, void * jarg2)
{
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  arg1 = (Dali::Toolkit::Control *)jarg1;
  Dali::Toolkit::Internal::Control& controlImpl = Dali::Toolkit::Internal::GetImplementation( *arg1 );

  Dali::Toolkit::LayoutGroup *arg2 = 0 ;
  arg2 = (Dali::Toolkit::LayoutGroup *)jarg2;

  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutGroup & type is null", 0);
  }

  try
  {
    DevelControl::SetLayout( controlImpl, (Dali::Toolkit::LayoutGroup &)*arg2 );
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
  }
  catch (Dali::DaliException e)
  {
    SWIG_CSharpException(SWIG_UnknownError, e.condition);
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error");
  }
}
#endif

#ifdef __cplusplus
}
#endif