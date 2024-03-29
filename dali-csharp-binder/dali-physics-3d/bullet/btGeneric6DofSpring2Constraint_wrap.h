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
  EXPORT btRotationalLimitMotor2* btRotationalLimitMotor2_new();
  EXPORT btRotationalLimitMotor2* btRotationalLimitMotor2_new2(const btRotationalLimitMotor2* limot);
  EXPORT btScalar btRotationalLimitMotor2_getBounce(btRotationalLimitMotor2* obj);
  EXPORT int btRotationalLimitMotor2_getCurrentLimit(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getCurrentLimitError(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getCurrentLimitErrorHi(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getCurrentPosition(btRotationalLimitMotor2* obj);
  EXPORT bool btRotationalLimitMotor2_getEnableMotor(btRotationalLimitMotor2* obj);
  EXPORT bool btRotationalLimitMotor2_getEnableSpring(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getEquilibriumPoint(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getHiLimit(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getLoLimit(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getMaxMotorForce(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getMotorCFM(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getMotorERP(btRotationalLimitMotor2* obj);
  EXPORT bool btRotationalLimitMotor2_getServoMotor(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getServoTarget(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getSpringDamping(btRotationalLimitMotor2* obj);
  EXPORT bool btRotationalLimitMotor2_getSpringDampingLimited(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getSpringStiffness(btRotationalLimitMotor2* obj);
  EXPORT bool btRotationalLimitMotor2_getSpringStiffnessLimited(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getStopCFM(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getStopERP(btRotationalLimitMotor2* obj);
  EXPORT btScalar btRotationalLimitMotor2_getTargetVelocity(btRotationalLimitMotor2* obj);
  EXPORT bool btRotationalLimitMotor2_isLimited(btRotationalLimitMotor2* obj);
  EXPORT void btRotationalLimitMotor2_setBounce(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setCurrentLimit(btRotationalLimitMotor2* obj, int value);
  EXPORT void btRotationalLimitMotor2_setCurrentLimitError(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setCurrentLimitErrorHi(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setCurrentPosition(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setEnableMotor(btRotationalLimitMotor2* obj, bool value);
  EXPORT void btRotationalLimitMotor2_setEnableSpring(btRotationalLimitMotor2* obj, bool value);
  EXPORT void btRotationalLimitMotor2_setEquilibriumPoint(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setHiLimit(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setLoLimit(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setMaxMotorForce(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setMotorCFM(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setMotorERP(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setServoMotor(btRotationalLimitMotor2* obj, bool value);
  EXPORT void btRotationalLimitMotor2_setServoTarget(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setSpringDamping(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setSpringDampingLimited(btRotationalLimitMotor2* obj, bool value);
  EXPORT void btRotationalLimitMotor2_setSpringStiffness(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setSpringStiffnessLimited(btRotationalLimitMotor2* obj, bool value);
  EXPORT void btRotationalLimitMotor2_setStopCFM(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setStopERP(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_setTargetVelocity(btRotationalLimitMotor2* obj, btScalar value);
  EXPORT void btRotationalLimitMotor2_testLimitValue(btRotationalLimitMotor2* obj, btScalar test_value);
  EXPORT void btRotationalLimitMotor2_delete(btRotationalLimitMotor2* obj);

  EXPORT btTranslationalLimitMotor2* btTranslationalLimitMotor2_new();
  EXPORT btTranslationalLimitMotor2* btTranslationalLimitMotor2_new2(const btTranslationalLimitMotor2* other);
  EXPORT void btTranslationalLimitMotor2_getBounce(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT int* btTranslationalLimitMotor2_getCurrentLimit(btTranslationalLimitMotor2* obj);
  EXPORT void btTranslationalLimitMotor2_getCurrentLimitError(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getCurrentLimitErrorHi(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getCurrentLinearDiff(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT bool* btTranslationalLimitMotor2_getEnableMotor(btTranslationalLimitMotor2* obj);
  EXPORT bool* btTranslationalLimitMotor2_getEnableSpring(btTranslationalLimitMotor2* obj);
  EXPORT void btTranslationalLimitMotor2_getEquilibriumPoint(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getLowerLimit(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getMaxMotorForce(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getMotorCFM(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getMotorERP(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT bool* btTranslationalLimitMotor2_getServoMotor(btTranslationalLimitMotor2* obj);
  EXPORT void btTranslationalLimitMotor2_getServoTarget(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getSpringDamping(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT bool* btTranslationalLimitMotor2_getSpringDampingLimited(btTranslationalLimitMotor2* obj);
  EXPORT void btTranslationalLimitMotor2_getSpringStiffness(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT bool* btTranslationalLimitMotor2_getSpringStiffnessLimited(btTranslationalLimitMotor2* obj);
  EXPORT void btTranslationalLimitMotor2_getStopCFM(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getStopERP(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getTargetVelocity(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor2_getUpperLimit(btTranslationalLimitMotor2* obj, btVector3* value);
  EXPORT bool btTranslationalLimitMotor2_isLimited(btTranslationalLimitMotor2* obj, int limitIndex);
  EXPORT void btTranslationalLimitMotor2_setBounce(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setCurrentLimitError(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setCurrentLimitErrorHi(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setCurrentLinearDiff(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setEquilibriumPoint(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setLowerLimit(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setMaxMotorForce(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setMotorCFM(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setMotorERP(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setServoTarget(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setSpringDamping(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setSpringStiffness(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setStopCFM(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setStopERP(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setTargetVelocity(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_setUpperLimit(btTranslationalLimitMotor2* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor2_testLimitValue(btTranslationalLimitMotor2* obj, int limitIndex, btScalar test_value);
  EXPORT void btTranslationalLimitMotor2_delete(btTranslationalLimitMotor2* obj);

  EXPORT btGeneric6DofSpring2Constraint* btGeneric6DofSpring2Constraint_new(btRigidBody* rbA, btRigidBody* rbB, const btTransform* frameInA, const btTransform* frameInB, RotateOrder rotOrder);
  EXPORT btGeneric6DofSpring2Constraint* btGeneric6DofSpring2Constraint_new2(btRigidBody* rbB, const btTransform* frameInB, RotateOrder rotOrder);
  EXPORT btScalar btGeneric6DofSpring2Constraint_btGetMatrixElem(const btMatrix3x3* mat, int index);
  EXPORT void btGeneric6DofSpring2Constraint_calculateTransforms(btGeneric6DofSpring2Constraint* obj, const btTransform* transA, const btTransform* transB);
  EXPORT void btGeneric6DofSpring2Constraint_calculateTransforms2(btGeneric6DofSpring2Constraint* obj);
  EXPORT void btGeneric6DofSpring2Constraint_enableMotor(btGeneric6DofSpring2Constraint* obj, int index, bool onOff);
  EXPORT void btGeneric6DofSpring2Constraint_enableSpring(btGeneric6DofSpring2Constraint* obj, int index, bool onOff);
  EXPORT btScalar btGeneric6DofSpring2Constraint_getAngle(btGeneric6DofSpring2Constraint* obj, int axis_index);
  EXPORT void btGeneric6DofSpring2Constraint_getAngularLowerLimit(btGeneric6DofSpring2Constraint* obj, btVector3* angularLower);
  EXPORT void btGeneric6DofSpring2Constraint_getAngularLowerLimitReversed(btGeneric6DofSpring2Constraint* obj, btVector3* angularLower);
  EXPORT void btGeneric6DofSpring2Constraint_getAngularUpperLimit(btGeneric6DofSpring2Constraint* obj, btVector3* angularUpper);
  EXPORT void btGeneric6DofSpring2Constraint_getAngularUpperLimitReversed(btGeneric6DofSpring2Constraint* obj, btVector3* angularUpper);
  EXPORT void btGeneric6DofSpring2Constraint_getAxis(btGeneric6DofSpring2Constraint* obj, int axis_index, btVector3* value);
  EXPORT void btGeneric6DofSpring2Constraint_getCalculatedTransformA(btGeneric6DofSpring2Constraint* obj, btTransform* value);
  EXPORT void btGeneric6DofSpring2Constraint_getCalculatedTransformB(btGeneric6DofSpring2Constraint* obj, btTransform* value);
  EXPORT void btGeneric6DofSpring2Constraint_getFrameOffsetA(btGeneric6DofSpring2Constraint* obj, btTransform* value);
  EXPORT void btGeneric6DofSpring2Constraint_getFrameOffsetB(btGeneric6DofSpring2Constraint* obj, btTransform* value);
  EXPORT void btGeneric6DofSpring2Constraint_getLinearLowerLimit(btGeneric6DofSpring2Constraint* obj, btVector3* linearLower);
  EXPORT void btGeneric6DofSpring2Constraint_getLinearUpperLimit(btGeneric6DofSpring2Constraint* obj, btVector3* linearUpper);
  EXPORT btScalar btGeneric6DofSpring2Constraint_getRelativePivotPosition(btGeneric6DofSpring2Constraint* obj, int axis_index);
  EXPORT btRotationalLimitMotor2* btGeneric6DofSpring2Constraint_getRotationalLimitMotor(btGeneric6DofSpring2Constraint* obj, int index);
  EXPORT RotateOrder btGeneric6DofSpring2Constraint_getRotationOrder(btGeneric6DofSpring2Constraint* obj);
  EXPORT btTranslationalLimitMotor2* btGeneric6DofSpring2Constraint_getTranslationalLimitMotor(btGeneric6DofSpring2Constraint* obj);
  EXPORT bool btGeneric6DofSpring2Constraint_isLimited(btGeneric6DofSpring2Constraint* obj, int limitIndex);
  EXPORT bool btGeneric6DofSpring2Constraint_matrixToEulerZXY(const btMatrix3x3* mat, btVector3* xyz);
  EXPORT bool btGeneric6DofSpring2Constraint_matrixToEulerZYX(const btMatrix3x3* mat, btVector3* xyz);
  EXPORT bool btGeneric6DofSpring2Constraint_matrixToEulerXZY(const btMatrix3x3* mat, btVector3* xyz);
  EXPORT bool btGeneric6DofSpring2Constraint_matrixToEulerXYZ(const btMatrix3x3* mat, btVector3* xyz);
  EXPORT bool btGeneric6DofSpring2Constraint_matrixToEulerYZX(const btMatrix3x3* mat, btVector3* xyz);
  EXPORT bool btGeneric6DofSpring2Constraint_matrixToEulerYXZ(const btMatrix3x3* mat, btVector3* xyz);
  EXPORT void btGeneric6DofSpring2Constraint_setAngularLowerLimit(btGeneric6DofSpring2Constraint* obj, const btVector3* angularLower);
  EXPORT void btGeneric6DofSpring2Constraint_setAngularLowerLimitReversed(btGeneric6DofSpring2Constraint* obj, const btVector3* angularLower);
  EXPORT void btGeneric6DofSpring2Constraint_setAngularUpperLimit(btGeneric6DofSpring2Constraint* obj, const btVector3* angularUpper);
  EXPORT void btGeneric6DofSpring2Constraint_setAngularUpperLimitReversed(btGeneric6DofSpring2Constraint* obj, const btVector3* angularUpper);
  EXPORT void btGeneric6DofSpring2Constraint_setAxis(btGeneric6DofSpring2Constraint* obj, const btVector3* axis1, const btVector3* axis2);
  EXPORT void btGeneric6DofSpring2Constraint_setBounce(btGeneric6DofSpring2Constraint* obj, int index, btScalar bounce);
  EXPORT void btGeneric6DofSpring2Constraint_setDamping(btGeneric6DofSpring2Constraint* obj, int index, btScalar damping, bool limitIfNeeded);
  EXPORT void btGeneric6DofSpring2Constraint_setEquilibriumPoint(btGeneric6DofSpring2Constraint* obj);
  EXPORT void btGeneric6DofSpring2Constraint_setEquilibriumPoint2(btGeneric6DofSpring2Constraint* obj, int index, btScalar val);
  EXPORT void btGeneric6DofSpring2Constraint_setEquilibriumPoint3(btGeneric6DofSpring2Constraint* obj, int index);
  EXPORT void btGeneric6DofSpring2Constraint_setFrames(btGeneric6DofSpring2Constraint* obj, const btTransform* frameA, const btTransform* frameB);
  EXPORT void btGeneric6DofSpring2Constraint_setLimit(btGeneric6DofSpring2Constraint* obj, int axis, btScalar lo, btScalar hi);
  EXPORT void btGeneric6DofSpring2Constraint_setLimitReversed(btGeneric6DofSpring2Constraint* obj, int axis, btScalar lo, btScalar hi);
  EXPORT void btGeneric6DofSpring2Constraint_setLinearLowerLimit(btGeneric6DofSpring2Constraint* obj, const btVector3* linearLower);
  EXPORT void btGeneric6DofSpring2Constraint_setLinearUpperLimit(btGeneric6DofSpring2Constraint* obj, const btVector3* linearUpper);
  EXPORT void btGeneric6DofSpring2Constraint_setMaxMotorForce(btGeneric6DofSpring2Constraint* obj, int index, btScalar force);
  EXPORT void btGeneric6DofSpring2Constraint_setRotationOrder(btGeneric6DofSpring2Constraint* obj, RotateOrder order);
  EXPORT void btGeneric6DofSpring2Constraint_setServo(btGeneric6DofSpring2Constraint* obj, int index, bool onOff);
  EXPORT void btGeneric6DofSpring2Constraint_setServoTarget(btGeneric6DofSpring2Constraint* obj, int index, btScalar target);
  EXPORT void btGeneric6DofSpring2Constraint_setStiffness(btGeneric6DofSpring2Constraint* obj, int index, btScalar stiffness, bool limitIfNeeded);
  EXPORT void btGeneric6DofSpring2Constraint_setTargetVelocity(btGeneric6DofSpring2Constraint* obj, int index, btScalar velocity);
#ifdef __cplusplus
}
#endif
