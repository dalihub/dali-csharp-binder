/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/devel-api/layouting/layout-size.h>

#ifdef __cplusplus
extern "C" {
#endif


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutSize__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::LayoutSize *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LayoutSize *)new Dali::Toolkit::LayoutSize();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutSize__SWIG_1(int jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength::IntType arg1 ;
  Dali::Toolkit::LayoutLength::IntType arg2 ;
  Dali::Toolkit::LayoutSize *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutLength::IntType)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength::IntType)jarg2;
  {
    try {
      result = (Dali::Toolkit::LayoutSize *)new Dali::Toolkit::LayoutSize(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutSize__SWIG_2(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutSize *arg1 = 0 ;
  Dali::Toolkit::LayoutSize *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutSize const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutSize *)new Dali::Toolkit::LayoutSize((Dali::Toolkit::LayoutSize const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutSize_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutSize *arg2 = 0 ;
  Dali::Toolkit::LayoutSize *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutSize *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutSize const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutSize *) &(arg1)->operator =((Dali::Toolkit::LayoutSize const &)*arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutSize_GetWidth(void * jarg1) {
  int jresult ;
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType result;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  {
    try {
      result = (Dali::Toolkit::LayoutLength::IntType)(arg1)->GetWidth();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutSize_GetHeight(void * jarg1) {
  int jresult ;
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType result;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  {
    try {
      result = (Dali::Toolkit::LayoutLength::IntType)(arg1)->GetHeight();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutSize_SetWidth__SWIG_0(void * jarg1, int jarg2) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType arg2 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength::IntType)jarg2;
  {
    try {
      (arg1)->SetWidth(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutSize_SetHeight__SWIG_0(void * jarg1, int jarg2) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType arg2 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength::IntType)jarg2;
  {
    try {
      (arg1)->SetHeight(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutSize_SetWidth__SWIG_1(void * jarg1, void * jarg2) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  Dali::Toolkit::LayoutLength *argp2 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetWidth(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutSize_SetHeight__SWIG_1(void * jarg1, void * jarg2) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  Dali::Toolkit::LayoutLength *argp2 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->SetHeight(arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutSize_EqualTo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutSize *arg2 = 0 ;
  bool result;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutSize *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutSize const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)(arg1)->operator ==((Dali::Toolkit::LayoutSize const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutSize_x_set(void * jarg1, int jarg2) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType arg2 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength::IntType)jarg2;
  if (arg1) (arg1)->x = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutSize_x_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType result;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  result = (Dali::Toolkit::LayoutLength::IntType) ((arg1)->x);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutSize_width_set(void * jarg1, int jarg2) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType arg2 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength::IntType)jarg2;
  if (arg1) (arg1)->width = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutSize_width_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType result;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  result = (Dali::Toolkit::LayoutLength::IntType) ((arg1)->width);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutSize_y_set(void * jarg1, int jarg2) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType arg2 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength::IntType)jarg2;
  if (arg1) (arg1)->y = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutSize_y_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType result;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  result = (Dali::Toolkit::LayoutLength::IntType) ((arg1)->y);
  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutSize_height_set(void * jarg1, int jarg2) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType arg2 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength::IntType)jarg2;
  if (arg1) (arg1)->height = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutSize_height_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;
  Dali::Toolkit::LayoutLength::IntType result;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
  result = (Dali::Toolkit::LayoutLength::IntType) ((arg1)->height);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutSize(void * jarg1) {
  Dali::Toolkit::LayoutSize *arg1 = (Dali::Toolkit::LayoutSize *) 0 ;

  arg1 = (Dali::Toolkit::LayoutSize *)jarg1;
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

