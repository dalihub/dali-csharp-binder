/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
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

SWIG_CSharpException_t SWIG_csharp_exceptions[] = {
  {SWIG_CSharpApplicationException, NULL},
  {SWIG_CSharpArithmeticException, NULL},
  {SWIG_CSharpDivideByZeroException, NULL},
  {SWIG_CSharpIndexOutOfRangeException, NULL},
  {SWIG_CSharpInvalidCastException, NULL},
  {SWIG_CSharpInvalidOperationException, NULL},
  {SWIG_CSharpIOException, NULL},
  {SWIG_CSharpNullReferenceException, NULL},
  {SWIG_CSharpOutOfMemoryException, NULL},
  {SWIG_CSharpOverflowException, NULL},
  {SWIG_CSharpSystemException, NULL} };

SWIG_CSharpExceptionArgument_t SWIG_csharp_exceptions_argument[] = {
  {SWIG_CSharpArgumentException, NULL},
  {SWIG_CSharpArgumentNullException, NULL},
  {SWIG_CSharpArgumentOutOfRangeException, NULL} };

void SWIGUNUSED SWIG_CSharpSetPendingException(SWIG_CSharpExceptionCodes code, const char* msg)
{
  SWIG_CSharpExceptionCallback_t callback = SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions) / sizeof(SWIG_CSharpException_t))
  {
    callback = SWIG_csharp_exceptions[code].callback;
  }
  callback(msg);
}

void SWIGUNUSED SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpExceptionArgumentCodes code, const char* msg, const char* param_name)
{
  SWIG_CSharpExceptionArgumentCallback_t callback = SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback;
  if ((size_t)code < sizeof(SWIG_csharp_exceptions_argument) / sizeof(SWIG_CSharpExceptionArgument_t))
  {
    callback = SWIG_csharp_exceptions_argument[code].callback;
  }
  callback(msg, param_name);
}

void SWIG_CSharpException(int code, const char* msg)
{
  if (code == SWIG_ValueError)
  {
    SWIG_CSharpExceptionArgumentCodes exception_code = SWIG_CSharpArgumentOutOfRangeException;
    SWIG_CSharpSetPendingExceptionArgument(exception_code, msg, 0);
  }
  else
  {
    SWIG_CSharpExceptionCodes exception_code = SWIG_CSharpApplicationException;
    switch (code)
    {
    case SWIG_MemoryError:
      exception_code = SWIG_CSharpOutOfMemoryException;
      break;
    case SWIG_IndexError:
      exception_code = SWIG_CSharpIndexOutOfRangeException;
      break;
    case SWIG_DivisionByZero:
      exception_code = SWIG_CSharpDivideByZeroException;
      break;
    case SWIG_IOError:
      exception_code = SWIG_CSharpIOException;
      break;
    case SWIG_OverflowError:
      exception_code = SWIG_CSharpOverflowException;
      break;
    case SWIG_DaliError: ///< Dali::Exception
      exception_code = SWIG_CSharpApplicationException;
      break;
    case SWIG_RuntimeError:
      exception_code = SWIG_CSharpInvalidOperationException;
      break;
    case SWIG_TypeError:
    case SWIG_SyntaxError:
    case SWIG_SystemError:
    case SWIG_UnknownError:
    default:
      exception_code = SWIG_CSharpSystemException;
      break;
    }
    SWIG_CSharpSetPendingException(exception_code, msg);
  }
}

void SWIG_ExceptionMessageWithFileAndLine(const int& code, const char* what, const char* filename, const int& linenumber, const char* funcname)
{
  std::string       message(what);
  std::stringstream fileAndLine;
  fileAndLine << " file: " << (filename) << " line: " << (linenumber) << " func: " << (funcname);
  message += fileAndLine.str();
  SWIG_CSharpException((code), message.c_str());
}

void internal_try_catch(const std::function<void(void)>& func, const char* filename, const int& linenumber, const char* funcname)
{
  try
  {
    func();
  }
  CALL_CATCH_EXCEPTION_WITH_CUSTOM_FILE_AND_LINE(, filename, linenumber, funcname);
}

#ifdef __cplusplus
extern "C"
#endif
SWIGEXPORT void SWIGSTDCALL
SWIGRegisterExceptionCallbacks_NDalic(
  SWIG_CSharpExceptionCallback_t applicationCallback,
  SWIG_CSharpExceptionCallback_t arithmeticCallback,
  SWIG_CSharpExceptionCallback_t divideByZeroCallback,
  SWIG_CSharpExceptionCallback_t indexOutOfRangeCallback,
  SWIG_CSharpExceptionCallback_t invalidCastCallback,
  SWIG_CSharpExceptionCallback_t invalidOperationCallback,
  SWIG_CSharpExceptionCallback_t ioCallback,
  SWIG_CSharpExceptionCallback_t nullReferenceCallback,
  SWIG_CSharpExceptionCallback_t outOfMemoryCallback,
  SWIG_CSharpExceptionCallback_t overflowCallback,
  SWIG_CSharpExceptionCallback_t systemCallback)
{
  SWIG_csharp_exceptions[SWIG_CSharpApplicationException].callback = applicationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpArithmeticException].callback = arithmeticCallback;
  SWIG_csharp_exceptions[SWIG_CSharpDivideByZeroException].callback = divideByZeroCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIndexOutOfRangeException].callback = indexOutOfRangeCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidCastException].callback = invalidCastCallback;
  SWIG_csharp_exceptions[SWIG_CSharpInvalidOperationException].callback = invalidOperationCallback;
  SWIG_csharp_exceptions[SWIG_CSharpIOException].callback = ioCallback;
  SWIG_csharp_exceptions[SWIG_CSharpNullReferenceException].callback = nullReferenceCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOutOfMemoryException].callback = outOfMemoryCallback;
  SWIG_csharp_exceptions[SWIG_CSharpOverflowException].callback = overflowCallback;
  SWIG_csharp_exceptions[SWIG_CSharpSystemException].callback = systemCallback;
}

#ifdef __cplusplus
extern "C"
#endif
SWIGEXPORT void SWIGSTDCALL
SWIGRegisterExceptionArgumentCallbacks_NDalic(
  SWIG_CSharpExceptionArgumentCallback_t argumentCallback,
  SWIG_CSharpExceptionArgumentCallback_t argumentNullCallback,
  SWIG_CSharpExceptionArgumentCallback_t argumentOutOfRangeCallback)
{
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentException].callback = argumentCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentNullException].callback = argumentNullCallback;
  SWIG_csharp_exceptions_argument[SWIG_CSharpArgumentOutOfRangeException].callback = argumentOutOfRangeCallback;
}

/* Callback for returning strings to C# without leaking memory */
SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback = strdup; ///< Use strdup instead of SWIGRegisterStringCallback_NDalic.

#ifdef __cplusplus
extern "C"
#endif
SWIGEXPORT void SWIGSTDCALL
SWIGRegisterStringCallback_NDalic(SWIG_CSharpStringHelperCallback callback)
{
  // Let we don't use registered string callback. Instead, use strdup. Since 2024-02-21.
}
