#ifndef CSHARP_CANVAS_VIEW
#define CSHARP_CANVAS_VIEW
#endif

#define SWIGSTDCALL

// INCLUDES
#include "common.h"
#include <dali-toolkit/devel-api/controls/canvas-view/canvas-view.h>
#include <dali/devel-api/adaptor-framework/canvas-renderer-drawable-group.h>

using namespace Dali;
using namespace Dali::Toolkit;

#define CALL_CATCH_EXCEPTION(ret)                                              \
  catch (std::out_of_range & e) {                                              \
    SWIG_CSharpException(SWIG_IndexError, const_cast<char *>(e.what()));       \
    return ret;                                                                \
  }                                                                            \
  catch (std::exception & e) {                                                 \
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char *>(e.what()));     \
    return ret;                                                                \
  }                                                                            \
  catch (Dali::DaliException e) {                                              \
    SWIG_CSharpException(SWIG_UnknownError, e.condition);                      \
    return ret;                                                                \
  }                                                                            \
  catch (...) {                                                                \
    SWIG_CSharpException(SWIG_UnknownError, "unknown error");                  \
    return ret;                                                                \
  }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_CanvasView_New__SWIG_0(char *jarg1) {
  void *jresult;
  Dali::ImageDimensions arg1;
  Dali::ImageDimensions *argp1;
  Dali::Toolkit::CanvasView result;

  argp1 = (Dali::ImageDimensions *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    const Vector2 viewBox(arg1.GetWidth(), arg1.GetHeight());
    try {
      result = Dali::Toolkit::CanvasView::New(viewBox);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult =
      new Dali::Toolkit::CanvasView((const Dali::Toolkit::CanvasView &)result);

  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_CanvasView_AddDrawable(char *jarg1,
                                                               char *jarg2) {
  Dali::Toolkit::CanvasView arg1;
  Dali::Toolkit::CanvasView *argp1;
  Dali::CanvasRenderer::Drawable arg2;
  Dali::CanvasRenderer::Drawable *argp2;
  bool result = true;

  argp1 = (Dali::Toolkit::CanvasView *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Toolkit::CanvasView", 0);
    return false;
  }
  arg1 = *argp1;

  argp2 = (Dali::CanvasRenderer::Drawable *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  arg2 = *argp2;
  {
    try {
      arg1.AddDrawable(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_CanvasView(void *jarg1) {
  Dali::Toolkit::CanvasView *arg1 = (Dali::Toolkit::CanvasView *)0;

  arg1 = (Dali::Toolkit::CanvasView *)jarg1;
  {
    try {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

// Dali::CanvasRenderer::Drawable Wrapper

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Drawable_SetOpacity(char *jarg1,
                                                            float jarg2) {
  Dali::CanvasRenderer::Drawable *argp1;
  float arg2 = jarg2;

  argp1 = (Dali::CanvasRenderer::Drawable *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return;
  }
  {
    try {
      argp1->SetOpacity(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Drawable_GetOpacity(char *jarg1) {
  Dali::CanvasRenderer::Drawable *argp1;
  float result = 0.0f;

  argp1 = (Dali::CanvasRenderer::Drawable *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return 0.0;
  }
  {
    try {
      result = argp1->GetOpacity();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_Translate(char *jarg1,
                                                           float jarg2,
                                                           float jarg3) {
  Dali::CanvasRenderer::Drawable *argp1;
  float arg2 = jarg2;
  float arg3 = jarg3;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Drawable *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  {
    try {
      result = argp1->Translate(Vector2(arg2, arg3));
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_Scale(char *jarg1,
                                                       float jarg2) {
  Dali::CanvasRenderer::Drawable *argp1;
  float arg2 = jarg2;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Drawable *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  {
    try {
      result = argp1->Scale(arg2);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_Rotate(char *jarg1,
                                                        float jarg2) {
  Dali::CanvasRenderer::Drawable *argp1;
  float arg2 = jarg2;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Drawable *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  {
    try {
      result = argp1->Rotate(Dali::Degree(arg2));
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_Transform(char *jarg1,
                                                           float *jarg2) {
  Dali::CanvasRenderer::Drawable *argp1;
  float *argp2 = (float *)0;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Drawable *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }

  argp2 = jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Dali::Matrix3 const & type is null",
                                           0);
    return false;
  }
  {
    try {
      result = argp1->Transform(Dali::Matrix3(argp2[0], argp2[1], argp2[2],
                                              argp2[3], argp2[4], argp2[5],
                                              argp2[6], argp2[7], argp2[8]));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

// Dali::CanvasRenderer::Shape Wrapper

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Shape_New() {
  void *jresult;
  Dali::CanvasRenderer::Shape result;

  {
    try {
      result = Dali::CanvasRenderer::Shape::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::CanvasRenderer::Shape(
      (const Dali::CanvasRenderer::Shape &)result);

  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddRect(char *jarg1, float jarg2,
                                                      float jarg3, float jarg4,
                                                      float jarg5, float jarg6,
                                                      float jarg7) {
  Dali::CanvasRenderer::Shape *argp1;
  float arg2 = jarg2;
  float arg3 = jarg3;
  float arg4 = jarg4;
  float arg5 = jarg5;
  float arg6 = jarg6;
  float arg7 = jarg7;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }

  {
    try {
      result = argp1->AddRect(Rect<float>(arg2, arg3, arg4, arg5),
                              Vector2(arg6, arg7));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddCircle(
    char *jarg1, float jarg2, float jarg3, float jarg4, float jarg5) {
  Dali::CanvasRenderer::Shape *argp1;
  float arg2 = jarg2;
  float arg3 = jarg3;
  float arg4 = jarg4;
  float arg5 = jarg5;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  {
    try {
      result = argp1->AddCircle(Vector2(arg2, arg3), Vector2(arg4, arg5));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddArc(char *jarg1, float jarg2,
                                                     float jarg3, float jarg4,
                                                     float jarg5, float jarg6,
                                                     bool jarg7) {
  Dali::CanvasRenderer::Shape *argp1;
  float arg2 = jarg2;
  float arg3 = jarg3;
  float arg4 = jarg4;
  float arg5 = jarg5;
  float arg6 = jarg6;
  bool arg7 = jarg7;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  {
    try {
      result = argp1->AddArc(Vector2(arg2, arg3), arg4, arg5, arg6, arg7);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddMoveTo(char *jarg1,
                                                        float jarg2,
                                                        float jarg3) {
  Dali::CanvasRenderer::Shape *argp1;
  float arg2 = jarg2;
  float arg3 = jarg3;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  {
    try {
      result = argp1->AddMoveTo(Vector2(arg2, arg3));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddLineTo(char *jarg1,
                                                        float jarg2,
                                                        float jarg3) {
  Dali::CanvasRenderer::Shape *argp1;
  float arg2 = jarg2;
  float arg3 = jarg3;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  {
    try {
      result = argp1->AddLineTo(Vector2(arg2, arg3));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_Shape_AddCubicTo(char *jarg1, float jarg2, float jarg3, float jarg4,
                             float jarg5, float jarg6, float jarg7) {
  Dali::CanvasRenderer::Shape *argp1;
  float arg2 = jarg2;
  float arg3 = jarg3;
  float arg4 = jarg4;
  float arg5 = jarg5;
  float arg6 = jarg6;
  float arg7 = jarg7;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  {
    try {
      result = argp1->AddCubicTo(Vector2(arg2, arg3), Vector2(arg4, arg5),
                                 Vector2(arg6, arg7));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_Close(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }

  {
    try {
      result = argp1->Close();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_ResetPath(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }

  {
    try {
      result = argp1->ResetPath();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetFillColor(char *jarg1,
                                                           char *jarg2) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::Vector4 *argp2 = 0;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }

  argp2 = (Dali::Vector4 *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Dali::Vector4 const & type is null",
                                           0);
    return;
  }
  {
    try {
      argp1->SetFillColor(*argp2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Shape_GetFillColor(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::Vector4 result;
  void *jresult = nullptr;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  {
    try {
      result = argp1->GetFillColor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetFillRule(char *jarg1,
                                                          int jarg2) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::CanvasRenderer::Shape::FillRule arg2;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  arg2 = static_cast<Dali::CanvasRenderer::Shape::FillRule>(jarg2);

  {
    try {
      argp1->SetFillRule(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Shape_GetFillRule(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::CanvasRenderer::Shape::FillRule result;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  {
    try {
      result = argp1->GetFillRule();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (int)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeWidth(char *jarg1,
                                                             float jarg2) {
  Dali::CanvasRenderer::Shape *argp1;
  float arg2 = jarg2;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  {
    try {
      argp1->SetStrokeWidth(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Shape_GetStrokeWidth(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  float result;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  {
    try {
      result = argp1->GetStrokeWidth();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeColor(char *jarg1,
                                                             char *jarg2) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::Vector4 arg2;
  Dali::Vector4 *argp2 = 0;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }

  argp2 = (Dali::Vector4 *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Dali::Vector4 const & type is null",
                                           0);
    return;
  }
  arg2 = *argp2;
  {
    try {
      argp1->SetStrokeColor(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Shape_GetStrokeColor(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::Vector4 result;
  void *jresult = nullptr;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  {
    try {
      result = argp1->GetStrokeColor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeDash(char *jarg1,
                                                            float *jarg2,
                                                            int jarg3) {
  Dali::CanvasRenderer::Shape *argp1;
  float *argp2 = (float *)0;
  int arg3 = jarg3;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }

  argp2 = jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Dash pattern is null", 0);
    return;
  }

  {
    try {
      Vector<float> dashPattern;
      for (unsigned int count = 0; count < arg3; count++) {
        dashPattern.PushBack(argp2[count]);
      }
      argp1->SetStrokeDash(dashPattern);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Shape_GetStrokeDashCount(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  int result;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }

  {
    try {

      Dali::Vector<float> dashPattern = argp1->GetStrokeDash();
      result = dashPattern.Size();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Shape_GetStrokeDashIndexOf(char *jarg1,
                                                                    int jarg2) {
  Dali::CanvasRenderer::Shape *argp1;
  float result = 0.0f;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }

  {
    try {
      Dali::Vector<float> dashPattern = argp1->GetStrokeDash();
      if (jarg2 < 0 || jarg2 > dashPattern.Size()) {
        throw std::invalid_argument("invalid index");
      }
      result = dashPattern[jarg2];
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeCap(char *jarg1,
                                                           int jarg2) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::CanvasRenderer::Shape::StrokeCap arg2;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  arg2 = static_cast<Dali::CanvasRenderer::Shape::StrokeCap>(jarg2);

  {
    try {
      argp1->SetStrokeCap(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Shape_GetStrokeCap(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::CanvasRenderer::Shape::StrokeCap result;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  {
    try {
      result = argp1->GetStrokeCap();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (int)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeJoin(char *jarg1,
                                                            int jarg2) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::CanvasRenderer::Shape::StrokeJoin arg2;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  arg2 = static_cast<Dali::CanvasRenderer::Shape::StrokeJoin>(jarg2);

  {
    try {
      argp1->SetStrokeJoin(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Shape_GetStrokeJoin(char *jarg1) {
  Dali::CanvasRenderer::Shape *argp1;
  Dali::CanvasRenderer::Shape::StrokeJoin result;

  argp1 = (Dali::CanvasRenderer::Shape *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  {
    try {
      result = argp1->GetStrokeJoin();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (int)result;
}

// Dali::CanvasRenderer::DrawableGroup Wrapper

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_DrawableGroup_New() {
  void *jresult;
  Dali::CanvasRenderer::DrawableGroup result;

  {
    try {
      result = Dali::CanvasRenderer::DrawableGroup::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::CanvasRenderer::DrawableGroup(
      (const Dali::CanvasRenderer::DrawableGroup &)result);

  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DrawableGroup_AddDrawable(char *jarg1,
                                                                  char *jarg2) {
  Dali::CanvasRenderer::DrawableGroup arg1;
  Dali::CanvasRenderer::DrawableGroup *argp1;
  Dali::CanvasRenderer::Drawable arg2;
  Dali::CanvasRenderer::Drawable *argp2;
  bool result = true;

  argp1 = (Dali::CanvasRenderer::DrawableGroup *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::DrawableGroup", 0);
    return false;
  }
  arg1 = *argp1;

  argp2 = (Dali::CanvasRenderer::Drawable *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  arg2 = *argp2;
  {
    try {
      arg1.AddDrawable(arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DrawableGroup_Clear(char *jarg1) {
  Dali::CanvasRenderer::DrawableGroup *argp1;
  bool result = false;

  argp1 = (Dali::CanvasRenderer::DrawableGroup *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::DrawableGroup", 0);
    return false;
  }

  {
    try {
      result = argp1->Clear();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

#ifdef __cplusplus
} // end extern "C"
#endif
