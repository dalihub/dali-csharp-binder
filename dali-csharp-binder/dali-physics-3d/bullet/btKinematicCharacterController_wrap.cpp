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

#include <BulletCollision/CollisionDispatch/btGhostObject.h>
#include <BulletCollision/CollisionShapes/btConvexShape.h>
#include <BulletDynamics/Character/btKinematicCharacterController.h>

#include "conversion.h"
#include "btKinematicCharacterController_wrap.h"

#ifndef BULLETC_DISABLE_IACTION_CLASSES

btKinematicCharacterController* btKinematicCharacterController_new(btPairCachingGhostObject* ghostObject,
  btConvexShape* convexShape, btScalar stepHeight)
{
  return new btKinematicCharacterController(ghostObject, convexShape, stepHeight);
}

btKinematicCharacterController* btKinematicCharacterController_new2(btPairCachingGhostObject* ghostObject,
  btConvexShape* convexShape, btScalar stepHeight, const btVector3* up)
{
  BTVECTOR3_IN(up);
  return new btKinematicCharacterController(ghostObject, convexShape, stepHeight,
    BTVECTOR3_USE(up));
}

void btKinematicCharacterController_applyImpulse(btKinematicCharacterController* obj,
  const btVector3* v)
{
  BTVECTOR3_IN(v);
  obj->applyImpulse(BTVECTOR3_USE(v));
}

btScalar btKinematicCharacterController_getAngularDamping(btKinematicCharacterController* obj)
{
  return obj->getAngularDamping();
}

void btKinematicCharacterController_getAngularVelocity(btKinematicCharacterController* obj,
  btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAngularVelocity());
}

btScalar btKinematicCharacterController_getFallSpeed(btKinematicCharacterController* obj)
{
  return obj->getFallSpeed();
}

btPairCachingGhostObject* btKinematicCharacterController_getGhostObject(btKinematicCharacterController* obj)
{
  return obj->getGhostObject();
}

void btKinematicCharacterController_getGravity(btKinematicCharacterController* obj,
  btVector3* value)
{
  BTVECTOR3_SET(value, obj->getGravity());
}

btScalar btKinematicCharacterController_getJumpSpeed(btKinematicCharacterController* obj)
{
  return obj->getJumpSpeed();
}

btScalar btKinematicCharacterController_getLinearDamping(btKinematicCharacterController* obj)
{
  return obj->getLinearDamping();
}

void btKinematicCharacterController_getLinearVelocity(btKinematicCharacterController* obj,
  btVector3* value)
{
  BTVECTOR3_SET(value, obj->getLinearVelocity());
}

btScalar btKinematicCharacterController_getMaxPenetrationDepth(btKinematicCharacterController* obj)
{
  return obj->getMaxPenetrationDepth();
}

btScalar btKinematicCharacterController_getMaxSlope(btKinematicCharacterController* obj)
{
  return obj->getMaxSlope();
}

btScalar btKinematicCharacterController_getStepHeight(btKinematicCharacterController* obj)
{
  return obj->getStepHeight();
}

void btKinematicCharacterController_getUp(btKinematicCharacterController* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getUp());
}

void btKinematicCharacterController_setAngularDamping(btKinematicCharacterController* obj,
  btScalar d)
{
  obj->setAngularDamping(d);
}

void btKinematicCharacterController_setAngularVelocity(btKinematicCharacterController* obj,
  const btVector3* velocity)
{
  BTVECTOR3_IN(velocity);
  obj->setAngularVelocity(BTVECTOR3_USE(velocity));
}

void btKinematicCharacterController_setFallSpeed(btKinematicCharacterController* obj,
  btScalar fallSpeed)
{
  obj->setFallSpeed(fallSpeed);
}

void btKinematicCharacterController_setGravity(btKinematicCharacterController* obj,
  const btVector3* gravity)
{
  BTVECTOR3_IN(gravity);
  obj->setGravity(BTVECTOR3_USE(gravity));
}

void btKinematicCharacterController_setJumpSpeed(btKinematicCharacterController* obj,
  btScalar jumpSpeed)
{
  obj->setJumpSpeed(jumpSpeed);
}

void btKinematicCharacterController_setLinearDamping(btKinematicCharacterController* obj,
  btScalar d)
{
  obj->setLinearDamping(d);
}

void btKinematicCharacterController_setLinearVelocity(btKinematicCharacterController* obj,
  const btVector3* velocity)
{
  BTVECTOR3_IN(velocity);
  obj->setLinearVelocity(BTVECTOR3_USE(velocity));
}

void btKinematicCharacterController_setMaxJumpHeight(btKinematicCharacterController* obj,
  btScalar maxJumpHeight)
{
  obj->setMaxJumpHeight(maxJumpHeight);
}

void btKinematicCharacterController_setMaxPenetrationDepth(btKinematicCharacterController* obj,
  btScalar d)
{
  obj->setMaxPenetrationDepth(d);
}

void btKinematicCharacterController_setMaxSlope(btKinematicCharacterController* obj,
  btScalar slopeRadians)
{
  obj->setMaxSlope(slopeRadians);
}

void btKinematicCharacterController_setStepHeight(btKinematicCharacterController* obj,
  btScalar h)
{
  obj->setStepHeight(h);
}

void btKinematicCharacterController_setUp(btKinematicCharacterController* obj, const btVector3* up)
{
  BTVECTOR3_IN(up);
  obj->setUp(BTVECTOR3_USE(up));
}

void btKinematicCharacterController_setUseGhostSweepTest(btKinematicCharacterController* obj,
  bool useGhostObjectSweepTest)
{
  obj->setUseGhostSweepTest(useGhostObjectSweepTest);
}

#endif
