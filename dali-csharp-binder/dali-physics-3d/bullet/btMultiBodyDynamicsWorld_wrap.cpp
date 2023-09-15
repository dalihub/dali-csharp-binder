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

#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>
#include <BulletDynamics/Featherstone/btMultiBody.h>
#include <BulletDynamics/Featherstone/btMultiBodyConstraint.h>
#include <BulletDynamics/Featherstone/btMultiBodyConstraintSolver.h>
#include <BulletDynamics/Featherstone/btMultiBodyDynamicsWorld.h>

#include "btMultiBodyDynamicsWorld_wrap.h"

btMultiBodyDynamicsWorld* btMultiBodyDynamicsWorld_new(btDispatcher* dispatcher,
  btBroadphaseInterface* pairCache, btMultiBodyConstraintSolver* constraintSolver,
  btCollisionConfiguration* collisionConfiguration)
{
  return new btMultiBodyDynamicsWorld(dispatcher, pairCache, constraintSolver,
    collisionConfiguration);
}

void btMultiBodyDynamicsWorld_addMultiBody(btMultiBodyDynamicsWorld* obj, btMultiBody* body,
  int group, int mask)
{
  obj->addMultiBody(body, group, mask);
}

void btMultiBodyDynamicsWorld_addMultiBodyConstraint(btMultiBodyDynamicsWorld* obj,
  btMultiBodyConstraint* constraint)
{
  obj->addMultiBodyConstraint(constraint);
}

void btMultiBodyDynamicsWorld_buildIslands(btMultiBodyDynamicsWorld* obj)
{
  obj->buildIslands();
}

void btMultiBodyDynamicsWorld_clearMultiBodyConstraintForces(btMultiBodyDynamicsWorld* obj)
{
  obj->clearMultiBodyConstraintForces();
}

void btMultiBodyDynamicsWorld_clearMultiBodyForces(btMultiBodyDynamicsWorld* obj)
{
  obj->clearMultiBodyForces();
}

void btMultiBodyDynamicsWorld_debugDrawMultiBodyConstraint(btMultiBodyDynamicsWorld* obj,
  btMultiBodyConstraint* constraint)
{
  obj->debugDrawMultiBodyConstraint(constraint);
}

void btMultiBodyDynamicsWorld_forwardKinematics(btMultiBodyDynamicsWorld* obj)
{
  obj->forwardKinematics();
}

btMultiBody* btMultiBodyDynamicsWorld_getMultiBody(btMultiBodyDynamicsWorld* obj,
  int mbIndex)
{
  return obj->getMultiBody(mbIndex);
}

btMultiBodyConstraint* btMultiBodyDynamicsWorld_getMultiBodyConstraint(btMultiBodyDynamicsWorld* obj,
  int constraintIndex)
{
  return obj->getMultiBodyConstraint(constraintIndex);
}

int btMultiBodyDynamicsWorld_getNumMultibodies(btMultiBodyDynamicsWorld* obj)
{
  return obj->getNumMultibodies();
}

int btMultiBodyDynamicsWorld_getNumMultiBodyConstraints(btMultiBodyDynamicsWorld* obj)
{
  return obj->getNumMultiBodyConstraints();
}

void btMultiBodyDynamicsWorld_integrateMultiBodyTransforms(btMultiBodyDynamicsWorld* obj, btScalar timeStep)
{
  obj->integrateMultiBodyTransforms(timeStep);
}

void btMultiBodyDynamicsWorld_integrateTransforms(btMultiBodyDynamicsWorld* obj,
  btScalar timeStep)
{
  obj->integrateTransforms(timeStep);
}

void btMultiBodyDynamicsWorld_predictMultiBodyTransforms(btMultiBodyDynamicsWorld* obj, btScalar timeStep)
{
  obj->predictMultiBodyTransforms(timeStep);
}

void btMultiBodyDynamicsWorld_predictUnconstraintMotion(btMultiBodyDynamicsWorld* obj, btScalar timeStep)
{
  obj->predictUnconstraintMotion(timeStep);
}

void btMultiBodyDynamicsWorld_removeMultiBody(btMultiBodyDynamicsWorld* obj, btMultiBody* body)
{
  obj->removeMultiBody(body);
}

void btMultiBodyDynamicsWorld_removeMultiBodyConstraint(btMultiBodyDynamicsWorld* obj,
  btMultiBodyConstraint* constraint)
{
  obj->removeMultiBodyConstraint(constraint);
}

void btMultiBodyDynamicsWorld_solveExternalForces(btMultiBodyDynamicsWorld* obj, btContactSolverInfo* solverInfo)
{
  obj->solveExternalForces(*solverInfo);
}

void btMultiBodyDynamicsWorld_solveInternalConstraints(btMultiBodyDynamicsWorld* obj, btContactSolverInfo* solverInfo)
{
  obj->solveInternalConstraints(*solverInfo);
}
