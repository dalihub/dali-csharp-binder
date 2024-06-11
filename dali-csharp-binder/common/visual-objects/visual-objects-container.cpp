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
#include <dali-csharp-binder/common/visual-objects/visual-objects-container.h>

// EXTERNAL INCLUDES
#include <dali/integration-api/debug.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>
#include <dali-csharp-binder/common/visual-objects/visual-object.h>
#include <dali-csharp-binder/common/visual-objects/visual-objects-container-impl.h>

namespace Dali
{
VisualObjectsContainer::VisualObjectsContainer(Dali::Internal::VisualObjectsContainer* object)
: BaseHandle(object)
{
}

VisualObjectsContainer VisualObjectsContainer::New(Dali::Toolkit::Control control, VisualObjectsContainer::ContainerRangeType rangeType)
{
  Internal::VisualObjectsContainerPtr internal = Internal::VisualObjectsContainer::New(control, rangeType);
  return VisualObjectsContainer(internal.Get());
}

VisualObjectsContainer VisualObjectsContainer::DownCast(BaseHandle handle)
{
  return VisualObjectsContainer(dynamic_cast<Dali::Internal::VisualObjectsContainer*>(handle.GetObjectPtr()));
}

///< Public API

Dali::Toolkit::Control VisualObjectsContainer::GetOwner() const
{
  return GetImplementation(*this).GetOwner();
}

VisualObjectsContainer::ContainerRangeType VisualObjectsContainer::GetContainerRangeType() const
{
  return GetImplementation(*this).GetContainerRangeType();
}

uint32_t VisualObjectsContainer::GetVisualObjectsCount() const
{
  return GetImplementation(*this).GetVisualObjectsCount();
}

Dali::VisualObject VisualObjectsContainer::GetVisualObjectAt(uint32_t index) const
{
  return GetImplementation(*this).GetVisualObjectAt(index);
}

bool VisualObjectsContainer::AddVisualObject(Dali::VisualObject visualObject)
{
  return GetImplementation(*this).AddVisualObject(visualObject);
}

void VisualObjectsContainer::RemoveVisualObject(Dali::VisualObject visualObject)
{
  GetImplementation(*this).RemoveVisualObject(visualObject);
}

} // namespace Dali

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_ContainerRangeTypeBackgroundEffectGet()
{
  return static_cast<int>(Dali::VisualObjectsContainer::ContainerRangeType::BACKGROUND_EFFECT);
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_ContainerRangeTypeBackgroundGet()
{
  return static_cast<int>(Dali::VisualObjectsContainer::ContainerRangeType::BACKGROUND);
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_ContainerRangeTypeContentGet()
{
  return static_cast<int>(Dali::VisualObjectsContainer::ContainerRangeType::CONTENT);
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_ContainerRangeTypeDecorationGet()
{
  return static_cast<int>(Dali::VisualObjectsContainer::ContainerRangeType::DECORATION);
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_ContainerRangeTypeForegroundEffectGet()
{
  return static_cast<int>(Dali::VisualObjectsContainer::ContainerRangeType::FOREGROUND_EFFECT);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_VisualObjectsContainer__SWIG_0()
{
  Dali::VisualObjectsContainer* result = 0;

  try_catch(([&]() {
    result = (Dali::VisualObjectsContainer*)new Dali::VisualObjectsContainer();
  }));

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_New(void* nuiView, int rangeType)
{
  void*                        jresult = 0;
  Dali::VisualObjectsContainer result;

  GUARD_ON_NULL_RET0(nuiView);

  try_catch(([&]() {
    auto handle  = (Dali::BaseHandle*)nuiView;
    auto control = Dali::Toolkit::Control::DownCast(*handle);
    if(control)
    {
      result = Dali::VisualObjectsContainer::New(control, static_cast<Dali::VisualObjectsContainer::ContainerRangeType>(rangeType));
    }
  }));

  jresult = new Dali::VisualObjectsContainer((const Dali::VisualObjectsContainer&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VisualObjectsContainer(void* nuiVisualObjectsContainer)
{
  Dali::VisualObjectsContainer* arg1 = (Dali::VisualObjectsContainer*)0;

  arg1 = (Dali::VisualObjectsContainer*)nuiVisualObjectsContainer;
  try_catch(([&]() {
    delete arg1;
  }));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_GetOwner(void* nuiVisualObjectsContainer)
{
  void*                               jresult   = 0;
  const Dali::VisualObjectsContainer* container = (const Dali::VisualObjectsContainer*)0;
  Dali::Toolkit::Control              result;

  GUARD_ON_NULL_RET0(nuiVisualObjectsContainer);

  container = (const Dali::VisualObjectsContainer*)nuiVisualObjectsContainer;
  try_catch(([&]() {
    result = container->GetOwner();
  }));

  jresult = new Dali::Toolkit::Control((const Dali::Toolkit::Control&)result);
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_GetContainerRangeType(void* nuiVisualObjectsContainer)
{
  const Dali::VisualObjectsContainer*              container = (const Dali::VisualObjectsContainer*)0;
  Dali::VisualObjectsContainer::ContainerRangeType result    = Dali::VisualObjectsContainer::ContainerRangeType::CONTENT;

  GUARD_ON_NULL_RET0(nuiVisualObjectsContainer);

  container = (const Dali::VisualObjectsContainer*)nuiVisualObjectsContainer;
  try_catch(([&]() {
    result = container->GetContainerRangeType();
  }));

  return static_cast<int>(result);
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_GetVisualObjectsCount(void* nuiVisualObjectsContainer)
{
  const Dali::VisualObjectsContainer* container = (const Dali::VisualObjectsContainer*)0;
  uint32_t                            result    = 0u;

  GUARD_ON_NULL_RET0(nuiVisualObjectsContainer);

  container = (const Dali::VisualObjectsContainer*)nuiVisualObjectsContainer;
  try_catch(([&]() {
    result = container->GetVisualObjectsCount();
  }));

  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_GetVisualObjectAt(void* nuiVisualObjectsContainer, uint32_t index)
{
  void*                               jresult   = 0;
  const Dali::VisualObjectsContainer* container = (const Dali::VisualObjectsContainer*)0;
  Dali::VisualObject                  result;

  GUARD_ON_NULL_RET0(nuiVisualObjectsContainer);

  container = (const Dali::VisualObjectsContainer*)nuiVisualObjectsContainer;
  try_catch(([&]() {
    result = container->GetVisualObjectAt(index);
  }));

  jresult = new Dali::VisualObject((const Dali::VisualObject&)result);
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_AddVisualObject(void* nuiVisualObjectsContainer, void* nuiVisualObject)
{
  Dali::VisualObjectsContainer* container    = (Dali::VisualObjectsContainer*)0;
  Dali::VisualObject*           visualObject = (Dali::VisualObject*)0;
  bool                          result       = false;

  GUARD_ON_NULL_RET0(nuiVisualObjectsContainer);
  GUARD_ON_NULL_RET0(nuiVisualObject);

  container    = (Dali::VisualObjectsContainer*)nuiVisualObjectsContainer;
  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    result = container->AddVisualObject(*visualObject);
  }));
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObjectsContainer_RemoveVisualObject(void* nuiVisualObjectsContainer, void* nuiVisualObject)
{
  Dali::VisualObjectsContainer* container    = (Dali::VisualObjectsContainer*)0;
  Dali::VisualObject*           visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObjectsContainer);
  GUARD_ON_NULL_RET(nuiVisualObject);

  container    = (Dali::VisualObjectsContainer*)nuiVisualObjectsContainer;
  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    container->RemoveVisualObject(*visualObject);
  }));
}

#ifdef __cplusplus
}
#endif