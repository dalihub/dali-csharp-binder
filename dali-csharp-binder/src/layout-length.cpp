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

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutLength__SWIG_0(int jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutLength *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LayoutLength *)new Dali::Toolkit::LayoutLength(jarg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutLength__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutLength *arg1 = 0 ;
  Dali::Toolkit::LayoutLength *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutLength *)new Dali::Toolkit::LayoutLength((Dali::Toolkit::LayoutLength const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength *arg1 = (Dali::Toolkit::LayoutLength *) 0 ;
  Dali::Toolkit::LayoutLength *arg2 = 0 ;
  Dali::Toolkit::LayoutLength *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutLength *) &(arg1)->operator =((Dali::Toolkit::LayoutLength const &)*arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutLength_EqualTo__SWIG_0(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  Dali::Toolkit::LayoutLength* arg2 = (Dali::Toolkit::LayoutLength*) jarg2;
  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength type is null", 0);
    return 0;
  }
  jresult = (*arg1 == *arg2);
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutLength_EqualTo__SWIG_1(void * jarg1, int jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;

  jresult = (*arg1 == jarg2);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutLength_NotEqualTo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  Dali::Toolkit::LayoutLength* arg2 = (Dali::Toolkit::LayoutLength*) jarg2;
  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength type is null", 0);
    return 0;
  }
  jresult = (*arg1 != *arg2);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutLength_LessThan__SWIG_0(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  Dali::Toolkit::LayoutLength* arg2 = (Dali::Toolkit::LayoutLength*) jarg2;
  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength type is null", 0);
    return 0;
  }
  jresult = (*arg1 < *arg2);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutLength_GreaterThan__SWIG_0(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  Dali::Toolkit::LayoutLength* arg2 = (Dali::Toolkit::LayoutLength*) jarg2;
  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength type is null", 0);
    return 0;
  }
  jresult = (*arg1 > *arg2);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Add__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  Dali::Toolkit::LayoutLength* arg2 = (Dali::Toolkit::LayoutLength*) jarg2;

  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength type is null", 0);
    return 0;
  }
  jresult = new Dali::Toolkit::LayoutLength( *arg1 + *arg2 );
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Add__SWIG_1(void * jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;

  jresult = new Dali::Toolkit::LayoutLength( *arg1 + jarg2 );
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Subtract__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  Dali::Toolkit::LayoutLength* arg2 = (Dali::Toolkit::LayoutLength*) jarg2;

  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength type is null", 0);
    return 0;
  }
  jresult = new Dali::Toolkit::LayoutLength( *arg1 - *arg2 );
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Subtract__SWIG_1(void * jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;

  jresult = new Dali::Toolkit::LayoutLength( *arg1 - jarg2 );
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_AddAssign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength *arg1 = (Dali::Toolkit::LayoutLength *) 0 ;
  Dali::Toolkit::LayoutLength *arg2 = 0 ;
  Dali::Toolkit::LayoutLength *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutLength *) &(arg1)->operator +=((Dali::Toolkit::LayoutLength const &)*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_AddAssign__SWIG_1(void * jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength *arg1 = (Dali::Toolkit::LayoutLength *) 0 ;
  Dali::Toolkit::LayoutLength *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
  {
    try {
      result = (Dali::Toolkit::LayoutLength *) &(arg1)->operator +=(jarg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_SubtractAssign__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength *arg1 = (Dali::Toolkit::LayoutLength *) 0 ;
  Dali::Toolkit::LayoutLength *arg2 = 0 ;
  Dali::Toolkit::LayoutLength *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
  arg2 = (Dali::Toolkit::LayoutLength *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutLength *) &(arg1)->operator -=((Dali::Toolkit::LayoutLength const &)*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_SubtractAssign__SWIG_1(void * jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength *arg1 = (Dali::Toolkit::LayoutLength *) 0 ;
  Dali::Toolkit::LayoutLength *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
  {
    try {
      result = (Dali::Toolkit::LayoutLength *) &(arg1)->operator -=(jarg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Divide__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  Dali::Toolkit::LayoutLength* arg2 = (Dali::Toolkit::LayoutLength*) jarg2;

  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength type is null", 0);
    return 0;
  }

  jresult = new Dali::Toolkit::LayoutLength( *arg1 / arg2->AsDecimal() );
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Divide__SWIG_1(void * jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;

  jresult = new Dali::Toolkit::LayoutLength( *arg1 / jarg2 );
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Multiply__SWIG_0(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  Dali::Toolkit::LayoutLength* arg2 = (Dali::Toolkit::LayoutLength*) jarg2;

  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutLength type is null", 0);
    return 0;
  }
  jresult = new Dali::Toolkit::LayoutLength( *arg1 * *arg2 );
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Multiply__SWIG_1(void * jarg1, int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  jresult = new Dali::Toolkit::LayoutLength( *arg1 * jarg2 );
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutLength_Multiply__SWIG_2(void * jarg1, float jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutLength* arg1 = (Dali::Toolkit::LayoutLength*) jarg1;
  float arg2( jarg2 );
  jresult = new Dali::Toolkit::LayoutLength( *arg1 * arg2 );
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutLength_mValue_set(void * jarg1, int jarg2) {
  Dali::Toolkit::LayoutLength *arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
  Dali::Toolkit::LayoutLength arg2( jarg2 );
  if (arg1) *arg1 = arg2;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutLength_mValue_get(void * jarg1) {
  Dali::Toolkit::LayoutLength *arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
  return (int) (arg1)->AsInteger();
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutLength(void * jarg1) {
  Dali::Toolkit::LayoutLength *arg1 = (Dali::Toolkit::LayoutLength *) 0 ;

  arg1 = (Dali::Toolkit::LayoutLength *)jarg1;
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

