#ifndef CSHARP_ABSOLUTE_LAYOUT
#define CSHARP_ABSOLUTE_LAYOUT
#endif

#include "common.h"
#include <dali-toolkit/devel-api/layouting/absolute-layout.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::Toolkit::LayoutGroup * SWIGSTDCALL CSharp_Dali_AbsoluteLayout_SWIGUpcast(Dali::Toolkit::AbsoluteLayout *jarg1) {
    return (Dali::Toolkit::LayoutGroup *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AbsoluteLayout__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::AbsoluteLayout *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::AbsoluteLayout *)new Dali::Toolkit::AbsoluteLayout();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AbsoluteLayout_New() {
  void * jresult ;
  Dali::Toolkit::AbsoluteLayout result;

  {
    try {
      result = Dali::Toolkit::AbsoluteLayout::New();
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
  jresult = new Dali::Toolkit::AbsoluteLayout((const Dali::Toolkit::AbsoluteLayout &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AbsoluteLayout_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::AbsoluteLayout result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::AbsoluteLayout::DownCast(arg1);
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
  jresult = new Dali::Toolkit::AbsoluteLayout((const Dali::Toolkit::AbsoluteLayout &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AbsoluteLayout__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AbsoluteLayout *arg1 = 0 ;
  Dali::Toolkit::AbsoluteLayout *result = 0 ;

  arg1 = (Dali::Toolkit::AbsoluteLayout *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::AbsoluteLayout const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::AbsoluteLayout *)new Dali::Toolkit::AbsoluteLayout((Dali::Toolkit::AbsoluteLayout const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AbsoluteLayout_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::AbsoluteLayout *arg1 = (Dali::Toolkit::AbsoluteLayout *) 0 ;
  Dali::Toolkit::AbsoluteLayout *arg2 = 0 ;
  Dali::Toolkit::AbsoluteLayout *result = 0 ;

  arg1 = (Dali::Toolkit::AbsoluteLayout *)jarg1;
  arg2 = (Dali::Toolkit::AbsoluteLayout *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::AbsoluteLayout const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::AbsoluteLayout *) &(arg1)->operator =((Dali::Toolkit::AbsoluteLayout const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AbsoluteLayout(void * jarg1) {
  Dali::Toolkit::AbsoluteLayout *arg1 = (Dali::Toolkit::AbsoluteLayout *) 0 ;

  arg1 = (Dali::Toolkit::AbsoluteLayout *)jarg1;
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
