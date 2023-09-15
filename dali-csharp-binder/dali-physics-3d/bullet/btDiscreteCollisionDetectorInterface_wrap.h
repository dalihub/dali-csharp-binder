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
  EXPORT btDiscreteCollisionDetectorInterface_ClosestPointInput* btDiscreteCollisionDetectorInterface_ClosestPointInput_new();
  EXPORT btScalar btDiscreteCollisionDetectorInterface_ClosestPointInput_getMaximumDistanceSquared(btDiscreteCollisionDetectorInterface_ClosestPointInput* obj);
  EXPORT void btDiscreteCollisionDetectorInterface_ClosestPointInput_getTransformA(btDiscreteCollisionDetectorInterface_ClosestPointInput* obj, btTransform* value);
  EXPORT void btDiscreteCollisionDetectorInterface_ClosestPointInput_getTransformB(btDiscreteCollisionDetectorInterface_ClosestPointInput* obj, btTransform* value);
  EXPORT void btDiscreteCollisionDetectorInterface_ClosestPointInput_setMaximumDistanceSquared(btDiscreteCollisionDetectorInterface_ClosestPointInput* obj, btScalar value);
  EXPORT void btDiscreteCollisionDetectorInterface_ClosestPointInput_setTransformA(btDiscreteCollisionDetectorInterface_ClosestPointInput* obj, const btTransform* value);
  EXPORT void btDiscreteCollisionDetectorInterface_ClosestPointInput_setTransformB(btDiscreteCollisionDetectorInterface_ClosestPointInput* obj, const btTransform* value);
  EXPORT void btDiscreteCollisionDetectorInterface_ClosestPointInput_delete(btDiscreteCollisionDetectorInterface_ClosestPointInput* obj);

  EXPORT void btDiscreteCollisionDetectorInterface_Result_addContactPoint(btDiscreteCollisionDetectorInterface_Result* obj, const btVector3* normalOnBInWorld, const btVector3* pointInWorld, btScalar depth);
  EXPORT void btDiscreteCollisionDetectorInterface_Result_setShapeIdentifiersA(btDiscreteCollisionDetectorInterface_Result* obj, int partId0, int index0);
  EXPORT void btDiscreteCollisionDetectorInterface_Result_setShapeIdentifiersB(btDiscreteCollisionDetectorInterface_Result* obj, int partId1, int index1);
  EXPORT void btDiscreteCollisionDetectorInterface_Result_delete(btDiscreteCollisionDetectorInterface_Result* obj);

  EXPORT void btDiscreteCollisionDetectorInterface_getClosestPoints(btDiscreteCollisionDetectorInterface* obj, const btDiscreteCollisionDetectorInterface_ClosestPointInput* input, btDiscreteCollisionDetectorInterface_Result* output, btIDebugDraw* debugDraw, bool swapResults);
  EXPORT void btDiscreteCollisionDetectorInterface_delete(btDiscreteCollisionDetectorInterface* obj);

  EXPORT void btStorageResult_getClosestPointInB(btStorageResult* obj, btVector3* value);
  EXPORT btScalar btStorageResult_getDistance(btStorageResult* obj);
  EXPORT void btStorageResult_getNormalOnSurfaceB(btStorageResult* obj, btVector3* value);
  EXPORT void btStorageResult_setClosestPointInB(btStorageResult* obj, const btVector3* value);
  EXPORT void btStorageResult_setDistance(btStorageResult* obj, btScalar value);
  EXPORT void btStorageResult_setNormalOnSurfaceB(btStorageResult* obj, const btVector3* value);
#ifdef __cplusplus
}
#endif
