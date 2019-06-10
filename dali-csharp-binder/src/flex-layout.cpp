#ifndef CSHARP_FLEX_LAYOUT
#define CSHARP_FLEX_LAYOUT
#endif

#include "common.h"
#include <dali-toolkit/devel-api/layouting/flex-node.h>
#include <iostream>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FlexLayout_New()
{
  void * jresult ;
  Dali::Toolkit::Flex::Node* result;

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
  jresult = (void *)result;
  return result;
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



SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_AddChild(void * jarg1, void *jarg2, Dali::Toolkit::Flex::MeasureCallback jarg3, int jarg4)
{
  Dali::Toolkit::Flex::Node* arg1 = (Dali::Toolkit::Flex::Node* )jarg1;
  Dali::Actor *arg2 = (Dali::Actor *) 0;  arg2 = (Dali::Actor *)jarg2;

  {
    try {
        arg1->Dali::Toolkit::Flex::Node::AddChild((Dali::Actor &)*arg2, jarg3, jarg4);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexJustification(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Justification result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::Justification)arg1->Dali::Toolkit::Flex::Node::GetFlexJustification();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexWrap(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::WrapType result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::WrapType)arg1->Dali::Toolkit::Flex::Node::GetFlexWrap();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexAlignment(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Alignment result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::Alignment)arg1->Dali::Toolkit::Flex::Node::GetFlexAlignment();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexItemsAlignment(void * jarg1)
{
  int jresult ;
  Dali::Toolkit::Flex::Node *arg1 = (Dali::Toolkit::Flex::Node *) 0 ;
  Dali::Toolkit::Flex::Alignment result;

  arg1 = (Dali::Toolkit::Flex::Node *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Flex::Alignment)arg1->Dali::Toolkit::Flex::Node::GetFlexItemsAlignment();
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
  jresult = (int)result;
  return jresult;
}



#ifdef __cplusplus
}
#endif
