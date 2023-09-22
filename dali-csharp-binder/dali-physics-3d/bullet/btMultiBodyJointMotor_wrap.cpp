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

#include <BulletDynamics/Featherstone/btMultiBodyJointMotor.h>

#include "btMultiBodyJointMotor_wrap.h"

btMultiBodyJointMotor* btMultiBodyJointMotor_new(btMultiBody* body, int link, btScalar desiredVelocity,
  btScalar maxMotorImpulse)
{
  return new btMultiBodyJointMotor(body, link, desiredVelocity, maxMotorImpulse);
}

btMultiBodyJointMotor* btMultiBodyJointMotor_new2(btMultiBody* body, int link, int linkDoF,
  btScalar desiredVelocity, btScalar maxMotorImpulse)
{
  return new btMultiBodyJointMotor(body, link, linkDoF, desiredVelocity, maxMotorImpulse);
}

void btMultiBodyJointMotor_setPositionTarget(btMultiBodyJointMotor* obj, btScalar posTarget)
{
  obj->setPositionTarget(posTarget);
}

void btMultiBodyJointMotor_setPositionTarget2(btMultiBodyJointMotor* obj, btScalar posTarget,
  btScalar kp)
{
  obj->setPositionTarget(posTarget, kp);
}

void btMultiBodyJointMotor_setVelocityTarget(btMultiBodyJointMotor* obj, btScalar velTarget)
{
  obj->setVelocityTarget(velTarget);
}

void btMultiBodyJointMotor_setVelocityTarget2(btMultiBodyJointMotor* obj, btScalar velTarget,
  btScalar kd)
{
  obj->setVelocityTarget(velTarget, kd);
}
