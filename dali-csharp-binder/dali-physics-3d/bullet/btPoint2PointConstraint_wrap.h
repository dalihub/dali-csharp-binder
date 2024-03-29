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
  EXPORT btConstraintSetting* btConstraintSetting_new();
  EXPORT btScalar btConstraintSetting_getDamping(btConstraintSetting* obj);
  EXPORT btScalar btConstraintSetting_getImpulseClamp(btConstraintSetting* obj);
  EXPORT btScalar btConstraintSetting_getTau(btConstraintSetting* obj);
  EXPORT void btConstraintSetting_setDamping(btConstraintSetting* obj, btScalar value);
  EXPORT void btConstraintSetting_setImpulseClamp(btConstraintSetting* obj, btScalar value);
  EXPORT void btConstraintSetting_setTau(btConstraintSetting* obj, btScalar value);
  EXPORT void btConstraintSetting_delete(btConstraintSetting* obj);

  EXPORT btPoint2PointConstraint* btPoint2PointConstraint_new(btRigidBody* rbA, btRigidBody* rbB, const btVector3* pivotInA, const btVector3* pivotInB);
  EXPORT btPoint2PointConstraint* btPoint2PointConstraint_new2(btRigidBody* rbA, const btVector3* pivotInA);
  EXPORT int btPoint2PointConstraint_getFlags(btPoint2PointConstraint* obj);
  EXPORT void btPoint2PointConstraint_getInfo1NonVirtual(btPoint2PointConstraint* obj, btTypedConstraint_btConstraintInfo1* info);
  EXPORT void btPoint2PointConstraint_getInfo2NonVirtual(btPoint2PointConstraint* obj, btTypedConstraint_btConstraintInfo2* info, const btTransform* body0_trans, const btTransform* body1_trans);
  EXPORT void btPoint2PointConstraint_getPivotInA(btPoint2PointConstraint* obj, btVector3* value);
  EXPORT void btPoint2PointConstraint_getPivotInB(btPoint2PointConstraint* obj, btVector3* value);
  EXPORT btConstraintSetting* btPoint2PointConstraint_getSetting(btPoint2PointConstraint* obj);
  EXPORT bool btPoint2PointConstraint_getUseSolveConstraintObsolete(btPoint2PointConstraint* obj);
  EXPORT void btPoint2PointConstraint_setPivotA(btPoint2PointConstraint* obj, const btVector3* pivotA);
  EXPORT void btPoint2PointConstraint_setPivotB(btPoint2PointConstraint* obj, const btVector3* pivotB);
  EXPORT void btPoint2PointConstraint_setUseSolveConstraintObsolete(btPoint2PointConstraint* obj, bool value);
  EXPORT void btPoint2PointConstraint_updateRHS(btPoint2PointConstraint* obj, btScalar timeStep);
#ifdef __cplusplus
}
#endif
