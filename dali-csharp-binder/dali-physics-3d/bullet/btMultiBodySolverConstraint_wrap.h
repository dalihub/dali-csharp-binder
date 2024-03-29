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
  EXPORT btMultiBodySolverConstraint* btMultiBodySolverConstraint_new();
  EXPORT void btMultiBodySolverConstraint_getAngularComponentA(btMultiBodySolverConstraint* obj, btVector3* value);
  EXPORT void btMultiBodySolverConstraint_getAngularComponentB(btMultiBodySolverConstraint* obj, btVector3* value);
  EXPORT btScalar btMultiBodySolverConstraint_getAppliedImpulse(btMultiBodySolverConstraint* obj);
  EXPORT btScalar btMultiBodySolverConstraint_getAppliedPushImpulse(btMultiBodySolverConstraint* obj);
  EXPORT btScalar btMultiBodySolverConstraint_getCfm(btMultiBodySolverConstraint* obj);
  EXPORT void btMultiBodySolverConstraint_getContactNormal1(btMultiBodySolverConstraint* obj, btVector3* value);
  EXPORT void btMultiBodySolverConstraint_getContactNormal2(btMultiBodySolverConstraint* obj, btVector3* value);
  EXPORT int btMultiBodySolverConstraint_getDeltaVelAindex(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getDeltaVelBindex(btMultiBodySolverConstraint* obj);
  EXPORT btScalar btMultiBodySolverConstraint_getFriction(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getFrictionIndex(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getJacAindex(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getJacBindex(btMultiBodySolverConstraint* obj);
  EXPORT btScalar btMultiBodySolverConstraint_getJacDiagABInv(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getLinkA(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getLinkB(btMultiBodySolverConstraint* obj);
  EXPORT btScalar btMultiBodySolverConstraint_getLowerLimit(btMultiBodySolverConstraint* obj);
  EXPORT btMultiBody* btMultiBodySolverConstraint_getMultiBodyA(btMultiBodySolverConstraint* obj);
  EXPORT btMultiBody* btMultiBodySolverConstraint_getMultiBodyB(btMultiBodySolverConstraint* obj);
  EXPORT btMultiBodyConstraint* btMultiBodySolverConstraint_getOrgConstraint(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getOrgDofIndex(btMultiBodySolverConstraint* obj);
  EXPORT void* btMultiBodySolverConstraint_getOriginalContactPoint(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getOverrideNumSolverIterations(btMultiBodySolverConstraint* obj);
  EXPORT void btMultiBodySolverConstraint_getRelpos1CrossNormal(btMultiBodySolverConstraint* obj, btVector3* value);
  EXPORT void btMultiBodySolverConstraint_getRelpos2CrossNormal(btMultiBodySolverConstraint* obj, btVector3* value);
  EXPORT btScalar btMultiBodySolverConstraint_getRhs(btMultiBodySolverConstraint* obj);
  EXPORT btScalar btMultiBodySolverConstraint_getRhsPenetration(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getSolverBodyIdA(btMultiBodySolverConstraint* obj);
  EXPORT int btMultiBodySolverConstraint_getSolverBodyIdB(btMultiBodySolverConstraint* obj);
  EXPORT btScalar btMultiBodySolverConstraint_getUnusedPadding4(btMultiBodySolverConstraint* obj);
  EXPORT btScalar btMultiBodySolverConstraint_getUpperLimit(btMultiBodySolverConstraint* obj);
  EXPORT void btMultiBodySolverConstraint_setAngularComponentA(btMultiBodySolverConstraint* obj, const btVector3* value);
  EXPORT void btMultiBodySolverConstraint_setAngularComponentB(btMultiBodySolverConstraint* obj, const btVector3* value);
  EXPORT void btMultiBodySolverConstraint_setAppliedImpulse(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setAppliedPushImpulse(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setCfm(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setContactNormal1(btMultiBodySolverConstraint* obj, const btVector3* value);
  EXPORT void btMultiBodySolverConstraint_setContactNormal2(btMultiBodySolverConstraint* obj, const btVector3* value);
  EXPORT void btMultiBodySolverConstraint_setDeltaVelAindex(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setDeltaVelBindex(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setFriction(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setFrictionIndex(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setJacAindex(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setJacBindex(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setJacDiagABInv(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setLinkA(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setLinkB(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setLowerLimit(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setMultiBodyA(btMultiBodySolverConstraint* obj, btMultiBody* value);
  EXPORT void btMultiBodySolverConstraint_setMultiBodyB(btMultiBodySolverConstraint* obj, btMultiBody* value);
  EXPORT void btMultiBodySolverConstraint_setOrgConstraint(btMultiBodySolverConstraint* obj, btMultiBodyConstraint* value);
  EXPORT void btMultiBodySolverConstraint_setOrgDofIndex(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setOriginalContactPoint(btMultiBodySolverConstraint* obj, void* value);
  EXPORT void btMultiBodySolverConstraint_setOverrideNumSolverIterations(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setRelpos1CrossNormal(btMultiBodySolverConstraint* obj, const btVector3* value);
  EXPORT void btMultiBodySolverConstraint_setRelpos2CrossNormal(btMultiBodySolverConstraint* obj, const btVector3* value);
  EXPORT void btMultiBodySolverConstraint_setRhs(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setRhsPenetration(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setSolverBodyIdA(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setSolverBodyIdB(btMultiBodySolverConstraint* obj, int value);
  EXPORT void btMultiBodySolverConstraint_setUnusedPadding4(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_setUpperLimit(btMultiBodySolverConstraint* obj, btScalar value);
  EXPORT void btMultiBodySolverConstraint_delete(btMultiBodySolverConstraint* obj);
#ifdef __cplusplus
}
#endif
