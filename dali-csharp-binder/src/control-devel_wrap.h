#ifndef __CONTROL_DEVEL_WRAP_H__
#define __CONTROL_DEVEL_WRAP_H__
/*
 * Copyright (c) 2020 Samsung Electronics Co., Ltd.
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

#include <cxxabi.h>
#include <sstream>

#include <dali-toolkit/devel-api/controls/control-devel.h>

#include "common.h"

#define GUARD_ON_NULL_RET(arg_name)                                                                                \
    if (!(arg_name)) {                                                                                             \
        std::stringstream output;                                                                                  \
        output << __FUNCTION__ << " is not allowed to take nullptr as " << #arg_name;                              \
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, output.str().c_str(), #arg_name); \
        return;                                                                                                    \
    }

#define GUARD_ON_NULL_RET0(arg_name)                                                                               \
    if (!(arg_name)) {                                                                                             \
        std::stringstream output;                                                                                  \
        output << __FUNCTION__ << " is not allowed to take nullptr as " << #arg_name;                              \
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, output.str().c_str(), #arg_name); \
        return 0;                                                                                                  \
    }

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

namespace {

inline void try_catch(const std::function<void(void)> &func) {
    try {
        func();
    } catch (const std::out_of_range& e) {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
    } catch (const std::exception &e) {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
    } catch (const Dali::DaliException &e) {
        SWIG_CSharpException(SWIG_UnknownError, e.condition);
    } catch (const abi::__forced_unwind &) {
        throw;
    } catch (...) {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error");
    }
}

} // anonymous namespace

#endif // __CONTROL_DEVEL_WRAP_H__

