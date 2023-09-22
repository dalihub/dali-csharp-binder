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
  EXPORT btCollisionAlgorithmConstructionInfo* btCollisionAlgorithmConstructionInfo_new();
  EXPORT btCollisionAlgorithmConstructionInfo* btCollisionAlgorithmConstructionInfo_new2(btDispatcher* dispatcher, int temp);
  EXPORT btDispatcher* btCollisionAlgorithmConstructionInfo_getDispatcher1(btCollisionAlgorithmConstructionInfo* obj);
  EXPORT btPersistentManifold* btCollisionAlgorithmConstructionInfo_getManifold(btCollisionAlgorithmConstructionInfo* obj);
  EXPORT void btCollisionAlgorithmConstructionInfo_setDispatcher1(btCollisionAlgorithmConstructionInfo* obj, btDispatcher* value);
  EXPORT void btCollisionAlgorithmConstructionInfo_setManifold(btCollisionAlgorithmConstructionInfo* obj, btPersistentManifold* value);
  EXPORT void btCollisionAlgorithmConstructionInfo_delete(btCollisionAlgorithmConstructionInfo* obj);

  EXPORT btScalar btCollisionAlgorithm_calculateTimeOfImpact(btCollisionAlgorithm* obj, btCollisionObject* body0, btCollisionObject* body1, const btDispatcherInfo* dispatchInfo, btManifoldResult* resultOut);
  EXPORT void btCollisionAlgorithm_getAllContactManifolds(btCollisionAlgorithm* obj, btAlignedObjectArray_btPersistentManifoldPtr* manifoldArray);
  EXPORT void btCollisionAlgorithm_processCollision(btCollisionAlgorithm* obj, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, const btDispatcherInfo* dispatchInfo, btManifoldResult* resultOut);
  EXPORT void btCollisionAlgorithm_delete(btCollisionAlgorithm* obj);
#ifdef __cplusplus
}
#endif
