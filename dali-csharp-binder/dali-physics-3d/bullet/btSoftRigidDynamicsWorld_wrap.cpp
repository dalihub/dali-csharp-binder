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
#include <BulletDynamics/ConstraintSolver/btConstraintSolver.h>
#include <BulletSoftBody/btSoftBodySolvers.h>
#include <BulletSoftBody/btSoftRigidDynamicsWorld.h>

#include "btSoftRigidDynamicsWorld_wrap.h"

btSoftRigidDynamicsWorld* btSoftRigidDynamicsWorld_new(btDispatcher* dispatcher,
  btBroadphaseInterface* pairCache, btConstraintSolver* constraintSolver, btCollisionConfiguration* collisionConfiguration,
  btSoftBodySolver* softBodySolver)
{
  return new btSoftRigidDynamicsWorld(dispatcher, pairCache, constraintSolver,
    collisionConfiguration, softBodySolver);
}

void btSoftRigidDynamicsWorld_addSoftBody(btSoftRigidDynamicsWorld* obj, btSoftBody* body)
{
  obj->addSoftBody(body);
}

void btSoftRigidDynamicsWorld_addSoftBody2(btSoftRigidDynamicsWorld* obj, btSoftBody* body,
  int collisionFilterGroup)
{
  obj->addSoftBody(body, collisionFilterGroup);
}

void btSoftRigidDynamicsWorld_addSoftBody3(btSoftRigidDynamicsWorld* obj, btSoftBody* body,
  int collisionFilterGroup, int collisionFilterMask)
{
  obj->addSoftBody(body, collisionFilterGroup, collisionFilterMask);
}

int btSoftRigidDynamicsWorld_getDrawFlags(btSoftRigidDynamicsWorld* obj)
{
  return obj->getDrawFlags();
}

btAlignedObjectArray_btSoftBodyPtr* btSoftRigidDynamicsWorld_getSoftBodyArray(btSoftRigidDynamicsWorld* obj)
{
  return &obj->getSoftBodyArray();
}

btSoftBodyWorldInfo* btSoftRigidDynamicsWorld_getWorldInfo(btSoftRigidDynamicsWorld* obj)
{
  return &obj->getWorldInfo();
}

void btSoftRigidDynamicsWorld_removeSoftBody(btSoftRigidDynamicsWorld* obj, btSoftBody* body)
{
  obj->removeSoftBody(body);
}

void btSoftRigidDynamicsWorld_setDrawFlags(btSoftRigidDynamicsWorld* obj, int f)
{
  obj->setDrawFlags(f);
}
