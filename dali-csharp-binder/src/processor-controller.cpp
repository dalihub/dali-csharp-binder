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

// CLASS HEADER
#include "processor-controller.h"

// EXTERNAL INCLUDES
#include <dali/devel-api/common/stage-devel.h>
#include <dali/integration-api/adaptor-framework/adaptor.h>

#ifdef __cplusplus
extern "C" {
#endif

ProcessorController::ProcessorController()
: mHandler(nullptr),
  mPostHandler(nullptr),
  mKeepRenderingApplied(false)
{
  {
    try
    {
      Dali::Adaptor::Get().RegisterProcessor(*this);
      Dali::Adaptor::Get().RegisterProcessor(*this, true);
    }
    CALL_CATCH_EXCEPTION();
  }
}

ProcessorController::~ProcessorController()
{
  {
    try
    {
      Dali::Adaptor::Get().UnregisterProcessor(*this);
      Dali::Adaptor::Get().UnregisterProcessor(*this, true);
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
    if(DALI_LIKELY(mHandler != nullptr))
    {
      mHandler();
    }
  }
  else
  {
    if(DALI_LIKELY(mPostHandler != nullptr))
    {
      mPostHandler();
    }
    // Make awake events can be applied after PostProcess done.
    mKeepRenderingApplied = false;
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
  if(DALI_UNLIKELY(!mKeepRenderingApplied))
  {
    if(DALI_LIKELY(Dali::Stage::IsInstalled()))
    {
      auto stage = Dali::Stage::GetCurrent();
      stage.KeepRendering(0.0f);
      mKeepRenderingApplied = true;
    }
  }
}

// ProcessorController Bindings
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ProcessorController() {

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