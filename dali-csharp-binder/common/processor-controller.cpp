/*
 * Copyright (c) 2024 Samsung Electronics Co., Ltd.
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

// CLASS HEADER
#include <dali-csharp-binder/common/processor-controller.h>

// EXTERNAL INCLUDES
#include <dali/devel-api/common/stage-devel.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>
#include <dali/integration-api/debug.h>
#include <dali/integration-api/trace.h>

namespace
{
DALI_INIT_TRACE_FILTER(gTraceFilter, DALI_TRACE_PERFORMANCE_MARKER, false);
}

ProcessorController::ProcessorController()
: mHandler(nullptr),
  mPostHandler(nullptr),
  mProcessRegistered(false),
  mKeepRenderingApplied(false),
  mProcessingEvents(false),
  mProcessEventsIdleRequested(false)
{
}

ProcessorController::~ProcessorController()
{
  {
    try
    {
      if(mProcessRegistered && Dali::Adaptor::IsAvailable())
      {
        Dali::Adaptor::Get().UnregisterProcessor(*this);
        Dali::Adaptor::Get().UnregisterProcessor(*this, true);

        mProcessRegistered = false;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

void ProcessorController::Process(bool postProcessor)
{
  if(!postProcessor)
  {
    // We will ignore Awake events during Process running
    mKeepRenderingApplied = true;

    // Mark as we are processing now.
    mProcessingEvents = true;

    if(DALI_LIKELY(mHandler != nullptr))
    {
      DALI_TRACE_SCOPE(gTraceFilter, "NUI_PROCESS");
      mHandler();
    }
  }
  else
  {
    if(mPostHandler != nullptr)
    {
      DALI_TRACE_SCOPE(gTraceFilter, "NUI_POST_PROCESS");
      mPostHandler();
    }
    // Make awake events can be applied after PostProcess done.
    mKeepRenderingApplied = false;

    // Clean up processing and events idle request flag.
    mProcessingEvents = false;
    mProcessEventsIdleRequested = false;
  }
}

void ProcessorController::SetCallback(  ProcessorControllerProcessCallback callback )
{
  mHandler = callback;
}

void ProcessorController::SetPostCallback(  ProcessorControllerProcessCallback postCallback )
{
  mPostHandler = postCallback;
}

void ProcessorController::RemoveCallback(  ProcessorControllerProcessCallback callback )
{
  mHandler = nullptr;
}
void ProcessorController::RemovePostCallback(  ProcessorControllerProcessCallback postCallback )
{
  mPostHandler = nullptr;
}

void ProcessorController::Awake()
{
  DALI_ASSERT_ALWAYS(mProcessRegistered && "ProcessorController should be initialized before call Awake");

  if(!mProcessingEvents && !mKeepRenderingApplied)
  {
    if(DALI_LIKELY(Dali::Stage::IsInstalled())) ///< Avoid worker thread calling.
    {
      auto stage = Dali::Stage::GetCurrent();
      stage.KeepRendering(0.0f);
      mKeepRenderingApplied = true;
    }
  }
  else if(mProcessingEvents && !mProcessEventsIdleRequested)
  {
    if(DALI_LIKELY(Dali::Stage::IsInstalled())) ///< Avoid worker thread calling.
    {
      // Request ProcessEvents on idle when we are processing now.
      Dali::Adaptor::Get().RequestProcessEventsOnIdle();
      mProcessEventsIdleRequested = true;
    }
  }
}

void ProcessorController::RegisterProcess()
{
  if(!mProcessRegistered)
  {
    try
    {
      Dali::Adaptor::Get().RegisterProcessor(*this);
      Dali::Adaptor::Get().RegisterProcessor(*this, true);

      mProcessRegistered = true;
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
extern "C" {
#endif

// ProcessorController Bindings
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ProcessorController() {

  ProcessorController *result = 0 ;

  {
    try {
      result = (ProcessorController *)new ProcessorController();
      result->RegisterProcess();
    } CALL_CATCH_EXCEPTION(0);
  }

  return (void *)result;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ProcessorController_Without_Initialize() {

  ProcessorController *result = 0 ;

  {
    try {
      result = (ProcessorController *)new ProcessorController();
    } CALL_CATCH_EXCEPTION(0);
  }

  return (void *)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ProcessorController(void * jarg1) {

  ProcessorController * arg1 = (ProcessorController *)jarg1;
  {
    try {
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ProcessorController_Initialize(void* jarg1)
{
  ProcessorController* processorController = (ProcessorController *) jarg1;

  if( processorController )
  {
    processorController->RegisterProcess();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ProcessorController_SetCallback( void* jarg1, ProcessorController::ProcessorControllerProcessCallback callback )
{
  ProcessorController* processorController = (ProcessorController *) jarg1;

  if( processorController )
  {
    processorController->SetCallback( callback );
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ProcessorController_SetPostCallback( void* jarg1, ProcessorController::ProcessorControllerProcessCallback callback )
{
  ProcessorController* processorController = (ProcessorController *) jarg1;

  if( processorController )
  {
    processorController->SetPostCallback( callback );
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ProcessorController_RemoveCallback( void* jarg1, ProcessorController::ProcessorControllerProcessCallback callback )
{
  ProcessorController* processorController = (ProcessorController *) jarg1;

  if( processorController )
  {
    processorController->RemoveCallback( callback );
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ProcessorController_RemovePostCallback( void* jarg1, ProcessorController::ProcessorControllerProcessCallback callback )
{
  ProcessorController* processorController = (ProcessorController *) jarg1;

  if( processorController )
  {
    processorController->RemovePostCallback( callback );
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ProcessorController_Awake( void* jarg1 )
{
  ProcessorController* processorController = (ProcessorController *) jarg1;

  if( processorController )
  {
    processorController->Awake();
  }
}

#ifdef __cplusplus
}
#endif