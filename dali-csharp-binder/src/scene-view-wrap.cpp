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
#include <dali-scene3d/public-api/controls/scene-view/scene-view.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C"
{
#endif
  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SceneView_New_SWIG_0()
  {
    Dali::Scene3D::SceneView result;
    {
      try
      {
        result = Dali::Scene3D::SceneView::New();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Scene3D::SceneView((const Dali::Scene3D::SceneView &)result);
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_SceneView_SWIG_0()
  {
    Dali::Scene3D::SceneView *result = 0;

    {
      try
      {
        result = (Dali::Scene3D::SceneView *)new Dali::Scene3D::SceneView();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_SceneView_SWIG_1(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    Dali::Scene3D::SceneView *result = 0;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::SceneView const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Scene3D::SceneView *)new Dali::Scene3D::SceneView((Dali::Scene3D::SceneView const &)*sceneView);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_SceneView(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    {
      try
      {
        delete sceneView;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SceneView_Assign(void *csDestination, void *csSource)
  {
    Dali::Scene3D::SceneView *destination = (Dali::Scene3D::SceneView *)csDestination;
    Dali::Scene3D::SceneView *source = (Dali::Scene3D::SceneView *)csSource;
    Dali::Scene3D::SceneView *result = 0;

    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::SceneView const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Scene3D::SceneView *)&(destination)->operator=((Dali::Scene3D::SceneView const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SceneView_DownCast(void *csHandle)
  {
    Dali::BaseHandle *handle = (Dali::BaseHandle *)csHandle;
    Dali::Scene3D::SceneView result;

    if (!handle)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return 0;
    }
    {
      try
      {
        result = Dali::Scene3D::SceneView::DownCast(*handle);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Scene3D::SceneView((const Dali::Scene3D::SceneView &)result);
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_AddCamera(void *csSceneView, void *csCamera)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    Dali::CameraActor *cameraActor = (Dali::CameraActor *)csCamera;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    if (!cameraActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::CameraActor", 0);
      return;
    }
    {
      try
      {
        sceneView->AddCamera(*cameraActor);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_RemoveCamera(void *csSceneView, void *csCamera)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    Dali::CameraActor *cameraActor = (Dali::CameraActor *)csCamera;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    if (!cameraActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::CameraActor", 0);
      return;
    }
    {
      try
      {
        sceneView->RemoveCamera(*cameraActor);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_SceneView_GetCameraCount(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    uint32_t result = 0;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return 0;
    }
    {
      try
      {
        result = sceneView->GetCameraCount();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SceneView_GetSelectedCamera(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    Dali::CameraActor cameraActor;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return 0;
    }
    {
      try
      {
        cameraActor = sceneView->GetSelectedCamera();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    Dali::CameraActor *result = new Dali::CameraActor((const Dali::CameraActor &)cameraActor);
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SceneView_GetCamera_0(void *csSceneView, uint32_t index)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    Dali::CameraActor cameraActor;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return 0;
    }
    {
      try
      {
        cameraActor = sceneView->GetCamera(index);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    Dali::CameraActor *result = new Dali::CameraActor((const Dali::CameraActor &)cameraActor);
    return result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SceneView_GetCamera_1(void *csSceneView, char *name)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    Dali::CameraActor cameraActor;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return 0;
    }
    {
      try
      {
        cameraActor = sceneView->GetCamera(std::string(name));
      }
      CALL_CATCH_EXCEPTION(0);
    }
    Dali::CameraActor *result = new Dali::CameraActor((const Dali::CameraActor &)cameraActor);
    return result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SelectCamera_0(void *csSceneView, uint32_t index)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    {
      try
      {
        sceneView->SelectCamera(index);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SelectCamera_1(void *csSceneView, char *name)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    {
      try
      {
        sceneView->SelectCamera(std::string(name));
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SetImageBasedLightSource(void *csSceneView, char *diffuseUrl, char *specularUrl, float scaleFactor)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    {
      try
      {
        sceneView->SetImageBasedLightSource(std::string(diffuseUrl), std::string(specularUrl), scaleFactor);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SetImageBasedLightScaleFactor(void *csSceneView, float scaleFactor)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    {
      try
      {
        sceneView->SetImageBasedLightScaleFactor(scaleFactor);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT float SWIGSTDCALL CSharp_Dali_SceneView_GetImageBasedLightScaleFactor(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    float scaleFactor = 1.0f;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelView", 0);
      return scaleFactor;
    }
    {
      try
      {
        scaleFactor = sceneView->GetImageBasedLightScaleFactor();
      }
      CALL_CATCH_EXCEPTION(0.0f);
    }
    return scaleFactor;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_UseFramebuffer(void *csSceneView, bool useFramebuffer)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    {
      try
      {
        sceneView->UseFramebuffer(useFramebuffer);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_SceneView_IsUsingFramebuffer(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    bool result = false;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return false;
    }
    {
      try
      {
        result = sceneView->IsUsingFramebuffer();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SetFramebufferMultiSamplingLevel(void *csSceneView, uint32_t multiSamplingLevel)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    {
      try
      {
        sceneView->SetFramebufferMultiSamplingLevel(static_cast<uint8_t>(multiSamplingLevel));
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_SceneView_GetFramebufferMultiSamplingLevel(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    uint32_t result = 0u;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return 0;
    }
    {
      try
      {
        result = static_cast<uint32_t>(sceneView->GetFramebufferMultiSamplingLevel());
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SetSkybox(void *csSceneView, char *skyboxUrl)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    if (!skyboxUrl)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null string", 0);
      return;
    }
    {
      try
      {
        sceneView->SetSkybox(std::string(skyboxUrl));
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SetSkyboxEnvironmentMapType(void *csSceneView, int skyboxEnvironmentMapType)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    {
      try
      {
        sceneView->SetSkyboxEnvironmentMapType((Dali::Scene3D::EnvironmentMapType)skyboxEnvironmentMapType);
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SetSkyboxIntensity(void *csSceneView, float intensity)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    {
      try
      {
        sceneView->SetSkyboxIntensity(intensity);
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  SWIGEXPORT float SWIGSTDCALL CSharp_Dali_SceneView_GetSkyboxIntensity(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    float intensity = 1.0f;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return intensity;
    }
    {
      try
      {
        intensity = sceneView->GetSkyboxIntensity();
      }
      CALL_CATCH_EXCEPTION(0.0f);
    }
    return intensity;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_SceneView_SetSkyboxOrientation(void *csSceneView, void *csOrientation)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    Dali::Quaternion *orientation = (Dali::Quaternion *)csOrientation;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return;
    }
    if (!orientation)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Quaternion", 0);
      return;
    }
    {
      try
      {
        sceneView->SetSkyboxOrientation(*orientation);
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_SceneView_GetSkyboxOrientation(void *csSceneView)
  {
    Dali::Scene3D::SceneView *sceneView = (Dali::Scene3D::SceneView *)csSceneView;
    Dali::Quaternion orientation;

    if (!sceneView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::SceneView", 0);
      return 0;
    }
    {
      try
      {
        orientation = sceneView->GetSkyboxOrientation();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    Dali::Quaternion *result = new Dali::Quaternion((const Dali::Quaternion &)orientation);
    return result;
  }

#ifdef __cplusplus
}
#endif
