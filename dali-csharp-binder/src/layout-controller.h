/*
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
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
class LayoutController : public Dali::Integration::Processor
{
public:

  // Function pointer matching delegate in C# LayoutController
  using LayoutControllerProcessCallback = void (SWIGSTDCALL*)(int);

public:
  /**
   * @brief Constructor - creates a LayoutController and registers it with dali-core.
   *
   */
  LayoutController();

  /**
   * @brief Destructor - Unregisters itself from dali-core.
   */
  ~LayoutController();

  /**
   * @brief Gets the id of the LayoutController that was initialised during construction.
   * @return the id of the LayoutController.
   * @note Useful for debugging when multiple LayoutControllers are registered with dali-core.
   */
  int GetId() const;

  /**
   * @copydoc Dali::Integration::Processor::Process()
   */
  void Process() override;

   /**
    * @brief Set the callback to be executed when dali-core calls the overriden Process() api.
    * @param[in] callback, function to be called
    */
  void SetCallback( LayoutControllerProcessCallback callback );

private:

  LayoutControllerProcessCallback handler;

  int mId;

};