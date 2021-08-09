/** Copyright (c) 2020 Samsung Electronics Co., Ltd.
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
#include <dali/dali.h>
#include <dali-toolkit/devel-api/text/text-utils-devel.h>

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_RendererParameters_0() {
  void * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *result = 0 ;
  {
    try {
      result = (Dali::Toolkit::DevelText::RendererParameters *)new Dali::Toolkit::DevelText::RendererParameters();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_RendererParameters(void * jarg1) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_text_set(void * jarg1, char * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  try {
    if (arg1) (arg1)->text = *arg2;
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
    };
  }
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_text_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) & ((arg1)->text);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_horizontalAlignment_set(void * jarg1, char *  jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->horizontalAlignment = *arg2;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_horizontalAlignment_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) & ((arg1)->horizontalAlignment);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_verticalAlignment_set(void * jarg1, char * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->verticalAlignment = *arg2;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_verticalAlignment_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) & ((arg1)->verticalAlignment);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_fontFamily_set(void * jarg1, char * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->fontFamily = * arg2;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_fontFamily_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) &((arg1)->fontFamily);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_fontWeight_set(void * jarg1, char * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->fontWeight = *arg2;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_fontWeight_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) &((arg1)->fontWeight);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_fontWidth_set(void * jarg1, char * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->fontWidth = *arg2;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_fontWidth_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) &((arg1)->fontWidth);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_fontSlant_set(void * jarg1, char * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->fontSlant = *arg2;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_fontSlant_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) & ((arg1)->fontSlant);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_layout_set(void * jarg1, char * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->layout = *arg2;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_layout_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) & ((arg1)->layout);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_circularAlignment_set(void * jarg1, char * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  if (arg1) (arg1)->circularAlignment = *arg2;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_RendererParameters_circularAlignment_get(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  std::string * result = 0;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  try {
    result = (std::string *) & ((arg1)->circularAlignment);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_textColor_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  Dali::Vector4 *arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (arg1) (arg1)->textColor = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RendererParameters_textColor_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  Dali::Vector4* result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (Dali::Vector4 *) new Dali::Vector4((arg1)->textColor);
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_fontSize_set(void * jarg1, float jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->fontSize = arg2;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RendererParameters_fontSize_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (float) ((arg1)->fontSize);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_textWidth_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->textWidth = arg2;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_RendererParameters_textWidth_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (unsigned int) ((arg1)->textWidth);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_textHeight_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->textHeight = arg2;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_RendererParameters_textHeight_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (unsigned int) ((arg1)->textHeight);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_radius_set(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->radius = arg2;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_RendererParameters_radius_get(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (unsigned int) ((arg1)->radius);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_beginAngle_set(void * jarg1, float jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->beginAngle = arg2;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RendererParameters_beginAngle_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (float) ((arg1)->beginAngle);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_incrementAngle_set(void * jarg1, float jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->incrementAngle = arg2;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RendererParameters_incrementAngle_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (float) ((arg1)->incrementAngle);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_ellipsisEnabled_set(void * jarg1, bool jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (bool)jarg2;
  if (arg1) (arg1)->ellipsisEnabled = arg2;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_RendererParameters_ellipsisEnabled_get(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (bool) ((arg1)->ellipsisEnabled);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_markupEnabled_set(void * jarg1, bool jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (bool)jarg2;
  if (arg1) (arg1)->markupEnabled = arg2;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_RendererParameters_markupEnabled_get(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (bool) ((arg1)->markupEnabled);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_isTextColorSet_set(void * jarg1, bool jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (bool)jarg2;
  if (arg1) (arg1)->isTextColorSet = arg2;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_RendererParameters_isTextColorSet_get(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (bool) ((arg1)->isTextColorSet);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_minLineSize_set(void * jarg1, float jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (float)jarg2;
  if (arg1) (arg1)->minLineSize = arg2;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_RendererParameters_minLineSize_get(void * jarg1) {
  float jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (float) ((arg1)->minLineSize);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_RendererParameters_padding_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  Dali::Extents *arg2 ;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  arg2 = (Dali::Extents *)jarg2;
  if (arg1) (arg1)->padding = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RendererParameters_padding_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::RendererParameters *arg1 = (Dali::Toolkit::DevelText::RendererParameters *) 0 ;
  Dali::Extents * result;

  arg1 = (Dali::Toolkit::DevelText::RendererParameters *)jarg1;
  result = (Dali::Extents *) new Dali::Extents((arg1)->padding);
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_EmbeddedItemInfo_0() {
  void * jresult ;
  Dali::Toolkit::DevelText::EmbeddedItemInfo *result = 0 ;
  {
    try {
      result = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)new Dali::Toolkit::DevelText::EmbeddedItemInfo();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_EmbeddedItemInfo(void * jarg1) {
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_characterIndex_set(void * jarg1, Dali::TextAbstraction::CharacterIndex jarg2) {
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::TextAbstraction::CharacterIndex arg2 ;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  arg2 = (Dali::TextAbstraction::CharacterIndex)jarg2;
  if (arg1) (arg1)->characterIndex = arg2;
}

SWIGEXPORT Dali::TextAbstraction::CharacterIndex SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_characterIndex_get(void * jarg1) {
  Dali::TextAbstraction::CharacterIndex jresult ;
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::TextAbstraction::CharacterIndex result;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  result = (Dali::TextAbstraction::CharacterIndex) ((arg1)->characterIndex);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_glyphIndex_set(void * jarg1, Dali::TextAbstraction::GlyphIndex jarg2) {
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::TextAbstraction::GlyphIndex arg2 ;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  arg2 = (Dali::TextAbstraction::GlyphIndex)jarg2;
  if (arg1) (arg1)->glyphIndex = arg2;
}

SWIGEXPORT Dali::TextAbstraction::GlyphIndex SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_glyphIndex_get(void * jarg1) {
  Dali::TextAbstraction::GlyphIndex jresult ;
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::TextAbstraction::GlyphIndex result;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  result = (Dali::TextAbstraction::GlyphIndex) ((arg1)->glyphIndex);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_position_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::Vector2 * arg2 ;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (arg1) (arg1)->position = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_position_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::Vector2 * result;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  result = (Dali::Vector2 *) & ((arg1)->position);
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_size_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::Size* arg2 ;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  arg2 = (Dali::Size *)jarg2;
  if (arg1) (arg1)->size = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_size_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::Size * result;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  result = (Dali::Size *) & ((arg1)->size);
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_rotatedSize_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::Size * arg2 ;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  arg2 = (Dali::Size *)jarg2;
  if (arg1) (arg1)->rotatedSize = * arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_rotatedSize_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::Size * result;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  result = (Dali::Size *) & ((arg1)->rotatedSize);
  jresult = (void *) result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_angle_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::Degree *arg2 ;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  arg2 = (Dali::Degree *)jarg2;
  if (arg1) (arg1)->angle = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_angle_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::Degree * result;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  result = (Dali::Degree *) & ((arg1)->angle);
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_colorBlendingMode_set(void * jarg1, Dali::TextAbstraction::ColorBlendingMode jarg2) {
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::TextAbstraction::ColorBlendingMode arg2 ;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  arg2 = (Dali::TextAbstraction::ColorBlendingMode)jarg2;
  if (arg1) (arg1)->colorBlendingMode = arg2;
}

SWIGEXPORT Dali::TextAbstraction::ColorBlendingMode SWIGSTDCALL CSharp_Dali_EmbeddedItemInfo_colorBlendingMode_get(void * jarg1) {
  Dali::TextAbstraction::ColorBlendingMode jresult ;
  Dali::Toolkit::DevelText::EmbeddedItemInfo *arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *) 0 ;
  Dali::TextAbstraction::ColorBlendingMode result;

  arg1 = (Dali::Toolkit::DevelText::EmbeddedItemInfo *)jarg1;
  result = (Dali::TextAbstraction::ColorBlendingMode) ((arg1)->colorBlendingMode);
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ShadowParameters_0() {
  void * jresult ;
  Dali::Toolkit::DevelText::ShadowParameters *result = 0 ;
  {
    try {
      result = (Dali::Toolkit::DevelText::ShadowParameters *)new Dali::Toolkit::DevelText::ShadowParameters();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ShadowParameters(void * jarg1) {
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ShadowParameters_input_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  Dali::Devel::PixelBuffer *arg2 ;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  arg2 = (Dali::Devel::PixelBuffer *)jarg2;
  if (arg1) (arg1)->input = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ShadowParameters_input_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  Dali::Devel::PixelBuffer result;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  result = (Dali::Devel::PixelBuffer) ((arg1)->input);
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ShadowParameters_textColor_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  Dali::Vector4 *arg2 ;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (arg1) (arg1)->textColor = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ShadowParameters_textColor_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  Dali::Vector4 * result;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  result = (Dali::Vector4 *)new Dali::Vector4((arg1)->textColor);
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ShadowParameters_color_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  Dali::Vector4 * arg2 ;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  arg2 = (Dali::Vector4 *)jarg2;
  if (arg1) (arg1)->color = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ShadowParameters_color_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  Dali::Vector4 * result;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  result = (Dali::Vector4 *) & ((arg1)->color);
  jresult = (void *) result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ShadowParameters_offset_set(void * jarg1, void * jarg2) {
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  Dali::Vector2 * arg2 ;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  arg2 = (Dali::Vector2 *)jarg2;
  if (arg1) (arg1)->offset = *arg2;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_ShadowParameters_offset_get(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  Dali::Vector2 * result;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  result = (Dali::Vector2 *) & ((arg1)->offset);
  jresult = (void *) result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ShadowParameters_blendShadow_set(void * jarg1, bool jarg2) {
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  arg2 = (bool)jarg2;
  if (arg1) (arg1)->blendShadow = arg2;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ShadowParameters_blendShadow_get(void * jarg1) {
  bool jresult ;
  Dali::Toolkit::DevelText::ShadowParameters *arg1 = (Dali::Toolkit::DevelText::ShadowParameters *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::DevelText::ShadowParameters *)jarg1;
  result = (bool) ((arg1)->blendShadow);
  jresult = result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextUtils_Render(void* jarg1, void** jarg2, int* jarg3, int* jarg4) {
  void* jresult;
  Dali::Toolkit::DevelText::RendererParameters* arg1 = (Dali::Toolkit::DevelText::RendererParameters*)(jarg1);

  Dali::Vector<Dali::Toolkit::DevelText::EmbeddedItemInfo> embeddedItemLayout;

  Dali::Devel::PixelBuffer result = Dali::Toolkit::DevelText::Render(*arg1, embeddedItemLayout);
  void** arg2 = jarg2;
  uint16_t* arg3 = (uint16_t*)(jarg3);
  uint16_t* arg4 = (uint16_t*)(jarg4);

  Dali::Toolkit::DevelText::EmbeddedItemInfo* array = new Dali::Toolkit::DevelText::EmbeddedItemInfo[embeddedItemLayout.Count()];
  int count = 0;
  for( const auto& itemLayout : embeddedItemLayout )
  {
    array[count++] = itemLayout;
  }
  *arg2 = (void *) array;
  *arg3 = count;
  *arg4 = sizeof(struct Dali::Toolkit::DevelText::EmbeddedItemInfo);
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextUtils_CreateShadow(void* jarg1) {
  void* jresult;
  Dali::Toolkit::DevelText::ShadowParameters* arg1 = (Dali::Toolkit::DevelText::ShadowParameters*)(jarg1);

  Dali::Devel::PixelBuffer result = Dali::Toolkit::DevelText::CreateShadow(*arg1);
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextUtils_ConvertToRgba8888(void* jarg1, void* jarg2, bool jarg3 ) {
  void* jresult;
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  Dali::Vector4 *arg2 = (Dali::Vector4 *)jarg2;
  bool arg3 = (bool)jarg3;

  Dali::Devel::PixelBuffer result = Dali::Toolkit::DevelText::ConvertToRgba8888(*arg1, *arg2, arg3);
  jresult = new Dali::Devel::PixelBuffer((const Dali::Devel::PixelBuffer &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextUtils_UpdateBuffer(void* jarg1, void* jarg2, unsigned int jarg3, unsigned int jarg4, bool jarg5) {
  Dali::Devel::PixelBuffer *arg1 = (Dali::Devel::PixelBuffer *)jarg1;
  Dali::Devel::PixelBuffer *arg2 = (Dali::Devel::PixelBuffer *)jarg2;
  unsigned int arg3 = (unsigned int)jarg3;
  unsigned int arg4 = (unsigned int)jarg4;
  bool arg5 = (bool)jarg5;

  Dali::Toolkit::DevelText::UpdateBuffer(*arg1, *arg2, arg3, arg4, arg5);
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextUtils_GetLastCharacterIndex(void* jarg1) {
  void* jresult;
  Dali::Property::Array *result = 0 ;
  Dali::Toolkit::DevelText::RendererParameters* arg1 = (Dali::Toolkit::DevelText::RendererParameters*)(jarg1);

  if(!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::DevelText::RendererParameters is null", 0);
    result = (Dali::Property::Array *)new Dali::Property::Array();
    jresult = (void *)result;
    return jresult;
  }

  try {
    Dali::Property::Array result1 = Dali::Toolkit::DevelText::GetLastCharacterIndex(*arg1);
    result = (Dali::Property::Array *)new Dali::Property::Array((Dali::Property::Array const &)result1);
  } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
    };
  } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
    };
  } catch (Dali::DaliException e) {
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
    };
  } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
    };
  }
  jresult = (void *)result;
  return jresult;
}



#ifdef __cplusplus
}
#endif

