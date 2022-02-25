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

#define SWIGSTDCALL

// INCLUDES
#include "common.h"
#include <dali/devel-api/adaptor-framework/drag-and-drop.h>
#include <dali/integration-api/debug.h>

using namespace Dali;

/* Callback for returning strings to C# without leaking memory */
typedef char * (SWIGSTDCALL* SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

static char temp_msg[] = "DnD Data is Empty!";
static const char * nullExceptMsg = "Attempt to dereference null Dali::Adaptor::DragAndDrop";

using DnDCallback = void(SWIGSTDCALL *)(const Dali::DragAndDrop::DragEvent&);
DnDCallback dndCallback;

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_DragAndDrop_New__SWIG_0() {
  void *jresult = nullptr;
  Dali::DragAndDrop result;
  try {
      result = Dali::DragAndDrop::Get();
      jresult = new Dali::DragAndDrop((const Dali::DragAndDrop &)result);

  } CALL_CATCH_EXCEPTION(0);

 return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DragAndDrop_StartDragAndDrop(void * jarg1, void * jarg2, void * jarg3, char * jarg4) {
  Dali::DragAndDrop *dnd = (Dali::DragAndDrop *)jarg1;

  if (!dnd) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  Dali::Actor *argp2;
  Dali::Actor *argp3;
  Dali::Actor source;
  Dali::Actor shadow;

  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  argp3 = (Dali::Actor *)jarg3;
  if (!argp3) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  source = *argp2;
  shadow = *argp3;
  bool result = false;
  {
    try {
      result = dnd->StartDragAndDrop(source, shadow, jarg4);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DragAndDrop_AddListener(void * jarg1, void * jarg2, void * jarg3) {
  Dali::DragAndDrop *dnd = (Dali::DragAndDrop *)jarg1;
  if (!dnd) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  Dali::Actor *argp2;
  Dali::Actor target;

  argp2 = (Dali::Actor *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  target = *argp2;
  bool result = false;
  {
    try {
      dndCallback = (DnDCallback)jarg3;
      result = dnd->AddListener(target, dndCallback);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_DragEvent_GetAction(void * jarg) {
  int jresult;
  Dali::DragAndDrop::DragEvent *dragEvent = (Dali::DragAndDrop::DragEvent *)jarg;

  if (!dragEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return 0;
  }
  {
    try {
      jresult = (int)((Dali::DragAndDrop::DragEvent &)*dragEvent).GetAction();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_DragEvent_GetPosition(void * jarg) {
  void * jresult = nullptr;
  Dali::DragAndDrop::DragEvent *dragEvent = (Dali::DragAndDrop::DragEvent *)jarg;
  Dali::Vector2 result;

  if (!dragEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return 0;
  }
  {
    try {
      result = ((Dali::DragAndDrop::DragEvent &)*dragEvent).GetPosition();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2 &)result);
  return jresult;
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_DragEvent_GetData(void * jarg) {
  char * jresult = nullptr;
  Dali::DragAndDrop::DragEvent *dragEvent = (Dali::DragAndDrop::DragEvent *)jarg;
  std::string result;

  if (!dragEvent) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return 0;
  }
  {
    try {
      if (dragEvent->GetData() != nullptr)
      {
        result = ((Dali::DragAndDrop::DragEvent &)*dragEvent).GetData();
      }
      else
      {
        result = temp_msg;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}

#ifdef __cplusplus
} // end extern "C"
#endif
