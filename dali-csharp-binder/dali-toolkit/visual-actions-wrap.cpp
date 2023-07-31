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
#include <dali-toolkit/devel-api/visuals/visual-actions-devel.h>
#include <dali-toolkit/devel-api/visuals/image-visual-actions-devel.h>
#include <dali-toolkit/devel-api/visuals/animated-image-visual-actions-devel.h>
#include <dali-toolkit/devel-api/visuals/animated-vector-image-visual-actions-devel.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C"
{
#endif

  // Visual common action
  SWIGEXPORT int SWIGSTDCALL CSharp_Visual_Actions_UPDATE_PROPERTY_get()
  {
    return (int)Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY;
  }

  // Image Visual action
  SWIGEXPORT int SWIGSTDCALL CSharp_ImageVisual_Actions_RELOAD_get()
  {
    return (int)Dali::Toolkit::DevelImageVisual::Action::RELOAD;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_ImageVisual_Actions_PLAY_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::PLAY;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_ImageVisual_Actions_PAUSE_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::PAUSE;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_ImageVisual_Actions_STOP_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::STOP;
  }

  // Animated Image Visual action
  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedImageVisual_Actions_PLAY_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::PLAY;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedImageVisual_Actions_PAUSE_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::PAUSE;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedImageVisual_Actions_STOP_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::STOP;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedImageVisual_Actions_JUMP_TO_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedImageVisual::Action::JUMP_TO;
  }

  // Animated Vector Image Visual action
  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedVectorImageVisual_Actions_PLAY_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedVectorImageVisual::Action::PLAY;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedVectorImageVisual_Actions_PAUSE_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedVectorImageVisual::Action::PAUSE;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedVectorImageVisual_Actions_STOP_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedVectorImageVisual::Action::STOP;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedVectorImageVisual_Actions_JUMP_TO_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedVectorImageVisual::Action::JUMP_TO;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedVectorImageVisual_Actions_SET_DYNAMIC_PROPERTY_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedVectorImageVisual::Action::SET_DYNAMIC_PROPERTY;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_AnimatedVectorImageVisual_Actions_FLUSH_get()
  {
    return (int)Dali::Toolkit::DevelAnimatedVectorImageVisual::Action::FLUSH;
  }
#ifdef __cplusplus
}
#endif
