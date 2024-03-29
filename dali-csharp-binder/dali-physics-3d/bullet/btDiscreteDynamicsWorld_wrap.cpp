﻿/*
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
#include <BulletCollision/CollisionDispatch/btSimulationIslandManager.h>
#include <BulletDynamics/ConstraintSolver/btConstraintSolver.h>
#include <BulletDynamics/ConstraintSolver/btTypedConstraint.h>
#include <BulletDynamics/Dynamics/btActionInterface.h>
#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h>
#include <BulletDynamics/Dynamics/btRigidBody.h>

#include "btDiscreteDynamicsWorld_wrap.h"

btDiscreteDynamicsWorld* btDiscreteDynamicsWorld_new(btDispatcher* dispatcher, btBroadphaseInterface* pairCache,
  btConstraintSolver* constraintSolver, btCollisionConfiguration* collisionConfiguration)
{
  return new btDiscreteDynamicsWorld(dispatcher, pairCache, constraintSolver, collisionConfiguration);
}

void btDiscreteDynamicsWorld_applyGravity(btDiscreteDynamicsWorld* obj)
{
  obj->applyGravity();
}

void btDiscreteDynamicsWorld_debugDrawConstraint(btDiscreteDynamicsWorld* obj, btTypedConstraint* constraint)
{
  obj->debugDrawConstraint(constraint);
}

bool btDiscreteDynamicsWorld_getApplySpeculativeContactRestitution(btDiscreteDynamicsWorld* obj)
{
  return obj->getApplySpeculativeContactRestitution();
}

btCollisionWorld* btDiscreteDynamicsWorld_getCollisionWorld(btDiscreteDynamicsWorld* obj)
{
  return obj->getCollisionWorld();
}

bool btDiscreteDynamicsWorld_getLatencyMotionStateInterpolation(btDiscreteDynamicsWorld* obj)
{
  return obj->getLatencyMotionStateInterpolation();
}

btAlignedObjectArray_btRigidBodyPtr* btDiscreteDynamicsWorld_getNonStaticRigidBodies(btDiscreteDynamicsWorld* obj)
{
  return &obj->getNonStaticRigidBodies();
}

btSimulationIslandManager* btDiscreteDynamicsWorld_getSimulationIslandManager(btDiscreteDynamicsWorld* obj)
{
  return obj->getSimulationIslandManager();
}

bool btDiscreteDynamicsWorld_getSynchronizeAllMotionStates(btDiscreteDynamicsWorld* obj)
{
  return obj->getSynchronizeAllMotionStates();
}

void btDiscreteDynamicsWorld_setApplySpeculativeContactRestitution(btDiscreteDynamicsWorld* obj,
  bool enable)
{
  obj->setApplySpeculativeContactRestitution(enable);
}

void btDiscreteDynamicsWorld_setLatencyMotionStateInterpolation(btDiscreteDynamicsWorld* obj,
  bool latencyInterpolation)
{
  obj->setLatencyMotionStateInterpolation(latencyInterpolation);
}

void btDiscreteDynamicsWorld_setNumTasks(btDiscreteDynamicsWorld* obj, int numTasks)
{
  obj->setNumTasks(numTasks);
}

void btDiscreteDynamicsWorld_setSynchronizeAllMotionStates(btDiscreteDynamicsWorld* obj,
  bool synchronizeAll)
{
  obj->setSynchronizeAllMotionStates(synchronizeAll);
}

void btDiscreteDynamicsWorld_solveConstraints(btDiscreteDynamicsWorld* obj, btContactSolverInfo* solverInfo)
{
  obj->solveConstraints(*solverInfo);
}

void btDiscreteDynamicsWorld_synchronizeSingleMotionState(btDiscreteDynamicsWorld* obj,
  btRigidBody* body)
{
  obj->synchronizeSingleMotionState(body);
}

void btDiscreteDynamicsWorld_updateVehicles(btDiscreteDynamicsWorld* obj, btScalar timeStep)
{
  obj->updateVehicles(timeStep);
}
