#ifndef CSHARP_FLEX_LAYOUT
#define CSHARP_FLEX_LAYOUT
#endif

#include "common.h"
#include <dali-toolkit/devel-api/layouting/flex-layout.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::Toolkit::LayoutGroup * SWIGSTDCALL CSharp_Dali_FlexLayout_SWIGUpcast(Dali::Toolkit::FlexLayout *jarg1) {
    return (Dali::Toolkit::LayoutGroup *)jarg1;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_ChildProperty_FLEX_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexLayout::ChildProperty::FLEX;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_ChildProperty_ALIGN_SELF_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::FlexLayout::ChildProperty::ALIGN_SELF;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FlexLayout__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::FlexLayout *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::FlexLayout *)new Dali::Toolkit::FlexLayout();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FlexLayout_New() {
  void * jresult ;
  Dali::Toolkit::FlexLayout result;

  {
    try {
      result = Dali::Toolkit::FlexLayout::New();
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
  jresult = new Dali::Toolkit::FlexLayout((const Dali::Toolkit::FlexLayout &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FlexLayout_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::FlexLayout result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::FlexLayout::DownCast(arg1);
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
  jresult = new Dali::Toolkit::FlexLayout((const Dali::Toolkit::FlexLayout &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_FlexLayout__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::FlexLayout *arg1 = 0 ;
  Dali::Toolkit::FlexLayout *result = 0 ;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::FlexLayout const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::FlexLayout *)new Dali::Toolkit::FlexLayout((Dali::Toolkit::FlexLayout const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_FlexLayout_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout *arg2 = 0 ;
  Dali::Toolkit::FlexLayout *result = 0 ;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  arg2 = (Dali::Toolkit::FlexLayout *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::FlexLayout const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::FlexLayout *) &(arg1)->operator =((Dali::Toolkit::FlexLayout const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_FlexLayout(void * jarg1) {
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexDirection(void * jarg1, int jarg2) {
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::FlexDirection arg2 ;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  arg2 = (Dali::Toolkit::FlexLayout::FlexDirection)jarg2;
  {
    try {
      (arg1)->SetFlexDirection(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexDirection(void * jarg1) {
  int jresult ;
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::FlexDirection result;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  {
    try {
      result = (Dali::Toolkit::FlexLayout::FlexDirection)((Dali::Toolkit::FlexLayout const *)arg1)->GetFlexDirection();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexJustification(void * jarg1, int jarg2) {
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::Justification arg2 ;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  arg2 = (Dali::Toolkit::FlexLayout::Justification)jarg2;
  {
    try {
      (arg1)->SetFlexJustification(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexJustification(void * jarg1) {
  int jresult ;
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::Justification result;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  {
    try {
      result = (Dali::Toolkit::FlexLayout::Justification)((Dali::Toolkit::FlexLayout const *)arg1)->GetFlexJustification();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexWrap(void * jarg1, int jarg2) {
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::WrapType arg2 ;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  arg2 = (Dali::Toolkit::FlexLayout::WrapType)jarg2;
  {
    try {
      (arg1)->SetFlexWrap(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexWrap(void * jarg1) {
  int jresult ;
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::WrapType result;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  {
    try {
      result = (Dali::Toolkit::FlexLayout::WrapType)((Dali::Toolkit::FlexLayout const *)arg1)->GetFlexWrap();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexAlignment(void * jarg1, int jarg2) {
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::Alignment::Type arg2 ;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  arg2 = (Dali::Toolkit::FlexLayout::Alignment::Type)jarg2;
  {
    try {
      (arg1)->SetFlexAlignment(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexAlignment(void * jarg1) {
  int jresult ;
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::Alignment::Type result;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  {
    try {
      result = (Dali::Toolkit::FlexLayout::Alignment::Type)((Dali::Toolkit::FlexLayout const *)arg1)->GetFlexAlignment();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_FlexLayout_SetFlexItemsAlignment(void * jarg1, int jarg2) {
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::Alignment::Type arg2 ;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  arg2 = (Dali::Toolkit::FlexLayout::Alignment::Type)jarg2;
  {
    try {
      (arg1)->SetFlexItemsAlignment(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_FlexLayout_GetFlexItemsAlignment(void * jarg1) {
  int jresult ;
  Dali::Toolkit::FlexLayout *arg1 = (Dali::Toolkit::FlexLayout *) 0 ;
  Dali::Toolkit::FlexLayout::Alignment::Type result;

  arg1 = (Dali::Toolkit::FlexLayout *)jarg1;
  {
    try {
      result = (Dali::Toolkit::FlexLayout::Alignment::Type)((Dali::Toolkit::FlexLayout const *)arg1)->GetFlexItemsAlignment();
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
