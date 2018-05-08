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
#include <dali-toolkit/devel-api/layouting/layout-group.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_UNKNOWN_ID_get() {
  unsigned int jresult ;
  unsigned int result;

  result = (unsigned int)Dali::Toolkit::LayoutGroup::UNKNOWN_ID;
  jresult = result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_ChildProperty_MARGIN_SPECIFICATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::LayoutGroup::ChildProperty::MARGIN_SPECIFICATION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutGroupWrapper_ChildProperty() {
  void * jresult ;
  Dali::Toolkit::LayoutGroup::ChildProperty *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LayoutGroup::ChildProperty *)new Dali::Toolkit::LayoutGroup::ChildProperty();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutGroupWrapper_ChildProperty(void * jarg1) {
  Dali::Toolkit::LayoutGroup::ChildProperty *arg1 = (Dali::Toolkit::LayoutGroup::ChildProperty *) 0 ;

  arg1 = (Dali::Toolkit::LayoutGroup::ChildProperty *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutGroupWrapper__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::LayoutGroup *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LayoutGroup *)new Dali::Toolkit::LayoutGroup();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutGroupWrapper(void * jarg1) {
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0 ;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutGroupWrapper__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutGroup *arg1 = 0 ;
  Dali::Toolkit::LayoutGroup *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutGroup const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutGroup *)new Dali::Toolkit::LayoutGroup((Dali::Toolkit::LayoutGroup const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutGroup *arg2 = 0 ;
  Dali::Toolkit::LayoutGroup *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::LayoutGroup *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutGroup const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutGroup *) &(arg1)->operator =((Dali::Toolkit::LayoutGroup const &)*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::LayoutGroup result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::LayoutGroup::DownCast(arg1);
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
  jresult = new Dali::Toolkit::LayoutGroup((const Dali::Toolkit::LayoutGroup &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_Add(void * jarg1, void * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutItem *arg2 = 0 ;
  Dali::Toolkit::LayoutGroup::LayoutId result;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutItem & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutGroup::LayoutId)(arg1)->Add(*arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_Remove__SWIG_0(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutGroup::LayoutId arg2 ;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::LayoutGroup::LayoutId)jarg2;
  {
    try {
      (arg1)->Remove(arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_Remove__SWIG_1(void * jarg1, void * jarg2) {
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutItem *arg2 = 0 ;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutItem & type is null", 0);
    return ;
  }
  {
    try {
      (arg1)->Remove(*arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_GetChildAt(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0 ;
  unsigned int arg2 ;
  Dali::Toolkit::LayoutItem result;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = ((Dali::Toolkit::LayoutGroup const *)arg1)->GetChildAt(arg2);
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
  jresult = new Dali::Toolkit::LayoutItem((const Dali::Toolkit::LayoutItem &)result);
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_GetChildCount(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  {
    try {
      result = (unsigned int)((Dali::Toolkit::LayoutGroup const *)arg1)->GetChildCount();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_GetChild(void * jarg1, unsigned int jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutGroup::LayoutId arg2 ;
  Dali::Toolkit::LayoutItem result;

  arg1 = (Dali::Toolkit::LayoutGroup *)jarg1;
  arg2 = (Dali::Toolkit::LayoutGroup::LayoutId)jarg2;
  {
    try {
      result = ((Dali::Toolkit::LayoutGroup const *)arg1)->GetChild(arg2);
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
  jresult = new Dali::Toolkit::LayoutItem((const Dali::Toolkit::LayoutItem &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutGroupWrapper__SWIG_2(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutGroup *arg1 = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutGroup *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutGroup *)jarg1;
  {
    try {
      result = (Dali::Toolkit::LayoutGroup *)new Dali::Toolkit::LayoutGroup(arg1);
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

SWIGEXPORT Dali::Toolkit::LayoutItem * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_SWIGUpcast(Dali::Toolkit::LayoutGroup *jarg1) {
    return (Dali::Toolkit::LayoutItem *)jarg1;
}

#ifdef __cplusplus
}
#endif

