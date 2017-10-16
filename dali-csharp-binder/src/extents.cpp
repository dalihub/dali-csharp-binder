#ifndef CSHARP_EXTENTS
#define CSHARP_EXTENTS
#endif

#include "common.h"
#include <dali/public-api/common/extents.h>


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_0() {
  void * jresult ;
  Dali::Extents *result = 0 ;

  {
    try {
      result = (Dali::Extents *)new Dali::Extents();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Extents *arg1 = 0 ;
  Dali::Extents *result = 0 ;

  arg1 = (Dali::Extents *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Extents *)new Dali::Extents((Dali::Extents const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_Extents__SWIG_2(unsigned short jarg1, unsigned short jarg2, unsigned short jarg3, unsigned short jarg4) {
  void * jresult ;
  uint16_t arg1 ;
  uint16_t arg2 ;
  uint16_t arg3 ;
  uint16_t arg4 ;
  Dali::Extents *result = 0 ;

  arg1 = (uint16_t)jarg1;
  arg2 = (uint16_t)jarg2;
  arg3 = (uint16_t)jarg3;
  arg4 = (uint16_t)jarg4;
  {
    try {
      result = (Dali::Extents *)new Dali::Extents(arg1, arg2, arg3, arg4);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Extents_Assign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  Dali::Extents *arg2 = 0 ;
  Dali::Extents *result = 0 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (Dali::Extents *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Extents *) &(arg1)->operator =((Dali::Extents const &)*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Extents_Assign__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t *arg2 = (uint16_t *) 0 ;
  Dali::Extents *result = 0 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t *)jarg2;
  {
    try {
      result = (Dali::Extents *) &(arg1)->operator =((uint16_t const *)arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Extents_EqualTo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  Dali::Extents *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (Dali::Extents *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Extents const *)arg1)->operator ==((Dali::Extents const &)*arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Extents_NotEqualTo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  Dali::Extents *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (Dali::Extents *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Extents const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)((Dali::Extents const *)arg1)->operator !=((Dali::Extents const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_start_set(void * jarg1, unsigned short jarg2) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t arg2 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t)jarg2;
  if (arg1) (arg1)->start = arg2;
}


SWIGEXPORT unsigned short SWIGSTDCALL CSharp_Dali_Extents_start_get(void * jarg1) {
  unsigned short jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t result;

  arg1 = (Dali::Extents *)jarg1;
  result =  ((arg1)->start);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_end_set(void * jarg1, unsigned short jarg2) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t arg2 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t)jarg2;
  if (arg1) (arg1)->end = arg2;
}


SWIGEXPORT unsigned short SWIGSTDCALL CSharp_Dali_Extents_end_get(void * jarg1) {
  unsigned short jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t result;

  arg1 = (Dali::Extents *)jarg1;
  result =  ((arg1)->end);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_top_set(void * jarg1, unsigned short jarg2) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t arg2 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t)jarg2;
  if (arg1) (arg1)->top = arg2;
}


SWIGEXPORT unsigned short SWIGSTDCALL CSharp_Dali_Extents_top_get(void * jarg1) {
  unsigned short jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t result;

  arg1 = (Dali::Extents *)jarg1;
  result =  ((arg1)->top);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Extents_bottom_set(void * jarg1, unsigned short jarg2) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t arg2 ;

  arg1 = (Dali::Extents *)jarg1;
  arg2 = (uint16_t)jarg2;
  if (arg1) (arg1)->bottom = arg2;
}


SWIGEXPORT unsigned short SWIGSTDCALL CSharp_Dali_Extents_bottom_get(void * jarg1) {
  unsigned short jresult ;
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;
  uint16_t result;

  arg1 = (Dali::Extents *)jarg1;
  result =  ((arg1)->bottom);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Extents(void * jarg1) {
  Dali::Extents *arg1 = (Dali::Extents *) 0 ;

  arg1 = (Dali::Extents *)jarg1;
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