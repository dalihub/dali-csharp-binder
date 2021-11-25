/** Copyright (c) 2020 Samsung Electronics Co., Ltd.
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
#include <dali/dali.h>
#include <dali/devel-api/adaptor-framework/component-application.h>

#ifdef __cplusplus
extern "C" {
#endif

int argC = 1;
char **argV = NULL;

typedef void* (*CreateNativeSignalType)();
CreateNativeSignalType callback;

Dali::Any CreateNativeSignalCallbackWrapper()
{
  return callback();
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ComponentApplication(int jarg1, char * jarg2, char * jarg3) {
  void * jresult ;
  int *arg1 = (int *) 0 ;
  char ***arg2 ;
  std::string *arg3 = 0 ;
  Dali::ComponentApplication result;
  {
    int index = 0;
    int length = 0;
    char *retPtr;
    char *nextPtr;
    argC = jarg1;
    argV = new char*[jarg1 + 1];

    retPtr = strtok_r( jarg2, " ", &nextPtr);
    if( retPtr )
    {
      length = strlen(retPtr);
    }
    argV[index] = new char[length + 1];
    if( retPtr )
    {
      strncpy(argV[index], retPtr, length);
    }
    argV[index][length] = '\0';
    index++;

    while (index < jarg1)
    {
      length = 0;
      retPtr = strtok_r(NULL, " ", &nextPtr);
      if( retPtr )
      {
        length = strlen(retPtr);
      }
      argV[index] = new char[length + 1];
      if( retPtr )
      {
        strncpy(argV[index], retPtr, length);
      }
      argV[index][length] = '\0';
      index++;
    }

    argV[jarg1] = NULL;
    argC = jarg1;

    arg1 = &argC;
    arg2 = &argV;
  }

  if (!jarg3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg3_str(jarg3);
  arg3 = &arg3_str;
  {
    try {
      result = Dali::ComponentApplication::New(arg1,arg2,(std::string const &)*arg3);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = new Dali::ComponentApplication((const Dali::ComponentApplication &)result);

  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ComponentApplication_SWIG1(void * jarg1) {
  void * jresult ;
  Dali::ComponentApplication *arg1 = 0 ;
  Dali::ComponentApplication *result = 0 ;

  arg1 = (Dali::ComponentApplication *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::ComponentApplication const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::ComponentApplication *)new Dali::ComponentApplication((Dali::ComponentApplication const &)*arg1);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_assign_ComponentApplication(void * jarg1, void * jarg2) {
  void * jresult ;
  Dali::ComponentApplication *arg1 = (Dali::ComponentApplication *) 0 ;
  Dali::ComponentApplication *arg2 = 0 ;
  Dali::ComponentApplication *result = 0 ;

  arg1 = (Dali::ComponentApplication *)jarg1;
  arg2 = (Dali::ComponentApplication *)jarg2;
  if (!arg2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::ComponentApplication const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::ComponentApplication *) &(arg1)->operator =((Dali::ComponentApplication const &)*arg2);
    } CALL_CATCH_EXCEPTION(0);
  }
  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ComponentApplication(void * jarg1) {
  Dali::ComponentApplication *arg1 = (Dali::ComponentApplication *) 0 ;

  arg1 = (Dali::ComponentApplication *)jarg1;
  {
    try {
      delete arg1;
      if( argV )
      {
        // free string data
        for( int i=0; i < argC+1; i++)
        {
          delete [] argV[i];
        }
        delete [] argV;
      }
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ComponentApplication_CreateNativeSignal(void * jarg1) {
  void* jresult ;
  Dali::ComponentApplication *arg1 = (Dali::ComponentApplication *) 0 ;
  Dali::ComponentApplication::CreateSignalType *result = 0 ;

  arg1 = (Dali::ComponentApplication *)jarg1;
  {
    try {
      result = (Dali::ComponentApplication::CreateSignalType *) &(arg1)->CreateSignal();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ComponentApplication_CreateNativeSignal_Connect(void * jarg1, void * jarg2) {
  Dali::ComponentApplication *arg1 = (Dali::ComponentApplication *) 0 ;
  arg1 = (Dali::ComponentApplication *)jarg1;

  callback = (CreateNativeSignalType) jarg2;
  {
    try {
      (arg1)->CreateSignal().Connect(CreateNativeSignalCallbackWrapper);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ComponentApplication_CreateNativeSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::ComponentApplication *arg1 = (Dali::ComponentApplication *) 0 ;
  arg1 = (Dali::ComponentApplication *)jarg1;

  {
    try {
      (arg1)->CreateSignal().Disconnect(CreateNativeSignalCallbackWrapper);
    } CALL_CATCH_EXCEPTION();
  }
}
#ifdef __cplusplus
}
#endif

