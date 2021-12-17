/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
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

// INTERNAL INCLUDES
#include "common.h"

void SWIG_ExceptionMessageWithFileAndLine(const int& code, const char* what, const char* filename, const int& linenumber, const char* funcname)
{
  std::string message(what);
  std::stringstream fileAndLine;
  fileAndLine << " file: " << (filename) << " line: " << (linenumber) << " func: " << (funcname);
  message += fileAndLine.str();
  SWIG_CSharpException((code), message.c_str());
}

void internal_try_catch(const std::function<void(void)>& func, const char* filename, const int& linenumber, const char* funcname) {
    try {
        func();
    } CALL_CATCH_EXCEPTION_WITH_CUSTOM_FILE_AND_LINE(, filename, linenumber, funcname);
}