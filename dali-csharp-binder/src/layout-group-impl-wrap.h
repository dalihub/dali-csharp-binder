#ifndef CSHARP_LAYOUT_GROUP_IMPL_H
#define CSHARP_LAYOUT_GROUP_IMPL_H

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

class SwigDirector_LayoutGroupImpl : public Dali::Toolkit::Internal::LayoutGroup
{
public:

    SwigDirector_LayoutGroupImpl();
    virtual ~SwigDirector_LayoutGroupImpl();
    virtual void OnMeasure( Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec ) override;
    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int, int );
    void swig_connect_director(SWIG_Callback0_t swig_callbackOnMeasure );

private:
    SWIG_Callback0_t swig_callbackOnMeasure;
    void swig_init_callbacks();
};

#endif /* CSHARP_LAYOUT_GROUP_IMPL_H */
