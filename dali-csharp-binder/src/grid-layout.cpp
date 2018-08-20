#ifndef CSHARP_LINEAR_LAYOUT
#define CSHARP_LINEAR_LAYOUT
#endif

#include "common.h"
#include <dali-toolkit/devel-api/layouting/grid.h>

#ifdef __cplusplus
extern "C" {
#endif


SWIGEXPORT Dali::Toolkit::LayoutGroup * SWIGSTDCALL CSharp_Dali_GridLayout_SWIGUpcast(Dali::Toolkit::Grid *jarg1) {
    return (Dali::Toolkit::LayoutGroup *)jarg1;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_GridLayout__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::Grid *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::Grid *)new Dali::Toolkit::Grid();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GridLayout_New() {
  void * jresult ;
  Dali::Toolkit::Grid result;

  {
    try {
      result = Dali::Toolkit::Grid::New();
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
  jresult = new Dali::Toolkit::Grid((const Dali::Toolkit::Grid &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GridLayout_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::Grid result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::Grid::DownCast(arg1);
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
  jresult = new Dali::Toolkit::Grid((const Dali::Toolkit::Grid &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_GridLayout_SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Grid *arg1 = 0 ;
  Dali::Toolkit::Grid *result = 0 ;

  arg1 = (Dali::Toolkit::Grid *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Grid const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Grid *)new Dali::Toolkit::Grid((Dali::Toolkit::Grid const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GridLayout_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::Grid *arg1 = (Dali::Toolkit::Grid *) 0 ;
  Dali::Toolkit::Grid *arg2 = 0 ;
  Dali::Toolkit::Grid *result = 0 ;

  arg1 = (Dali::Toolkit::Grid *)jarg1;
  arg2 = (Dali::Toolkit::Grid *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Grid const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::Grid *) &(arg1)->operator =((Dali::Toolkit::Grid const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_GridLayout(void * jarg1) {
  Dali::Toolkit::Grid *arg1 = (Dali::Toolkit::Grid *) 0 ;

  arg1 = (Dali::Toolkit::Grid *)jarg1;
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_GridLayout_SetColumns(void * jarg1, int jarg2) {
  Dali::Toolkit::Grid *arg1 = (Dali::Toolkit::Grid *) 0 ;
  int arg2 ;

  arg1 = (Dali::Toolkit::Grid *)jarg1;
  arg2 = (int)jarg2;
  {
    try {
      (arg1)->SetNumberOfColumns(arg2);
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_GridLayout_GetColumns(void * jarg1) {
  int jresult ;
  Dali::Toolkit::Grid *arg1 = (Dali::Toolkit::Grid *) 0 ;
  int result;

  arg1 = (Dali::Toolkit::Grid *)jarg1;
  {
    try {
      result = (int)(arg1)->GetNumberOfColumns();
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
