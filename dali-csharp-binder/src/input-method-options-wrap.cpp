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
    } CALL_CATCH_EXCEPTION(0);
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
    } CALL_CATCH_EXCEPTION(0);
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
    } CALL_CATCH_EXCEPTION();
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
    } CALL_CATCH_EXCEPTION();
  }

}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_InputMethodOptions(void * jarg1) {
  Dali::InputMethodOptions *arg1 = (Dali::InputMethodOptions *) 0 ;

  arg1 = (Dali::InputMethodOptions *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }

}

#ifdef __cplusplus
}
#endif

