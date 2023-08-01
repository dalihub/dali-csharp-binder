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
#include <dali-toolkit/public-api/controls/text-controls/text-label.h>
#include <dali-toolkit/public-api/controls/text-controls/text-editor.h>
#include <dali-toolkit/public-api/controls/text-controls/text-field.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-label-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-editor-devel.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-field-devel.h>
#include <dali-toolkit/devel-api/text/text-geometry-devel.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_TextGeometry_TextLabel_GetLineBoundingRectangle(void * pTextLabel, uint32_t lineIndex)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  void* resultRect;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try {
      resultRect = new Dali::Rect<float>
      ((const Dali::Rect<float> &)(Dali::Toolkit::Text::TextGeometry::GetLineBoundingRectangle( *textLabel, lineIndex)));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return resultRect;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_TextGeometry_TextField_GetLineBoundingRectangle(void * pTextField, uint32_t lineIndex)
{
  Dali::Toolkit::TextField *textField = (Dali::Toolkit::TextField *) 0;
  void* resultRect;

  textField = (Dali::Toolkit::TextField *)pTextField;
  {
    try {
      resultRect = new Dali::Rect<float>
      ((const Dali::Rect<float> &)(Dali::Toolkit::Text::TextGeometry::GetLineBoundingRectangle( *textField, lineIndex)));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return resultRect;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_TextGeometry_TextEditor_GetLineBoundingRectangle(void * pTextEditor, uint32_t lineIndex)
{
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0;
  void* resultRect;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      resultRect = new Dali::Rect<float>
      ((const Dali::Rect<float> &)(Dali::Toolkit::Text::TextGeometry::GetLineBoundingRectangle( *textEditor, lineIndex)));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return resultRect;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_TextGeometry_TextLabel_GetCharacterBoundingRectangle(void * pTextLabel, uint32_t charIndex)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  void* resultRect;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try {
      resultRect = new Dali::Rect<>
      ((const Dali::Rect<> &)(Dali::Toolkit::Text::TextGeometry::GetCharacterBoundingRectangle( *textLabel, charIndex)));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return resultRect;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_TextGeometry_TextField_GetCharacterBoundingRectangle(void * pTextField, uint32_t charIndex)
{
  Dali::Toolkit::TextField *textField = (Dali::Toolkit::TextField *) 0;
  void* resultRect;

  textField = (Dali::Toolkit::TextField *)pTextField;
  {
    try {
      resultRect = new Dali::Rect<>
      ((const Dali::Rect<> &)(Dali::Toolkit::Text::TextGeometry::GetCharacterBoundingRectangle( *textField, charIndex)));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return resultRect;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_TextGeometry_TextEditor_GetCharacterBoundingRectangle(void * pTextEditor, uint32_t charIndex)
{
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0;
  void* resultRect;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      resultRect = new Dali::Rect<>
      ((const Dali::Rect<> &)(Dali::Toolkit::Text::TextGeometry::GetCharacterBoundingRectangle( *textEditor, charIndex)));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return resultRect;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextGeometry_TextLabel_GetCharacterIndexAtPosition(void * pTextLabel, float visualX, float visualY)
{
  Dali::Toolkit::TextLabel *textLabel = (Dali::Toolkit::TextLabel *) 0;
  int charIndex;

  textLabel = (Dali::Toolkit::TextLabel *)pTextLabel;
  {
    try {
      charIndex = (int)(Dali::Toolkit::Text::TextGeometry::GetCharacterIndexAtPosition( *textLabel, visualX, visualY));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return charIndex;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextGeometry_TextField_GetCharacterIndexAtPosition(void * pTextField, float visualX, float visualY)
{
  Dali::Toolkit::TextField *textField = (Dali::Toolkit::TextField *) 0;
  int charIndex;

  textField = (Dali::Toolkit::TextField *)pTextField;
  {
    try {
      charIndex = (int)(Dali::Toolkit::Text::TextGeometry::GetCharacterIndexAtPosition( *textField, visualX, visualY));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return charIndex;
}

SWIGEXPORT int SWIGSTDCALL CSharp_TextGeometry_TextEditor_GetCharacterIndexAtPosition(void * pTextEditor, float visualX, float visualY)
{
  Dali::Toolkit::TextEditor *textEditor = (Dali::Toolkit::TextEditor *) 0;
  int charIndex;

  textEditor = (Dali::Toolkit::TextEditor *)pTextEditor;
  {
    try {
      charIndex = (int)(Dali::Toolkit::Text::TextGeometry::GetCharacterIndexAtPosition( *textEditor, visualX, visualY));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return charIndex;
}

#ifdef __cplusplus
}
#endif

