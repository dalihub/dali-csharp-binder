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
  EXPORT void btMultiBodyConstraint_allocateJacobiansMultiDof(btMultiBodyConstraint* obj);
  EXPORT void btMultiBodyConstraint_createConstraintRows(btMultiBodyConstraint* obj, btAlignedObjectArray_btMultiBodySolverConstraint* constraintRows, btMultiBodyJacobianData* data, const btContactSolverInfo* infoGlobal);
  EXPORT void btMultiBodyConstraint_debugDraw(btMultiBodyConstraint* obj, btIDebugDraw* drawer);
  EXPORT void btMultiBodyConstraint_finalizeMultiDof(btMultiBodyConstraint* obj);
  EXPORT btScalar btMultiBodyConstraint_getAppliedImpulse(btMultiBodyConstraint* obj, int dof);
  EXPORT int btMultiBodyConstraint_getConstraintType(btMultiBodyConstraint* obj);
  EXPORT int btMultiBodyConstraint_getIslandIdA(btMultiBodyConstraint* obj);
  EXPORT int btMultiBodyConstraint_getIslandIdB(btMultiBodyConstraint* obj);
  EXPORT btScalar btMultiBodyConstraint_getMaxAppliedImpulse(btMultiBodyConstraint* obj);
  EXPORT btMultiBody* btMultiBodyConstraint_getMultiBodyA(btMultiBodyConstraint* obj);
  EXPORT btMultiBody* btMultiBodyConstraint_getMultiBodyB(btMultiBodyConstraint* obj);
  EXPORT int btMultiBodyConstraint_getNumRows(btMultiBodyConstraint* obj);
  EXPORT btScalar btMultiBodyConstraint_getPosition(btMultiBodyConstraint* obj, int row);
  EXPORT void btMultiBodyConstraint_internalSetAppliedImpulse(btMultiBodyConstraint* obj, int dof, btScalar appliedImpulse);
  EXPORT bool btMultiBodyConstraint_isUnilateral(btMultiBodyConstraint* obj);
  EXPORT btScalar* btMultiBodyConstraint_jacobianA(btMultiBodyConstraint* obj, int row);
  EXPORT btScalar* btMultiBodyConstraint_jacobianB(btMultiBodyConstraint* obj, int row);
  EXPORT void btMultiBodyConstraint_setMaxAppliedImpulse(btMultiBodyConstraint* obj, btScalar maxImp);
  EXPORT void btMultiBodyConstraint_setPosition(btMultiBodyConstraint* obj, int row, btScalar pos);
  EXPORT void btMultiBodyConstraint_updateJacobianSizes(btMultiBodyConstraint* obj);
  EXPORT void btMultiBodyConstraint_delete(btMultiBodyConstraint* obj);
#ifdef __cplusplus
}
#endif
