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

#include <BulletDynamics/Featherstone/btMultiBodyConstraint.h>
#include <LinearMath/btIDebugDraw.h>

#include "btMultiBodyConstraint_wrap.h"

void btMultiBodyConstraint_allocateJacobiansMultiDof(btMultiBodyConstraint* obj)
{
  obj->allocateJacobiansMultiDof();
}

void btMultiBodyConstraint_createConstraintRows(btMultiBodyConstraint* obj, btAlignedObjectArray_btMultiBodySolverConstraint* constraintRows,
  btMultiBodyJacobianData* data, const btContactSolverInfo* infoGlobal)
{
  obj->createConstraintRows(*constraintRows, *data, *infoGlobal);
}

void btMultiBodyConstraint_debugDraw(btMultiBodyConstraint* obj, btIDebugDraw* drawer)
{
  obj->debugDraw(drawer);
}

void btMultiBodyConstraint_finalizeMultiDof(btMultiBodyConstraint* obj)
{
  obj->finalizeMultiDof();
}

btScalar btMultiBodyConstraint_getAppliedImpulse(btMultiBodyConstraint* obj, int dof)
{
  return obj->getAppliedImpulse(dof);
}

int btMultiBodyConstraint_getConstraintType(btMultiBodyConstraint* obj)
{
  return obj->getConstraintType();
}

int btMultiBodyConstraint_getIslandIdA(btMultiBodyConstraint* obj)
{
  return obj->getIslandIdA();
}

int btMultiBodyConstraint_getIslandIdB(btMultiBodyConstraint* obj)
{
  return obj->getIslandIdB();
}

btScalar btMultiBodyConstraint_getMaxAppliedImpulse(btMultiBodyConstraint* obj)
{
  return obj->getMaxAppliedImpulse();
}

btMultiBody* btMultiBodyConstraint_getMultiBodyA(btMultiBodyConstraint* obj)
{
  return obj->getMultiBodyA();
}

btMultiBody* btMultiBodyConstraint_getMultiBodyB(btMultiBodyConstraint* obj)
{
  return obj->getMultiBodyB();
}

int btMultiBodyConstraint_getNumRows(btMultiBodyConstraint* obj)
{
  return obj->getNumRows();
}

btScalar btMultiBodyConstraint_getPosition(btMultiBodyConstraint* obj, int row)
{
  return obj->getPosition(row);
}

void btMultiBodyConstraint_internalSetAppliedImpulse(btMultiBodyConstraint* obj,
  int dof, btScalar appliedImpulse)
{
  obj->internalSetAppliedImpulse(dof, appliedImpulse);
}

bool btMultiBodyConstraint_isUnilateral(btMultiBodyConstraint* obj)
{
  return obj->isUnilateral();
}

btScalar* btMultiBodyConstraint_jacobianA(btMultiBodyConstraint* obj, int row)
{
  return obj->jacobianA(row);
}

btScalar* btMultiBodyConstraint_jacobianB(btMultiBodyConstraint* obj, int row)
{
  return obj->jacobianB(row);
}

void btMultiBodyConstraint_setMaxAppliedImpulse(btMultiBodyConstraint* obj, btScalar maxImp)
{
  obj->setMaxAppliedImpulse(maxImp);
}

void btMultiBodyConstraint_setPosition(btMultiBodyConstraint* obj, int row, btScalar pos)
{
  obj->setPosition(row, pos);
}

void btMultiBodyConstraint_updateJacobianSizes(btMultiBodyConstraint* obj)
{
  obj->updateJacobianSizes();
}

void btMultiBodyConstraint_delete(btMultiBodyConstraint* obj)
{
  delete obj;
}
