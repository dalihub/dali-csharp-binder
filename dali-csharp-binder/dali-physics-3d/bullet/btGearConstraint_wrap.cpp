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

#include <BulletDynamics/ConstraintSolver/btGearConstraint.h>

#include "conversion.h"
#include "btGearConstraint_wrap.h"

btGearConstraint* btGearConstraint_new(btRigidBody* rbA, btRigidBody* rbB, const btVector3* axisInA,
  const btVector3* axisInB, btScalar ratio)
{
  BTVECTOR3_IN(axisInA);
  BTVECTOR3_IN(axisInB);
  return new btGearConstraint(*rbA, *rbB, BTVECTOR3_USE(axisInA), BTVECTOR3_USE(axisInB),
    ratio);
}

void btGearConstraint_getAxisA(btGearConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAxisA());
}

void btGearConstraint_getAxisB(btGearConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAxisB());
}

btScalar btGearConstraint_getRatio(btGearConstraint* obj)
{
  return obj->getRatio();
}

void btGearConstraint_setAxisA(btGearConstraint* obj, btVector3* axisA)
{
  BTVECTOR3_IN(axisA);
  obj->setAxisA(BTVECTOR3_USE(axisA));
}

void btGearConstraint_setAxisB(btGearConstraint* obj, btVector3* axisB)
{
  BTVECTOR3_IN(axisB);
  obj->setAxisB(BTVECTOR3_USE(axisB));
}

void btGearConstraint_setRatio(btGearConstraint* obj, btScalar ratio)
{
  obj->setRatio(ratio);
}
