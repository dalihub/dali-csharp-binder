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
#include <iostream>
#include <dali-toolkit/devel-api/layouting/flex-node.h>

// INTERNAL INCLUDES
#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FlexLayout_New()
{
  Dali::Toolkit::Flex::Node* result = (Dali::Toolkit::Flex::Node*)0;
  {
    try {
      result = new Dali::Toolkit::Flex::Node();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
  return (void *)result;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FlexLayout(void * jarg1)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexDirection(void * jarg1, int jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::FlexDirection arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (Dali::Toolkit::Flex::FlexDirection)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexDirection( arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
}

SWIGEXPORT const Dali::Toolkit::Flex::Node* SWIGSTDCALL CSharp_Dali_FlexLayout_AddChildWithMargin(void * jarg1, void *jarg2, void *jarg3, Dali::Toolkit::Flex::MeasureCallback jarg4, int jarg5)
{
  Dali::Toolkit::Flex::Node* arg1 = (Dali::Toolkit::Flex::Node* )jarg1;
  Dali::Actor *arg2 = (Dali::Actor *) 0;  arg2 = (Dali::Actor *)jarg2;
  const Dali::Toolkit::Flex::Node* result = nullptr;

  {
    try {
      if(jarg3 == NULL)
      {
        result = arg1->Dali::Toolkit::Flex::Node::AddChild((Dali::Actor &)*arg2, Dali::Extents(0,0,0,0), jarg4, jarg5);
      }
      else
      {
        Dali::Extents* arg3 = (Dali::Extents *)jarg3;
        result = arg1->Dali::Toolkit::Flex::Node::AddChild((Dali::Actor &)*arg2, *arg3, jarg4, jarg5);
      }
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
  return result;
}

SWIGEXPORT const Dali::Toolkit::Flex::Node* SWIGSTDCALL CSharp_Dali_FlexLayout_AddChild(void * jarg1, void *jarg2, Dali::Toolkit::Flex::MeasureCallback jarg3, int jarg4)
{
  return CSharp_Dali_FlexLayout_AddChildWithMargin(jarg1,jarg2,NULL,jarg3,jarg4);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_RemoveChild(void * jarg1, void * jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Actor* arg2 = (Dali::Actor *)jarg2;

  arg1 = (Dali::Toolkit::Flex::Node*)jarg1;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::RemoveChild(*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_CalculateLayout(void * jarg1, float jarg2, float jarg3, bool isRtl )
{
  Dali::Toolkit::Flex::Node * arg1 = (Dali::Toolkit::Flex::Node* )jarg1;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::CalculateLayout(jarg2, jarg3, isRtl);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FlexLayout_GetWidth(void * jarg1 )
{
  Dali::Toolkit::Flex::Node* arg1 = (Dali::Toolkit::Flex::Node* )jarg1 ;
  float result = 0.0f;
  {
    try {
      result = arg1->Dali::Toolkit::Flex::Node::GetFlexWidth();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
  return result;
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FlexLayout_GetHeight(void * jarg1 )
{
  float result = 0.0f;
  Dali::Toolkit::Flex::Node* arg1 = (Dali::Toolkit::Flex::Node* )jarg1 ;
  {
    try {
      result = arg1->Dali::Toolkit::Flex::Node::GetFlexHeight();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_FlexLayout_GetNodeFrame( void * jarg1, int index )
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  Dali::Vector4 result;
  void* jresult;
  {
    try {
      result = arg1->Dali::Toolkit::Flex::Node::GetNodeFrame(index);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }

  jresult = new Dali::Vector4((const Dali::Vector4 &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetMargin(void * jarg1, void * jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  Dali::Extents* arg2 = (Dali::Extents *)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetMargin( *arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetPadding(void * jarg1, void * jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  Dali::Extents* arg2 = (Dali::Extents *)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetPadding( *arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
      };
    }
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexDirection(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::FlexDirection result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::FlexDirection)arg1->Dali::Toolkit::Flex::Node::GetFlexDirection();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexJustification(void * jarg1, int jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Justification arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (Dali::Toolkit::Flex::Justification)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexJustification(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexJustification(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Justification result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::Justification)arg1->Dali::Toolkit::Flex::Node::GetFlexJustification();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexWrap(void * jarg1, int jarg2)
{

  Dali::Toolkit::Flex::Node* arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  Dali::Toolkit::Flex::WrapType arg2 = (Dali::Toolkit::Flex::WrapType)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexWrap(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexWrap(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::WrapType result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::WrapType)arg1->Dali::Toolkit::Flex::Node::GetFlexWrap();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexAlignment(void * jarg1, int jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Alignment arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (Dali::Toolkit::Flex::Alignment)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexAlignment(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexAlignment(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Alignment result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::Alignment)arg1->Dali::Toolkit::Flex::Node::GetFlexAlignment();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexItemsAlignment(void * jarg1, int jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Alignment arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (Dali::Toolkit::Flex::Alignment)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexItemsAlignment(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexItemsAlignment(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Alignment result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::Alignment)arg1->Dali::Toolkit::Flex::Node::GetFlexItemsAlignment();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexAlignmentSelf(void * jarg1, int jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Alignment arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (Dali::Toolkit::Flex::Alignment)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexAlignmentSelf(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexAlignmentSelf(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Alignment result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::Alignment)arg1->Dali::Toolkit::Flex::Node::GetFlexAlignmentSelf();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexPositionType(void * jarg1, int jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::PositionType arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (Dali::Toolkit::Flex::PositionType)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexPositionType(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexPositionType(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::PositionType result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::PositionType)arg1->Dali::Toolkit::Flex::Node::GetFlexPositionType();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexAspectRatio(void * jarg1, float jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexAspectRatio(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexAspectRatio(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (float)arg1->Dali::Toolkit::Flex::Node::GetFlexAspectRatio();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (float)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexBasis(void * jarg1, float jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexBasis(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexBasis(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (float)arg1->Dali::Toolkit::Flex::Node::GetFlexBasis();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (float)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexShrink(void * jarg1, float jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexShrink(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexShrink(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (float)arg1->Dali::Toolkit::Flex::Node::GetFlexShrink();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (float)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexGrow(void * jarg1, float jarg2)
{
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  float arg2 ;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  arg2 = (float)jarg2;
  {
    try {
      arg1->Dali::Toolkit::Flex::Node::SetFlexGrow(arg2);
    } CALL_CATCH_EXCEPTION();
  }
}


SWIGEXPORT float SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexGrow(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  float result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (float)arg1->Dali::Toolkit::Flex::Node::GetFlexGrow();
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (float)result;
  return jresult;
}


#ifdef __cplusplus
}
#endif
