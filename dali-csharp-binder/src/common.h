#ifndef CSHARP_COMMON_H
#define CSHARP_COMMON_H

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

#define SWIG_DIRECTORS

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper
{
  struct SwigMovePointer
  {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit()
{
  return T();
}
#endif

#include <stdexcept>

#define SWIGSTDCALL

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/*  Errors in SWIG */
#define  SWIG_UnknownError         -1
#define  SWIG_IOError            -2
#define  SWIG_RuntimeError       -3
#define  SWIG_IndexError         -4
#define  SWIG_TypeError          -5
#define  SWIG_DivisionByZero     -6
#define  SWIG_OverflowError      -7
#define  SWIG_SyntaxError        -8
#define  SWIG_ValueError         -9
#define  SWIG_SystemError        -10
#define  SWIG_AttributeError     -11
#define  SWIG_MemoryError        -12
#define  SWIG_NullReferenceError   -13

/* Support for throwing C# exceptions from C/C++. There are two types:
 * Exceptions that take a message and ArgumentExceptions that take a message and a parameter name. */
typedef enum
{
  SWIG_CSharpApplicationException,
  SWIG_CSharpArithmeticException,
  SWIG_CSharpDivideByZeroException,
  SWIG_CSharpIndexOutOfRangeException,
  SWIG_CSharpInvalidCastException,
  SWIG_CSharpInvalidOperationException,
  SWIG_CSharpIOException,
  SWIG_CSharpNullReferenceException,
  SWIG_CSharpOutOfMemoryException,
  SWIG_CSharpOverflowException,
  SWIG_CSharpSystemException
} SWIG_CSharpExceptionCodes;

typedef enum
{
  SWIG_CSharpArgumentException,
  SWIG_CSharpArgumentNullException,
  SWIG_CSharpArgumentOutOfRangeException
} SWIG_CSharpExceptionArgumentCodes;

typedef void (SWIGSTDCALL* SWIG_CSharpExceptionCallback_t)(const char *);
typedef void (SWIGSTDCALL* SWIG_CSharpExceptionArgumentCallback_t)(const char *, const char *);
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);

typedef struct
{
  SWIG_CSharpExceptionCodes code;
  SWIG_CSharpExceptionCallback_t callback;
} SWIG_CSharpException_t;

typedef struct
{
  SWIG_CSharpExceptionArgumentCodes code;
  SWIG_CSharpExceptionArgumentCallback_t callback;
} SWIG_CSharpExceptionArgument_t;

extern SWIG_CSharpException_t SWIG_csharp_exceptions[];

extern SWIG_CSharpExceptionArgument_t SWIG_csharp_exceptions_argument[];

extern void SWIGUNUSED SWIG_CSharpSetPendingException(SWIG_CSharpExceptionCodes code, const char *msg);

extern void SWIGUNUSED SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpExceptionArgumentCodes code, const char *msg, const char *param_name);

extern void SWIG_CSharpException(int code, const char *msg);



#include <stdexcept>

#define SWIGSTDCALL

#include <dali/dali.h>
#include <dali-toolkit/dali-toolkit.h>

#include <dali-toolkit/devel-api/controls/control-wrapper.h>
#include <dali-toolkit/devel-api/controls/control-wrapper-impl.h>
#include <dali-toolkit/devel-api/controls/control-devel.h>

// Macro to append SWIG_CSharpException message file/line/function.
#define SWIG_EXCEPTION_MESSAGE(code, what, filename, linenumber, funcname)                          \
do                                                                                                  \
{                                                                                                   \
  std::string message(what);                                                                        \
  std::stringstream fileAndLine;                                                                    \
  fileAndLine << " file: " << (filename) << " line: " << (linenumber) << " func: " << (funcname);   \
  message += fileAndLine.str();                                                                     \
  SWIG_CSharpException((code), message.c_str());                                                    \
} while (0)

#define SWIG_EXCEPTION_WITH_FILE_AND_LINE(code, what) \
SWIG_EXCEPTION_MESSAGE(code, what, __FILE__, __LINE__, __FUNCTION__)

#include <cxxabi.h>

// Define Catch exception
#define CALL_CATCH_EXCEPTION(ret)                                                       \
  catch (std::out_of_range & e)                                                         \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_IndexError, const_cast<char *>(e.what()));   \
    return ret;                                                                         \
  }                                                                                     \
  catch (std::exception & e)                                                            \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_RuntimeError, const_cast<char *>(e.what())); \
    return ret;                                                                         \
  }                                                                                     \
  catch (Dali::DaliException e)                                                         \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_SystemError, e.condition);                   \
    return ret;                                                                         \
  }                                                                                     \
  catch (abi::__forced_unwind & e)                                                      \
  {                                                                                     \
    /* Throwed by pthread API. just igore and rethrow */                                \
    throw;                                                                              \
  }                                                                                     \
  catch (...)                                                                           \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_UnknownError, "unknown error");              \
    return ret;                                                                         \
  }

// Define Catch exception without rethrow
#define CALL_CATCH_EXCEPTION_ALWAYS(ret)                                                \
  catch (std::out_of_range & e)                                                         \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_IndexError, const_cast<char *>(e.what()));   \
    return ret;                                                                         \
  }                                                                                     \
  catch (std::exception & e)                                                            \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_RuntimeError, const_cast<char *>(e.what())); \
    return ret;                                                                         \
  }                                                                                     \
  catch (Dali::DaliException e)                                                         \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_SystemError, e.condition);                   \
    return ret;                                                                         \
  }                                                                                     \
  catch (...)                                                                           \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_UnknownError, "unknown error");              \
    return ret;                                                                         \
  }

// Define Catch exception with inputed file and line infomations
#define CALL_CATCH_EXCEPTION_WITH_CUSTOM_FILE_AND_LINE(ret, filename, linenumber, funcname)                        \
  catch (std::out_of_range & e)                                                                                    \
  {                                                                                                                \
    SWIG_EXCEPTION_MESSAGE(SWIG_IndexError, const_cast<char *>(e.what()), (filename), (linenumber), (funcname));   \
    return ret;                                                                                                    \
  }                                                                                                                \
  catch (std::exception & e)                                                                                       \
  {                                                                                                                \
    SWIG_EXCEPTION_MESSAGE(SWIG_RuntimeError, const_cast<char *>(e.what()), (filename), (linenumber), (funcname)); \
    return ret;                                                                                                    \
  }                                                                                                                \
  catch (Dali::DaliException e)                                                                                    \
  {                                                                                                                \
    SWIG_EXCEPTION_MESSAGE(SWIG_SystemError, e.condition, (filename), (linenumber), (funcname));                   \
    return ret;                                                                                                    \
  }                                                                                                                \
  catch (abi::__forced_unwind & e)                                                                                 \
  {                                                                                                                \
    /* Throwed by pthread API. just igore and rethrow */                                                           \
    throw;                                                                                                         \
  }                                                                                                                \
  catch (...)                                                                                                      \
  {                                                                                                                \
    SWIG_EXCEPTION_MESSAGE(SWIG_UnknownError, "unknown error", (filename), (linenumber), (funcname));              \
    return ret;                                                                                                    \
  }

// Define Catch exception if we need extra job before return
#define CALL_CATCH_EXCEPTION_WITH_FUNCTION(ret, func, ...)                              \
  catch (std::out_of_range & e)                                                         \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_IndexError, const_cast<char *>(e.what()));   \
    (*(func))(__VA_ARGS__);                                                             \
    return ret;                                                                         \
  }                                                                                     \
  catch (std::exception & e)                                                            \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_RuntimeError, const_cast<char *>(e.what())); \
    (*(func))(__VA_ARGS__);                                                             \
    return ret;                                                                         \
  }                                                                                     \
  catch (Dali::DaliException e)                                                         \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_SystemError, e.condition);                   \
    (*(func))(__VA_ARGS__);                                                             \
    return ret;                                                                         \
  }                                                                                     \
  catch (abi::__forced_unwind & e)                                                      \
  {                                                                                     \
    /* Throwed by pthread API. just igore and rethrow */                                \
    throw;                                                                              \
  }                                                                                     \
  catch (...)                                                                           \
  {                                                                                     \
    SWIG_EXCEPTION_WITH_FILE_AND_LINE(SWIG_UnknownError, "unknown error");              \
    (*(func))(__VA_ARGS__);                                                             \
    return ret;                                                                         \
  }

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

namespace {

// Define useful utils with lambda function
inline void internal_try_catch(const std::function<void(void)>& func, const char* filename, const int& linenumber, const char* funcname) {
    try {
        func();
    } CALL_CATCH_EXCEPTION_WITH_CUSTOM_FILE_AND_LINE(, filename, linenumber, funcname);
}

#ifdef try_catch
#undef try_catch
#endif
// Define try_catch macro to get correct line and function_name
// NOTE: when lamda function use comma(,) at template, compiler think this is kind of argment divisor.
// This is compiler bug. So we need to cover the function by additional parentheses.
#define try_catch(func) internal_try_catch((func), __FILE__, __LINE__, __FUNCTION__)

} // anonymous namespace

#endif // CSHARP_COMMON_H
