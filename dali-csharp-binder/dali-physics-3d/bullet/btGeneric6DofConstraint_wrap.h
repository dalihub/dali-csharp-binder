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
  EXPORT btRotationalLimitMotor* btRotationalLimitMotor_new();
  EXPORT btRotationalLimitMotor* btRotationalLimitMotor_new2(const btRotationalLimitMotor* limot);
  EXPORT btScalar btRotationalLimitMotor_getAccumulatedImpulse(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getBounce(btRotationalLimitMotor* obj);
  EXPORT int btRotationalLimitMotor_getCurrentLimit(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getCurrentLimitError(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getCurrentPosition(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getDamping(btRotationalLimitMotor* obj);
  EXPORT bool btRotationalLimitMotor_getEnableMotor(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getHiLimit(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getLimitSoftness(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getLoLimit(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getMaxLimitForce(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getMaxMotorForce(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getNormalCFM(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getStopCFM(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getStopERP(btRotationalLimitMotor* obj);
  EXPORT btScalar btRotationalLimitMotor_getTargetVelocity(btRotationalLimitMotor* obj);
  EXPORT bool btRotationalLimitMotor_isLimited(btRotationalLimitMotor* obj);
  EXPORT bool btRotationalLimitMotor_needApplyTorques(btRotationalLimitMotor* obj);
  EXPORT void btRotationalLimitMotor_setAccumulatedImpulse(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setBounce(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setCurrentLimit(btRotationalLimitMotor* obj, int value);
  EXPORT void btRotationalLimitMotor_setCurrentLimitError(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setCurrentPosition(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setDamping(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setEnableMotor(btRotationalLimitMotor* obj, bool value);
  EXPORT void btRotationalLimitMotor_setHiLimit(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setLimitSoftness(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setLoLimit(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setMaxLimitForce(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setMaxMotorForce(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setNormalCFM(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setStopCFM(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setStopERP(btRotationalLimitMotor* obj, btScalar value);
  EXPORT void btRotationalLimitMotor_setTargetVelocity(btRotationalLimitMotor* obj, btScalar value);
  EXPORT btScalar btRotationalLimitMotor_solveAngularLimits(btRotationalLimitMotor* obj, btScalar timeStep, btVector3* axis, btScalar jacDiagABInv, btRigidBody* body0, btRigidBody* body1);
  EXPORT int btRotationalLimitMotor_testLimitValue(btRotationalLimitMotor* obj, btScalar test_value);
  EXPORT void btRotationalLimitMotor_delete(btRotationalLimitMotor* obj);

  EXPORT btTranslationalLimitMotor* btTranslationalLimitMotor_new();
  EXPORT btTranslationalLimitMotor* btTranslationalLimitMotor_new2(const btTranslationalLimitMotor* other);
  EXPORT void btTranslationalLimitMotor_getAccumulatedImpulse(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT int* btTranslationalLimitMotor_getCurrentLimit(btTranslationalLimitMotor* obj);
  EXPORT void btTranslationalLimitMotor_getCurrentLimitError(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor_getCurrentLinearDiff(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT btScalar btTranslationalLimitMotor_getDamping(btTranslationalLimitMotor* obj);
  EXPORT bool* btTranslationalLimitMotor_getEnableMotor(btTranslationalLimitMotor* obj);
  EXPORT btScalar btTranslationalLimitMotor_getLimitSoftness(btTranslationalLimitMotor* obj);
  EXPORT void btTranslationalLimitMotor_getLowerLimit(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor_getMaxMotorForce(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor_getNormalCFM(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT btScalar btTranslationalLimitMotor_getRestitution(btTranslationalLimitMotor* obj);
  EXPORT void btTranslationalLimitMotor_getStopCFM(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor_getStopERP(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor_getTargetVelocity(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT void btTranslationalLimitMotor_getUpperLimit(btTranslationalLimitMotor* obj, btVector3* value);
  EXPORT bool btTranslationalLimitMotor_isLimited(btTranslationalLimitMotor* obj, int limitIndex);
  EXPORT bool btTranslationalLimitMotor_needApplyForce(btTranslationalLimitMotor* obj, int limitIndex);
  EXPORT void btTranslationalLimitMotor_setAccumulatedImpulse(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setCurrentLimitError(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setCurrentLinearDiff(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setDamping(btTranslationalLimitMotor* obj, btScalar value);
  EXPORT void btTranslationalLimitMotor_setLimitSoftness(btTranslationalLimitMotor* obj, btScalar value);
  EXPORT void btTranslationalLimitMotor_setLowerLimit(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setMaxMotorForce(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setNormalCFM(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setRestitution(btTranslationalLimitMotor* obj, btScalar value);
  EXPORT void btTranslationalLimitMotor_setStopCFM(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setStopERP(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setTargetVelocity(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT void btTranslationalLimitMotor_setUpperLimit(btTranslationalLimitMotor* obj, const btVector3* value);
  EXPORT btScalar btTranslationalLimitMotor_solveLinearAxis(btTranslationalLimitMotor* obj, btScalar timeStep, btScalar jacDiagABInv, btRigidBody* body1, const btVector3* pointInA, btRigidBody* body2, const btVector3* pointInB, int limit_index, const btVector3* axis_normal_on_a, const btVector3* anchorPos);
  EXPORT int btTranslationalLimitMotor_testLimitValue(btTranslationalLimitMotor* obj, int limitIndex, btScalar test_value);
  EXPORT void btTranslationalLimitMotor_delete(btTranslationalLimitMotor* obj);

  EXPORT btGeneric6DofConstraint* btGeneric6DofConstraint_new(btRigidBody* rbA, btRigidBody* rbB, const btTransform* frameInA, const btTransform* frameInB, bool useLinearReferenceFrameA);
  EXPORT btGeneric6DofConstraint* btGeneric6DofConstraint_new2(btRigidBody* rbB, const btTransform* frameInB, bool useLinearReferenceFrameB);
  EXPORT void btGeneric6DofConstraint_calcAnchorPos(btGeneric6DofConstraint* obj);
  EXPORT void btGeneric6DofConstraint_calculateTransforms(btGeneric6DofConstraint* obj, const btTransform* transA, const btTransform* transB);
  EXPORT void btGeneric6DofConstraint_calculateTransforms2(btGeneric6DofConstraint* obj);
  EXPORT int btGeneric6DofConstraint_get_limit_motor_info2(btGeneric6DofConstraint* obj, btRotationalLimitMotor* limot, const btTransform* transA, const btTransform* transB, const btVector3* linVelA, const btVector3* linVelB, const btVector3* angVelA, const btVector3* angVelB, btTypedConstraint_btConstraintInfo2* info, int row, btVector3* ax1, int rotational, int rotAllowed);
  EXPORT btScalar btGeneric6DofConstraint_getAngle(btGeneric6DofConstraint* obj, int axis_index);
  EXPORT void btGeneric6DofConstraint_getAngularLowerLimit(btGeneric6DofConstraint* obj, btVector3* angularLower);
  EXPORT void btGeneric6DofConstraint_getAngularUpperLimit(btGeneric6DofConstraint* obj, btVector3* angularUpper);
  EXPORT void btGeneric6DofConstraint_getAxis(btGeneric6DofConstraint* obj, int axis_index, btVector3* value);
  EXPORT void btGeneric6DofConstraint_getCalculatedTransformA(btGeneric6DofConstraint* obj, btTransform* value);
  EXPORT void btGeneric6DofConstraint_getCalculatedTransformB(btGeneric6DofConstraint* obj, btTransform* value);
  EXPORT int btGeneric6DofConstraint_getFlags(btGeneric6DofConstraint* obj);
  EXPORT void btGeneric6DofConstraint_getFrameOffsetA(btGeneric6DofConstraint* obj, btTransform* value);
  EXPORT void btGeneric6DofConstraint_getFrameOffsetB(btGeneric6DofConstraint* obj, btTransform* value);
  EXPORT void btGeneric6DofConstraint_getInfo1NonVirtual(btGeneric6DofConstraint* obj, btTypedConstraint_btConstraintInfo1* info);
  EXPORT void btGeneric6DofConstraint_getInfo2NonVirtual(btGeneric6DofConstraint* obj, btTypedConstraint_btConstraintInfo2* info, const btTransform* transA, const btTransform* transB, const btVector3* linVelA, const btVector3* linVelB, const btVector3* angVelA, const btVector3* angVelB);
  EXPORT void btGeneric6DofConstraint_getLinearLowerLimit(btGeneric6DofConstraint* obj, btVector3* linearLower);
  EXPORT void btGeneric6DofConstraint_getLinearUpperLimit(btGeneric6DofConstraint* obj, btVector3* linearUpper);
  EXPORT btScalar btGeneric6DofConstraint_getRelativePivotPosition(btGeneric6DofConstraint* obj, int axis_index);
  EXPORT btRotationalLimitMotor* btGeneric6DofConstraint_getRotationalLimitMotor(btGeneric6DofConstraint* obj, int index);
  EXPORT btTranslationalLimitMotor* btGeneric6DofConstraint_getTranslationalLimitMotor(btGeneric6DofConstraint* obj);
  EXPORT bool btGeneric6DofConstraint_getUseFrameOffset(btGeneric6DofConstraint* obj);
  EXPORT bool btGeneric6DofConstraint_getUseLinearReferenceFrameA(btGeneric6DofConstraint* obj);
  EXPORT bool btGeneric6DofConstraint_getUseSolveConstraintObsolete(btGeneric6DofConstraint* obj);
  EXPORT bool btGeneric6DofConstraint_isLimited(btGeneric6DofConstraint* obj, int limitIndex);
  EXPORT void btGeneric6DofConstraint_setAngularLowerLimit(btGeneric6DofConstraint* obj, const btVector3* angularLower);
  EXPORT void btGeneric6DofConstraint_setAngularUpperLimit(btGeneric6DofConstraint* obj, const btVector3* angularUpper);
  EXPORT void btGeneric6DofConstraint_setAxis(btGeneric6DofConstraint* obj, const btVector3* axis1, const btVector3* axis2);
  EXPORT void btGeneric6DofConstraint_setFrames(btGeneric6DofConstraint* obj, const btTransform* frameA, const btTransform* frameB);
  EXPORT void btGeneric6DofConstraint_setLimit(btGeneric6DofConstraint* obj, int axis, btScalar lo, btScalar hi);
  EXPORT void btGeneric6DofConstraint_setLinearLowerLimit(btGeneric6DofConstraint* obj, const btVector3* linearLower);
  EXPORT void btGeneric6DofConstraint_setLinearUpperLimit(btGeneric6DofConstraint* obj, const btVector3* linearUpper);
  EXPORT void btGeneric6DofConstraint_setUseFrameOffset(btGeneric6DofConstraint* obj, bool frameOffsetOnOff);
  EXPORT void btGeneric6DofConstraint_setUseLinearReferenceFrameA(btGeneric6DofConstraint* obj, bool linearReferenceFrameA);
  EXPORT void btGeneric6DofConstraint_setUseSolveConstraintObsolete(btGeneric6DofConstraint* obj, bool value);
  EXPORT bool btGeneric6DofConstraint_testAngularLimitMotor(btGeneric6DofConstraint* obj, int axis_index);
  EXPORT void btGeneric6DofConstraint_updateRHS(btGeneric6DofConstraint* obj, btScalar timeStep);
#ifdef __cplusplus
}
#endif
