/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
#include <dali-csharp-binder/common/common.h>
#include <dali/public-api/adaptor-framework/drag-data.h>
#include <dali/public-api/adaptor-framework/drag-and-drop.h>
#include <dali/public-api/adaptor-framework/drag-event.h>
#include <dali/integration-api/debug.h>
#include <unordered_map>

using namespace Dali;

static const char* nullExceptMsg  = "Attempt to dereference null Dali::Adaptor::DragAndDrop";

using DnDCallback = void(SWIGSTDCALL*)(const Dali::DragAndDrop::DragEvent&);
using SourceCallback = void(SWIGSTDCALL*)(enum Dali::DragAndDrop::SourceEventType);

namespace
{
/**
 * Stores the managed delegates associated with one native DragAndDrop object.
 *
 * The public API emits typed Signals. This registry is deliberately confined to
 * the binder so that the managed compatibility surface can keep its existing
 * callback API without exposing function pointers or std::function in DALi's
 * public C++ header.
 */
struct CallbackRegistry
{
  SourceCallback                              sourceCallback{nullptr};
  std::unordered_map<Dali::RefObject*, DnDCallback> actorCallbacks;
  std::unordered_map<Dali::RefObject*, DnDCallback> windowCallbacks;
  bool                                        signalsConnected{false};
};

std::unordered_map<Dali::RefObject*, CallbackRegistry> gCallbackRegistries;

CallbackRegistry& GetCallbackRegistry(const Dali::DragAndDrop& dnd)
{
  return gCallbackRegistries[dnd.GetObjectPtr()];
}

void OnSourceEvent(Dali::DragAndDrop dnd, Dali::Actor /*source*/, Dali::DragAndDrop::SourceEventType type)
{
  auto registry = gCallbackRegistries.find(dnd.GetObjectPtr());
  if(registry != gCallbackRegistries.end() && registry->second.sourceCallback)
  {
    registry->second.sourceCallback(type);
  }
}

void OnActorDragEvent(Dali::DragAndDrop dnd, Dali::Actor target, const Dali::DragAndDrop::DragEvent& event)
{
  auto registry = gCallbackRegistries.find(dnd.GetObjectPtr());
  if(registry == gCallbackRegistries.end())
  {
    return;
  }

  auto callback = registry->second.actorCallbacks.find(target.GetObjectPtr());
  if(callback != registry->second.actorCallbacks.end() && callback->second)
  {
    callback->second(event);
  }
}

void OnWindowDragEvent(Dali::DragAndDrop dnd, Dali::Window target, const Dali::DragAndDrop::DragEvent& event)
{
  auto registry = gCallbackRegistries.find(dnd.GetObjectPtr());
  if(registry == gCallbackRegistries.end())
  {
    return;
  }

  auto callback = registry->second.windowCallbacks.find(target.GetObjectPtr());
  if(callback != registry->second.windowCallbacks.end() && callback->second)
  {
    callback->second(event);
  }
}

void EnsureSignalConnections(Dali::DragAndDrop& dnd)
{
  CallbackRegistry& registry = GetCallbackRegistry(dnd);
  if(!registry.signalsConnected)
  {
    dnd.SourceEventSignal().Connect(OnSourceEvent);
    dnd.ActorDragEventSignal().Connect(OnActorDragEvent);
    dnd.WindowDragEventSignal().Connect(OnWindowDragEvent);
    registry.signalsConnected = true;
  }
}
} // unnamed namespace

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_DragAndDrop_New__SWIG_0()
{
  void*             jresult = nullptr;
  Dali::DragAndDrop result;
  try
  {
    result  = Dali::DragAndDrop::Get();
    jresult = new Dali::DragAndDrop((const Dali::DragAndDrop&)result);
  }
  CALL_CATCH_EXCEPTION(0);

  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DragAndDrop_StartDragAndDrop(void* argDnD, void* argSource, void* argShadowWindow, char** argMimeTypes, int argMimeTypesSize, char** argDataSet, int argDataSetSize, void* argSourceCallback)
{
  Dali::DragAndDrop* dnd = (Dali::DragAndDrop*)argDnD;

  if(!dnd)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  Dali::Actor*  pSource;
  Dali::Window* pShadow;
  Dali::Actor   source;
  Dali::Window  shadow;

  pSource = (Dali::Actor*)argSource;
  if(!pSource)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  pShadow = (Dali::Window*)argShadowWindow;
  if(!pShadow)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  source = *pSource;
  shadow = *pShadow;

  if(argMimeTypesSize <= 0 || argMimeTypesSize != argDataSetSize || !argMimeTypes || !argDataSet)
  {
    return false;
  }

  Dali::DragAndDrop::DragData dragData;
  for(int index = 0; index < argMimeTypesSize; ++index)
  {
    if(!argMimeTypes[index] || !argDataSet[index])
    {
      return false;
    }
    dragData.AddData(Dali::String(argMimeTypes[index]), Dali::String(argDataSet[index]));
  }

  bool result = false;
  {
    try
    {
      EnsureSignalConnections(*dnd);
      GetCallbackRegistry(*dnd).sourceCallback = reinterpret_cast<SourceCallback>(argSourceCallback);
      result                                   = dnd->StartDragAndDrop(source, shadow, dragData);
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DragAndDrop_AddListener(void* argDnD, void* argTarget, char* argMimeType, void* argCallback)
{
  Dali::DragAndDrop* dnd = (Dali::DragAndDrop*)argDnD;
  if(!dnd)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  Dali::Actor* argp2;
  Dali::Actor  target;

  argp2 = (Dali::Actor*)argTarget;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  target      = *argp2;
  bool result = false;
  {
    try
    {
      if(!argMimeType || !argCallback)
      {
        return false;
      }
      EnsureSignalConnections(*dnd);
      result = dnd->AddListener(target, Dali::String(argMimeType));
      if(result)
      {
        GetCallbackRegistry(*dnd).actorCallbacks[target.GetObjectPtr()] = reinterpret_cast<DnDCallback>(argCallback);
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DragAndDrop_RemoveListener(void* argDnD, void* argTarget, void* argCallback)
{
  Dali::DragAndDrop* dnd = (Dali::DragAndDrop*)argDnD;
  if(!dnd)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  Dali::Actor* pTarget;
  Dali::Actor  target;

  pTarget = (Dali::Actor*)argTarget;
  if(!pTarget)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  target      = *pTarget;
  bool result = false;
  {
    try
    {
      result = dnd->RemoveListener(target);
      if(result)
      {
        GetCallbackRegistry(*dnd).actorCallbacks.erase(target.GetObjectPtr());
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DragAndDrop_Window_AddListener(void* argDnD, void* argTarget, char* argMimeType, void* argCallback)
{
  Dali::DragAndDrop* dnd = (Dali::DragAndDrop*)argDnD;
  if(!dnd)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  Dali::Window* pTarget;
  Dali::Window  target;

  pTarget = (Dali::Window*)argTarget;
  if(!pTarget)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  target      = *pTarget;
  bool result = false;
  {
    try
    {
      if(!argMimeType || !argCallback)
      {
        return false;
      }
      EnsureSignalConnections(*dnd);
      result = dnd->AddListener(target, Dali::String(argMimeType));
      if(result)
      {
        GetCallbackRegistry(*dnd).windowCallbacks[target.GetObjectPtr()] = reinterpret_cast<DnDCallback>(argCallback);
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_DragAndDrop_Window_RemoveListener(void* argDnD, void* argTarget, void* argCallback)
{
  Dali::DragAndDrop* dnd = (Dali::DragAndDrop*)argDnD;
  if(!dnd)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  Dali::Window* pTarget;
  Dali::Window  target;

  pTarget = (Dali::Window*)argTarget;
  if(!pTarget)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return false;
  }

  target      = *pTarget;
  bool result = false;
  {
    try
    {
      result = dnd->RemoveListener(target);
      if(result)
      {
        GetCallbackRegistry(*dnd).windowCallbacks.erase(target.GetObjectPtr());
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_DragEvent_GetAction(void* jarg)
{
  int                           jresult;
  Dali::DragAndDrop::DragEvent* dragEvent = (Dali::DragAndDrop::DragEvent*)jarg;

  if(!dragEvent)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return 0;
  }
  {
    try
    {
      jresult = (int)((Dali::DragAndDrop::DragEvent&)*dragEvent).GetDragType();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_DragEvent_GetPosition(void* jarg)
{
  void*                         jresult   = nullptr;
  Dali::DragAndDrop::DragEvent* dragEvent = (Dali::DragAndDrop::DragEvent*)jarg;
  Dali::Vector2                 result;

  if(!dragEvent)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return 0;
  }
  {
    try
    {
      result = ((Dali::DragAndDrop::DragEvent&)*dragEvent).GetPosition();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Vector2((const Dali::Vector2&)result);
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_DragEvent_GetMimeTypeCount(void* argDragEvent)
{
  Dali::DragAndDrop::DragEvent* dragEvent = (Dali::DragAndDrop::DragEvent*)argDragEvent;

  if(!dragEvent)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return 0;
  }
  {
    try
    {
      return static_cast<int>(dragEvent->GetMimeTypeCount());
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return 0;
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_DragEvent_GetMimeType(void* argDragEvent, int index)
{
  Dali::DragAndDrop::DragEvent* dragEvent = (Dali::DragAndDrop::DragEvent*)argDragEvent;
  if(!dragEvent || index < 0)
  {
    return SWIG_csharp_string_callback("");
  }

  Dali::String mimeType;
  try
  {
    mimeType = dragEvent->GetMimeType(static_cast<uint32_t>(index));
  }
  CALL_CATCH_EXCEPTION(0);
  return SWIG_csharp_string_callback(mimeType.CStr());
}

SWIGEXPORT char* SWIGSTDCALL CSharp_Dali_DragEvent_GetData(void* argDragEvent)
{
  char*                         jresult   = nullptr;
  Dali::DragAndDrop::DragEvent* dragEvent = (Dali::DragAndDrop::DragEvent*)argDragEvent;
  std::string                   result;

  if(!dragEvent)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, nullExceptMsg, 0);
    return 0;
  }
  {
    try
    {
      result = dragEvent->GetData().CStr();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = SWIG_csharp_string_callback((&result)->c_str());
  return jresult;
}

#ifdef __cplusplus
} // end extern "C"
#endif
