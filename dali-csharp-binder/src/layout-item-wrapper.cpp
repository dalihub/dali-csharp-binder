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
#include <dali-toolkit/devel-api/layouting/layout-item-impl.h>
#include <dali-toolkit/devel-api/layouting/layout-parent-impl.h>
#include <dali-toolkit/devel-api/layouting/layout-child-impl.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutParent_GetParent(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutChild *arg1 = (Dali::Toolkit::Internal::LayoutChild *) 0 ;
  Dali::Toolkit::Internal::LayoutParent *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutChild *)jarg1;
  {
    try {
      result = (Dali::Toolkit::Internal::LayoutParent *)(arg1)->GetParent();
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

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutItemWrapper_ChildProperty_WIDTH_SPECIFICATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::LayoutItem::ChildProperty::WIDTH_SPECIFICATION;
  jresult = (int)result;
  return jresult;
}


SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutItemWrapper_ChildProperty_HEIGHT_SPECIFICATION_get() {
  int jresult ;
  int result;

  result = (int)Dali::Toolkit::LayoutItem::ChildProperty::HEIGHT_SPECIFICATION;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutItemWrapper_ChildProperty() {
  void * jresult ;
  Dali::Toolkit::LayoutItem::ChildProperty *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LayoutItem::ChildProperty *)new Dali::Toolkit::LayoutItem::ChildProperty();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutItemWrapper_ChildProperty(void * jarg1) {
  Dali::Toolkit::LayoutItem::ChildProperty *arg1 = (Dali::Toolkit::LayoutItem::ChildProperty *) 0 ;

  arg1 = (Dali::Toolkit::LayoutItem::ChildProperty *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutItemWrapper__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::LayoutItem *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::LayoutItem *)new Dali::Toolkit::LayoutItem();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutItemWrapper(void * jarg1) {
  Dali::Toolkit::LayoutItem *arg1 = (Dali::Toolkit::LayoutItem *) 0 ;

  arg1 = (Dali::Toolkit::LayoutItem *)jarg1;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapper_New(void * jarg1) {
  void * jresult ;
  Dali::Handle *arg1 = 0 ;
  Dali::Toolkit::LayoutItem result;

  arg1 = (Dali::Handle *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Handle & type is null", 0);
    return 0;
  }
  {
    try {
      result = Dali::Toolkit::LayoutItem::New(*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutItemWrapper__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutItem *arg1 = 0 ;
  Dali::Toolkit::LayoutItem *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutItem *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutItem const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutItem *)new Dali::Toolkit::LayoutItem((Dali::Toolkit::LayoutItem const &)*arg1);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapper_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::LayoutItem *arg1 = (Dali::Toolkit::LayoutItem *) 0 ;
  Dali::Toolkit::LayoutItem *arg2 = 0 ;
  Dali::Toolkit::LayoutItem *result = 0 ;

  arg1 = (Dali::Toolkit::LayoutItem *)jarg1;
  arg2 = (Dali::Toolkit::LayoutItem *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutItem const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::LayoutItem *) &(arg1)->operator =((Dali::Toolkit::LayoutItem const &)*arg2);
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

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutItemWrapper_GetOwner(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::LayoutItem *arg1 = (Dali::Toolkit::LayoutItem *) 0 ;
  Dali::Handle result;

  arg1 = (Dali::Toolkit::LayoutItem *)jarg1;
  {
    try {
      result = ((Dali::Toolkit::LayoutItem const *)arg1)->GetOwner();
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
  jresult = new Dali::Handle((const Dali::Handle &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutItemWrapper_SetAnimateLayout(void * jarg1, unsigned int jarg2) {
  Dali::Toolkit::LayoutItem *arg1 = (Dali::Toolkit::LayoutItem *) 0 ;
  bool arg2 ;

  arg1 = (Dali::Toolkit::LayoutItem *)jarg1;
  arg2 = jarg2 ? true : false;
  {
    try {
      (arg1)->SetAnimateLayout(arg2);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_LayoutItemWrapper_IsLayoutAnimated(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::LayoutItem *arg1 = (Dali::Toolkit::LayoutItem *) 0 ;
  bool result;

  arg1 = (Dali::Toolkit::LayoutItem *)jarg1;
  {
    try {
      result = (bool)((Dali::Toolkit::LayoutItem const *)arg1)->IsLayoutAnimated();
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutItemWrapper__SWIG_2(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::Internal::LayoutItem *arg1 = (Dali::Toolkit::Internal::LayoutItem *) 0 ;
  Dali::Toolkit::LayoutItem *result = 0 ;

  arg1 = (Dali::Toolkit::Internal::LayoutItem *)jarg1;
  {
    try {
      result = (Dali::Toolkit::LayoutItem *)new Dali::Toolkit::LayoutItem(arg1);
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

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_LayoutItemWrapper_SWIGUpcast(Dali::Toolkit::LayoutItem *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

#ifdef __cplusplus
}
#endif
