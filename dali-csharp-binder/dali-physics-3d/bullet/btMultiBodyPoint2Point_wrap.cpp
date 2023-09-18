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

#include <BulletDynamics/Dynamics/btRigidBody.h>
#include <BulletDynamics/Featherstone/btMultiBodyPoint2Point.h>

#include "conversion.h"
#include "btMultiBodyPoint2Point_wrap.h"

btMultiBodyPoint2Point* btMultiBodyPoint2Point_new(btMultiBody* body, int link, btRigidBody* bodyB,
  const btVector3* pivotInA, const btVector3* pivotInB)
{
  BTVECTOR3_IN(pivotInA);
  BTVECTOR3_IN(pivotInB);
  return new btMultiBodyPoint2Point(body, link, bodyB, BTVECTOR3_USE(pivotInA),
    BTVECTOR3_USE(pivotInB));
}

btMultiBodyPoint2Point* btMultiBodyPoint2Point_new2(btMultiBody* bodyA, int linkA,
  btMultiBody* bodyB, int linkB, const btVector3* pivotInA, const btVector3* pivotInB)
{
  BTVECTOR3_IN(pivotInA);
  BTVECTOR3_IN(pivotInB);
  return new btMultiBodyPoint2Point(bodyA, linkA, bodyB, linkB, BTVECTOR3_USE(pivotInA),
    BTVECTOR3_USE(pivotInB));
}

void btMultiBodyPoint2Point_getPivotInB(btMultiBodyPoint2Point* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getPivotInB());
}

void btMultiBodyPoint2Point_setPivotInB(btMultiBodyPoint2Point* obj, const btVector3* pivotInB)
{
  BTVECTOR3_IN(pivotInB);
  obj->setPivotInB(BTVECTOR3_USE(pivotInB));
}
