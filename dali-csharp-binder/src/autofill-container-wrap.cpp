/*
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
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

#ifndef CSHARP_AUTOFILL_CONTAINER
#define CSHARP_AUTOFILL_CONTAINER
#endif

#include "common.h"
#include <dali-toolkit/devel-api/controls/text-controls/autofill-container.h>

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;


SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *self,void (*func)(Dali::Toolkit::AutofillContainer &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *self,void (*func)(Dali::Toolkit::AutofillContainer &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *self,Dali::Toolkit::AutofillContainer &arg){
  self->Emit( arg );
}

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::Control &) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::Control &) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__Sg__Connect(Dali::Signal< void (Dali::Toolkit::Control &) > *self,void (*func)(Dali::Toolkit::Control &)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::Control &) > *self,void (*func)(Dali::Toolkit::Control &)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__Sg__Emit(Dali::Signal< void (Dali::Toolkit::Control &) > *self,Dali::Toolkit::Control &arg){
  self->Emit( arg );
}


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::BaseHandle * SWIGSTDCALL CSharp_Dali_AutofillContainer_SWIGUpcast(Dali::Toolkit::AutofillContainer *jarg1) {
    return (Dali::BaseHandle *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_AutofillContainer_New(char * jarg1) {
  void * jresult;
  Dali::Toolkit::AutofillContainer result;
  std::string *arg1 = 0;

  if(!jarg1){
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
  }

  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  {
    try {
      result = Dali::Toolkit::AutofillContainer::New((std::string const &)*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = new Dali::Toolkit::AutofillContainer((const Dali::Toolkit::AutofillContainer &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AutofillContainer__SWIG_0() {
  void * jresult ;
  Dali::Toolkit::AutofillContainer *result = 0 ;

  {
    try {
      result = (Dali::Toolkit::AutofillContainer *)new Dali::Toolkit::AutofillContainer();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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

// Copy constructor
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AutofillContainer__SWIG_1(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = 0 ;
  Dali::Toolkit::AutofillContainer *result = 0 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::AutofillContainer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::AutofillContainer *)new Dali::Toolkit::AutofillContainer((Dali::Toolkit::AutofillContainer const &)*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AutofillContainer_Assign(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  Dali::Toolkit::AutofillContainer *arg2 = 0 ;
  Dali::Toolkit::AutofillContainer *result = 0 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  arg2 = (Dali::Toolkit::AutofillContainer *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::AutofillContainer const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::AutofillContainer *) &(arg1)->operator =((Dali::Toolkit::AutofillContainer const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AutofillContainer(void * jarg1) {
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
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
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AutofillContainer_DownCast(void * jarg1) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::Toolkit::AutofillContainer result;

  argp1 = (Dali::BaseHandle *)jarg1;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::Toolkit::AutofillContainer::DownCast(arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = new Dali::Toolkit::AutofillContainer((const Dali::Toolkit::AutofillContainer &)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_AutofillContainer_AddAutofillItem(void * jarg1, void * jarg2, int jarg3, char * jarg4, char * jarg5, unsigned int jarg6, unsigned int jarg7) {
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  Dali::Toolkit::Control arg2;
  Dali::Toolkit::Control *argp2 ;
  Dali::Property::Index arg3 = 0 ;
  std::string *arg4 = 0 ;
  std::string *arg5 = 0 ;
  Dali::AutofillItem::Hint arg6 ;
  bool arg7 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  argp2 = (Dali::Toolkit::Control *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Control", 0);
    return;
  }
  arg2 = *argp2;
  arg3 = (Dali::Property::Index)jarg3;
  std::string arg4_str(jarg4);
  arg4 = &arg4_str;
  std::string arg5_str(jarg5);
  arg5 = &arg5_str;
  arg6 = (Dali::AutofillItem::Hint)jarg6;
  arg7 = jarg7 ? true : false;
  {
    try {
      (arg1)->AddAutofillItem(arg2, arg3, (std::string const &)*arg4, (std::string const &)*arg5, (Dali::AutofillItem::Hint)arg6, arg7);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return;
      };
    }
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_AutofillContainer_RemoveAutofillItem(void * jarg1, void * jarg2) {
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  Dali::Toolkit::Control arg2;
  Dali::Toolkit::Control *argp2 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  argp2 = (Dali::Toolkit::Control *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Control", 0);
    return;
  }
  arg2 = *argp2;
  {
    try {
      (arg1)->RemoveAutofillItem(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return;
      };
    }
  }

}

SWIGEXPORT void SWIGSTDCALL CSharp_AutofillContainer_SaveAutofillData(void * jarg1) {
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  {
    try {
      (arg1)->SaveAutofillData();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return;
      };
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_AutofillContainer_RequestFillData(void * jarg1) {
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  {
    try {
      (arg1)->RequestFillData();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return;
      };
    }
  }
}


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_AutofillContainer_GetAutofillServiceName(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  std::string *result = 0;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  {
    try {
      result = (std::string *) &((Dali::Toolkit::AutofillContainer const *)arg1)->GetAutofillServiceName();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_AutofillContainer_GetAutofillServiceMessage(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  std::string *result = 0;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  {
    try {
      result = (std::string *) &((Dali::Toolkit::AutofillContainer const *)arg1)->GetAutofillServiceMessage();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_AutofillContainer_GetAutofillServiceImagePath(void * jarg1) {
  char * jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  std::string *result = 0;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  {
    try {
      result = (std::string *) &((Dali::Toolkit::AutofillContainer const *)arg1)->GetAutofillServiceImagePath();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AutofillContainer_GetListCount(void * jarg1) {
  unsigned int jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  unsigned int result;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  {
    try {
      result = (arg1)->GetListCount();
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


SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_AutofillContainer_GetListItem(void * jarg1, unsigned int jarg2) {
  char * jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  unsigned int arg2 ;
  std::string *result = 0;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  arg2 = (unsigned int)jarg2;
  {
    try {
      result = (std::string *) &((Dali::Toolkit::AutofillContainer const *)arg1)->GetListItem(arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }
  jresult = SWIG_csharp_string_callback(result->c_str());
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_AutofillContainer_SetSelectedItem(void * jarg1, char * jarg2) {
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  std::string *arg2 = 0 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  if (!jarg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }
  std::string arg2_str(jarg2);
  arg2 = &arg2_str;
  {
    try {
      (arg1)->SetSelectedItem((std::string const &)*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return;
      };
    }
  }

}


// Signals
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AutofillContainer_AutofillServiceShownSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  Dali::Toolkit::AutofillContainer::AuthenticationSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AutofillContainer::AuthenticationSignalType *) &(arg1)->AutofillServiceShownSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AutofillContainer_AutofillListShownSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::AutofillContainer *arg1 = (Dali::Toolkit::AutofillContainer *) 0 ;
  Dali::Toolkit::AutofillContainer::ListShownSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::AutofillContainer *)jarg1;
  {
    try {
      result = (Dali::Toolkit::AutofillContainer::ListShownSignalType *) &(arg1)->AutofillListShownSignal();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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


// AuthenticationSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AuthenticationSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_AuthenticationSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AuthenticationSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *) 0 ;
  void (*arg2)(Dali::Toolkit::AutofillContainer &) = (void (*)(Dali::Toolkit::AutofillContainer &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::AutofillContainer &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AuthenticationSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *) 0 ;
  void (*arg2)(Dali::Toolkit::AutofillContainer &) = (void (*)(Dali::Toolkit::AutofillContainer &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::AutofillContainer &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AuthenticationSignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *) 0 ;
  Dali::Toolkit::AutofillContainer *arg2 = 0;

  arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *)jarg1;
  arg2 = (Dali::Toolkit::AutofillContainer *)jarg2;
  if(!arg2){
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::AutofillContainer & type is null", 0);
      return ;
  }
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_AutofillContainer_SA__SP__Sg__Emit(arg1,*arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_AuthenticationSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *)new Dali::Signal< void (Dali::Toolkit::AutofillContainer &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AuthenticationSignalType(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::AutofillContainer &) > *)jarg1;
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
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


// ListShownSignalType
SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ListShownSignalType_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Toolkit::Control &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::Control &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ListShownSignalType_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::Control &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::Control &) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ListShownSignalType_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::Control &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *) 0 ;
  void (*arg2)(Dali::Toolkit::Control &) = (void (*)(Dali::Toolkit::Control &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::Control &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__Sg__Connect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ListShownSignalType_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::Control &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *) 0 ;
  void (*arg2)(Dali::Toolkit::Control &) = (void (*)(Dali::Toolkit::Control &)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::Control &))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__Sg__Disconnect(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ListShownSignalType_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::Control &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *) 0 ;
  Dali::Toolkit::Control arg2 ;
  Dali::Toolkit::Control *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *)jarg1;
  argp2 = (Dali::Toolkit::Control *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::Control", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_Control_SA__Sg__Emit(arg1,arg2);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ListShownSignalType() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::Control &) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::Control &g) > *)new Dali::Signal< void (Dali::Toolkit::Control &) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ListShownSignalType(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::Control &) > *arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::Control &) > *)jarg1;
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
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
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

