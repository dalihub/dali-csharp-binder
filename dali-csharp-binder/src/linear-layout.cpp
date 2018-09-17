#ifndef CSHARP_LINEAR_LAYOUT
#define CSHARP_LINEAR_LAYOUT
#endif

#include "common.h"
#include <dali-toolkit/devel-api/layouting/linear-layout.h>

#ifdef __cplusplus
extern "C" {
#endif


SWIGEXPORT Dali::Toolkit::LayoutGroup * SWIGSTDCALL CSharp_Dali_LinearLayout_SWIGUpcast(Dali::Toolkit::LinearLayout *jarg1) {
    return (Dali::Toolkit::LayoutGroup *)jarg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LinearLayout__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::LinearLayout *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LinearLayout *)new Dali::Toolkit::LinearLayout();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LinearLayout_New() {
  void * jresult ;
  Dali::Toolkit::LinearLayout result;

  {
    try {
      result = Dali::Toolkit::LinearLayout::New();
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
  jresult = new Dali::Toolkit::LinearLayout((const Dali::Toolkit::LinearLayout &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LinearLayout_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::LinearLayout result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::LinearLayout::DownCast(arg1);
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
  jresult = new Dali::Toolkit::LinearLayout((const Dali::Toolkit::LinearLayout &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LinearLayout__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LinearLayout *arg1 = 0 ;
  Dali::Toolkit::LinearLayout *result = 0 ;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LinearLayout const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LinearLayout *)new Dali::Toolkit::LinearLayout((Dali::Toolkit::LinearLayout const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LinearLayout_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LinearLayout *arg1 = (Dali::Toolkit::LinearLayout *) 0 ;
  Dali::Toolkit::LinearLayout *arg2 = 0 ;
  Dali::Toolkit::LinearLayout *result = 0 ;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
  arg2 = (Dali::Toolkit::LinearLayout *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LinearLayout const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LinearLayout *) &(arg1)->operator =((Dali::Toolkit::LinearLayout const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LinearLayout(void * jarg1) {
  Dali::Toolkit::LinearLayout *arg1 = (Dali::Toolkit::LinearLayout *) 0 ;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LinearLayout_SetCellPadding(void * jarg1, void * jarg2) {
  Dali::Toolkit::LinearLayout *arg1 = (Dali::Toolkit::LinearLayout *) 0 ;
  Dali::Toolkit::LayoutSize arg2 ;
  Dali::Toolkit::LayoutSize *argp2 ;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
  argp2 = (Dali::Toolkit::LayoutSize *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutSize", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetCellPadding(arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LinearLayout_GetCellPadding(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LinearLayout *arg1 = (Dali::Toolkit::LinearLayout *) 0 ;
  Dali::Toolkit::LayoutSize result;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
  {
    try {
      result = (arg1)->GetCellPadding();
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
  jresult = new Dali::Toolkit::LayoutSize((const Dali::Toolkit::LayoutSize &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LinearLayout_SetOrientation(void * jarg1, int jarg2) {
  Dali::Toolkit::LinearLayout *arg1 = (Dali::Toolkit::LinearLayout *) 0 ;
  Dali::Toolkit::LinearLayout::Orientation arg2 ;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
  arg2 = (Dali::Toolkit::LinearLayout::Orientation)jarg2;
  {
    try {
      (arg1)->SetOrientation(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LinearLayout_GetOrientation(void * jarg1) {
  int jresult ;
  Dali::Toolkit::LinearLayout *arg1 = (Dali::Toolkit::LinearLayout *) 0 ;
  Dali::Toolkit::LinearLayout::Orientation result;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
  {
    try {
      result = (Dali::Toolkit::LinearLayout::Orientation)(arg1)->GetOrientation();
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LinearLayout_SetAlignment(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::LinearLayout *arg1 = (Dali::Toolkit::LinearLayout *) 0 ;
  unsigned int arg2 ;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      (arg1)->SetAlignment(arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LinearLayout_GetAlignment(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::LinearLayout *arg1 = (Dali::Toolkit::LinearLayout *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::LinearLayout *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::LinearLayout const *)arg1)->GetAlignment();
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
  jresult = result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LinearLayout_Alignment() {
  void * jresult ;
  Dali::Toolkit::LinearLayout::Alignment *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LinearLayout::Alignment *)new Dali::Toolkit::LinearLayout::Alignment();
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
  }

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LinearLayout_Alignment(void * jarg1) {
  Dali::Toolkit::LinearLayout::Alignment *arg1 = (Dali::Toolkit::LinearLayout::Alignment *) 0 ;

  arg1 = (Dali::Toolkit::LinearLayout::Alignment *)jarg1;
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
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LinearLayout_ChildProperty_WEIGHT_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::LinearLayout::ChildProperty::WEIGHT;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LinearLayout_ChildProperty() {
  void * jresult ;
  Dali::Toolkit::LinearLayout::ChildProperty *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LinearLayout::ChildProperty *)new Dali::Toolkit::LinearLayout::ChildProperty();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LinearLayout_ChildProperty(void * jarg1) {
  Dali::Toolkit::LinearLayout::ChildProperty *arg1 = (Dali::Toolkit::LinearLayout::ChildProperty *) 0 ;

  arg1 = (Dali::Toolkit::LinearLayout::ChildProperty *)jarg1;
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

#ifdef __cplusplus
}
#endif
