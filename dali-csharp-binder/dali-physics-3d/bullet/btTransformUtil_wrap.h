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
  EXPORT void btTransformUtil_calculateDiffAxisAngle(const btTransform* transform0, const btTransform* transform1, btVector3* axis, btScalar* angle);
  EXPORT void btTransformUtil_calculateDiffAxisAngleQuaternion(const btQuaternion* orn0, const btQuaternion* orn1a, btVector3* axis, btScalar* angle);
  EXPORT void btTransformUtil_calculateVelocity(const btTransform* transform0, const btTransform* transform1, btScalar timeStep, btVector3* linVel, btVector3* angVel);
  EXPORT void btTransformUtil_calculateVelocityQuaternion(const btVector3* pos0, const btVector3* pos1, const btQuaternion* orn0, const btQuaternion* orn1, btScalar timeStep, btVector3* linVel, btVector3* angVel);
  EXPORT void btTransformUtil_integrateTransform(const btTransform* curTrans, const btVector3* linvel, const btVector3* angvel, btScalar timeStep, btTransform* predictedTransform);

  EXPORT btConvexSeparatingDistanceUtil* btConvexSeparatingDistanceUtil_new(btScalar boundingRadiusA, btScalar boundingRadiusB);
  EXPORT btScalar btConvexSeparatingDistanceUtil_getConservativeSeparatingDistance(btConvexSeparatingDistanceUtil* obj);
  EXPORT void btConvexSeparatingDistanceUtil_initSeparatingDistance(btConvexSeparatingDistanceUtil* obj, const btVector3* separatingVector, btScalar separatingDistance, const btTransform* transA, const btTransform* transB);
  EXPORT void btConvexSeparatingDistanceUtil_updateSeparatingDistance(btConvexSeparatingDistanceUtil* obj, const btTransform* transA, const btTransform* transB);
  EXPORT void btConvexSeparatingDistanceUtil_delete(btConvexSeparatingDistanceUtil* obj);
#ifdef __cplusplus
}
#endif
