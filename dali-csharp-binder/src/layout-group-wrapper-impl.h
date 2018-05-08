#ifndef CSHARP_LAYOUT_GROUP_WRAPPER_IMPL_H
#define CSHARP_LAYOUT_GROUP_WRAPPER_IMPL_H

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

#include <dali-toolkit/devel-api/layouting/layout-group-impl.h>
#include "common.h"

class SwigDirector_LayoutGroupWrapperImpl : public Dali::Toolkit::Internal::LayoutGroup
{
public:
    SwigDirector_LayoutGroupWrapperImpl();
    virtual ~SwigDirector_LayoutGroupWrapperImpl();
    virtual Dali::Toolkit::Internal::LayoutParent *GetParent();
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
    virtual void OnChildAdd(Dali::Toolkit::Internal::LayoutItem &child);
    virtual void OnChildRemove(Dali::Toolkit::Internal::LayoutItem &child);
    virtual void DoInitialize();
    virtual void DoInitializeSwigPublic()
    {
      Dali::Toolkit::Internal::LayoutGroup::DoInitialize();
    }
    virtual void DoRegisterChildProperties(std::string const &containerType);
    virtual void DoRegisterChildPropertiesSwigPublic(std::string const &containerType)
    {
      Dali::Toolkit::Internal::LayoutGroup::DoRegisterChildProperties(containerType);
    }
    virtual void GenerateDefaultChildPropertyValues(Dali::Handle child);
    virtual void GenerateDefaultChildPropertyValuesSwigPublic(Dali::Handle child)
    {
      Dali::Toolkit::Internal::LayoutGroup::GenerateDefaultChildPropertyValues(child);
    }
    virtual void MeasureChildren(Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec);
    virtual void MeasureChildrenSwigPublic(Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec)
    {
      Dali::Toolkit::Internal::LayoutGroup::MeasureChildren(widthMeasureSpec,heightMeasureSpec);
    }
    virtual void MeasureChild(Dali::Toolkit::Internal::LayoutItemPtr child, Dali::Toolkit::MeasureSpec parentWidthMeasureSpec, Dali::Toolkit::MeasureSpec parentHeightMeasureSpec);
    virtual void MeasureChildSwigPublic(Dali::Toolkit::Internal::LayoutItemPtr child, Dali::Toolkit::MeasureSpec parentWidthMeasureSpec, Dali::Toolkit::MeasureSpec parentHeightMeasureSpec)
    {
      Dali::Toolkit::Internal::LayoutGroup::MeasureChild(child,parentWidthMeasureSpec,parentHeightMeasureSpec);
    }
    virtual void MeasureChildWithMargins(Dali::Toolkit::Internal::LayoutItemPtr child, Dali::Toolkit::MeasureSpec parentWidthMeasureSpec, Dali::Toolkit::LayoutLength widthUsed, Dali::Toolkit::MeasureSpec parentHeightMeasureSpec, Dali::Toolkit::LayoutLength heightUsed);
    virtual void MeasureChildWithMarginsSwigPublic(Dali::Toolkit::Internal::LayoutItemPtr child, Dali::Toolkit::MeasureSpec parentWidthMeasureSpec, Dali::Toolkit::LayoutLength widthUsed, Dali::Toolkit::MeasureSpec parentHeightMeasureSpec, Dali::Toolkit::LayoutLength heightUsed)
    {
      Dali::Toolkit::Internal::LayoutGroup::MeasureChildWithMargins(child,parentWidthMeasureSpec,widthUsed,parentHeightMeasureSpec,heightUsed);
    }

    typedef void * (SWIGSTDCALL* SWIG_Callback0_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(unsigned int, void *, void *, void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback6_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback7_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback8_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback9_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback10_t)(char *);
    typedef void (SWIGSTDCALL* SWIG_Callback11_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback12_t)(void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback13_t)(void *, void *, void *);
    typedef void (SWIGSTDCALL* SWIG_Callback14_t)(void *, void *, void *, void *, void *);
    void swig_connect_director(SWIG_Callback0_t callbackGetParent, SWIG_Callback3_t callbackOnMeasure, SWIG_Callback4_t callbackOnLayout, SWIG_Callback5_t callbackOnSizeChanged, SWIG_Callback6_t callbackOnInitialize, SWIG_Callback7_t callbackOnChildAdd, SWIG_Callback8_t callbackOnChildRemove, SWIG_Callback9_t callbackDoInitialize, SWIG_Callback10_t callbackDoRegisterChildProperties, SWIG_Callback11_t callbackGenerateDefaultChildPropertyValues, SWIG_Callback12_t callbackMeasureChildren, SWIG_Callback13_t callbackMeasureChild, SWIG_Callback14_t callbackMeasureChildWithMargins);

private:
    SWIG_Callback0_t swig_callbackGetParent;
    SWIG_Callback3_t swig_callbackOnMeasure;
    SWIG_Callback4_t swig_callbackOnLayout;
    SWIG_Callback5_t swig_callbackOnSizeChanged;
    SWIG_Callback6_t swig_callbackOnInitialize;
    SWIG_Callback7_t swig_callbackOnChildAdd;
    SWIG_Callback8_t swig_callbackOnChildRemove;
    SWIG_Callback9_t swig_callbackDoInitialize;
    SWIG_Callback10_t swig_callbackDoRegisterChildProperties;
    SWIG_Callback11_t swig_callbackGenerateDefaultChildPropertyValues;
    SWIG_Callback12_t swig_callbackMeasureChildren;
    SWIG_Callback13_t swig_callbackMeasureChild;
    SWIG_Callback14_t swig_callbackMeasureChildWithMargins;
    void swig_init_callbacks();
};

#endif /* CSHARP_LAYOUT_GROUP_WRAPPER_IMPL_H */
