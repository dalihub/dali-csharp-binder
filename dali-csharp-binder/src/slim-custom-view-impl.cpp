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

// CLASS HEADER
#include "slim-custom-view-impl.h"

// EXTERNAL INCLUDES
#include <dali/devel-api/object/handle-devel.h>
#include <dali/public-api/object/type-registry.h>
#include <dali-toolkit/dali-toolkit.h>

// INTERNAL INCLUDES
#include "nui-view-accessible.h"

SlimCustomViewImpl::SlimCustomViewImpl(ControlBehaviour behaviourFlags) : Control(behaviourFlags)
{
}

Dali::Toolkit::Control SlimCustomViewImpl::New(ControlBehaviour additionalBehaviour)
{
  // Create the implementation, temporarily owned on stack
  Dali::IntrusivePtr<SlimCustomViewImpl> controlImpl = new SlimCustomViewImpl(Control::ControlBehaviour(CONTROL_BEHAVIOUR_DEFAULT | additionalBehaviour));

  // Pass ownership to handle
  Dali::Toolkit::Control handle(*controlImpl);

  // Second-phase init of the implementation
  // This can only be done after the CustomActor connection has been made...
  controlImpl->Initialize();

  // Impersonate Control by adopting its TypeInfo. Without this, many things don't work.
  Dali::TypeInfo typeInfo = Dali::TypeRegistry::Get().GetTypeInfo(typeid(Control));
  if(typeInfo)
  {
    Dali::DevelHandle::SetTypeInfo(handle, typeInfo);
  }

  return handle;
}

Dali::Toolkit::DevelControl::ControlAccessible* SlimCustomViewImpl::CreateAccessibleObject()
{
  return new NUIViewAccessible(Self());
}
