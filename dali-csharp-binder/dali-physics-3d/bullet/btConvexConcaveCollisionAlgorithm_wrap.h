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
  EXPORT btConvexTriangleCallback* btConvexTriangleCallback_new(btDispatcher* dispatcher, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, bool isSwapped);
  EXPORT void btConvexTriangleCallback_clearCache(btConvexTriangleCallback* obj);
  EXPORT void btConvexTriangleCallback_clearWrapperData(btConvexTriangleCallback* obj);
  EXPORT void btConvexTriangleCallback_getAabbMax(btConvexTriangleCallback* obj, btVector3* value);
  EXPORT void btConvexTriangleCallback_getAabbMin(btConvexTriangleCallback* obj, btVector3* value);
  EXPORT btPersistentManifold* btConvexTriangleCallback_getManifoldPtr(btConvexTriangleCallback* obj);
  EXPORT int btConvexTriangleCallback_getTriangleCount(btConvexTriangleCallback* obj);
  EXPORT void btConvexTriangleCallback_setManifoldPtr(btConvexTriangleCallback* obj, btPersistentManifold* value);
  EXPORT void btConvexTriangleCallback_setTimeStepAndCounters(btConvexTriangleCallback* obj, btScalar collisionMarginTriangle, const btDispatcherInfo* dispatchInfo, const btCollisionObjectWrapper* convexBodyWrap, const btCollisionObjectWrapper* triBodyWrap, btManifoldResult* resultOut);
  EXPORT void btConvexTriangleCallback_setTriangleCount(btConvexTriangleCallback* obj, int value);

  EXPORT btConvexConcaveCollisionAlgorithm_CreateFunc* btConvexConcaveCollisionAlgorithm_CreateFunc_new();

  EXPORT btConvexConcaveCollisionAlgorithm_SwappedCreateFunc* btConvexConcaveCollisionAlgorithm_SwappedCreateFunc_new();

  EXPORT btConvexConcaveCollisionAlgorithm* btConvexConcaveCollisionAlgorithm_new(const btCollisionAlgorithmConstructionInfo* ci, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, bool isSwapped);
  EXPORT void btConvexConcaveCollisionAlgorithm_clearCache(btConvexConcaveCollisionAlgorithm* obj);
#ifdef __cplusplus
}
#endif
