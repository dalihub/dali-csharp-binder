﻿/*
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
  EXPORT btWheelInfoConstructionInfo* btWheelInfoConstructionInfo_new();
  EXPORT bool btWheelInfoConstructionInfo_getBIsFrontWheel(btWheelInfoConstructionInfo* obj);
  EXPORT void btWheelInfoConstructionInfo_getChassisConnectionCS(btWheelInfoConstructionInfo* obj, btVector3* value);
  EXPORT btScalar btWheelInfoConstructionInfo_getFrictionSlip(btWheelInfoConstructionInfo* obj);
  EXPORT btScalar btWheelInfoConstructionInfo_getMaxSuspensionForce(btWheelInfoConstructionInfo* obj);
  EXPORT btScalar btWheelInfoConstructionInfo_getMaxSuspensionTravelCm(btWheelInfoConstructionInfo* obj);
  EXPORT btScalar btWheelInfoConstructionInfo_getSuspensionRestLength(btWheelInfoConstructionInfo* obj);
  EXPORT btScalar btWheelInfoConstructionInfo_getSuspensionStiffness(btWheelInfoConstructionInfo* obj);
  EXPORT void btWheelInfoConstructionInfo_getWheelAxleCS(btWheelInfoConstructionInfo* obj, btVector3* value);
  EXPORT void btWheelInfoConstructionInfo_getWheelDirectionCS(btWheelInfoConstructionInfo* obj, btVector3* value);
  EXPORT btScalar btWheelInfoConstructionInfo_getWheelRadius(btWheelInfoConstructionInfo* obj);
  EXPORT btScalar btWheelInfoConstructionInfo_getWheelsDampingCompression(btWheelInfoConstructionInfo* obj);
  EXPORT btScalar btWheelInfoConstructionInfo_getWheelsDampingRelaxation(btWheelInfoConstructionInfo* obj);
  EXPORT void btWheelInfoConstructionInfo_setBIsFrontWheel(btWheelInfoConstructionInfo* obj, bool value);
  EXPORT void btWheelInfoConstructionInfo_setChassisConnectionCS(btWheelInfoConstructionInfo* obj, const btVector3* value);
  EXPORT void btWheelInfoConstructionInfo_setFrictionSlip(btWheelInfoConstructionInfo* obj, btScalar value);
  EXPORT void btWheelInfoConstructionInfo_setMaxSuspensionForce(btWheelInfoConstructionInfo* obj, btScalar value);
  EXPORT void btWheelInfoConstructionInfo_setMaxSuspensionTravelCm(btWheelInfoConstructionInfo* obj, btScalar value);
  EXPORT void btWheelInfoConstructionInfo_setSuspensionRestLength(btWheelInfoConstructionInfo* obj, btScalar value);
  EXPORT void btWheelInfoConstructionInfo_setSuspensionStiffness(btWheelInfoConstructionInfo* obj, btScalar value);
  EXPORT void btWheelInfoConstructionInfo_setWheelAxleCS(btWheelInfoConstructionInfo* obj, const btVector3* value);
  EXPORT void btWheelInfoConstructionInfo_setWheelDirectionCS(btWheelInfoConstructionInfo* obj, const btVector3* value);
  EXPORT void btWheelInfoConstructionInfo_setWheelRadius(btWheelInfoConstructionInfo* obj, btScalar value);
  EXPORT void btWheelInfoConstructionInfo_setWheelsDampingCompression(btWheelInfoConstructionInfo* obj, btScalar value);
  EXPORT void btWheelInfoConstructionInfo_setWheelsDampingRelaxation(btWheelInfoConstructionInfo* obj, btScalar value);
  EXPORT void btWheelInfoConstructionInfo_delete(btWheelInfoConstructionInfo* obj);

  EXPORT btWheelInfo_RaycastInfo* btWheelInfo_RaycastInfo_new();
  EXPORT void btWheelInfo_RaycastInfo_getContactNormalWS(btWheelInfo_RaycastInfo* obj, btVector3* value);
  EXPORT void btWheelInfo_RaycastInfo_getContactPointWS(btWheelInfo_RaycastInfo* obj, btVector3* value);
  EXPORT void* btWheelInfo_RaycastInfo_getGroundObject(btWheelInfo_RaycastInfo* obj);
  EXPORT void btWheelInfo_RaycastInfo_getHardPointWS(btWheelInfo_RaycastInfo* obj, btVector3* value);
  EXPORT bool btWheelInfo_RaycastInfo_getIsInContact(btWheelInfo_RaycastInfo* obj);
  EXPORT btScalar btWheelInfo_RaycastInfo_getSuspensionLength(btWheelInfo_RaycastInfo* obj);
  EXPORT void btWheelInfo_RaycastInfo_getWheelAxleWS(btWheelInfo_RaycastInfo* obj, btVector3* value);
  EXPORT void btWheelInfo_RaycastInfo_getWheelDirectionWS(btWheelInfo_RaycastInfo* obj, btVector3* value);
  EXPORT void btWheelInfo_RaycastInfo_setContactNormalWS(btWheelInfo_RaycastInfo* obj, const btVector3* value);
  EXPORT void btWheelInfo_RaycastInfo_setContactPointWS(btWheelInfo_RaycastInfo* obj, const btVector3* value);
  EXPORT void btWheelInfo_RaycastInfo_setGroundObject(btWheelInfo_RaycastInfo* obj, void* value);
  EXPORT void btWheelInfo_RaycastInfo_setHardPointWS(btWheelInfo_RaycastInfo* obj, const btVector3* value);
  EXPORT void btWheelInfo_RaycastInfo_setIsInContact(btWheelInfo_RaycastInfo* obj, bool value);
  EXPORT void btWheelInfo_RaycastInfo_setSuspensionLength(btWheelInfo_RaycastInfo* obj, btScalar value);
  EXPORT void btWheelInfo_RaycastInfo_setWheelAxleWS(btWheelInfo_RaycastInfo* obj, const btVector3* value);
  EXPORT void btWheelInfo_RaycastInfo_setWheelDirectionWS(btWheelInfo_RaycastInfo* obj, const btVector3* value);
  EXPORT void btWheelInfo_RaycastInfo_delete(btWheelInfo_RaycastInfo* obj);

  EXPORT btWheelInfo* btWheelInfo_new(btWheelInfoConstructionInfo* ci);
  EXPORT bool btWheelInfo_getBIsFrontWheel(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getBrake(btWheelInfo* obj);
  EXPORT void btWheelInfo_getChassisConnectionPointCS(btWheelInfo* obj, btVector3* value);
  EXPORT void* btWheelInfo_getClientInfo(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getClippedInvContactDotSuspension(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getDeltaRotation(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getEngineForce(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getFrictionSlip(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getMaxSuspensionForce(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getMaxSuspensionTravelCm(btWheelInfo* obj);
  EXPORT btWheelInfo_RaycastInfo* btWheelInfo_getRaycastInfo(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getRollInfluence(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getRotation(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getSkidInfo(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getSteering(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getSuspensionRelativeVelocity(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getSuspensionRestLength(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getSuspensionRestLength1(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getSuspensionStiffness(btWheelInfo* obj);
  EXPORT void btWheelInfo_getWheelAxleCS(btWheelInfo* obj, btVector3* value);
  EXPORT void btWheelInfo_getWheelDirectionCS(btWheelInfo* obj, btVector3* value);
  EXPORT btScalar btWheelInfo_getWheelsDampingCompression(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getWheelsDampingRelaxation(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getWheelsRadius(btWheelInfo* obj);
  EXPORT btScalar btWheelInfo_getWheelsSuspensionForce(btWheelInfo* obj);
  EXPORT void btWheelInfo_getWorldTransform(btWheelInfo* obj, btTransform* value);
  EXPORT void btWheelInfo_setBIsFrontWheel(btWheelInfo* obj, bool value);
  EXPORT void btWheelInfo_setBrake(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setChassisConnectionPointCS(btWheelInfo* obj, const btVector3* value);
  EXPORT void btWheelInfo_setClientInfo(btWheelInfo* obj, void* value);
  EXPORT void btWheelInfo_setClippedInvContactDotSuspension(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setDeltaRotation(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setEngineForce(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setFrictionSlip(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setMaxSuspensionForce(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setMaxSuspensionTravelCm(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setRollInfluence(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setRotation(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setSkidInfo(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setSteering(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setSuspensionRelativeVelocity(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setSuspensionRestLength1(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setSuspensionStiffness(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setWheelAxleCS(btWheelInfo* obj, const btVector3* value);
  EXPORT void btWheelInfo_setWheelDirectionCS(btWheelInfo* obj, const btVector3* value);
  EXPORT void btWheelInfo_setWheelsDampingCompression(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setWheelsDampingRelaxation(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setWheelsRadius(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setWheelsSuspensionForce(btWheelInfo* obj, btScalar value);
  EXPORT void btWheelInfo_setWorldTransform(btWheelInfo* obj, const btTransform* value);
  EXPORT void btWheelInfo_updateWheel(btWheelInfo* obj, const btRigidBody* chassis, btWheelInfo_RaycastInfo* raycastInfo);
  EXPORT void btWheelInfo_delete(btWheelInfo* obj);
#ifdef __cplusplus
}
#endif
