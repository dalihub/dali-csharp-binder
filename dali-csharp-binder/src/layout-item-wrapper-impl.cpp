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
  char * jcontainerType = 0 ;

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

void SwigDirector_LayoutItemWrapperImpl::OnLayout(bool changed, Dali::Toolkit::LayoutLength left, Dali::Toolkit::LayoutLength top, Dali::Toolkit::LayoutLength right, Dali::Toolkit::LayoutLength bottom) {
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

void SwigDirector_LayoutItemWrapperImpl::OnSizeChanged(Dali::Toolkit::LayoutSize newSize, Dali::Toolkit::LayoutSize oldSize) {
  void * jnewSize  ;
  void * joldSize  ;

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

#ifdef __cplusplus
}
#endif