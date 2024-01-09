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

// EXTERNAL INCLUDES
#include <dali-physics/public-api/physics-actor.h>
#include <dali-physics/public-api/physics-adaptor.h>
#include <btBulletDynamicsCommon.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

  using Dali::Toolkit::Physics::PhysicsActor;
  using Dali::Toolkit::Physics::PhysicsAdaptor;


  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsActor_New(void* csActor, void* csBody, void* csAdaptor)
  {
    PhysicsActor result;

    if(!csActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    if(!csBody)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "btRigidBody ptr is null", 0);
      return 0;
    }
    if(!csAdaptor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsAdaptor const & type is null", 0);
      return 0;
    }

    {
      try
      {
        // Stack allocate a handle
        result = PhysicsActor::New(*(Dali::Actor*)(csActor), Dali::Any((btRigidBody*)csBody), *(PhysicsAdaptor*)csAdaptor);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    // Heap allocate a handle using copy constructor
    return new PhysicsActor((const PhysicsActor&)result);
  }


  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_PhysicsActor(void* csPhysicsActor)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csPhysicsActor;
    {
      try
      {
        delete physicsActor;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_PhysicsActor__SWIG_1(void* csPhysicsActor)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csPhysicsActor;
    PhysicsActor* result = 0;

    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (PhysicsActor*)new PhysicsActor((PhysicsActor const&)*physicsActor);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void*)result;
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsActor_Assign(void* csDest, void* csSrc)
  {
    PhysicsActor* dest   = (PhysicsActor*)csDest;
    PhysicsActor* src    = (PhysicsActor*)csSrc;
    PhysicsActor* result = 0;

    if(!src)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (PhysicsActor*)&(dest)->operator=((PhysicsActor const&)*src);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void*)result;
  }

  SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_PhysicsActor_GetId(void* csActor)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csActor;
    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    unsigned int result=0;
    {
      try
      {
        result = physicsActor->GetId();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return result;
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsActor_GetBody(void* csActor)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csActor;
    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    Dali::Any result;
    {
      try
      {
        result = physicsActor->GetBody();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    // Heap allocate a new Any wrapper
    return new Dali::Any((const Dali::Any&)result);
  }


  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsActor_AsyncSetPhysicsPosition(void* csActor, void* csPosition)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csActor;
    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return;
    }
    if(!csPosition)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Vector3 const & type is null", 0);
      return;
    }
    {
      try
      {
        physicsActor->AsyncSetPhysicsPosition(*(Dali::Vector3*)(csPosition));
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PhysicsActor_AsyncSetPhysicsRotation(void* csActor, void* csRotation)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csActor;
    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return;
    }
    if(!csRotation)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Quaternion const & type is null", 0);
      return;
    }
    {
      try
      {
        physicsActor->AsyncSetPhysicsRotation(*(Dali::Quaternion*)(csRotation));
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsActor_GetPhysicsPosition(void* csActor)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csActor;
    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    Dali::Vector3 result;
    {
      try
      {
        result = physicsActor->GetPhysicsPosition();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Vector3((const Dali::Vector3&)result);
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsActor_GetPhysicsRotation(void* csActor)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csActor;
    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    Dali::Quaternion result;
    {
      try
      {
        result = physicsActor->GetPhysicsRotation();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Quaternion((const Dali::Quaternion&)result);
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsActor_GetActorPosition(void* csActor)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csActor;
    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    Dali::Vector3 result;
    {
      try
      {
        result = physicsActor->GetActorPosition();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Vector3((const Dali::Vector3&)result);
  }

  SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_PhysicsActor_GetActorRotation(void* csActor)
  {
    PhysicsActor* physicsActor = (PhysicsActor*)csActor;
    if(!physicsActor)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "PhysicsActor const & type is null", 0);
      return 0;
    }
    Dali::Quaternion result;
    {
      try
      {
        result = physicsActor->GetActorRotation();
      }
      CALL_CATCH_EXCEPTION(0);
    }
    return new Dali::Quaternion((const Dali::Quaternion&)result);
  }

#ifdef __cplusplus
}
#endif
