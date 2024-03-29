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
  EXPORT btMultiBody* btMultiBody_new(int n_links, btScalar mass, const btVector3* inertia, bool fixedBase, bool canSleep);
  EXPORT void btMultiBody_addBaseConstraintForce(btMultiBody* obj, const btVector3* f);
  EXPORT void btMultiBody_addBaseConstraintTorque(btMultiBody* obj, const btVector3* t);
  EXPORT void btMultiBody_addBaseForce(btMultiBody* obj, const btVector3* f);
  EXPORT void btMultiBody_addBaseTorque(btMultiBody* obj, const btVector3* t);
  EXPORT void btMultiBody_addJointTorque(btMultiBody* obj, int i, btScalar Q);
  EXPORT void btMultiBody_addJointTorqueMultiDof(btMultiBody* obj, int i, const btScalar* Q);
  EXPORT void btMultiBody_addJointTorqueMultiDof2(btMultiBody* obj, int i, int dof, btScalar Q);
  EXPORT void btMultiBody_addLinkConstraintForce(btMultiBody* obj, int i, const btVector3* f);
  EXPORT void btMultiBody_addLinkConstraintTorque(btMultiBody* obj, int i, const btVector3* t);
  EXPORT void btMultiBody_addLinkForce(btMultiBody* obj, int i, const btVector3* f);
  EXPORT void btMultiBody_addLinkTorque(btMultiBody* obj, int i, const btVector3* t);
  EXPORT void btMultiBody_applyDeltaVeeMultiDof(btMultiBody* obj, const btScalar* delta_vee, btScalar multiplier);
  EXPORT void btMultiBody_applyDeltaVeeMultiDof2(btMultiBody* obj, const btScalar* delta_vee, btScalar multiplier);
  EXPORT void btMultiBody_calcAccelerationDeltasMultiDof(btMultiBody* obj, const btScalar* force, btScalar* output, btAlignedObjectArray_btScalar* scratch_r, btAlignedObjectArray_btVector3* scratch_v);
  EXPORT int btMultiBody_calculateSerializeBufferSize(btMultiBody* obj);
  EXPORT void btMultiBody_checkMotionAndSleepIfRequired(btMultiBody* obj, btScalar timestep);
  EXPORT void btMultiBody_clearConstraintForces(btMultiBody* obj);
  EXPORT void btMultiBody_clearForcesAndTorques(btMultiBody* obj);
  EXPORT void btMultiBody_clearVelocities(btMultiBody* obj);
  EXPORT void btMultiBody_computeAccelerationsArticulatedBodyAlgorithmMultiDof(btMultiBody* obj, btScalar dt, btAlignedObjectArray_btScalar* scratch_r, btAlignedObjectArray_btVector3* scratch_v, btAlignedObjectArray_btMatrix3x3* scratch_m, bool isConstraintPass, bool jointFeedbackInWorldSpace, bool jointFeedbackInJointFrame);
  EXPORT void btMultiBody_fillConstraintJacobianMultiDof(btMultiBody* obj, int link, const btVector3* contact_point, const btVector3* normal_ang, const btVector3* normal_lin, btScalar* jac, btAlignedObjectArray_btScalar* scratch_r, btAlignedObjectArray_btVector3* scratch_v, btAlignedObjectArray_btMatrix3x3* scratch_m);
  EXPORT void btMultiBody_fillContactJacobianMultiDof(btMultiBody* obj, int link, const btVector3* contact_point, const btVector3* normal, btScalar* jac, btAlignedObjectArray_btScalar* scratch_r, btAlignedObjectArray_btVector3* scratch_v, btAlignedObjectArray_btMatrix3x3* scratch_m);
  EXPORT void btMultiBody_finalizeMultiDof(btMultiBody* obj);
  EXPORT void btMultiBody_forwardKinematics(btMultiBody* obj, btAlignedObjectArray_btQuaternion* scratch_q, btAlignedObjectArray_btVector3* scratch_m);
  EXPORT btScalar btMultiBody_getAngularDamping(btMultiBody* obj);
  EXPORT btMultiBodyLinkCollider* btMultiBody_getBaseCollider(btMultiBody* obj);
  EXPORT void btMultiBody_getBaseForce(btMultiBody* obj, btVector3* value);
  EXPORT void btMultiBody_getBaseInertia(btMultiBody* obj, btVector3* value);
  EXPORT btScalar btMultiBody_getBaseMass(btMultiBody* obj);
  EXPORT const char* btMultiBody_getBaseName(btMultiBody* obj);
  EXPORT void btMultiBody_getBaseOmega(btMultiBody* obj, btVector3* value);
  EXPORT void btMultiBody_getBasePos(btMultiBody* obj, btVector3* value);
  EXPORT void btMultiBody_getBaseTorque(btMultiBody* obj, btVector3* value);
  EXPORT void btMultiBody_getBaseVel(btMultiBody* obj, btVector3* value);
  EXPORT void btMultiBody_getBaseWorldTransform(btMultiBody* obj, btTransform* value);
  EXPORT bool btMultiBody_getCanSleep(btMultiBody* obj);
  EXPORT int btMultiBody_getCompanionId(btMultiBody* obj);
  EXPORT void btMultiBody_getInterpolateBasePos(btMultiBody* obj, btVector3* value);
  EXPORT void btMultiBody_getInterpolateParentToLocalRot(btMultiBody* obj, int i, btQuaternion* value);
  EXPORT void btMultiBody_getInterpolateRVector(btMultiBody* obj, int i, btVector3* value);
  EXPORT void btMultiBody_getInterpolateWorldToBaseRot(btMultiBody* obj, btQuaternion* value);
  EXPORT btScalar btMultiBody_getJointPos(btMultiBody* obj, int i);
  EXPORT btScalar* btMultiBody_getJointPosMultiDof(btMultiBody* obj, int i);
  EXPORT btScalar btMultiBody_getJointTorque(btMultiBody* obj, int i);
  EXPORT btScalar* btMultiBody_getJointTorqueMultiDof(btMultiBody* obj, int i);
  EXPORT btScalar btMultiBody_getJointVel(btMultiBody* obj, int i);
  EXPORT btScalar* btMultiBody_getJointVelMultiDof(btMultiBody* obj, int i);
  EXPORT btScalar btMultiBody_getLinearDamping(btMultiBody* obj);
  EXPORT btMultibodyLink* btMultiBody_getLink(btMultiBody* obj, int index);
  EXPORT void btMultiBody_getLinkForce(btMultiBody* obj, int i, btVector3* value);
  EXPORT void btMultiBody_getLinkInertia(btMultiBody* obj, int i, btVector3* value);
  EXPORT btScalar btMultiBody_getLinkMass(btMultiBody* obj, int i);
  EXPORT void btMultiBody_getLinkTorque(btMultiBody* obj, int i, btVector3* value);
  EXPORT btScalar btMultiBody_getMaxAppliedImpulse(btMultiBody* obj);
  EXPORT btScalar btMultiBody_getMaxCoordinateVelocity(btMultiBody* obj);
  EXPORT int btMultiBody_getNumDofs(btMultiBody* obj);
  EXPORT int btMultiBody_getNumLinks(btMultiBody* obj);
  EXPORT int btMultiBody_getNumPosVars(btMultiBody* obj);
  EXPORT int btMultiBody_getParent(btMultiBody* obj, int link_num);
  EXPORT void btMultiBody_getParentToLocalRot(btMultiBody* obj, int i, btQuaternion* value);
  EXPORT void btMultiBody_getRVector(btMultiBody* obj, int i, btVector3* value);
  EXPORT bool btMultiBody_getUseGyroTerm(btMultiBody* obj);
  EXPORT int btMultiBody_getUserIndex(btMultiBody* obj);
  EXPORT int btMultiBody_getUserIndex2(btMultiBody* obj);
  EXPORT void* btMultiBody_getUserPointer(btMultiBody* obj);
  EXPORT const btScalar* btMultiBody_getVelocityVector(btMultiBody* obj);
  EXPORT void btMultiBody_getWorldToBaseRot(btMultiBody* obj, btQuaternion* value);
  EXPORT void btMultiBody_goToSleep(btMultiBody* obj);
  EXPORT bool btMultiBody_hasFixedBase(btMultiBody* obj);
  EXPORT bool btMultiBody_hasSelfCollision(btMultiBody* obj);
  EXPORT bool btMultiBody_internalNeedsJointFeedback(btMultiBody* obj);
  EXPORT bool btMultiBody_isAwake(btMultiBody* obj);
  EXPORT bool btMultiBody_isPosUpdated(btMultiBody* obj);
  EXPORT bool btMultiBody_isUsingGlobalVelocities(btMultiBody* obj);
  EXPORT bool btMultiBody_isUsingRK4Integration(btMultiBody* obj);
  EXPORT void btMultiBody_localDirToWorld(btMultiBody* obj, int i, const btVector3* vec, btVector3* value);
  EXPORT void btMultiBody_localFrameToWorld(btMultiBody* obj, int i, const btMatrix3x3* mat, btMatrix3x3* value);
  EXPORT void btMultiBody_localPosToWorld(btMultiBody* obj, int i, const btVector3* vec, btVector3* value);
  EXPORT void btMultiBody_predictPositionsMultiDof(btMultiBody* obj, btScalar dt);
  EXPORT void btMultiBody_processDeltaVeeMultiDof2(btMultiBody* obj);
  EXPORT const char* btMultiBody_serialize(btMultiBody* obj, void* dataBuffer, btSerializer* serializer);
  EXPORT void btMultiBody_setAngularDamping(btMultiBody* obj, btScalar damp);
  EXPORT void btMultiBody_setBaseCollider(btMultiBody* obj, btMultiBodyLinkCollider* collider);
  EXPORT void btMultiBody_setBaseInertia(btMultiBody* obj, const btVector3* inertia);
  EXPORT void btMultiBody_setBaseMass(btMultiBody* obj, btScalar mass);
  EXPORT void btMultiBody_setBaseName(btMultiBody* obj, const char* name);
  EXPORT void btMultiBody_setBaseOmega(btMultiBody* obj, const btVector3* omega);
  EXPORT void btMultiBody_setBasePos(btMultiBody* obj, const btVector3* pos);
  EXPORT void btMultiBody_setBaseVel(btMultiBody* obj, const btVector3* vel);
  EXPORT void btMultiBody_setBaseWorldTransform(btMultiBody* obj, const btTransform* tr);
  EXPORT void btMultiBody_setCanSleep(btMultiBody* obj, bool canSleep);
  EXPORT void btMultiBody_setCompanionId(btMultiBody* obj, int id);
  EXPORT void btMultiBody_setFixedBase(btMultiBody* obj, bool fixedBase);
  EXPORT void btMultiBody_setHasSelfCollision(btMultiBody* obj, bool hasSelfCollision);
  EXPORT void btMultiBody_setJointPos(btMultiBody* obj, int i, btScalar q);
  EXPORT void btMultiBody_setJointPosMultiDof(btMultiBody* obj, int i, btScalar* q);
  EXPORT void btMultiBody_setJointVel(btMultiBody* obj, int i, btScalar qdot);
  EXPORT void btMultiBody_setJointVelMultiDof(btMultiBody* obj, int i, btScalar* qdot);
  EXPORT void btMultiBody_setLinearDamping(btMultiBody* obj, btScalar damp);
  EXPORT void btMultiBody_setMaxAppliedImpulse(btMultiBody* obj, btScalar maxImp);
  EXPORT void btMultiBody_setMaxCoordinateVelocity(btMultiBody* obj, btScalar maxVel);
  EXPORT void btMultiBody_setNumLinks(btMultiBody* obj, int numLinks);
  EXPORT void btMultiBody_setPosUpdated(btMultiBody* obj, bool updated);
  EXPORT void btMultiBody_setupFixed(btMultiBody* obj, int linkIndex, btScalar mass, const btVector3* inertia, int parent, const btQuaternion* rotParentToThis, const btVector3* parentComToThisPivotOffset, const btVector3* thisPivotToThisComOffset, bool deprecatedDisableParentCollision);
  EXPORT void btMultiBody_setupPlanar(btMultiBody* obj, int i, btScalar mass, const btVector3* inertia, int parent, const btQuaternion* rotParentToThis, const btVector3* rotationAxis, const btVector3* parentComToThisComOffset, bool disableParentCollision);
  EXPORT void btMultiBody_setupPrismatic(btMultiBody* obj, int i, btScalar mass, const btVector3* inertia, int parent, const btQuaternion* rotParentToThis, const btVector3* jointAxis, const btVector3* parentComToThisPivotOffset, const btVector3* thisPivotToThisComOffset, bool disableParentCollision);
  EXPORT void btMultiBody_setupRevolute(btMultiBody* obj, int linkIndex, btScalar mass, const btVector3* inertia, int parentIndex, const btQuaternion* rotParentToThis, const btVector3* jointAxis, const btVector3* parentComToThisPivotOffset, const btVector3* thisPivotToThisComOffset, bool disableParentCollision);
  EXPORT void btMultiBody_setupSpherical(btMultiBody* obj, int linkIndex, btScalar mass, const btVector3* inertia, int parent, const btQuaternion* rotParentToThis, const btVector3* parentComToThisPivotOffset, const btVector3* thisPivotToThisComOffset, bool disableParentCollision);
  EXPORT void btMultiBody_setUseGyroTerm(btMultiBody* obj, bool useGyro);
  EXPORT void btMultiBody_setUserIndex(btMultiBody* obj, int index);
  EXPORT void btMultiBody_setUserIndex2(btMultiBody* obj, int index);
  EXPORT void btMultiBody_setUserPointer(btMultiBody* obj, void* userPointer);
  EXPORT void btMultiBody_setWorldToBaseRot(btMultiBody* obj, const btQuaternion* rot);
  EXPORT void btMultiBody_stepPositionsMultiDof(btMultiBody* obj, btScalar dt, btScalar* pq, btScalar* pqd);
  EXPORT void btMultiBody_updateCollisionObjectWorldTransforms(btMultiBody* obj, btAlignedObjectArray_btQuaternion* scratch_q, btAlignedObjectArray_btVector3* scratch_m);
  EXPORT void btMultiBody_updateCollisionObjectInterpolationWorldTransforms2(btMultiBody* obj, btAlignedObjectArray_btQuaternion* world_to_local, btAlignedObjectArray_btVector3* local_origin);
  EXPORT void btMultiBody_useGlobalVelocities(btMultiBody* obj, bool use);
  EXPORT void btMultiBody_useRK4Integration(btMultiBody* obj, bool use);
  EXPORT void btMultiBody_wakeUp(btMultiBody* obj);
  EXPORT void btMultiBody_worldDirToLocal(btMultiBody* obj, int i, const btVector3* vec, btVector3* value);
  EXPORT void btMultiBody_worldPosToLocal(btMultiBody* obj, int i, const btVector3* vec, btVector3* value);
  EXPORT void btMultiBody_delete(btMultiBody* obj);
#ifdef __cplusplus
}
#endif
