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
  EXPORT btScalar btDispatcherInfo_getAllowedCcdPenetration(btDispatcherInfo* obj);
  EXPORT btScalar btDispatcherInfo_getConvexConservativeDistanceThreshold(btDispatcherInfo* obj);
  EXPORT btIDebugDraw* btDispatcherInfo_getDebugDraw(btDispatcherInfo* obj);
  EXPORT bool btDispatcherInfo_getDeterministicOverlappingPairs(btDispatcherInfo* obj);
  EXPORT int btDispatcherInfo_getDispatchFunc(btDispatcherInfo* obj);
  EXPORT bool btDispatcherInfo_getEnableSatConvex(btDispatcherInfo* obj);
  EXPORT bool btDispatcherInfo_getEnableSPU(btDispatcherInfo* obj);
  EXPORT int btDispatcherInfo_getStepCount(btDispatcherInfo* obj);
  EXPORT btScalar btDispatcherInfo_getTimeOfImpact(btDispatcherInfo* obj);
  EXPORT btScalar btDispatcherInfo_getTimeStep(btDispatcherInfo* obj);
  EXPORT bool btDispatcherInfo_getUseContinuous(btDispatcherInfo* obj);
  EXPORT bool btDispatcherInfo_getUseConvexConservativeDistanceUtil(btDispatcherInfo* obj);
  EXPORT bool btDispatcherInfo_getUseEpa(btDispatcherInfo* obj);
  EXPORT void btDispatcherInfo_setAllowedCcdPenetration(btDispatcherInfo* obj, btScalar value);
  EXPORT void btDispatcherInfo_setConvexConservativeDistanceThreshold(btDispatcherInfo* obj, btScalar value);
  EXPORT void btDispatcherInfo_setDebugDraw(btDispatcherInfo* obj, btIDebugDraw* value);
  EXPORT void btDispatcherInfo_setDeterministicOverlappingPairs(btDispatcherInfo* obj, bool value);
  EXPORT void btDispatcherInfo_setDispatchFunc(btDispatcherInfo* obj, int value);
  EXPORT void btDispatcherInfo_setEnableSatConvex(btDispatcherInfo* obj, bool value);
  EXPORT void btDispatcherInfo_setEnableSPU(btDispatcherInfo* obj, bool value);
  EXPORT void btDispatcherInfo_setStepCount(btDispatcherInfo* obj, int value);
  EXPORT void btDispatcherInfo_setTimeOfImpact(btDispatcherInfo* obj, btScalar value);
  EXPORT void btDispatcherInfo_setTimeStep(btDispatcherInfo* obj, btScalar value);
  EXPORT void btDispatcherInfo_setUseContinuous(btDispatcherInfo* obj, bool value);
  EXPORT void btDispatcherInfo_setUseConvexConservativeDistanceUtil(btDispatcherInfo* obj, bool value);
  EXPORT void btDispatcherInfo_setUseEpa(btDispatcherInfo* obj, bool value);

  EXPORT void* btDispatcher_allocateCollisionAlgorithm(btDispatcher* obj, int size);
  EXPORT void btDispatcher_clearManifold(btDispatcher* obj, btPersistentManifold* manifold);
  EXPORT void btDispatcher_dispatchAllCollisionPairs(btDispatcher* obj, btOverlappingPairCache* pairCache, const btDispatcherInfo* dispatchInfo, btDispatcher* dispatcher);
  EXPORT btCollisionAlgorithm* btDispatcher_findAlgorithm(btDispatcher* obj, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, btPersistentManifold* sharedManifold, ebtDispatcherQueryType queryType);
  EXPORT void btDispatcher_freeCollisionAlgorithm(btDispatcher* obj, void* ptr);
  EXPORT btPersistentManifold** btDispatcher_getInternalManifoldPointer(btDispatcher* obj);
  EXPORT btPoolAllocator* btDispatcher_getInternalManifoldPool(btDispatcher* obj);
  EXPORT btPersistentManifold* btDispatcher_getManifoldByIndexInternal(btDispatcher* obj, int index);
  EXPORT btPersistentManifold* btDispatcher_getNewManifold(btDispatcher* obj, const btCollisionObject* b0, const btCollisionObject* b1);
  EXPORT int btDispatcher_getNumManifolds(btDispatcher* obj);
  EXPORT bool btDispatcher_needsCollision(btDispatcher* obj, const btCollisionObject* body0, const btCollisionObject* body1);
  EXPORT bool btDispatcher_needsResponse(btDispatcher* obj, const btCollisionObject* body0, const btCollisionObject* body1);
  EXPORT void btDispatcher_releaseManifold(btDispatcher* obj, btPersistentManifold* manifold);
  EXPORT void btDispatcher_delete(btDispatcher* obj);
#ifdef __cplusplus
}
#endif
