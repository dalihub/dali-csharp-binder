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

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_MeasureSpec__SWIG_0(void * jarg1, int jarg2) {
  void * jresult ;
  SwigValueWrapper< Dali::Toolkit::LayoutLength > arg1 ;
  Dali::Toolkit::MeasureSpec::Mode arg2 ;
  Dali::Toolkit::LayoutLength *argp1 ;
  Dali::Toolkit::MeasureSpec *result = 0 ;

  argp1 = (Dali::Toolkit::LayoutLength *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::LayoutLength", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (Dali::Toolkit::MeasureSpec::Mode)jarg2;
  {
    try {
      result = (Dali::Toolkit::MeasureSpec *)new Dali::Toolkit::MeasureSpec(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_MeasureSpec__SWIG_1(int jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutLength arg1( jarg1 );
  Dali::Toolkit::MeasureSpec *result = 0 ;
  {
    try {
      result = (Dali::Toolkit::MeasureSpec *)new Dali::Toolkit::MeasureSpec(arg1);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_MeasureSpec(void * jarg1) {
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) 0 ;

  arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MeasureSpec_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) 0 ;
  Dali::Toolkit::MeasureSpec *arg2 = 0 ;
  Dali::Toolkit::MeasureSpec *result = 0 ;

  arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  arg2 = (Dali::Toolkit::MeasureSpec *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::MeasureSpec const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::MeasureSpec *) &(arg1)->operator =((Dali::Toolkit::MeasureSpec const &)*arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MeasureSpec_EqualTo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) 0 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  argp2 = (Dali::Toolkit::MeasureSpec *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (bool)(arg1)->operator ==(arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_MeasureSpec_NotEqualTo(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) 0 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg2 ;
  Dali::Toolkit::MeasureSpec *argp2 ;
  bool result;

  arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  argp2 = (Dali::Toolkit::MeasureSpec *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try {
      result = (bool)(arg1)->operator !=(arg2);
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MeasureSpec_GetMode(void * jarg1) {
  int jresult ;
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) 0 ;
  Dali::Toolkit::MeasureSpec::Mode result;

  arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  {
    try {
      result = (Dali::Toolkit::MeasureSpec::Mode)((Dali::Toolkit::MeasureSpec const *)arg1)->GetMode();
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


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MeasureSpec_GetSize(void * jarg1) {
  int jresult ;
  Dali::Toolkit::MeasureSpec* arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  Dali::Toolkit::LayoutLength result( 0 );
  {
    try {
      result = (Dali::Toolkit::LayoutLength)((Dali::Toolkit::MeasureSpec const *)arg1)->GetSize();
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
  jresult = result.AsInteger();
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_MeasureSpec_Adjust(void * jarg1, int jarg2) {
  void * jresult ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > arg1 ;
  int arg2 ;
  Dali::Toolkit::MeasureSpec *argp1 ;
  SwigValueWrapper< Dali::Toolkit::MeasureSpec > result;

  argp1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::MeasureSpec", 0);
    return 0;
  }
  arg1 = *argp1;
  arg2 = (int)jarg2;
  {
    try {
      result = Dali::Toolkit::MeasureSpec::Adjust(arg1,arg2);
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
  jresult = new Dali::Toolkit::MeasureSpec((const Dali::Toolkit::MeasureSpec &)result);
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MeasureSpec_mSize_set(void * jarg1, int jarg2) {
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) jarg1;
  Dali::Toolkit::LayoutLength arg2( jarg2 );
  if (arg1) (arg1)->SetSize( arg2 );
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MeasureSpec_mSize_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) 0 ;

  arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  Dali::Toolkit::LayoutLength result((arg1)->GetSize());
  jresult = result.AsInteger();
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_MeasureSpec_mMode_set(void * jarg1, int jarg2) {
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) 0 ;
  Dali::Toolkit::MeasureSpec::Mode arg2 ;

  arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  arg2 = (Dali::Toolkit::MeasureSpec::Mode)jarg2;
  if (arg1) (arg1)->SetMode( arg2 );
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_MeasureSpec_mMode_get(void * jarg1) {
  int jresult ;
  Dali::Toolkit::MeasureSpec *arg1 = (Dali::Toolkit::MeasureSpec *) 0 ;
  Dali::Toolkit::MeasureSpec::Mode result;

  arg1 = (Dali::Toolkit::MeasureSpec *)jarg1;
  result = (Dali::Toolkit::MeasureSpec::Mode) ((arg1)->GetMode());
  jresult = (int)result;
  return jresult;
}

#ifdef __cplusplus
}
#endif

