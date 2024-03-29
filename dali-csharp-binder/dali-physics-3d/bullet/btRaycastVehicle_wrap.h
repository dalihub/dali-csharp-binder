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
  EXPORT btRaycastVehicle_btVehicleTuning* btRaycastVehicle_btVehicleTuning_new();
  EXPORT btScalar btRaycastVehicle_btVehicleTuning_getFrictionSlip(btRaycastVehicle_btVehicleTuning* obj);
  EXPORT btScalar btRaycastVehicle_btVehicleTuning_getMaxSuspensionForce(btRaycastVehicle_btVehicleTuning* obj);
  EXPORT btScalar btRaycastVehicle_btVehicleTuning_getMaxSuspensionTravelCm(btRaycastVehicle_btVehicleTuning* obj);
  EXPORT btScalar btRaycastVehicle_btVehicleTuning_getSuspensionCompression(btRaycastVehicle_btVehicleTuning* obj);
  EXPORT btScalar btRaycastVehicle_btVehicleTuning_getSuspensionDamping(btRaycastVehicle_btVehicleTuning* obj);
  EXPORT btScalar btRaycastVehicle_btVehicleTuning_getSuspensionStiffness(btRaycastVehicle_btVehicleTuning* obj);
  EXPORT void btRaycastVehicle_btVehicleTuning_setFrictionSlip(btRaycastVehicle_btVehicleTuning* obj, btScalar value);
  EXPORT void btRaycastVehicle_btVehicleTuning_setMaxSuspensionForce(btRaycastVehicle_btVehicleTuning* obj, btScalar value);
  EXPORT void btRaycastVehicle_btVehicleTuning_setMaxSuspensionTravelCm(btRaycastVehicle_btVehicleTuning* obj, btScalar value);
  EXPORT void btRaycastVehicle_btVehicleTuning_setSuspensionCompression(btRaycastVehicle_btVehicleTuning* obj, btScalar value);
  EXPORT void btRaycastVehicle_btVehicleTuning_setSuspensionDamping(btRaycastVehicle_btVehicleTuning* obj, btScalar value);
  EXPORT void btRaycastVehicle_btVehicleTuning_setSuspensionStiffness(btRaycastVehicle_btVehicleTuning* obj, btScalar value);
  EXPORT void btRaycastVehicle_btVehicleTuning_delete(btRaycastVehicle_btVehicleTuning* obj);

  EXPORT btRaycastVehicle* btRaycastVehicle_new(const btRaycastVehicle_btVehicleTuning* tuning, btRigidBody* chassis, btVehicleRaycaster* raycaster);
  EXPORT btWheelInfo* btRaycastVehicle_addWheel(btRaycastVehicle* obj, const btVector3* connectionPointCS0, const btVector3* wheelDirectionCS0, const btVector3* wheelAxleCS, btScalar suspensionRestLength, btScalar wheelRadius, const btRaycastVehicle_btVehicleTuning* tuning, bool isFrontWheel);
  EXPORT void btRaycastVehicle_applyEngineForce(btRaycastVehicle* obj, btScalar force, int wheel);
  EXPORT void btRaycastVehicle_getChassisWorldTransform(btRaycastVehicle* obj, btTransform* value);
  EXPORT btScalar btRaycastVehicle_getCurrentSpeedKmHour(btRaycastVehicle* obj);
  EXPORT int btRaycastVehicle_getForwardAxis(btRaycastVehicle* obj);
  EXPORT void btRaycastVehicle_getForwardVector(btRaycastVehicle* obj, btVector3* value);
  EXPORT int btRaycastVehicle_getNumWheels(btRaycastVehicle* obj);
  EXPORT int btRaycastVehicle_getRightAxis(btRaycastVehicle* obj);
  EXPORT btRigidBody* btRaycastVehicle_getRigidBody(btRaycastVehicle* obj);
  EXPORT btScalar btRaycastVehicle_getSteeringValue(btRaycastVehicle* obj, int wheel);
  EXPORT int btRaycastVehicle_getUpAxis(btRaycastVehicle* obj);
  EXPORT int btRaycastVehicle_getUserConstraintId(btRaycastVehicle* obj);
  EXPORT int btRaycastVehicle_getUserConstraintType(btRaycastVehicle* obj);
  EXPORT btWheelInfo* btRaycastVehicle_getWheelInfo(btRaycastVehicle* obj, int index);
  EXPORT btAlignedObjectArray_btWheelInfo* btRaycastVehicle_getWheelInfo2(btRaycastVehicle* obj);
  EXPORT void btRaycastVehicle_getWheelTransformWS(btRaycastVehicle* obj, int wheelIndex, btTransform* value);
  EXPORT btScalar btRaycastVehicle_rayCast(btRaycastVehicle* obj, btWheelInfo* wheel);
  EXPORT void btRaycastVehicle_resetSuspension(btRaycastVehicle* obj);
  EXPORT void btRaycastVehicle_setBrake(btRaycastVehicle* obj, btScalar brake, int wheelIndex);
  EXPORT void btRaycastVehicle_setCoordinateSystem(btRaycastVehicle* obj, int rightIndex, int upIndex, int forwardIndex);
  EXPORT void btRaycastVehicle_setPitchControl(btRaycastVehicle* obj, btScalar pitch);
  EXPORT void btRaycastVehicle_setSteeringValue(btRaycastVehicle* obj, btScalar steering, int wheel);
  EXPORT void btRaycastVehicle_setUserConstraintId(btRaycastVehicle* obj, int uid);
  EXPORT void btRaycastVehicle_setUserConstraintType(btRaycastVehicle* obj, int userConstraintType);
  EXPORT void btRaycastVehicle_updateFriction(btRaycastVehicle* obj, btScalar timeStep);
  EXPORT void btRaycastVehicle_updateSuspension(btRaycastVehicle* obj, btScalar deltaTime);
  EXPORT void btRaycastVehicle_updateVehicle(btRaycastVehicle* obj, btScalar step);
  EXPORT void btRaycastVehicle_updateWheelTransform(btRaycastVehicle* obj, int wheelIndex);
  EXPORT void btRaycastVehicle_updateWheelTransform2(btRaycastVehicle* obj, int wheelIndex, bool interpolatedTransform);
  EXPORT void btRaycastVehicle_updateWheelTransformsWS(btRaycastVehicle* obj, btWheelInfo* wheel);
  EXPORT void btRaycastVehicle_updateWheelTransformsWS2(btRaycastVehicle* obj, btWheelInfo* wheel, bool interpolatedTransform);

  EXPORT btDefaultVehicleRaycaster* btDefaultVehicleRaycaster_new(btDynamicsWorld* world);
#ifdef __cplusplus
}
#endif
