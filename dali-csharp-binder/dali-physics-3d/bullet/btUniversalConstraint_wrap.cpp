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

#include <BulletDynamics/ConstraintSolver/btUniversalConstraint.h>

#include "conversion.h"
#include "btUniversalConstraint_wrap.h"

btUniversalConstraint* btUniversalConstraint_new(btRigidBody* rbA, btRigidBody* rbB,
  const btVector3* anchor, const btVector3* axis1, const btVector3* axis2)
{
  BTVECTOR3_IN(anchor);
  BTVECTOR3_IN(axis1);
  BTVECTOR3_IN(axis2);
  return new btUniversalConstraint(*rbA, *rbB, BTVECTOR3_USE(anchor), BTVECTOR3_USE(axis1),
    BTVECTOR3_USE(axis2));
}

void btUniversalConstraint_getAnchor(btUniversalConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAnchor());
}

void btUniversalConstraint_getAnchor2(btUniversalConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAnchor2());
}

btScalar btUniversalConstraint_getAngle1(btUniversalConstraint* obj)
{
  return obj->getAngle1();
}

btScalar btUniversalConstraint_getAngle2(btUniversalConstraint* obj)
{
  return obj->getAngle2();
}

void btUniversalConstraint_getAxis1(btUniversalConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAxis1());
}

void btUniversalConstraint_getAxis2(btUniversalConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAxis2());
}

void btUniversalConstraint_setLowerLimit(btUniversalConstraint* obj, btScalar ang1min,
  btScalar ang2min)
{
  obj->setLowerLimit(ang1min, ang2min);
}

void btUniversalConstraint_setUpperLimit(btUniversalConstraint* obj, btScalar ang1max,
  btScalar ang2max)
{
  obj->setUpperLimit(ang1max, ang2max);
}
