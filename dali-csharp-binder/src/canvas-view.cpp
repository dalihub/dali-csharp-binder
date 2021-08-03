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

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_CanvasView_New__SWIG_0(char *pViewBox) {
  Dali::ImageDimensions viewBox;
  Dali::Toolkit::CanvasView result;

  if (!pViewBox) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::ImageDimensions", 0);
    return 0;
  }
  viewBox = *(Dali::ImageDimensions *)pViewBox;
  {
    try {
      result = Dali::Toolkit::CanvasView::New(
          Vector2(viewBox.GetWidth(), viewBox.GetHeight()));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::CanvasView(
      (const Dali::Toolkit::CanvasView &)result);
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_CanvasView_New__SWIG_1() {
  Dali::Toolkit::CanvasView result;

  {
    try {
      result = Dali::Toolkit::CanvasView::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Toolkit::CanvasView(
      (const Dali::Toolkit::CanvasView &)result);
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_CanvasView_AddDrawable(char *pCanvasView, char *pDrawable) {
  Dali::Toolkit::CanvasView canvasView;
  Dali::CanvasRenderer::Drawable drawable;
  bool result = true;

  if (!pCanvasView) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Toolkit::CanvasView", 0);
    return false;
  }
  canvasView = *(Dali::Toolkit::CanvasView *)pCanvasView;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;
  {
    try {
      canvasView.AddDrawable(drawable);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_CanvasView_RemoveDrawable(char *pCanvasView, char *pDrawable) {
  Dali::Toolkit::CanvasView canvasView;
  Dali::CanvasRenderer::Drawable drawable;
  bool result = true;

  if (!pCanvasView) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Toolkit::CanvasView", 0);
    return false;
  }
  canvasView = *(Dali::Toolkit::CanvasView *)pCanvasView;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;
  {
    try {
      canvasView.RemoveDrawable(drawable);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_CanvasView_RemoveAllDrawables(char *pCanvasView) {
  Dali::Toolkit::CanvasView canvasView;
  Dali::CanvasRenderer::Drawable drawable;
  bool result = true;

  if (!pCanvasView) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Toolkit::CanvasView", 0);
    return;
  }
  canvasView = *(Dali::Toolkit::CanvasView *)pCanvasView;

  {
    try {
      canvasView.RemoveAllDrawables();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_CanvasView(void *pCanvasView) {
  Dali::Toolkit::CanvasView *pTargetCanvasView = nullptr;

  if (!pCanvasView) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::Toolkit::CanvasView", 0);
  }

  pTargetCanvasView = (Dali::Toolkit::CanvasView *)pCanvasView;
  {
    try {
      if (pTargetCanvasView) {
        delete pTargetCanvasView;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_CanvasView_Property_VIEWBOX_get() {
  return (int)Toolkit::CanvasView::Property::VIEW_BOX;
}

// Dali::CanvasRenderer::Drawable Wrapper

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Drawable_SetOpacity(char *pDrawable,
                                                            float opacity) {
  Dali::CanvasRenderer::Drawable drawable;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;

  {
    try {
      drawable.SetOpacity(opacity);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Drawable_GetOpacity(char *pDrawable) {
  Dali::CanvasRenderer::Drawable drawable;
  float opacity = 0.0f;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return 0.0;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;
  {
    try {
      opacity = drawable.GetOpacity();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return opacity;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_Translate(char *pDrawable,
                                                           float x, float y) {
  Dali::CanvasRenderer::Drawable drawable;
  bool result = false;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;
  {
    try {
      result = drawable.Translate(Vector2(x, y));
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_Scale(char *pDrawable,
                                                       float scale) {
  Dali::CanvasRenderer::Drawable drawable;
  bool result = false;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;

  {
    try {
      result = drawable.Scale(scale);
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_Rotate(char *pDrawable,
                                                        float degree) {
  Dali::CanvasRenderer::Drawable drawable;
  bool result = false;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;
  {
    try {
      result = drawable.Rotate(Dali::Degree(degree));
    }
    CALL_CATCH_EXCEPTION(false);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_Transform(char *pDrawable,
                                                           float *pTransform) {
  Dali::CanvasRenderer::Drawable drawable;
  bool result = false;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;

  if (!pTransform) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Dali::Matrix3 const & type is null",
                                           0);
    return false;
  }

  {
    try {
      result = drawable.Transform(
          Dali::Matrix3(pTransform[0], pTransform[1], pTransform[2],
                        pTransform[3], pTransform[4], pTransform[5],
                        pTransform[6], pTransform[7], pTransform[8]));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_Drawable_GetBoundingBox(char *pDrawable) {
  Dali::CanvasRenderer::Drawable drawable;
  Dali::Rect<float> result;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  drawable = *(Dali::CanvasRenderer::Shape *)pDrawable;
  {
    try {
      result = drawable.GetBoundingBox();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  // Note: The float type Rectangle class is not ready yet.
  //      Therefore, it transmits data in Vector4 class.
  //      This type should later be changed to the appropriate data type.
  return new Dali::Vector4(result.x, result.y, result.width, result.height);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_SetClipPath(char *pDrawable,
                                                             char *pClip) {
  Dali::CanvasRenderer::Drawable drawable;
  Dali::CanvasRenderer::Drawable clip;
  bool result = false;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;

  if (!pClip) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  clip = *(Dali::CanvasRenderer::Drawable *)pClip;

  {
    try {
      result = drawable.SetClipPath(clip);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Drawable_SetMask(char *pDrawable,
                                                         char *pMask,
                                                         int maskType) {
  Dali::CanvasRenderer::Drawable drawable;
  Dali::CanvasRenderer::Drawable mask;
  bool result = false;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;

  if (!pMask) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  mask = *(Dali::CanvasRenderer::Drawable *)pMask;

  {
    try {
      result = drawable.SetMask(
          mask,
          static_cast<Dali::CanvasRenderer::Drawable::MaskType>(maskType));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

// Dali::CanvasRenderer::Shape Wrapper

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Shape_New() {
  Dali::CanvasRenderer::Shape shape;

  {
    try {
      shape = Dali::CanvasRenderer::Shape::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::CanvasRenderer::Shape(
      (const Dali::CanvasRenderer::Shape &)shape);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddRect(char *pShape, float x,
                                                      float y, float width,
                                                      float height,
                                                      float roundX,
                                                      float roundY) {
  Dali::CanvasRenderer::Shape shape;
  bool result = false;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.AddRect(Rect<float>(x, y, width, height),
                             Vector2(roundX, roundY));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddCircle(char *pShape, float x,
                                                        float y, float radiusX,
                                                        float radiusY) {
  Dali::CanvasRenderer::Shape shape;
  bool result = false;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.AddCircle(Vector2(x, y), Vector2(radiusX, radiusY));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddArc(char *pShape, float x,
                                                     float y, float radius,
                                                     float startAngle,
                                                     float sweep, bool pie) {
  Dali::CanvasRenderer::Shape shape;
  bool result = false;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.AddArc(Vector2(x, y), radius, startAngle, sweep, pie);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddMoveTo(char *pShape, float x,
                                                        float y) {
  Dali::CanvasRenderer::Shape shape;
  bool result = false;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.AddMoveTo(Vector2(x, y));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddLineTo(char *pShape, float x,
                                                        float y) {
  Dali::CanvasRenderer::Shape shape;
  bool result = false;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.AddLineTo(Vector2(x, y));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_AddCubicTo(
    char *pShape, float controlPoint1X, float controlPoint1Y,
    float controlPoint2X, float controlPoint2Y, float endPointX,
    float endPointY) {
  Dali::CanvasRenderer::Shape shape;
  bool result = false;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.AddCubicTo(Vector2(controlPoint1X, controlPoint1Y),
                                Vector2(controlPoint2X, controlPoint2Y),
                                Vector2(endPointX, endPointY));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_Close(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  bool result = false;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.Close();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Shape_ResetPath(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  bool result = false;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return false;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.ResetPath();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetFillColor(char *pShape,
                                                           char *pColor) {
  Dali::CanvasRenderer::Shape shape;
  Dali::Vector4 color;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  if (!pColor) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Dali::Vector4 const & type is null",
                                           0);
    return;
  }
  color = *(Dali::Vector4 *)pColor;

  {
    try {
      shape.SetFillColor(color);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Shape_GetFillColor(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  Dali::Vector4 result;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.GetFillColor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Vector4((const Dali::Vector4 &)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetFillRule(char *pShape,
                                                          int rule) {
  Dali::CanvasRenderer::Shape shape;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      shape.SetFillRule(
          static_cast<Dali::CanvasRenderer::Shape::FillRule>(rule));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Shape_GetFillRule(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  Dali::CanvasRenderer::Shape::FillRule result;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.GetFillRule();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (int)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeWidth(char *pShape,
                                                             float width) {
  Dali::CanvasRenderer::Shape shape;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      shape.SetStrokeWidth(width);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Shape_GetStrokeWidth(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  float result;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.GetStrokeWidth();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeColor(char *pShape,
                                                             char *pColor) {
  Dali::CanvasRenderer::Shape shape;
  Dali::Vector4 color;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  if (!pColor) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Dali::Vector4 const & type is null",
                                           0);
    return;
  }
  color = *(Dali::Vector4 *)pColor;
  {
    try {
      shape.SetStrokeColor(color);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Shape_GetStrokeColor(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  Dali::Vector4 result;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;
  {
    try {
      result = shape.GetStrokeColor();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Vector4((const Dali::Vector4 &)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeDash(char *pShape,
                                                            float *pDashPattern,
                                                            int patternLength) {
  Dali::CanvasRenderer::Shape shape;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  if (!pDashPattern) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException,
                                           "Dash pattern is null", 0);
    return;
  }

  {
    try {
      Vector<float> dashPattern;
      for (unsigned int count = 0; count < patternLength; count++) {
        dashPattern.PushBack(pDashPattern[count]);
      }
      shape.SetStrokeDash(dashPattern);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Shape_GetStrokeDashCount(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  int result;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {

      Dali::Vector<float> dashPattern = shape.GetStrokeDash();
      result = dashPattern.Size();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT float SWIGSTDCALL
CSharp_Dali_Shape_GetStrokeDashIndexOf(char *pShape, int index) {
  Dali::CanvasRenderer::Shape shape;
  float result = 0.0f;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      Dali::Vector<float> dashPattern = shape.GetStrokeDash();
      if (index < 0 || index > dashPattern.Size()) {
        throw std::invalid_argument("invalid index");
      }
      result = dashPattern[index];
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeCap(char *pShape,
                                                           int cap) {
  Dali::CanvasRenderer::Shape shape;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      shape.SetStrokeCap(
          static_cast<Dali::CanvasRenderer::Shape::StrokeCap>(cap));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Shape_GetStrokeCap(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  Dali::CanvasRenderer::Shape::StrokeCap result;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      result = shape.GetStrokeCap();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (int)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Shape_SetStrokeJoin(char *pShape,
                                                            int join) {
  Dali::CanvasRenderer::Shape shape;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;

  {
    try {
      shape.SetStrokeJoin(
          static_cast<Dali::CanvasRenderer::Shape::StrokeJoin>(join));
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Shape_GetStrokeJoin(char *pShape) {
  Dali::CanvasRenderer::Shape shape;
  Dali::CanvasRenderer::Shape::StrokeJoin result;

  if (!pShape) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Shape", 0);
    return 0;
  }
  shape = *(Dali::CanvasRenderer::Shape *)pShape;
  {
    try {
      result = shape.GetStrokeJoin();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (int)result;
}

// Dali::CanvasRenderer::DrawableGroup Wrapper

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_DrawableGroup_New() {
  Dali::CanvasRenderer::DrawableGroup drawableGroup;

  {
    try {
      drawableGroup = Dali::CanvasRenderer::DrawableGroup::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::CanvasRenderer::DrawableGroup(
      (const Dali::CanvasRenderer::DrawableGroup &)drawableGroup);
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_DrawableGroup_AddDrawable(char *pDrawableGroup, char *pDrawable) {
  Dali::CanvasRenderer::DrawableGroup drawableGroup;
  Dali::CanvasRenderer::Drawable drawable;
  bool result = true;

  if (!pDrawableGroup) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::DrawableGroup", 0);
    return false;
  }
  drawableGroup = *(Dali::CanvasRenderer::DrawableGroup *)pDrawableGroup;

  if (!pDrawable) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::Drawable", 0);
    return false;
  }
  drawable = *(Dali::CanvasRenderer::Drawable *)pDrawable;
  {
    try {
      drawableGroup.AddDrawable(drawable);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT bool SWIGSTDCALL
CSharp_Dali_DrawableGroup_RemoveAllDrawables(char *pDrawableGroup) {
  Dali::CanvasRenderer::DrawableGroup drawableGroup;
  bool result = false;

  if (!pDrawableGroup) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null Dali::CanvasRenderer::DrawableGroup", 0);
    return false;
  }
  drawableGroup = *(Dali::CanvasRenderer::DrawableGroup *)pDrawableGroup;

  {
    try {
      result = drawableGroup.RemoveAllDrawables();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

#ifdef __cplusplus
} // end extern "C"
#endif
