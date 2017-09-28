/** Copyright (c) 2017 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/adaptor-framework/input-method-options.h>


#ifdef __cplusplus
extern "C" {
#endif


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_InputMethodOptions() {
  void * jresult ;
  Dali::InputMethodOptions *result = 0 ;

  {
    try {
      result = (Dali::InputMethodOptions *)new Dali::InputMethodOptions();
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodOptions_IsPassword(void * jarg1) {
  unsigned int jresult ;
  Dali::InputMethodOptions *arg1 = (Dali::InputMethodOptions *) 0 ;
  bool result;

  arg1 = (Dali::InputMethodOptions *)jarg1;
  {
    try {
      result = (bool)(arg1)->IsPassword();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodOptions_ApplyProperty(void * jarg1, void * jarg2) {
  Dali::InputMethodOptions *arg1 = (Dali::InputMethodOptions *) 0 ;
  Dali::Property::Map *arg2 = 0 ;

  arg1 = (Dali::InputMethodOptions *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map const & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->ApplyProperty((Dali::Property::Map const &)*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_InputMethodOptions_RetrieveProperty(void * jarg1, void * jarg2) {
  Dali::InputMethodOptions *arg1 = (Dali::InputMethodOptions *) 0 ;
  Dali::Property::Map *arg2 = 0 ;

  arg1 = (Dali::InputMethodOptions *)jarg1;
  arg2 = (Dali::Property::Map *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Property::Map & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->RetrieveProperty(*arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_InputMethodOptions_CompareAndSet(void * jarg1, int jarg2, void * jarg3, void * jarg4) {
  unsigned int jresult ;
  Dali::InputMethodOptions *arg1 = (Dali::InputMethodOptions *) 0 ;
  Dali::InputMethod::Category::Type arg2 ;
  Dali::InputMethodOptions *arg3 = 0 ;
  int *arg4 = 0 ;
  bool result;

  arg1 = (Dali::InputMethodOptions *)jarg1;
  arg2 = (Dali::InputMethod::Category::Type)jarg2;
  arg3 = (Dali::InputMethodOptions *)jarg3;
  if (!arg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::InputMethodOptions const & type is null", 0);
    return 0;
  }
  arg4 = (int *)jarg4;
  if (!arg4) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "int & type is null", 0);
    return 0;
  }
  {
    try {
      result = (bool)(arg1)->CompareAndSet(arg2,(Dali::InputMethodOptions const &)*arg3,*arg4);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodOptions(void * jarg1) {
  Dali::InputMethodOptions *arg1 = (Dali::InputMethodOptions *) 0 ;

  arg1 = (Dali::InputMethodOptions *)jarg1;
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

