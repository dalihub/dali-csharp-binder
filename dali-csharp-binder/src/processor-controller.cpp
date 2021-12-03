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

#include "processor-controller.h"
#include <dali/integration-api/adaptor-framework/adaptor.h>

#ifdef __cplusplus
extern "C" {
#endif

ProcessorController::ProcessorController()
: mHandler(nullptr)
{
  {
    try
    {
      Dali::Adaptor::Get().RegisterProcessor(*this);
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
    }
    CALL_CATCH_EXCEPTION_ALWAYS(); ///< We should not throw anything in deconstructor
  }
}

void ProcessorController::Process(bool postProcessor)
{
  mHandler();
}

void ProcessorController::SetCallback(  ProcessorControllerProcessCallback callback )
{
  mHandler = callback;
}

void ProcessorController::RemoveCallback(  ProcessorControllerProcessCallback callback )
{
  mHandler = nullptr;
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

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ProcessorController_RemoveCallback( void* jarg1, ProcessorController::ProcessorControllerProcessCallback callback )
{
  ProcessorController* processorController = (ProcessorController *) jarg1;

  if( processorController )
  {
    processorController->RemoveCallback( callback );
  }
}

#ifdef __cplusplus
}
#endif