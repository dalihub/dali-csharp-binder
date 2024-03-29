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
  EXPORT btJointFeedback* btJointFeedback_new();
  EXPORT void btJointFeedback_getAppliedForceBodyA(btJointFeedback* obj, btVector3* value);
  EXPORT void btJointFeedback_getAppliedForceBodyB(btJointFeedback* obj, btVector3* value);
  EXPORT void btJointFeedback_getAppliedTorqueBodyA(btJointFeedback* obj, btVector3* value);
  EXPORT void btJointFeedback_getAppliedTorqueBodyB(btJointFeedback* obj, btVector3* value);
  EXPORT void btJointFeedback_setAppliedForceBodyA(btJointFeedback* obj, const btVector3* value);
  EXPORT void btJointFeedback_setAppliedForceBodyB(btJointFeedback* obj, const btVector3* value);
  EXPORT void btJointFeedback_setAppliedTorqueBodyA(btJointFeedback* obj, const btVector3* value);
  EXPORT void btJointFeedback_setAppliedTorqueBodyB(btJointFeedback* obj, const btVector3* value);
  EXPORT void btJointFeedback_delete(btJointFeedback* obj);

  EXPORT btTypedConstraint_btConstraintInfo1* btTypedConstraint_btConstraintInfo1_new();
  EXPORT int btTypedConstraint_btConstraintInfo1_getNub(btTypedConstraint_btConstraintInfo1* obj);
  EXPORT int btTypedConstraint_btConstraintInfo1_getNumConstraintRows(btTypedConstraint_btConstraintInfo1* obj);
  EXPORT void btTypedConstraint_btConstraintInfo1_setNub(btTypedConstraint_btConstraintInfo1* obj, int value);
  EXPORT void btTypedConstraint_btConstraintInfo1_setNumConstraintRows(btTypedConstraint_btConstraintInfo1* obj, int value);
  EXPORT void btTypedConstraint_btConstraintInfo1_delete(btTypedConstraint_btConstraintInfo1* obj);

  EXPORT btTypedConstraint_btConstraintInfo2* btTypedConstraint_btConstraintInfo2_new();
  EXPORT btScalar* btTypedConstraint_btConstraintInfo2_getCfm(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar* btTypedConstraint_btConstraintInfo2_getConstraintError(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar btTypedConstraint_btConstraintInfo2_getDamping(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar btTypedConstraint_btConstraintInfo2_getErp(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar btTypedConstraint_btConstraintInfo2_getFps(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar* btTypedConstraint_btConstraintInfo2_getJ1angularAxis(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar* btTypedConstraint_btConstraintInfo2_getJ1linearAxis(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar* btTypedConstraint_btConstraintInfo2_getJ2angularAxis(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar* btTypedConstraint_btConstraintInfo2_getJ2linearAxis(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar* btTypedConstraint_btConstraintInfo2_getLowerLimit(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT int btTypedConstraint_btConstraintInfo2_getNumIterations(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT int btTypedConstraint_btConstraintInfo2_getRowskip(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT btScalar* btTypedConstraint_btConstraintInfo2_getUpperLimit(btTypedConstraint_btConstraintInfo2* obj);
  EXPORT void btTypedConstraint_btConstraintInfo2_setCfm(btTypedConstraint_btConstraintInfo2* obj, btScalar* value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setConstraintError(btTypedConstraint_btConstraintInfo2* obj, btScalar* value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setDamping(btTypedConstraint_btConstraintInfo2* obj, btScalar value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setErp(btTypedConstraint_btConstraintInfo2* obj, btScalar value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setFps(btTypedConstraint_btConstraintInfo2* obj, btScalar value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setJ1angularAxis(btTypedConstraint_btConstraintInfo2* obj, btScalar* value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setJ1linearAxis(btTypedConstraint_btConstraintInfo2* obj, btScalar* value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setJ2angularAxis(btTypedConstraint_btConstraintInfo2* obj, btScalar* value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setJ2linearAxis(btTypedConstraint_btConstraintInfo2* obj, btScalar* value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setLowerLimit(btTypedConstraint_btConstraintInfo2* obj, btScalar* value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setNumIterations(btTypedConstraint_btConstraintInfo2* obj, int value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setRowskip(btTypedConstraint_btConstraintInfo2* obj, int value);
  EXPORT void btTypedConstraint_btConstraintInfo2_setUpperLimit(btTypedConstraint_btConstraintInfo2* obj, btScalar* value);
  EXPORT void btTypedConstraint_btConstraintInfo2_delete(btTypedConstraint_btConstraintInfo2* obj);

  EXPORT void btTypedConstraint_buildJacobian(btTypedConstraint* obj);
  EXPORT int btTypedConstraint_calculateSerializeBufferSize(btTypedConstraint* obj);
  EXPORT void btTypedConstraint_enableFeedback(btTypedConstraint* obj, bool needsFeedback);
  EXPORT btScalar btTypedConstraint_getAppliedImpulse(btTypedConstraint* obj);
  EXPORT btScalar btTypedConstraint_getBreakingImpulseThreshold(btTypedConstraint* obj);
  EXPORT btTypedConstraintType btTypedConstraint_getConstraintType(btTypedConstraint* obj);
  EXPORT btScalar btTypedConstraint_getDbgDrawSize(btTypedConstraint* obj);
  EXPORT btRigidBody* btTypedConstraint_getFixedBody();
  EXPORT void btTypedConstraint_getInfo1(btTypedConstraint* obj, btTypedConstraint_btConstraintInfo1* info);
  EXPORT void btTypedConstraint_getInfo2(btTypedConstraint* obj, btTypedConstraint_btConstraintInfo2* info);
  EXPORT btJointFeedback* btTypedConstraint_getJointFeedback(btTypedConstraint* obj);
  EXPORT int btTypedConstraint_getOverrideNumSolverIterations(btTypedConstraint* obj);
  EXPORT btScalar btTypedConstraint_getParam(btTypedConstraint* obj, int num);
  EXPORT btScalar btTypedConstraint_getParam2(btTypedConstraint* obj, int num, int axis);
  EXPORT btRigidBody* btTypedConstraint_getRigidBodyA(btTypedConstraint* obj);
  EXPORT btRigidBody* btTypedConstraint_getRigidBodyB(btTypedConstraint* obj);
  EXPORT int btTypedConstraint_getUid(btTypedConstraint* obj);
  EXPORT int btTypedConstraint_getUserConstraintId(btTypedConstraint* obj);
  EXPORT void* btTypedConstraint_getUserConstraintPtr(btTypedConstraint* obj);
  EXPORT int btTypedConstraint_getUserConstraintType(btTypedConstraint* obj);
  EXPORT btScalar btTypedConstraint_internalGetAppliedImpulse(btTypedConstraint* obj);
  EXPORT void btTypedConstraint_internalSetAppliedImpulse(btTypedConstraint* obj, btScalar appliedImpulse);
  EXPORT bool btTypedConstraint_isEnabled(btTypedConstraint* obj);
  EXPORT bool btTypedConstraint_needsFeedback(btTypedConstraint* obj);
  EXPORT const char* btTypedConstraint_serialize(btTypedConstraint* obj, void* dataBuffer, btSerializer* serializer);
  EXPORT void btTypedConstraint_setBreakingImpulseThreshold(btTypedConstraint* obj, btScalar threshold);
  EXPORT void btTypedConstraint_setDbgDrawSize(btTypedConstraint* obj, btScalar dbgDrawSize);
  EXPORT void btTypedConstraint_setEnabled(btTypedConstraint* obj, bool enabled);
  EXPORT void btTypedConstraint_setJointFeedback(btTypedConstraint* obj, btJointFeedback* jointFeedback);
  EXPORT void btTypedConstraint_setOverrideNumSolverIterations(btTypedConstraint* obj, int overideNumIterations);
  EXPORT void btTypedConstraint_setParam(btTypedConstraint* obj, int num, btScalar value);
  EXPORT void btTypedConstraint_setParam2(btTypedConstraint* obj, int num, btScalar value, int axis);
  EXPORT void btTypedConstraint_setupSolverConstraint(btTypedConstraint* obj, btAlignedObjectArray_btSolverConstraint* ca, int solverBodyA, int solverBodyB, btScalar timeStep);
  EXPORT void btTypedConstraint_setUserConstraintId(btTypedConstraint* obj, int uid);
  EXPORT void btTypedConstraint_setUserConstraintPtr(btTypedConstraint* obj, void* ptr);
  EXPORT void btTypedConstraint_setUserConstraintType(btTypedConstraint* obj, int userConstraintType);
  EXPORT void btTypedConstraint_solveConstraintObsolete(btTypedConstraint* obj, btSolverBody* __unnamed0, btSolverBody* __unnamed1, btScalar __unnamed2);
  EXPORT void btTypedConstraint_delete(btTypedConstraint* obj);

  EXPORT btAngularLimit* btAngularLimit_new();
  EXPORT void btAngularLimit_fit(btAngularLimit* obj, btScalar* angle);
  EXPORT btScalar btAngularLimit_getBiasFactor(btAngularLimit* obj);
  EXPORT btScalar btAngularLimit_getCorrection(btAngularLimit* obj);
  EXPORT btScalar btAngularLimit_getError(btAngularLimit* obj);
  EXPORT btScalar btAngularLimit_getHalfRange(btAngularLimit* obj);
  EXPORT btScalar btAngularLimit_getHigh(btAngularLimit* obj);
  EXPORT btScalar btAngularLimit_getLow(btAngularLimit* obj);
  EXPORT btScalar btAngularLimit_getRelaxationFactor(btAngularLimit* obj);
  EXPORT btScalar btAngularLimit_getSign(btAngularLimit* obj);
  EXPORT btScalar btAngularLimit_getSoftness(btAngularLimit* obj);
  EXPORT bool btAngularLimit_isLimit(btAngularLimit* obj);
  EXPORT void btAngularLimit_set(btAngularLimit* obj, btScalar low, btScalar high, btScalar _softness, btScalar _biasFactor, btScalar _relaxationFactor);
  EXPORT void btAngularLimit_test(btAngularLimit* obj, btScalar angle);
  EXPORT void btAngularLimit_delete(btAngularLimit* obj);
#ifdef __cplusplus
}
#endif
