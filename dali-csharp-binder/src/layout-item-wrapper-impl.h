#ifndef CSHARP_LAYOUT_ITEM_WRAPPER_IMPL_H
#define CSHARP_LAYOUT_ITEM_WRAPPER_IMPL_H

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

#include "common.h"
#include <dali-toolkit/devel-api/layouting/layout-item-impl.h>

class SwigDirector_LayoutItemWrapperImpl : public Dali::Toolkit::Internal::LayoutItem
{
public:
    SwigDirector_LayoutItemWrapperImpl();
    virtual ~SwigDirector_LayoutItemWrapperImpl();
    virtual Dali::Toolkit::Internal::LayoutParent *GetParent();
    virtual void OnUnparent();
    virtual void OnUnparentSwigPublic()
    {
      Dali::Toolkit::Internal::LayoutItem::OnUnparent();
    }
    virtual void OnRegisterChildProperties(std::string const &containerType);
    virtual void OnRegisterChildPropertiesSwigPublic(std::string const &containerType)
    {
      Dali::Toolkit::Internal::LayoutItem::OnRegisterChildProperties(containerType);
    }
    virtual void OnMeasure(Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec);
    virtual void OnMeasureSwigPublic(Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec)
    {
      Dali::Toolkit::Internal::LayoutItem::OnMeasure(widthMeasureSpec,heightMeasureSpec);
    }
    virtual void OnLayout(bool changed, Dali::Toolkit::LayoutLength left, Dali::Toolkit::LayoutLength top, Dali::Toolkit::LayoutLength right, Dali::Toolkit::LayoutLength bottom);
    virtual void OnLayoutSwigPublic(bool changed, Dali::Toolkit::LayoutLength left, Dali::Toolkit::LayoutLength top, Dali::Toolkit::LayoutLength right, Dali::Toolkit::LayoutLength bottom)
    {
      Dali::Toolkit::Internal::LayoutItem::OnLayout(changed,left,top,right,bottom);
    }
    virtual void OnSizeChanged(Dali::Toolkit::LayoutSize newSize, Dali::Toolkit::LayoutSize oldSize);
    virtual void OnSizeChangedSwigPublic(Dali::Toolkit::LayoutSize newSize, Dali::Toolkit::LayoutSize oldSize)
    {
      Dali::Toolkit::Internal::LayoutItem::OnSizeChanged(newSize,oldSize);
    }
    virtual void OnInitialize();
    virtual void OnInitializeSwigPublic()
    {
      Dali::Toolkit::Internal::LayoutItem::OnInitialize();
    }

    typedef void * (SWIGSTDCALL* SWIG_Callback0_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(char *);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(unsigned int, void *, void *, void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback6_t)();
    void swig_connect_director(SWIG_Callback0_t callbackGetParent, SWIG_Callback1_t callbackOnUnparent, SWIG_Callback2_t callbackOnRegisterChildProperties, SWIG_Callback3_t callbackOnMeasure, SWIG_Callback4_t callbackOnLayout, SWIG_Callback5_t callbackOnSizeChanged, SWIG_Callback6_t callbackOnInitialize);

private:
    SWIG_Callback0_t swig_callbackGetParent;
    SWIG_Callback1_t swig_callbackOnUnparent;
    SWIG_Callback2_t swig_callbackOnRegisterChildProperties;
    SWIG_Callback3_t swig_callbackOnMeasure;
    SWIG_Callback4_t swig_callbackOnLayout;
    SWIG_Callback5_t swig_callbackOnSizeChanged;
    SWIG_Callback6_t swig_callbackOnInitialize;
    void swig_init_callbacks();
};

#endif /* CSHARP_LAYOUT_ITEM_WRAPPER_IMPL_H */
