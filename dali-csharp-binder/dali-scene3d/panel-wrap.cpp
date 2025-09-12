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
#include <dali-scene3d/public-api/controls/panel/panel.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Panel_New_SWIG_0()
{
  Dali::Scene3D::Panel result;

  {
    try
    {
      result = Dali::Scene3D::Panel::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::Panel((const Dali::Scene3D::Panel&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Panel(void* csPanel)
{
  Dali::Scene3D::Panel* panel = (Dali::Scene3D::Panel*)csPanel;
  {
    try
    {
      delete panel;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Panel_SetPanelResolution(void* csPanel, void* csResolution)
{
  Dali::Scene3D::Panel* panel      = (Dali::Scene3D::Panel*)csPanel;
  Dali::Vector2*        resolution = (Dali::Vector2*)csResolution;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return;
  }
  if(!resolution)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Vector2", 0);
    return;
  }

  try
  {
    panel->SetPanelResolution(*resolution);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Panel_GetPanelResolution(void* csPanel)
{
  Dali::Scene3D::Panel* panel = (Dali::Scene3D::Panel*)csPanel;
  Dali::Vector2         resolution;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return 0;
  }
  {
    try
    {
      resolution = panel->GetPanelResolution();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  Dali::Vector2* result = new Dali::Vector2((const Dali::Vector2&)resolution);
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Panel_SetContent(void* csPanel, void* csRootActor)
{
  Dali::Scene3D::Panel* panel     = (Dali::Scene3D::Panel*)csPanel;
  Dali::Actor*          rootActor = (Dali::Actor*)csRootActor;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return;
  }
  if(!rootActor)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return;
  }

  try
  {
    panel->SetContent(*rootActor);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Panel_GetContent(void* csPanel)
{
  Dali::Scene3D::Panel* panel = (Dali::Scene3D::Panel*)csPanel;
  Dali::Actor           rootActor;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return 0;
  }
  {
    try
    {
      rootActor = panel->GetContent();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  Dali::Actor* result = new Dali::Actor((const Dali::Actor&)rootActor);
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Panel_ClearPanel(void* csPanel)
{
  Dali::Scene3D::Panel* panel = (Dali::Scene3D::Panel*)csPanel;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return;
  }

  try
  {
    panel->ClearPanel();
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Panel_CastShadow(void* csPanel, bool csCastShadow)
{
  Dali::Scene3D::Panel* panel = (Dali::Scene3D::Panel*)csPanel;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return;
  }

  try
  {
    panel->CastShadow(csCastShadow);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Panel_IsShadowCasting(void* csPanel)
{
  Dali::Scene3D::Panel* panel = (Dali::Scene3D::Panel*)csPanel;
  bool                  result;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return 0;
  }

  try
  {
    result = panel->IsShadowCasting();
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Panel_ReceiveShadow(void* csPanel, bool csReceiveShadow)
{
  Dali::Scene3D::Panel* panel = (Dali::Scene3D::Panel*)csPanel;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return;
  }

  try
  {
    panel->ReceiveShadow(csReceiveShadow);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Panel_IsShadowReceiving(void* csPanel)
{
  Dali::Scene3D::Panel* panel = (Dali::Scene3D::Panel*)csPanel;
  bool                  result;

  if(!panel)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::Panel", 0);
    return 0;
  }

  try
  {
    result = panel->IsShadowReceiving();
  }
  CALL_CATCH_EXCEPTION(0);
  return result;
}

// For Property index
SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Panel_property_TRANSPARENT_get()
{
  return (int)Dali::Scene3D::Panel::Property::TRANSPARENT;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Panel_property_DOUBLE_SIDED_get()
{
  return (int)Dali::Scene3D::Panel::Property::DOUBLE_SIDED;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Panel_property_USE_BACK_FACE_PLANE_get()
{
  return (int)Dali::Scene3D::Panel::Property::USE_BACK_FACE_PLANE;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Panel_property_BACK_FACE_PLANE_COLOR_get()
{
  return (int)Dali::Scene3D::Panel::Property::BACK_FACE_PLANE_COLOR;
}

#ifdef __cplusplus
}
#endif
