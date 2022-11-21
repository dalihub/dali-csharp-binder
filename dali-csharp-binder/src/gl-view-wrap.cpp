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
#include <dali-toolkit/public-api/controls/gl-view/gl-view.h>

// INTERNAL INCLUDES
#include "common.h"
#include <dali/public-api/signals/render-callback.h>

#ifdef __cplusplus
extern "C"
{
#endif

  /*GlView binding*/
  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlView_New_SWIG(int nuiColorFormat)
  {
    void *jresult;
    Dali::Toolkit::GlView result;

    Dali::Toolkit::GlView::ColorFormat colorFormat;
    colorFormat = static_cast<Dali::Toolkit::GlView::ColorFormat>(nuiColorFormat);
    {
      try
      {
        result = Dali::Toolkit::GlView::New(colorFormat);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::GlView((const Dali::Toolkit::GlView &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlView_New2_SWIG(int nuiBackendMode, int nuiColorFormat)
  {
    void *jresult;
    Dali::Toolkit::GlView result;

    Dali::Toolkit::GlView::ColorFormat colorFormat;
    Dali::Toolkit::GlView::BackendMode backendMode;
    colorFormat = static_cast<Dali::Toolkit::GlView::ColorFormat>(nuiColorFormat);
    backendMode = static_cast<Dali::Toolkit::GlView::BackendMode>(nuiBackendMode);
    {
      try
      {

        result = Dali::Toolkit::GlView::New(backendMode, colorFormat);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = new Dali::Toolkit::GlView((const Dali::Toolkit::GlView &)result);
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_GlView_SWIG_0()
  {
    void *jresult;
    Dali::Toolkit::GlView *result = nullptr;

    {
      try
      {
        result = (Dali::Toolkit::GlView *)new Dali::Toolkit::GlView();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_GlView_SWIG_1(void *nuiGlView)
  {
    void *jresult;
    Dali::Toolkit::GlView *glView = nullptr;
    Dali::Toolkit::GlView *result = nullptr;

    glView = (Dali::Toolkit::GlView *)nuiGlView;
    if (!glView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::GlView const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::GlView *)new Dali::Toolkit::GlView((Dali::Toolkit::GlView const &)*glView);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GlView(void *nuiGlView)
  {
    Dali::Toolkit::GlView *glView = nullptr;

    glView = (Dali::Toolkit::GlView *)nuiGlView;
    {
      try
      {
        delete glView;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_GlView_Assign(void *nuiGlView1, void *nuiGlView2)
  {
    void *jresult;
    Dali::Toolkit::GlView *glView1 = nullptr;
    Dali::Toolkit::GlView *glView2 = nullptr;
    Dali::Toolkit::GlView *result = nullptr;

    glView1 = (Dali::Toolkit::GlView *)nuiGlView1;
    glView2 = (Dali::Toolkit::GlView *)nuiGlView2;
    if (!glView2)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::GlView const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::GlView *)&(glView1)->operator=((Dali::Toolkit::GlView const &)*glView2);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlView_SetGraphicsConfig(void *nuiGlView, bool nuiDepth, bool nuiStencil, int nuiMsaa, int nuiVersion)
  {
    Dali::Toolkit::GlView *glView = nullptr;
    Dali::Toolkit::GlView::GraphicsApiVersion version;

    glView = (Dali::Toolkit::GlView *)nuiGlView;
    version = static_cast<Dali::Toolkit::GlView::GraphicsApiVersion>(nuiVersion);
    {
      try
      {
        (glView)->SetGraphicsConfig(nuiDepth, nuiStencil, nuiMsaa, version);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlView_RegisterGlCallbacks(void *nuiGlView, void *nuiInitCB, int *nuiRenderFrameCB, void *nuiTerminateCB)
  {
    Dali::Toolkit::GlView *glView = (Dali::Toolkit::GlView *)nuiGlView;
    void (*initCB)() = (void (*)())nuiInitCB;
    int (*renderFrameCB)() = (int (*)())nuiRenderFrameCB;
    void (*terminateCB)() = (void (*)())nuiTerminateCB;

    if (!glView || !initCB || !renderFrameCB || !terminateCB)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null", 0);
      return;
    }
    try
    {
      glView->RegisterGlCallbacks(Dali::MakeCallback(initCB), Dali::MakeCallback(renderFrameCB), Dali::MakeCallback(terminateCB));
    }
    CALL_CATCH_EXCEPTION();
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlView_SetResizeCallback(void *nuiGlView, void *nuiResizeCB)
  {
    Dali::Toolkit::GlView *glView = (Dali::Toolkit::GlView *)nuiGlView;
    void (*resizeCB)(int, int) = (void (*)(int, int))nuiResizeCB;

    if (!glView || !resizeCB)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null", 0);
      return;
    }
    try
    {
      glView->SetResizeCallback(Dali::MakeCallback(resizeCB));
    }
    CALL_CATCH_EXCEPTION();
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlView_RenderOnce(void *nuiGlView)
  {
    Dali::Toolkit::GlView *glView = (Dali::Toolkit::GlView *)nuiGlView;
    if (!glView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::GlView", 0);
      return;
    }
    {
      try
      {
        glView->RenderOnce();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlView_BindTextureResources(void *nuiGlView, void *textures, int size)
  {
    Dali::Toolkit::GlView *glView = (Dali::Toolkit::GlView *)nuiGlView;
    Dali::Texture **texPtr = (Dali::Texture **)textures;
    if (!glView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::GlView", 0);
      return;
    }
    {
      try
      {
        // Convert array to vector
        std::vector<Dali::Texture> vTex;
        for (int i = 0; i < size; i++)
        {
          Dali::Texture texture = *texPtr[i];
          vTex.push_back(texture);
        }
        glView->BindTextureResources(vTex);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GlView_GetRenderingMode(void *nuiGlView)
  {
    int jresult;
    Dali::Toolkit::GlView *glView = nullptr;
    Dali::Toolkit::GlView::RenderingMode result;

    glView = (Dali::Toolkit::GlView *)nuiGlView;
    if (!glView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::GlView", 0);
      return 0;
    }

    {
      try
      {
        result = (Dali::Toolkit::GlView::RenderingMode)(glView)->GetRenderingMode();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (int)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GlView_SetRenderingMode(void *nuiGlView, int nuiRenderingMode)
  {
    Dali::Toolkit::GlView *glView = nullptr;
    Dali::Toolkit::GlView::RenderingMode renderingMode;

    glView = (Dali::Toolkit::GlView *)nuiGlView;
    if (!glView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::GlView", 0);
      return;
    }
    renderingMode = (Dali::Toolkit::GlView::RenderingMode)nuiRenderingMode;
    {
      try
      {
        (glView)->SetRenderingMode(renderingMode);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GlView_GetBackendMode(void *nuiGlView)
  {
    int jresult;
    Dali::Toolkit::GlView *glView = nullptr;
    Dali::Toolkit::GlView::BackendMode result;

    glView = (Dali::Toolkit::GlView *)nuiGlView;
    if (!glView)
    {
      SWIG_CSharpSetPendingExceptionArgument(
          SWIG_CSharpArgumentNullException,
          "Attempt to dereference null Dali::Toolkit::GlView", 0);
      return 0;
    }

    {
      try
      {
        result = (Dali::Toolkit::GlView::BackendMode)(glView)->GetBackendMode();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (int)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_RenderCallbackInput_Size_get(void *input)
  {
    void *jresult;
    Dali::Size *result = 0;
    Dali::RenderCallbackInput *renderInput = (Dali::RenderCallbackInput *)input;

    result = &(renderInput->size);
    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_RenderCallbackInput_Mvp_get(void *input)
  {
    void *jresult;
    Dali::Matrix *result = 0;
    Dali::RenderCallbackInput *renderInput = (Dali::RenderCallbackInput *)input;

    result = &(renderInput->mvp);
    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_RenderCallbackInput_Projection_get(void *input)
  {
    void *jresult;
    Dali::Matrix *result = 0;
    Dali::RenderCallbackInput *renderInput = (Dali::RenderCallbackInput *)input;

    result = &(renderInput->projection);
    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_RenderCallbackInput_ClippingBox_get(void *input)
  {
    void *jresult;
    Dali::Rect<int> *result = 0;
    Dali::RenderCallbackInput *renderInput = (Dali::RenderCallbackInput *)input;

    result = &(renderInput->clippingBox);
    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_RenderCallbackInput_TextureBindings_get(void *input, int *size)
  {
    void *jresult;
    uint *result = 0;
    Dali::RenderCallbackInput *renderInput = (Dali::RenderCallbackInput *)input;

    result = renderInput->textureBindings.data();
    *size = renderInput->textureBindings.size();
    jresult = (void *)result;
    return jresult;
  }

#ifdef __cplusplus
}
#endif
