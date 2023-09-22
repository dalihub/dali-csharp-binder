/*
 * Copyright (c) 2013-2017 Andres Traks
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from the use of this software.
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it freely,
 * subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif
  EXPORT btGhostObject* btGhostObject_new();
  EXPORT void btGhostObject_addOverlappingObjectInternal(btGhostObject* obj, btBroadphaseProxy* otherProxy, btBroadphaseProxy* thisProxy);
  EXPORT void btGhostObject_convexSweepTest(btGhostObject* obj, const btConvexShape* castShape, const btTransform* convexFromWorld, const btTransform* convexToWorld, btCollisionWorld_ConvexResultCallback* resultCallback, btScalar allowedCcdPenetration);
  EXPORT int btGhostObject_getNumOverlappingObjects(btGhostObject* obj);
  EXPORT btCollisionObject* btGhostObject_getOverlappingObject(btGhostObject* obj, int index);
  EXPORT btAlignedObjectArray_btCollisionObjectPtr* btGhostObject_getOverlappingPairs(btGhostObject* obj);
  EXPORT void btGhostObject_rayTest(btGhostObject* obj, const btVector3* rayFromWorld, const btVector3* rayToWorld, btCollisionWorld_RayResultCallback* resultCallback);
  EXPORT void btGhostObject_removeOverlappingObjectInternal(btGhostObject* obj, btBroadphaseProxy* otherProxy, btDispatcher* dispatcher, btBroadphaseProxy* thisProxy);
  EXPORT btGhostObject* btGhostObject_upcast(btCollisionObject* colObj);

  EXPORT btPairCachingGhostObject* btPairCachingGhostObject_new();
  EXPORT btHashedOverlappingPairCache* btPairCachingGhostObject_getOverlappingPairCache(btPairCachingGhostObject* obj);

  EXPORT btGhostPairCallback* btGhostPairCallback_new();
#ifdef __cplusplus
}
#endif
