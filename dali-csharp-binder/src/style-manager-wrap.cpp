/** Copyright (c) 2021 Samsung Electronics Co., Ltd.
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
#include <string.h>
#include "common.h"

#include <dali-toolkit/devel-api/styling/style-manager-devel.h>

/* Callback for returning strings to C# without leaking memory */
typedef char *(SWIGSTDCALL *SWIG_CSharpStringHelperCallback)(const char*);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_StyleManager_SetBrokenImageUrl(void * nuiStyleManager, unsigned int brokenType, char * nuiUrl) {
  Dali::Toolkit::StyleManager *styleManager = (Dali::Toolkit::StyleManager *) 0 ;
  std::string *url = 0 ;

  if(!nuiUrl) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return;
  }

  std::string url_str(nuiUrl);
  url = &url_str;
  styleManager = (Dali::Toolkit::StyleManager *)nuiStyleManager;
  {
    try {
      Dali::Toolkit::DevelStyleManager::SetBrokenImageUrl(*styleManager,Dali::Toolkit::DevelStyleManager::BrokenImageType(brokenType),(std::string const &)*url);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_StyleManager_GetBrokenImageUrl(void * nuiStyleManager, unsigned int brokenType) {
  char * jresult ;
  Dali::Toolkit::StyleManager *styleManager = (Dali::Toolkit::StyleManager *) 0 ;
  std::string result;

  styleManager = (Dali::Toolkit::StyleManager *)nuiStyleManager;
  {
    try {
      result = Dali::Toolkit::DevelStyleManager::GetBrokenImageUrl(*styleManager,Dali::Toolkit::DevelStyleManager::BrokenImageType(brokenType));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}

#ifdef __cplusplus
}
#endif