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
 */


#include <dali-physics/public-api/physics-adaptor.h>
#include <dali-physics/public-api/physics-actor.h>

#include <dali-physics/integration-api/integ-physics-adaptor.h>

#include <chipmunk/chipmunk.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

  using Dali::Toolkit::Physics::PhysicsActor;
  using Dali::Toolkit::Physics::PhysicsAdaptor;


  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_New(void* csMatrix, void* csSize)
  {
    void*       jresult;
    PhysicsAdaptor result;

    Dali::Matrix *matrixPtr = (Dali::Matrix*)csMatrix;
    if(!matrixPtr)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Matrix const & type is null", 0);
      return 0;
    }
    Dali::Vector2 *sizePtr = (Dali::Vector2*)csSize;
    if(!sizePtr)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Vector2 const & type is null", 0);
      return 0;
    }

    {
      try
      {
        Dali::Uint16Pair size(uint16_t(sizePtr->x), uint16_t(sizePtr->y));
        // Stack allocate a handle
        result = PhysicsAdaptor::New(*matrixPtr, size);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    // Heap allocate a handle using copy constructor
    jresult = new PhysicsAdaptor((const PhysicsAdaptor&)result);
    return jresult;
  }


  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PhysicsAdaptor(void* csPhysicsAdaptor)
  {
    PhysicsAdaptor* physicsAdaptor = (PhysicsAdaptor*)csPhysicsAdaptor;
    {
      try
      {
        delete physicsAdaptor;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_PhysicsAdaptor__SWIG_1(void* csPhysicsAdaptor)
  {
    PhysicsAdaptor* physicsAdaptor = (PhysicsAdaptor*)csPhysicsAdaptor;
    PhysicsAdaptor* result = 0;

    if(!physicsAdaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (PhysicsAdaptor*)new PhysicsAdaptor((PhysicsAdaptor const&)*physicsAdaptor);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void*)result;
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_Assign(void* csDest, void* csSrc)
  {
    PhysicsAdaptor* dest   = (PhysicsAdaptor*)csDest;
    PhysicsAdaptor* src    = (PhysicsAdaptor*)csSrc;
    PhysicsAdaptor* result = 0;

    if(!src)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (PhysicsAdaptor*)&(dest)->operator=((PhysicsAdaptor const&)*src);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void*)result;
  }



// Methods
  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_SetTimestep(void* csAdaptor, float timestep)
  {
    PhysicsAdaptor* adaptor   = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return;
    }
    {
      try
      {
        adaptor->SetTimestep(timestep);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT float SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_GetTimestep(void* csAdaptor)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    float result{0.0f};
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return result;
    }

    {
      try
      {
        result = adaptor->GetTimestep();
      }
      CALL_CATCH_EXCEPTION(0.0f);
    }
    return result;
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_CreateDebugLayer(void* csAdaptor, void* csWindow)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    Dali::Layer result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    Dali::Window* window = (Dali::Window*)csWindow;
    if(!window)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Window const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->CreateDebugLayer(*window);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Layer((const Dali::Layer&)result);
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_TranslateToPhysicsSpace_1(void* csAdaptor, Dali::Vector3* csPosition)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    Dali::Vector3 result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csPosition)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->TranslateToPhysicsSpace(*csPosition);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Vector3((const Dali::Vector3&)result);
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_TranslateToPhysicsSpace_2(void* csAdaptor, Dali::Quaternion* csRotation)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    Dali::Quaternion result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csRotation)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->TranslateToPhysicsSpace(*csRotation);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Quaternion((const Dali::Quaternion&)result);
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_TranslateFromPhysicsSpace_1(void* csAdaptor, Dali::Vector3* csPosition)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    Dali::Vector3 result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csPosition)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->TranslateFromPhysicsSpace(*csPosition);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Vector3((const Dali::Vector3&)result);
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_TranslateFromPhysicsSpace_2(void* csAdaptor, Dali::Quaternion* csRotation)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    Dali::Quaternion result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csRotation)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->TranslateFromPhysicsSpace(*csRotation);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Quaternion((const Dali::Quaternion&)result);
  }


  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_ConvertVectorToPhysicsSpace(void* csAdaptor, Dali::Vector3* csVector)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    Dali::Vector3 result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csVector)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->ConvertVectorToPhysicsSpace(*csVector);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Vector3((const Dali::Vector3&)result);
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_ConvertVectorFromPhysicsSpace(void* csAdaptor, Dali::Vector3* csVector)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    Dali::Vector3 result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csVector)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->ConvertVectorFromPhysicsSpace(*csVector);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Vector3((const Dali::Vector3&)result);
  }


  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_SetTransformAndSize(void* csAdaptor, void* csTransform, void* csSize)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return;
    }
    if(!csTransform)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Matrix const & type is null", 0);
      return;
    }
    Dali::Vector2 *sizePtr = (Dali::Vector2*)csSize;
    if(!sizePtr)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Vector2 const & type is null", 0);
      return;
    }

    {
      try
      {
        Dali::Uint16Pair size(uint16_t(sizePtr->x), uint16_t(sizePtr->y));
        adaptor->SetTransformAndSize((const Dali::Matrix&)(*(Dali::Matrix*)csTransform), size);
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_SetIntegrationState(void* csAdaptor, int csIntegrationState)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return;
    }
    {
      try
      {
        adaptor->SetIntegrationState(PhysicsAdaptor::IntegrationState(csIntegrationState));
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_GetIntegrationState(void* csAdaptor)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    PhysicsAdaptor::IntegrationState result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->GetIntegrationState();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return(int)result;
  }


  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_SetDebugState(void* csAdaptor, int csDebugState)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return;
    }
    {
      try
      {
        adaptor->SetDebugState(PhysicsAdaptor::DebugState(csDebugState));
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_GetDebugState(void* csAdaptor)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    PhysicsAdaptor::DebugState result;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = adaptor->GetDebugState();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return(int)result;
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_AddActorBody(void* csAdaptor, void* csActor, void* csBody)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Actor const & type is null", 0);
      return 0;
    }
    if(!csBody)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "cpBody ptr is null", 0);
      return 0;
    }

    PhysicsActor physicsActor;
    {
      try
      {
        physicsActor = adaptor->AddActorBody((const Dali::Actor&)*(Dali::Actor*)csActor, Dali::Any((cpBody*)csBody));
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new PhysicsActor((const PhysicsActor&)physicsActor);
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_RemoveActorBody(void* csAdaptor, void* csPhysicsActor)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return;
    }
    if(!csPhysicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return;
    }

    {
      try
      {
        adaptor->RemoveActorBody((const PhysicsActor&)*(PhysicsActor*)csPhysicsActor);
      }
      CALL_CATCH_EXCEPTION();
    }
    return;
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_GetPhysicsActor(void* csAdaptor, void* csBody)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csBody)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "cpBody ptr type is null", 0);
      return 0;
    }

    PhysicsActor physicsActor;
    {
      try
      {
        physicsActor = adaptor->GetPhysicsActor((Dali::Any((cpBody*)csBody)));
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new PhysicsActor((const PhysicsActor&)physicsActor);
  }


  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_GetRootActor(void* csAdaptor)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }

    Dali::Actor actor;
    {
      try
      {
        actor = adaptor->GetRootActor();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Actor((const Dali::Actor&)actor);
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_BuildPickingRay(void* csAdaptor,
                                                                         void* csOrigin,
                                                                         void* csDirection,
                                                                         void* csRayFromWorld,
                                                                         void* csRayToWorld)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return;
    }
    if(!csOrigin)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return;
    }
    if(!csDirection)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return;
    }
    if(!csRayFromWorld)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return;
    }
    if(!csRayToWorld)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return;
    }

    try
    {
      adaptor->BuildPickingRay(*(Dali::Vector3*)(csOrigin),
                               *(Dali::Vector3*)(csDirection),
                               *(Dali::Vector3*)(csRayFromWorld),
                               *(Dali::Vector3*)(csRayToWorld));
    }
    CALL_CATCH_EXCEPTION();
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_ProjectPoint(void* csAdaptor,
                                                                       void* csOrigin,
                                                                       void* csDirection,
                                                                       float distance)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }
    if(!csOrigin)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    if(!csDirection)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return 0;
    }
    Dali::Vector3 point;
    try
    {
      point = adaptor->ProjectPoint(*(Dali::Vector3*)(csOrigin),
                                    *(Dali::Vector3*)(csDirection),
                                    distance);

    }
    CALL_CATCH_EXCEPTION(0);
    return new Dali::Vector3((const Dali::Vector3&)point);
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_CreateSyncPoint(void* csAdaptor)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return;
    }
    {
      try
      {
        adaptor->CreateSyncPoint();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsAdaptor_GetPhysicsWorld(void* csAdaptor)
  {
    PhysicsAdaptor* adaptor = (PhysicsAdaptor*)csAdaptor;
    if(!adaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }

    Dali::Toolkit::Physics::Integration::PhysicsWorld result{nullptr};
    {
      try
      {

        result = Dali::Toolkit::Physics::Integration::GetPhysicsWorld(*adaptor);
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return result.GetImpl();
  }


  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsWorld_Lock(void* csWorld)
  {
    if(!csWorld)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsWorld const ref type is null",0);
      return;
    }
    {
      try
      {
        Dali::Toolkit::Physics::Integration::PhysicsWorld world(static_cast<Dali::Toolkit::Physics::Internal::PhysicsWorld*>(csWorld));
        world.Lock();
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsWorld_Unlock(void* csWorld)
  {
    if(!csWorld)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsWorld const ref type is null",0);
      return;
    }
    {
      try
      {
        Dali::Toolkit::Physics::Integration::PhysicsWorld world(static_cast<Dali::Toolkit::Physics::Internal::PhysicsWorld*>(csWorld));
        world.Unlock();
      }
      CALL_CATCH_EXCEPTION();
    }
  }


  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsWorld_GetNative(void* csWorld)
  {
    if(!csWorld)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsWorld const ref type is null",0);
      return 0;
    }
    Dali::Any physicsWorld;
    {
      try
      {
        Dali::Toolkit::Physics::Integration::PhysicsWorld world(static_cast<Dali::Toolkit::Physics::Internal::PhysicsWorld*>(csWorld));
        physicsWorld = world.GetNative();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    if(!physicsWorld.Empty())
    {
      return physicsWorld.Get<cpSpace*>();
    }
    return nullptr;
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsWorld_HitTest(void* csWorld, Dali::Vector3* rayFromWorld, Dali::Vector3* rayToWorld, cpShapeFilter nativeFilter, void* localPivot, void* distanceFromCamera)
  {
    if(!csWorld)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsWorld const ref type is null",0);
      return 0;
    }
    if(!rayFromWorld)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Vector3 const ref type is null",0);
      return 0;
    }
    if(!rayToWorld)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Vector3 const ref type is null",0);
      return 0;
    }
    if(!localPivot)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Vector3 ref type is null",0);
      return 0;
    }
    if(!distanceFromCamera)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "float ref type is null",0);
      return 0;
    }

    Dali::Vector3 myLocalPivot;
    float myDistanceFromCamera;
    Dali::Any result;
    {
      try
      {
        Dali::Any shapeFilter(nativeFilter);

        Dali::Toolkit::Physics::Integration::PhysicsWorld world(static_cast<Dali::Toolkit::Physics::Internal::PhysicsWorld*>(csWorld));
        result = world.HitTest(*rayFromWorld, *rayToWorld, shapeFilter, myLocalPivot, myDistanceFromCamera);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    if(!result.Empty())
    {
      if(localPivot != nullptr)
      {
        *(static_cast<Dali::Vector3*>(localPivot)) = myLocalPivot;
      }
      if(distanceFromCamera != nullptr) // Dodgy af.
      {
        *(static_cast<float*>(distanceFromCamera)) = myDistanceFromCamera;
      }
      return result.Get<cpBody*>();
    }
    return nullptr;
  }



  // Lowest priority
  //void Queue(std::function<void(void)> function);


#ifdef __cplusplus
}
#endif
