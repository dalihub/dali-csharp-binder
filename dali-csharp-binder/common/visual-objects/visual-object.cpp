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
#include <dali-csharp-binder/common/visual-objects/visual-object.h>

// EXTERNAL INCLUDES
#include <dali-toolkit/devel-api/visuals/visual-actions-devel.h>
#include <dali/integration-api/debug.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>
#include <dali-csharp-binder/common/visual-objects/visual-object-impl.h>

namespace Dali
{
VisualObject::VisualObject(Dali::Internal::VisualObject* object)
: BaseHandle(object)
{
}

VisualObject VisualObject::New()
{
  Internal::VisualObjectPtr internal = Internal::VisualObject::New();
  return VisualObject(internal.Get());
}

///< Public API

void VisualObject::DetachFromContainer()
{
  GetImplementation(*this).DetachFromContainer();
}

Dali::VisualObjectsContainer VisualObject::GetContainer()
{
  return GetImplementation(*this).GetContainer();
}

void VisualObject::CreateVisual(const Dali::Property::Map& map)
{
  GetImplementation(*this).CreateVisual(map);
}

void VisualObject::DoAction(Dali::Property::Index actionId, const Dali::Property::Value& attributes)
{
  GetImplementation(*this).DoAction(actionId, attributes);
}

void VisualObject::RetrieveVisualPropertyMap(Dali::Property::Map& map) const
{
  GetImplementation(*this).RetrieveVisualPropertyMap(map);
}

/// Sibling Order Change API

void VisualObject::SetSiblingOrder(uint32_t siblingOrder)
{
  GetImplementation(*this).SetSiblingOrder(siblingOrder);
}

uint32_t VisualObject::GetSiblingOrder() const
{
  return GetImplementation(*this).GetSiblingOrder();
}

void VisualObject::Raise()
{
  GetImplementation(*this).Raise();
}

void VisualObject::Lower()
{
  GetImplementation(*this).Lower();
}

void VisualObject::RaiseToTop()
{
  GetImplementation(*this).RaiseToTop();
}

void VisualObject::LowerToBottom()
{
  GetImplementation(*this).LowerToBottom();
}

void VisualObject::RaiseAbove(Dali::VisualObject target)
{
  GetImplementation(*this).RaiseAbove(GetImplementation(target));
}

void VisualObject::LowerBelow(Dali::VisualObject target)
{
  GetImplementation(*this).LowerBelow(GetImplementation(target));
}

} // namespace Dali

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_VisualObject__SWIG_0()
{
  Dali::VisualObject* result = 0;

  try_catch(([&]() {
    result = (Dali::VisualObject*)new Dali::VisualObject();
  }));

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VisualObject_New()
{
  void*              jresult = 0;
  Dali::VisualObject result;

  try_catch(([&]() {
    result = Dali::VisualObject::New();
  }));

  jresult = new Dali::VisualObject((const Dali::VisualObject&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_VisualObject(void* nuiVisualObject)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    delete visualObject;
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_DetachFromContainer(void* nuiVisualObject)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    visualObject->DetachFromContainer();
  }));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_VisualObject_GetContainer(void* nuiVisualObject)
{
  void*                        jresult      = 0;
  Dali::VisualObject*          visualObject = (Dali::VisualObject*)0;
  Dali::VisualObjectsContainer result;

  GUARD_ON_NULL_RET0(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    result = visualObject->GetContainer();
  }));

  jresult = new Dali::VisualObjectsContainer((const Dali::VisualObjectsContainer&)result);
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_CreateVisual(void* nuiVisualObject, void* nuiPropertyMap)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;
  Dali::Property::Map propertyMap;

  GUARD_ON_NULL_RET(nuiVisualObject);

  // We allow to set null for nuiPropertyMap.

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  propertyMap  = nuiPropertyMap ? *((const Dali::Property::Map*)nuiPropertyMap) : Dali::Property::Map();
  try_catch(([&]() {
    visualObject->CreateVisual(propertyMap);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_RetrieveVisualPropertyMap(void* nuiVisualObject, void* nuiPropertyMap)
{
  const Dali::VisualObject* visualObject = (const Dali::VisualObject*)0;
  Dali::Property::Map*      propertyMap  = (Dali::Property::Map*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);
  GUARD_ON_NULL_RET(nuiPropertyMap);

  visualObject = (const Dali::VisualObject*)nuiVisualObject;
  propertyMap  = (Dali::Property::Map*)nuiPropertyMap;
  try_catch(([&]() {
    visualObject->RetrieveVisualPropertyMap(*propertyMap);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_DoAction_UpdatePropertyMap(void* nuiVisualObject, void* nuiPropertyMap)
{
  Dali::VisualObject*  visualObject = (Dali::VisualObject*)0;
  Dali::Property::Map* propertyMap  = (Dali::Property::Map*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);
  GUARD_ON_NULL_RET(nuiPropertyMap);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  propertyMap  = (Dali::Property::Map*)nuiPropertyMap;
  try_catch(([&]() {
    visualObject->DoAction(Dali::Toolkit::DevelVisual::Action::UPDATE_PROPERTY, *propertyMap);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_DoActionWithEmptyAttributes(void* nuiVisualObject, int actionId)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    visualObject->DoAction(actionId, Dali::Property::Value());
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_DoActionWithSingleIntAttributes(void* nuiVisualObject, int actionId, int actionValue)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    visualObject->DoAction(actionId, Dali::Property::Value(actionValue));
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_SetSiblingOrder(void* nuiVisualObject, uint32_t index)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    visualObject->SetSiblingOrder(index);
  }));
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_VisualObject_GetSiblingOrder(void* nuiVisualObject)
{
  const Dali::VisualObject* visualObject = (const Dali::VisualObject*)0;
  uint32_t                  result       = 0u;

  GUARD_ON_NULL_RET0(nuiVisualObject);

  visualObject = (const Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    result = visualObject->GetSiblingOrder();
  }));

  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_Raise(void* nuiVisualObject)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    visualObject->Raise();
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_Lower(void* nuiVisualObject)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    visualObject->Lower();
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_RaiseToTop(void* nuiVisualObject)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    visualObject->RaiseToTop();
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_LowerToBottom(void* nuiVisualObject)
{
  Dali::VisualObject* visualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);

  visualObject = (Dali::VisualObject*)nuiVisualObject;
  try_catch(([&]() {
    visualObject->LowerToBottom();
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_RaiseAbove(void* nuiVisualObject, void* nuiTargetVisualObject)
{
  Dali::VisualObject* visualObject       = (Dali::VisualObject*)0;
  Dali::VisualObject* targetVisualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);
  GUARD_ON_NULL_RET(nuiTargetVisualObject);

  visualObject       = (Dali::VisualObject*)nuiVisualObject;
  targetVisualObject = (Dali::VisualObject*)nuiTargetVisualObject;
  try_catch(([&]() {
    visualObject->RaiseAbove(*targetVisualObject);
  }));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_VisualObject_LowerBelow(void* nuiVisualObject, void* nuiTargetVisualObject)
{
  Dali::VisualObject* visualObject       = (Dali::VisualObject*)0;
  Dali::VisualObject* targetVisualObject = (Dali::VisualObject*)0;

  GUARD_ON_NULL_RET(nuiVisualObject);
  GUARD_ON_NULL_RET(nuiTargetVisualObject);

  visualObject       = (Dali::VisualObject*)nuiVisualObject;
  targetVisualObject = (Dali::VisualObject*)nuiTargetVisualObject;
  try_catch(([&]() {
    visualObject->LowerBelow(*targetVisualObject);
  }));
}

#ifdef __cplusplus
}
#endif