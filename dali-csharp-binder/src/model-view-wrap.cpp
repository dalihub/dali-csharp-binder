/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
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
#include <dali-scene3d/public-api/controls/model-view/model-view.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C"
{
#endif

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ModelView_New_SWIG_1(char *csModelPath, char *csResourcePath)
  {
    Dali::Scene3D::ModelView result;

    if (!csModelPath)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string modelPath(csModelPath);

    if (!csResourcePath)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string resourcePath(csResourcePath);

    {
      try
      {
        result = Dali::Scene3D::ModelView::New(modelPath, resourcePath);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Scene3D::ModelView((const Dali::Scene3D::ModelView &)result);
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_ModelView_SWIG_0()
  {
    Dali::Scene3D::ModelView *result = 0;

    {
      try
      {
        result = (Dali::Scene3D::ModelView *)new Dali::Scene3D::ModelView();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_ModelView_SWIG_1(void *csModelView)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;
    Dali::Scene3D::ModelView *result = 0;

    if (!modelView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::ModelView const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Scene3D::ModelView *)new Dali::Scene3D::ModelView((Dali::Scene3D::ModelView const &)*modelView);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ModelView(void *csModelView)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;
    {
      try
      {
        delete modelView;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ModelView_Assign(void *csDestination, void *csSource)
  {
    Dali::Scene3D::ModelView *destination = (Dali::Scene3D::ModelView *)csDestination;
    Dali::Scene3D::ModelView *source = (Dali::Scene3D::ModelView *)csSource;
    Dali::Scene3D::ModelView *result = 0;

    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::ModelView const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Scene3D::ModelView *)&(destination)->operator=((Dali::Scene3D::ModelView const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ModelView_DownCast(void *csHandle)
  {
    Dali::BaseHandle *handle = (Dali::BaseHandle *)csHandle;
    Dali::Scene3D::ModelView result;

    if (!handle)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return 0;
    }
    {
      try
      {
        result = Dali::Scene3D::ModelView::DownCast(*handle);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Scene3D::ModelView((const Dali::Scene3D::ModelView &)result);
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ModelView_GetModelRoot(void *csModelView)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;
    Dali::Actor result;

    if (!modelView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return 0;
    }
    {
      try
      {
        result = modelView->GetModelRoot();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Actor((const Dali::Actor &)result);
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ModelView_FitSize(void *csModelView, bool fit)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;

    if (!modelView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return;
    }
    {
      try
      {
        modelView->FitSize(fit);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ModelView_FitCenter(void *csModelView, bool fit)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;

    if (!modelView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return;
    }
    {
      try
      {
        modelView->FitCenter(fit);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ModelView_SetImageBasedLightSource(void *csModelView, char* csDiffuse, char* csSpecular, float scaleFactor)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;

    if (!modelView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return;
    }
    if (!csDiffuse) {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return;
    }
    std::string diffuse(csDiffuse);
    if (!csSpecular) {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return;
    }
    std::string specular(csSpecular);
    {
      try
      {
        modelView->SetImageBasedLightSource(diffuse, specular, scaleFactor);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ModelView_GetAnimationCount(void *csModelView)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;
    unsigned int result;

    if (!modelView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return 0;
    }
    {
      try
      {
        result = modelView->GetAnimationCount();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ModelView_GetAnimation_1(void *csModelView, unsigned int index)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;
    Dali::Animation result;

    if (!modelView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return 0;
    }
    {
      try
      {
        result = modelView->GetAnimation(index);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Animation((const Dali::Animation &)result);
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_ModelView_GetAnimation_2(void *csModelView, char * csName)
  {
    Dali::Scene3D::ModelView *modelView = (Dali::Scene3D::ModelView *)csModelView;
    Dali::Animation result;

    if (!modelView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return 0;
    }
    if (!csName) {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string name(csName);
    {
      try
      {
        result = modelView->GetAnimation(name);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Animation((const Dali::Animation &)result);
  }

#ifdef __cplusplus
}
#endif
