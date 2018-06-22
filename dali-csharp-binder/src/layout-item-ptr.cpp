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
#include <dali-toolkit/devel-api/layouting/layout-group-impl.h>

#ifdef __cplusplus
extern "C" {
#endif

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutItemPtr__SWIG_0() {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *result = 0 ;

  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)new Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem >();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutItemPtr__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)new Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem >(arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutItemPtr__SWIG_2(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)new Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem >((Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > const &)*arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutItemPtr(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Get(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutItem *)((Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > const *)arg1)->Get();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr___deref__(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutItem *)((Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > const *)arg1)->operator ->();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr___ref__(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutItem *) &((Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > const *)arg1)->operator *();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Assign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg2 = 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  arg2 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) &(arg1)->operator =((Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > const &)*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Assign__SWIG_1(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  {
    try {
      result = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) &(arg1)->operator =(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Reset__SWIG_0(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      (arg1)->Reset();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Reset__SWIG_1(void * jarg1, void * jarg2) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *arg2 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  arg2 = (Dali::Toolkit::Internal::LayoutItem *)jarg2;
  {
    try {
      (arg1)->Reset(arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Detach(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::Internal::LayoutItem *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutItem *)(arg1)->Detach();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_New(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Handle *arg2 = 0 ;
  Dali::Toolkit::Internal::LayoutItemPtr result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  arg2 = (Dali::Handle *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & type is null", 0);
    return 0;
  }
  {
    try {
      result = (*arg1)->New(*arg2);
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
  jresult = new Dali::Toolkit::Internal::LayoutItemPtr((const Dali::Toolkit::Internal::LayoutItemPtr &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Initialize(void * jarg1, void * jarg2, char * jarg3) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Handle *arg2 = 0 ;
  std::string *arg3 = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  arg2 = (Dali::Handle *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & type is null", 0);
    return ;
  }
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      (*arg1)->Initialize(*arg2,(std::string const &)*arg3);
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

  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Unparent(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      (*arg1)->Unparent();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_SetAnimateLayout(void * jarg1, unsigned int jarg2) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  bool arg2 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (*arg1)->SetAnimateLayout(arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutItemPtr_IsLayoutAnimated(void * jarg1) {
  unsigned int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  bool result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (bool)(*arg1)->IsLayoutAnimated();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_RegisterChildProperties(void * jarg1, char * jarg2) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return ;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (*arg1)->RegisterChildProperties((std::string const &)*arg2);
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

  //argout typemap for const std::string&

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Measure(void * jarg1, void * jarg2, void * jarg3) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  argp2 = (Dali::Toolkit::MeasureSpec *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasureSpec *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return ;
  }
  arg3 = *argp3;
  {
    try {
      (*arg1)->Measure(arg2,arg3);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Layout(void * jarg1, void * jarg2, void * jarg3, void * jarg4, void * jarg5) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg3 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg4 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg5 ;
  Dali::Toolkit::LayoutLength *argp2 ;
  Dali::Toolkit::LayoutLength *argp3 ;
  Dali::Toolkit::LayoutLength *argp4 ;
  Dali::Toolkit::LayoutLength *argp5 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::LayoutLength *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg3 = *argp3;
  argp4 = (Dali::Toolkit::LayoutLength *)jarg4;
  if (!argp4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg4 = *argp4;
  argp5 = (Dali::Toolkit::LayoutLength *)jarg5;
  if (!argp5) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg5 = *argp5;
  {
    try {
      (*arg1)->Layout(arg2,arg3,arg4,arg5);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetDefaultSize(void * jarg1, void * jarg2, void * jarg3) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg3 ;
  Dali::Toolkit::LayoutLength *argp2 ;
  Dali::Toolkit::MeasureSpec *argp3 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return 0;
  }
  arg2 = *argp2;
  argp3 = (Dali::Toolkit::MeasureSpec *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return 0;
  }
  arg3 = *argp3;
  {
    try {
      result = (*arg1)->GetDefaultSize(arg2,arg3);
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetParent(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::Internal::LayoutParent *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutParent *)(*arg1)->GetParent();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_RequestLayout(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      (*arg1)->RequestLayout();
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutItemPtr_IsLayoutRequested(void * jarg1) {
  unsigned int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  bool result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (bool)(*arg1)->IsLayoutRequested();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetMeasuredWidth(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetMeasuredWidth();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetMeasuredHeight(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetMeasuredHeight();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetMeasuredWidthAndState(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::MeasuredSize result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetMeasuredWidthAndState();
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
  jresult = new Dali::Toolkit::MeasuredSize((const Dali::Toolkit::MeasuredSize &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetMeasuredHeightAndState(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Toolkit::MeasuredSize result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetMeasuredHeightAndState();
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
  jresult = new Dali::Toolkit::MeasuredSize((const Dali::Toolkit::MeasuredSize &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetSuggestedMinimumWidth(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetSuggestedMinimumWidth();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetSuggestedMinimumHeight(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetSuggestedMinimumHeight();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_SetMinimumWidth(void * jarg1, void * jarg2) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  Dali::Toolkit::LayoutLength *argp2 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (*arg1)->SetMinimumWidth(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_SetMinimumHeight(void * jarg1, void * jarg2) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg2 ;
  Dali::Toolkit::LayoutLength *argp2 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  argp2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      (*arg1)->SetMinimumHeight(arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetMinimumWidth(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetMinimumWidth();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetMinimumHeight(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetMinimumHeight();
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
  jresult = new Dali::Toolkit::LayoutLength((const Dali::Toolkit::LayoutLength &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetPadding(void * jarg1) {
  void * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::Extents result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (*arg1)->GetPadding();
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
  jresult = new Dali::Extents((const Dali::Extents &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutItemPtr_DoAction(void * jarg1, char * jarg2, void * jarg3) {
  unsigned int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  std::string *arg2 = 0 ;
  Dali::Property::Map *arg3 = 0 ;
  bool result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  arg3 = (Dali::Property::Map *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)(*arg1)->DoAction((std::string const &)*arg2,(Dali::Property::Map const &)*arg3);
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

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetTypeName(void * jarg1) {
  char * jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  std::string *result = 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (std::string *) &(*arg1)->GetTypeName();
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
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutItemPtr_GetTypeInfo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  Dali::TypeInfo *arg2 = 0 ;
  bool result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  arg2 = (Dali::TypeInfo *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::TypeInfo & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)(*arg1)->GetTypeInfo(*arg2);
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


/*SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutItemPtr_DoConnectSignal(void * jarg1, void * jarg2, char * jarg3, void * jarg4) {
  unsigned int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  ConnectionTrackerInterface *arg2 = (ConnectionTrackerInterface *) 0 ;
  std::string *arg3 = 0 ;
  FunctorDelegate *arg4 = (FunctorDelegate *) 0 ;
  bool result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  arg2 = (ConnectionTrackerInterface *)jarg2;
  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  arg4 = (FunctorDelegate *)jarg4;
  {
    try {
      result = (bool)(*arg1)->DoConnectSignal(arg2,(std::string const &)*arg3,arg4);
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

  //argout typemap for const std::string&

  return jresult;
}*/


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Reference(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      (*arg1)->Reference();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemPtr_Unreference(void * jarg1) {
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      (*arg1)->Unreference();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutItemPtr_ReferenceCount(void * jarg1) {
  int jresult ;
  Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *) 0 ;
  int result;

  arg1 = (Dali::IntrusivePtr< Dali::Toolkit::Internal::LayoutItem > *)jarg1;
  {
    try {
      result = (int)(*arg1)->ReferenceCount();
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

#ifdef __cplusplus
}
#endif

