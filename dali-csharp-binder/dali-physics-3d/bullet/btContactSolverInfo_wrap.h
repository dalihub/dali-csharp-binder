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
  EXPORT btContactSolverInfoData* btContactSolverInfoData_new();
  EXPORT btScalar btContactSolverInfoData_getDamping(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getDeformableErp(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getErp(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getErp2(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getFriction(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getFrictionCfm(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getFrictionErp(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getGlobalCfm(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getLeastSquaresResidualThreshold(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getLinearSlop(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getMaxErrorReduction(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getMaxGyroscopicForce(btContactSolverInfoData* obj);
  EXPORT int btContactSolverInfoData_getMinimumSolverBatchSize(btContactSolverInfoData* obj);
  EXPORT int btContactSolverInfoData_getNumIterations(btContactSolverInfoData* obj);
  EXPORT int btContactSolverInfoData_getRestingContactRestitutionThreshold(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getRestitution(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getRestitutionVelocityThreshold(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getSingleAxisRollingFrictionThreshold(btContactSolverInfoData* obj);
  EXPORT int btContactSolverInfoData_getSolverMode(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getSor(btContactSolverInfoData* obj);
  EXPORT int btContactSolverInfoData_getSplitImpulse(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getSplitImpulsePenetrationThreshold(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getSplitImpulseTurnErp(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getTau(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getTimeStep(btContactSolverInfoData* obj);
  EXPORT btScalar btContactSolverInfoData_getWarmstartingFactor(btContactSolverInfoData* obj);
  EXPORT void btContactSolverInfoData_setDamping(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setDeformableErp(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setErp(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setErp2(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setFriction(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setFrictionCfm(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setFrictionErp(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setGlobalCfm(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setLeastSquaresResidualThreshold(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setLinearSlop(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setMaxErrorReduction(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setMaxGyroscopicForce(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setMinimumSolverBatchSize(btContactSolverInfoData* obj, int value);
  EXPORT void btContactSolverInfoData_setNumIterations(btContactSolverInfoData* obj, int value);
  EXPORT void btContactSolverInfoData_setRestingContactRestitutionThreshold(btContactSolverInfoData* obj, int value);
  EXPORT void btContactSolverInfoData_setRestitution(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setRestitutionVelocityThreshold(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setSingleAxisRollingFrictionThreshold(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setSolverMode(btContactSolverInfoData* obj, int value);
  EXPORT void btContactSolverInfoData_setSor(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setSplitImpulse(btContactSolverInfoData* obj, int value);
  EXPORT void btContactSolverInfoData_setSplitImpulsePenetrationThreshold(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setSplitImpulseTurnErp(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setTau(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setTimeStep(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_setWarmstartingFactor(btContactSolverInfoData* obj, btScalar value);
  EXPORT void btContactSolverInfoData_delete(btContactSolverInfoData* obj);

  EXPORT btContactSolverInfo* btContactSolverInfo_new();
#ifdef __cplusplus
}
#endif
