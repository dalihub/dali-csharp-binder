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

#include <BulletDynamics/ConstraintSolver/btConstraintSolver.h>
#include <BulletDynamics/ConstraintSolver/btTypedConstraint.h>
#include <BulletDynamics/Dynamics/btActionInterface.h>
#include <BulletDynamics/Dynamics/btDynamicsWorld.h>
#include <BulletDynamics/Dynamics/btRigidBody.h>

#include "conversion.h"
#include "btDynamicsWorld_wrap.h"

void btDynamicsWorld_addAction(btDynamicsWorld* obj, btActionInterface* action)
{
  obj->addAction(action);
}

void btDynamicsWorld_addConstraint(btDynamicsWorld* obj, btTypedConstraint* constraint,
  bool disableCollisionsBetweenLinkedBodies)
{
  obj->addConstraint(constraint, disableCollisionsBetweenLinkedBodies);
}

void btDynamicsWorld_addRigidBody(btDynamicsWorld* obj, btRigidBody* body)
{
  obj->addRigidBody(body);
}

void btDynamicsWorld_addRigidBody2(btDynamicsWorld* obj, btRigidBody* body, int group,
  int mask)
{
  obj->addRigidBody(body, group, mask);
}

void btDynamicsWorld_clearForces(btDynamicsWorld* obj)
{
  obj->clearForces();
}

btTypedConstraint* btDynamicsWorld_getConstraint(btDynamicsWorld* obj, int index)
{
  return obj->getConstraint(index);
}

btConstraintSolver* btDynamicsWorld_getConstraintSolver(btDynamicsWorld* obj)
{
  return obj->getConstraintSolver();
}

void btDynamicsWorld_getGravity(btDynamicsWorld* obj, btVector3* value)
{
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->getGravity();
  BTVECTOR3_SET(value, temp);
}

int btDynamicsWorld_getNumConstraints(btDynamicsWorld* obj)
{
  return obj->getNumConstraints();
}

btContactSolverInfo* btDynamicsWorld_getSolverInfo(btDynamicsWorld* obj)
{
  return &obj->getSolverInfo();
}

btDynamicsWorldType btDynamicsWorld_getWorldType(btDynamicsWorld* obj)
{
  return obj->getWorldType();
}

void* btDynamicsWorld_getWorldUserInfo(btDynamicsWorld* obj)
{
  return obj->getWorldUserInfo();
}

void btDynamicsWorld_removeAction(btDynamicsWorld* obj, btActionInterface* action)
{
  obj->removeAction(action);
}

void btDynamicsWorld_removeConstraint(btDynamicsWorld* obj, btTypedConstraint* constraint)
{
  obj->removeConstraint(constraint);
}

void btDynamicsWorld_removeRigidBody(btDynamicsWorld* obj, btRigidBody* body)
{
  obj->removeRigidBody(body);
}

void btDynamicsWorld_setConstraintSolver(btDynamicsWorld* obj, btConstraintSolver* solver)
{
  obj->setConstraintSolver(solver);
}

void btDynamicsWorld_setGravity(btDynamicsWorld* obj, const btVector3* gravity)
{
  BTVECTOR3_IN(gravity);
  obj->setGravity(BTVECTOR3_USE(gravity));
}

void btDynamicsWorld_setInternalTickCallback(btDynamicsWorld* obj, btInternalTickCallback cb,
  void* worldUserInfo, bool isPreTick)
{
  obj->setInternalTickCallback(cb, worldUserInfo, isPreTick);
}

void btDynamicsWorld_setWorldUserInfo(btDynamicsWorld* obj, void* worldUserInfo)
{
  obj->setWorldUserInfo(worldUserInfo);
}

int btDynamicsWorld_stepSimulation(btDynamicsWorld* obj, btScalar timeStep, int maxSubSteps,
  btScalar fixedTimeStep)
{
  return obj->stepSimulation(timeStep, maxSubSteps, fixedTimeStep);
}

void btDynamicsWorld_synchronizeMotionStates(btDynamicsWorld* obj)
{
  obj->synchronizeMotionStates();
}
