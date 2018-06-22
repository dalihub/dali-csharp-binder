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


#ifdef __cplusplus
}
#endif
