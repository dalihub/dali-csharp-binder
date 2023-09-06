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
#include <BulletDynamics/Featherstone/btMultiBodySliderConstraint.h>

#include "conversion.h"
#include "btMultiBodySliderConstraint_wrap.h"

btMultiBodySliderConstraint* btMultiBodySliderConstraint_new(btMultiBody* body, int link,
  btRigidBody* bodyB, const btVector3* pivotInA, const btVector3* pivotInB, const btMatrix3x3* frameInA,
  const btMatrix3x3* frameInB, const btVector3* jointAxis)
{
  BTVECTOR3_IN(pivotInA);
  BTVECTOR3_IN(pivotInB);
  BTMATRIX3X3_IN(frameInA);
  BTMATRIX3X3_IN(frameInB);
  BTVECTOR3_IN(jointAxis);
  return new btMultiBodySliderConstraint(body, link, bodyB, BTVECTOR3_USE(pivotInA),
    BTVECTOR3_USE(pivotInB), BTMATRIX3X3_USE(frameInA), BTMATRIX3X3_USE(frameInB),
    BTVECTOR3_USE(jointAxis));
}

btMultiBodySliderConstraint* btMultiBodySliderConstraint_new2(btMultiBody* bodyA,
  int linkA, btMultiBody* bodyB, int linkB, const btVector3* pivotInA, const btVector3* pivotInB,
  const btMatrix3x3* frameInA, const btMatrix3x3* frameInB, const btVector3* jointAxis)
{
  BTVECTOR3_IN(pivotInA);
  BTVECTOR3_IN(pivotInB);
  BTMATRIX3X3_IN(frameInA);
  BTMATRIX3X3_IN(frameInB);
  BTVECTOR3_IN(jointAxis);
  return new btMultiBodySliderConstraint(bodyA, linkA, bodyB, linkB, BTVECTOR3_USE(pivotInA),
    BTVECTOR3_USE(pivotInB), BTMATRIX3X3_USE(frameInA), BTMATRIX3X3_USE(frameInB),
    BTVECTOR3_USE(jointAxis));
}

void btMultiBodySliderConstraint_getFrameInA(btMultiBodySliderConstraint* obj, btMatrix3x3* value)
{
  BTMATRIX3X3_OUT(value, &obj->getFrameInA());
}

void btMultiBodySliderConstraint_getFrameInB(btMultiBodySliderConstraint* obj, btMatrix3x3* value)
{
  BTMATRIX3X3_OUT(value, &obj->getFrameInB());
}

void btMultiBodySliderConstraint_getJointAxis(btMultiBodySliderConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getJointAxis());
}

void btMultiBodySliderConstraint_getPivotInA(btMultiBodySliderConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getPivotInA());
}

void btMultiBodySliderConstraint_getPivotInB(btMultiBodySliderConstraint* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getPivotInB());
}

void btMultiBodySliderConstraint_setFrameInA(btMultiBodySliderConstraint* obj, const btMatrix3x3* frameInA)
{
  BTMATRIX3X3_IN(frameInA);
  obj->setFrameInA(BTMATRIX3X3_USE(frameInA));
}

void btMultiBodySliderConstraint_setFrameInB(btMultiBodySliderConstraint* obj, const btMatrix3x3* frameInB)
{
  BTMATRIX3X3_IN(frameInB);
  obj->setFrameInB(BTMATRIX3X3_USE(frameInB));
}

void btMultiBodySliderConstraint_setJointAxis(btMultiBodySliderConstraint* obj, const btVector3* jointAxis)
{
  BTVECTOR3_IN(jointAxis);
  obj->setJointAxis(BTVECTOR3_USE(jointAxis));
}

void btMultiBodySliderConstraint_setPivotInA(btMultiBodySliderConstraint* obj, const btVector3* pivotInA)
{
  BTVECTOR3_IN(pivotInA);
  obj->setPivotInA(BTVECTOR3_USE(pivotInA));
}

void btMultiBodySliderConstraint_setPivotInB(btMultiBodySliderConstraint* obj, const btVector3* pivotInB)
{
  BTVECTOR3_IN(pivotInB);
  obj->setPivotInB(BTVECTOR3_USE(pivotInB));
}
