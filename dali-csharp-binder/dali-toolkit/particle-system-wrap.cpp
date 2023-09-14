/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *d
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
#include <dali-toolkit/public-api/particle-system/particle-domain.h>
#include <dali-toolkit/public-api/particle-system/particle-emitter.h>
#include <dali-toolkit/public-api/particle-system/particle-list.h>
#include <dali-toolkit/public-api/particle-system/particle-modifier.h>
#include <dali-toolkit/public-api/particle-system/particle-renderer.h>
#include <dali-toolkit/public-api/particle-system/particle-source.h>
#include <dali-toolkit/public-api/particle-system/particle.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

using namespace Dali::Toolkit::ParticleSystem;

/**
 * Generic ParticleSource for NUI apps
 */

typedef void (*SourceInitCallbackInvoker)(void*);
typedef uint32_t (*SourceUpdateCallbackInvoker)(void*, uint32_t); // delegate, parameters
class ParticleSourceNUI : public Dali::Toolkit::ParticleSystem::ParticleSourceInterface
{
public:
  ParticleSourceNUI(SourceInitCallbackInvoker onInitDelegate, SourceUpdateCallbackInvoker onUpdateDelegate)
  {
    mOnInitInvoker   = onInitDelegate;
    mOnUpdateInvoker = onUpdateDelegate;
  }

  void SetBaseObjectPtr(void* basePtr)
  {
    mBaseObjectPtr = basePtr;
  }

  uint32_t Update(ParticleList& outList, uint32_t count) override
  {
    // NUI side must use EmitterProxy.NewParticle() to create new particle
    return mOnUpdateInvoker(mBaseObjectPtr, count);
  }

  /**
   * @brief Called when source is added to the emitter
   */
  void Init() override
  {
    mOnInitInvoker(mBaseObjectPtr);
  }

  static SourceInitCallbackInvoker   mOnInitInvoker;
  static SourceUpdateCallbackInvoker mOnUpdateInvoker;

  void* mBaseObjectPtr{nullptr};
};

typedef void (*ModifierUpdateCallbackInvoker)(void*, void*, uint32_t, uint32_t); // delegate, parameters
class ParticleModifierNUI : public Dali::Toolkit::ParticleSystem::ParticleModifierInterface
{
public:
  ParticleModifierNUI(ModifierUpdateCallbackInvoker onUpdateDelegate)
  {
    mOnUpdateInvoker = onUpdateDelegate;
  }

  void SetBaseObjectPtr(void* basePtr)
  {
    mBaseObjectPtr = basePtr;
  }

  void Update(ParticleList& outList, uint32_t firstParticleIndex, uint32_t count) override
  {
    // mOnUpdateInvoker(mBaseObjectPtr, new ParticleList(outList), firstParticleIndex, count);
    std::vector<int32_t> ptrList;
    ptrList.reserve(count);
    auto& particleList = outList.GetActiveParticles();
    for(auto& item : particleList)
    {
      ptrList.emplace_back(item.GetIndex());
    }
    mOnUpdateInvoker(mBaseObjectPtr, ptrList.data(), firstParticleIndex, count);
  }

  static ModifierUpdateCallbackInvoker mOnUpdateInvoker;
  void*                                mBaseObjectPtr{nullptr};
};

extern "C++" SourceInitCallbackInvoker     ParticleSourceNUI::mOnInitInvoker;
extern "C++" SourceUpdateCallbackInvoker   ParticleSourceNUI::mOnUpdateInvoker;
extern "C++" ModifierUpdateCallbackInvoker ParticleModifierNUI::mOnUpdateInvoker;

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleEmitter_New_SWIG_0(void* csView)
{
  ParticleEmitter result;
  {
    try
    {
      result = ParticleEmitter::New();
      result.AttachTo(*(Dali::Actor*)csView);

      // Create internal renderer (not exposed to C#)
      ParticleRenderer renderer = ParticleRenderer::New();
      result.SetRenderer(renderer);

      // Add dummy particle domain (not supported in NUI) so emitter won't cry
      ParticleDomain domain = ParticleDomain::New();
      result.SetDomain(domain);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new ParticleEmitter((const ParticleEmitter&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ParticleEmitter_SWIG_0()
{
  ParticleEmitter* result = 0;

  {
    try
    {
      result = (ParticleEmitter*)new ParticleEmitter();
    }
    CALL_CATCH_EXCEPTION(0);
  }
  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ParticleEmitter_SWIG_1(void* csParticleEmitter)
{
  ParticleEmitter* particleEmitter = (ParticleEmitter*)csParticleEmitter;
  ParticleEmitter* result          = 0;

  if(!particleEmitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "ParticleEmitter const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (ParticleEmitter*)new ParticleEmitter((ParticleEmitter const&)*particleEmitter);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ParticleEmitter(void* csParticleEmitter)
{
  ParticleEmitter* particleEmitter = (ParticleEmitter*)csParticleEmitter;
  {
    try
    {
      delete particleEmitter;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleEmitter_Assign(void* csDestination, void* csSource)
{
  ParticleEmitter* destination = (ParticleEmitter*)csDestination;
  ParticleEmitter* source      = (ParticleEmitter*)csSource;
  ParticleEmitter* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "ParticleEmitter const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (ParticleEmitter*)&(destination)->operator=((ParticleEmitter const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_particleEmitter_DownCast(void* csHandle)
{
  Dali::BaseHandle* handle = (Dali::BaseHandle*)csHandle;
  ParticleEmitter   result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      result = ParticleEmitter::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new ParticleEmitter((const ParticleEmitter&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_SetSource(void* csThis, void* csSource)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  ParticleSource*  source  = (ParticleSource*)csSource;

  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  if(!csSource)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleSource", 0);
    return;
  }
  {
    try
    {
      emitter->SetSource(*source);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_SetDomain(void* csThis, void* csDomain)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  ParticleDomain*  domain  = (ParticleDomain*)csDomain;

  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  if(!csDomain)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleDomain", 0);
    return;
  }
  {
    try
    {
      emitter->SetDomain(*domain);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_SetRenderer(void* csThis, void* csRenderer)
{
  ParticleEmitter*  emitter  = (ParticleEmitter*)csThis;
  ParticleRenderer* renderer = (ParticleRenderer*)csRenderer;

  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  if(!csRenderer)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleRenderer", 0);
    return;
  }
  {
    try
    {
      emitter->SetRenderer(*renderer);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_SetParticleCount(void* csThis, uint32_t count)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->SetParticleCount(count);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleEmitter_GetParticleCount(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      return emitter->GetParticleCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleEmitter_GetSource(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  ParticleSource   source;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      source = emitter->GetSource();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  ParticleSource* result = new ParticleSource((const ParticleSource&)source);
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleEmitter_GetDomain(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  ParticleDomain   domain;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      domain = emitter->GetDomain();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  ParticleDomain* result = new ParticleDomain((const ParticleDomain&)domain);
  return result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleEmitter_GetRenderer(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  ParticleRenderer renderer;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      renderer = emitter->GetRenderer();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  ParticleRenderer* result = new ParticleRenderer((const ParticleRenderer&)renderer);
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_AddModifier(void* csThis, void* csModifier)
{
  ParticleEmitter*  emitter  = (ParticleEmitter*)csThis;
  ParticleModifier* modifier = (ParticleModifier*)csModifier;

  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  if(!csModifier)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleModifier", 0);
    return;
  }
  {
    try
    {
      emitter->AddModifier(*modifier);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_SetEmissionRate(void* csThis, uint32_t ratePerSecond)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->SetEmissionRate(ratePerSecond);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_SetInitialParticleCount(void* csThis, uint32_t count)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->SetInitialParticleCount(count);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_SetActiveParticlesLimit(void* csThis, uint32_t limit)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->SetActiveParticlesLimit(limit);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_Start(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->Start();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_Stop(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->Stop();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleEmitter_GetEmissionRate(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      return emitter->GetEmissionRate();
    }
    CALL_CATCH_EXCEPTION(0);
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleEmitter_GetInitialParticleCount(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      return emitter->GetInitialParticleCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleEmitter_GetActiveParticleLimit(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      return emitter->GetActiveParticlesLimit();
    }
    CALL_CATCH_EXCEPTION(0);
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleEmitter_RemoveModifierAt(void* csThis, uint32_t location)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->RemoveModifierAt(location);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ParticleEmitter_NewParticle(void* csEmitter, float lifetime)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csEmitter;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return -1;
  }
  {
    try
    {
      Particle p = emitter->GetParticleList().NewParticle(lifetime);
      return int(p.GetIndex());
    }
    CALL_CATCH_EXCEPTION(-1);
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleEmitter_GetParticleList(void* csThis)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csThis;
  ParticleList     list;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      list = emitter->GetParticleList();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  ParticleList* result = new ParticleList((const ParticleList&)list);
  return result;
}

// void AttachTo(Actor actor);
//[[nodiscard]] Status GetStatus() const;

// Class: ParticleSource
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleSource_New_SWIG_0(SourceInitCallbackInvoker onInitInvoker, SourceUpdateCallbackInvoker onUpdateInvoker, void** refObject)
{
  ParticleSource result;
  {
    try
    {
      result     = ParticleSource::New<ParticleSourceNUI>(onInitInvoker, onUpdateInvoker);
      auto& clbk = static_cast<ParticleSourceNUI&>(result.GetSourceCallback());
      clbk.SetBaseObjectPtr(result.GetObjectPtr());
      *refObject = result.GetObjectPtr();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new ParticleSource((const ParticleSource&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ParticleSource_SWIG_0()
{
  ParticleSource* result = 0;

  {
    try
    {
      result = (ParticleSource*)new ParticleSource();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ParticleSource_SWIG_1(void* csParticleSource)
{
  ParticleSource* particleEmitter = (ParticleSource*)csParticleSource;
  ParticleSource* result          = 0;

  if(!particleEmitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "ParticleSource const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (ParticleSource*)new ParticleSource((ParticleSource const&)*particleEmitter);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ParticleSource(void* csParticleSource)
{
  ParticleSource* particleEmitter = (ParticleSource*)csParticleSource;
  {
    try
    {
      delete particleEmitter;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleSource_Assign(void* csDestination, void* csSource)
{
  ParticleSource* destination = (ParticleSource*)csDestination;
  ParticleSource* source      = (ParticleSource*)csSource;
  ParticleSource* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "ParticleSource const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (ParticleSource*)&(destination)->operator=((ParticleSource const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleSource_DownCast(void* csHandle)
{
  Dali::BaseHandle* handle = (Dali::BaseHandle*)csHandle;
  ParticleSource    result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleSource", 0);
    return 0;
  }
  {
    try
    {
      result = ParticleSource::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new ParticleSource((const ParticleSource&)result);
}

// Class: ParticleModifier
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleModifier_New_SWIG_0(ModifierUpdateCallbackInvoker onUpdateInvoker, void** basePtr)
{
  ParticleModifier result;
  {
    try
    {
      result     = ParticleModifier::New<ParticleModifierNUI>(onUpdateInvoker);
      auto& clbk = static_cast<ParticleModifierNUI&>(result.GetModifierCallback());
      clbk.SetBaseObjectPtr(result.GetObjectPtr());
      *basePtr = result.GetObjectPtr();
      printf("BasePtr: %p\n", *basePtr);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new ParticleModifier((const ParticleModifier&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ParticleModifier_SWIG_0()
{
  ParticleModifier* result = 0;

  {
    try
    {
      result = (ParticleModifier*)new ParticleModifier();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ParticleModifier_SWIG_1(void* csParticleModifier)
{
  ParticleModifier* particleEmitter = (ParticleModifier*)csParticleModifier;
  ParticleModifier* result          = 0;

  if(!particleEmitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "ParticleModifier const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (ParticleModifier*)new ParticleModifier((ParticleModifier const&)*particleEmitter);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ParticleModifier(void* csParticleModifier)
{
  ParticleModifier* particleEmitter = (ParticleModifier*)csParticleModifier;
  {
    try
    {
      delete particleEmitter;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleModifier_Assign(void* csDestination, void* csSource)
{
  ParticleModifier* destination = (ParticleModifier*)csDestination;
  ParticleModifier* source      = (ParticleModifier*)csSource;
  ParticleModifier* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "ParticleModifier const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (ParticleModifier*)&(destination)->operator=((ParticleModifier const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleModifier_DownCast(void* csHandle)
{
  Dali::BaseHandle* handle = (Dali::BaseHandle*)csHandle;
  ParticleModifier  result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleModifier", 0);
    return 0;
  }
  {
    try
    {
      result = ParticleModifier::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new ParticleModifier((const ParticleModifier&)result);
}

// Class: ParticleList
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleList_New_SWIG_0(void* csEmitter)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csEmitter;
  auto             result  = emitter->GetParticleList();

  printf("CSharp_Dali_ParticleList_New_SWIG_0: %p", result.GetObjectPtr());

  return new ParticleList((const ParticleList&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ParticleList_SWIG_0()
{
  ParticleList* result = 0;

  {
    try
    {
      result = (ParticleList*)new ParticleList();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ParticleList_SWIG_1(void* csParticleList)
{
  ParticleList* particleEmitter = (ParticleList*)csParticleList;
  ParticleList* result          = 0;

  if(!particleEmitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "ParticleList const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (ParticleList*)new ParticleList((ParticleList const&)*particleEmitter);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ParticleList(void* csParticleList)
{
  ParticleList* particleEmitter = (ParticleList*)csParticleList;
  {
    try
    {
      delete particleEmitter;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleList_Assign(void* csDestination, void* csSource)
{
  ParticleList* destination = (ParticleList*)csDestination;
  ParticleList* source      = (ParticleList*)csSource;
  ParticleList* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "ParticleList const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (ParticleList*)&(destination)->operator=((ParticleList const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParticleList_DownCast(void* csHandle)
{
  Dali::BaseHandle* handle = (Dali::BaseHandle*)csHandle;
  ParticleList      result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
    return 0;
  }
  {
    try
    {
      result = ParticleList::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new ParticleList((const ParticleList&)result);
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleList_GetParticle(void* csThis, uint32_t index)
{
  ParticleList* list = (ParticleList*)csThis;
  Particle      particle;
  if(!list)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
    return 0;
  }
  {
    try
    {
      // Must be better way of doing it?
      auto it = list->GetActiveParticles().begin();
      std::advance(it, index);
      particle = *it;
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return particle.GetIndex();
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleList_GetActiveParticleCount(void* csThis)
{
  ParticleList* list = (ParticleList*)csThis;
  if(!list)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
    return 0;
  }
  {
    try
    {
      return list->GetActiveParticleCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleList_AddLocalStreamInt(void* csThis, int defaultValue)
{
    ParticleEmitter* emitter = (ParticleEmitter*)csThis;
    uint32_t         result  = 0;
    if(!emitter)
    {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
        return 0;
    }
    auto list = emitter->GetParticleList();
    {
        try
        {
            result = list.AddLocalStream<int>(defaultValue);
        }
        CALL_CATCH_EXCEPTION(0);
    }
    return result;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleList_AddLocalStreamFloat(void* csThis, float defaultValue)
{
    ParticleEmitter* emitter = (ParticleEmitter*)csThis;
    uint32_t         result  = 0;
    if(!emitter)
    {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
        return 0;
    }
    auto list = emitter->GetParticleList();
    {
        try
        {
            result = list.AddLocalStream<float>(defaultValue);
        }
        CALL_CATCH_EXCEPTION(0);
    }
    return result;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleList_AddLocalStreamVector2(void* csThis, void* defaultValue)
{
    ParticleEmitter* emitter = (ParticleEmitter*)csThis;
    uint32_t         result  = 0;
    if(!emitter)
    {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
        return 0;
    }
    auto list = emitter->GetParticleList();
    {
        try
        {
            void* ptr = (void*)defaultValue;
            result = list.AddLocalStream<Dali::Vector2>(*reinterpret_cast<Dali::Vector2*>((Dali::Vector2*)ptr));
        }
        CALL_CATCH_EXCEPTION(0);
    }
    return result;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleList_AddLocalStreamVector3(void* csThis, void* defaultValue)
{
    ParticleEmitter* emitter = (ParticleEmitter*)csThis;
    uint32_t         result  = 0;
    if(!emitter)
    {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
        return 0;
    }
    auto list = emitter->GetParticleList();
    {
        try
        {
            void* ptr = (void*)defaultValue;
            result = list.AddLocalStream<Dali::Vector3>(*reinterpret_cast<Dali::Vector3*>((Dali::Vector3*)ptr));
        }
        CALL_CATCH_EXCEPTION(0);
    }
    return result;
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_ParticleList_AddLocalStreamVector4(void* csThis, void* defaultValue)
{
    ParticleEmitter* emitter = (ParticleEmitter*)csThis;
    uint32_t         result  = 0;
    if(!emitter)
    {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
        return 0;
    }
    auto list = emitter->GetParticleList();
    {
        try
        {
            void* ptr = (void*)defaultValue;
            result = list.AddLocalStream<Dali::Vector4>(*reinterpret_cast<Dali::Vector4*>((Dali::Vector4*)ptr));
        }
        CALL_CATCH_EXCEPTION(0);
    }
    return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ParticleList_GetDefaultStreamIndex(void* csThis, uint32_t defaultStream)
{
  auto* emitter = (ParticleEmitter*)csThis;
  int   result  = 0;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleList", 0);
    return 0;
  }
  auto list = emitter->GetParticleList();
  {
    try
    {
      result = list.GetDefaultStreamIndex(defaultStream);
    }
    CALL_CATCH_EXCEPTION(-1);
  }

  return result;
}

// uint32_t GetActiveParticleCount();
//  [[nodiscard]] uint32_t GetCapacity() const;
//  Particle NewParticle(float lifetime);
// uint32_t GetParticleDataSize(bool includeLocalStreams);
// GetParticleAt
// std::list<Particle>& GetActiveParticles();

// Particle specific API (only C#)
extern "C++" template<class T>
SWIGEXPORT const T& SWIGSTDCALL CSharp_Dali_Particle_ReadValue(void* csEmitter, uint32_t streamIndex, uint32_t particleIndex)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csEmitter;
  static T         null{};
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return null;
  }
  auto particleList = emitter->GetParticleList();

  return particleList.GetStream<T>(streamIndex)[particleIndex];
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_Particle_ReadFloat(void* csThis, uint32_t streamIndex, uint32_t particleIndex)
{
  return CSharp_Dali_Particle_ReadValue<float>(csThis, streamIndex, particleIndex);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Particle_ReadVector2(void* csThis, uint32_t streamIndex, uint32_t particleIndex)
{
  return new Dali::Vector2(CSharp_Dali_Particle_ReadValue<Dali::Vector2>(csThis, streamIndex, particleIndex));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Particle_ReadVector3(void* csThis, uint32_t streamIndex, uint32_t particleIndex)
{
  return new Dali::Vector3(CSharp_Dali_Particle_ReadValue<Dali::Vector3>(csThis, streamIndex, particleIndex));
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Particle_ReadVector4(void* csThis, uint32_t streamIndex, uint32_t particleIndex)
{
  return new Dali::Vector4(CSharp_Dali_Particle_ReadValue<Dali::Vector4>(csThis, streamIndex, particleIndex));
}

// Writing value
extern "C++" template<class T>
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Particle_WriteValue(void* csEmitter, uint32_t streamIndex, uint32_t particleIndex, T& value)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csEmitter;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  auto particleList = emitter->GetParticleList();
  T*   r            = &(particleList.GetStream<T>(streamIndex)[particleIndex]);
  *r                = value;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Particle_WriteFloat(void* csThis, uint32_t streamIndex, uint32_t particleIndex, float value)
{
  CSharp_Dali_Particle_WriteValue(csThis, streamIndex, particleIndex, value);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Particle_WriteVector2(void* csThis, uint32_t streamIndex, uint32_t particleIndex, Dali::Vector2* value)
{
  CSharp_Dali_Particle_WriteValue(csThis, streamIndex, particleIndex, *value);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Particle_WriteVector3(void* csThis, uint32_t streamIndex, uint32_t particleIndex, Dali::Vector3* value)
{
  CSharp_Dali_Particle_WriteValue(csThis, streamIndex, particleIndex, *value);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Particle_WriteVector4(void* csThis, uint32_t streamIndex, uint32_t particleIndex, Dali::Vector4* value)
{
  CSharp_Dali_Particle_WriteValue(csThis, streamIndex, particleIndex, *value);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Particle_GetUnsafe(void* csThis, uint32_t streamIndex, uint32_t elementCount, uint32_t sizeOfElement)
{
  Particle* particle = (Particle*)csThis;
  if(!particle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Particle", 0);
    return 0;
  }

  // For now
  if(sizeOfElement != 4)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Particle", 0);
    return 0;
  }

  switch(elementCount)
  {
    case 1: {
      return &particle->Get<float>(streamIndex);
    }
    case 2: {
      return &particle->Get<Dali::Vector2>(streamIndex);
    }
    case 3: {
      return &particle->Get<Dali::Vector3>(streamIndex);
    }
    case 4: {
      return &particle->Get<Dali::Vector4>(streamIndex);
    }
    default:
      return 0;
  }
}
// Particle renderer

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleRenderer_SetTexture(void* csEmitter, void* csTexture)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csEmitter;
  Dali::Texture*   texture = (Dali::Texture*)csTexture;
  ParticleRenderer result;

  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->GetRenderer().SetTexture(*texture);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ParticleRenderer_SetBlendingMode(void* csEmitter, int blendingMode)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csEmitter;
  BlendingMode     mode    = BlendingMode(blendingMode);

  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return;
  }
  {
    try
    {
      emitter->GetRenderer().SetBlendingMode(mode);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ParticleRenderer_GetBlendingMode(void* csEmitter)
{
  ParticleEmitter* emitter = (ParticleEmitter*)csEmitter;
  if(!emitter)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null ParticleEmitter", 0);
    return 0;
  }
  {
    try
    {
      return int(emitter->GetRenderer().GetBlendingMode());
    }
    CALL_CATCH_EXCEPTION(0);
  }
}

// PARTICLE

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Particle_New_SWIG_0(void* particleList, float lifetime, uint32_t* outIndex)
{
  ParticleList* list = (ParticleList*)particleList;
  Particle      result;
  {
    try
    {
      result = list->NewParticle(lifetime);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  if(!result)
  {
    return false;
  }
  // result is body/handle but C# side provides only a view on particle so we return index in the stream
  // C# side should bind list and index to access particle data
  *outIndex = result.GetIndex();
  return true;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Particle_SWIG_0()
{
  Particle* result = 0;

  {
    try
    {
      result = (Particle*)new Particle();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Particle_SWIG_1(void* csParticle)
{
  Particle* particle = (Particle*)csParticle;
  Particle* result   = 0;

  if(!particle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Particle const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Particle*)new Particle((Particle const&)*particle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Particle(void* csParticle)
{
  Particle* particle = (Particle*)csParticle;
  {
    try
    {
      delete particle;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Particle_Assign(void* csDestination, void* csSource)
{
  Particle* destination = (Particle*)csDestination;
  Particle* source      = (Particle*)csSource;
  Particle* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Particle const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Particle*)&(destination)->operator=((Particle const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Particle_DownCast(void* csHandle)
{
  Dali::BaseHandle* handle = (Dali::BaseHandle*)csHandle;
  Particle          result;

  if(!handle)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Particle", 0);
    return 0;
  }
  {
    try
    {
      result = Particle::DownCast(*handle);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Particle((const Particle&)result);
}

#ifdef __cplusplus
}
#endif
