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
  EXPORT void btCollisionShape_calculateLocalInertia(btCollisionShape* obj, btScalar mass, btVector3* inertia);
  EXPORT int btCollisionShape_calculateSerializeBufferSize(btCollisionShape* obj);
  EXPORT void btCollisionShape_calculateTemporalAabb(btCollisionShape* obj, const btTransform* curTrans, const btVector3* linvel, const btVector3* angvel, btScalar timeStep, btVector3* temporalAabbMin, btVector3* temporalAabbMax);
  EXPORT void btCollisionShape_getAabb(btCollisionShape* obj, const btTransform* t, btVector3* aabbMin, btVector3* aabbMax);
  EXPORT btScalar btCollisionShape_getAngularMotionDisc(btCollisionShape* obj);
  EXPORT void btCollisionShape_getAnisotropicRollingFrictionDirection(btCollisionShape* obj, btVector3* value);
  EXPORT void btCollisionShape_getBoundingSphere(btCollisionShape* obj, btVector3* center, btScalar* radius);
  EXPORT btScalar btCollisionShape_getContactBreakingThreshold(btCollisionShape* obj, btScalar defaultContactThresholdFactor);
  EXPORT void btCollisionShape_getLocalScaling(btCollisionShape* obj, btVector3* value);
  EXPORT btScalar btCollisionShape_getMargin(btCollisionShape* obj);
  EXPORT const char* btCollisionShape_getName(btCollisionShape* obj);
  EXPORT int btCollisionShape_getShapeType(btCollisionShape* obj);
  EXPORT int btCollisionShape_getUserIndex(btCollisionShape* obj);
  EXPORT void* btCollisionShape_getUserPointer(btCollisionShape* obj);
  EXPORT bool btCollisionShape_isCompound(btCollisionShape* obj);
  EXPORT bool btCollisionShape_isConcave(btCollisionShape* obj);
  EXPORT bool btCollisionShape_isConvex(btCollisionShape* obj);
  EXPORT bool btCollisionShape_isConvex2d(btCollisionShape* obj);
  EXPORT bool btCollisionShape_isInfinite(btCollisionShape* obj);
  EXPORT bool btCollisionShape_isNonMoving(btCollisionShape* obj);
  EXPORT bool btCollisionShape_isPolyhedral(btCollisionShape* obj);
  EXPORT bool btCollisionShape_isSoftBody(btCollisionShape* obj);
  EXPORT const char* btCollisionShape_serialize(btCollisionShape* obj, void* dataBuffer, btSerializer* serializer);
  EXPORT void btCollisionShape_serializeSingleShape(btCollisionShape* obj, btSerializer* serializer);
  EXPORT void btCollisionShape_setLocalScaling(btCollisionShape* obj, const btVector3* scaling);
  EXPORT void btCollisionShape_setMargin(btCollisionShape* obj, btScalar margin);
  EXPORT void btCollisionShape_setUserIndex(btCollisionShape* obj, int index);
  EXPORT void btCollisionShape_setUserPointer(btCollisionShape* obj, void* userPtr);
  EXPORT void btCollisionShape_delete(btCollisionShape* obj);
#ifdef __cplusplus
}
#endif
