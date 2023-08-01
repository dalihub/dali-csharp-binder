#ifndef CSHARP_SLIM_CUSTOM_VIEW_IMPL_H
#define CSHARP_SLIM_CUSTOM_VIEW_IMPL_H

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
#include <dali-toolkit/devel-api/controls/control-devel.h>
#include <dali-toolkit/public-api/controls/control.h>
#include <dali-toolkit/public-api/controls/control-impl.h>

// INTERNAL INCLUDES
#include "common.h"

// SlimCustomViewImpl behaves almost identically to Toolkit::Internal::Control,
// but is associated with a NUIViewAccessible, therefore opening the possibility
// of providing Accessibility support in C#.
class SlimCustomViewImpl : public Dali::Toolkit::Internal::Control
{
  using Dali::Toolkit::Internal::Control::ControlBehaviour;

  SlimCustomViewImpl(ControlBehaviour behaviourFlags);

public:
  static Dali::Toolkit::Control New(ControlBehaviour additionalBehaviour);

protected:
  Dali::Toolkit::DevelControl::ControlAccessible* CreateAccessibleObject() override;
};

#endif // CSHARP_SLIM_CUSTOM_VIEW_IMPL_H
