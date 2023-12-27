#ifndef CSHARP_PROCESSOR_CONTROLLER_H
#define CSHARP_PROCESSOR_CONTROLLER_H

/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd.
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

// EXTERNAL INCLUDES
#include <dali/integration-api/processor-interface.h>

// INTERNAL INCLUDES
#include "common.h"

/**
 * @brief Implements a Integration::Processor interface so can be registered with dali-core as
 * a Processor.  Enables the setting of a callback so dali-core can execute this callback when
 * Process() is run.
 */
class ProcessorController : public Dali::Integration::Processor
{
public:

  // Function pointer matching delegate in C# ProcessorController
  using ProcessorControllerProcessCallback = void (SWIGSTDCALL*)();

public:
  /**
   * @brief Constructor - creates a ProcessorController.
   *
   */
  ProcessorController();

  /**
   * @brief Destructor - Unregisters itself from dali-core.
   */
  ~ProcessorController();

  /**
   * @brief Register this processor into dali-core.
   */
  void RegisterProcess();

   /**
    * @brief Set the callback to be executed when dali-core calls the overriden Process() api.
    * @param[in] callback, function to be called
    */
  void SetCallback( ProcessorControllerProcessCallback callback );

   /**
    * @brief Set the postcallback to be executed when dali-core calls the overriden Process(true) api.
    * @param[in] postCallback, function to be called
    */
  void SetPostCallback( ProcessorControllerProcessCallback postCallback );

   /**
    * @brief Remove callback on this ProcessorController.
    * The removed callback will not be called anymore.
    * @param[in] callback, function will be removed
    */
  void RemoveCallback( ProcessorControllerProcessCallback callback );

   /**
    * @brief Remove postcallback on this ProcessorController.
    * The removed callback will not be called anymore.
    * @param[in] postCallback, function will be removed
    */
  void RemovePostCallback( ProcessorControllerProcessCallback postCallback );

   /**
    * @brief Layout and awake update thread, or re-run registered processor.
    */
  void Awake();

protected: // Implementation of Processor
  /**
   * @copydoc Dali::Integration::Processor::Process()
   */
  void Process(bool postProcessor) override;

  /**
   * @copydoc Dali::Integration::Processor::GetProcessorName()
   */
  std::string_view GetProcessorName() const override
  {
    return "ProcessorController";
  }

private:

  ProcessorControllerProcessCallback mHandler;              ///< PreProcessHandler before Relayout
  ProcessorControllerProcessCallback mPostHandler;          ///< PostProcessHandler after Relayout

  bool mProcessRegistered : 1;          ///< True if we call RegisterProcess. False otherwise.
  bool mKeepRenderingApplied : 1;       ///< True if we call Stage::KeepRendering(0.0f). It need to avoid duplicated keep rendering call
  bool mProcessingEvents : 1;           ///< True if we are running Process now.
  bool mProcessEventsIdleRequested : 1; ///< True if we call Adaptor::RequestProcessEventsOnIdle(). It need to avoid duplicated request call.
};

#endif // CSHARP_PROCESSOR_CONTROLLER_H