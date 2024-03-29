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
#include <BulletSoftBody/btDeformableMultiBodyDynamicsWorld.h>

#include "btDeformableMultiBodyDynamicsWorld_wrap.h"

btDeformableMultiBodyDynamicsWorld* btDeformableMultiBodyDynamicsWorld_new(btDispatcher* dispatcher,
  btBroadphaseInterface* pairCache, btDeformableMultiBodyConstraintSolver* constraintSolver,
  btCollisionConfiguration* collisionCOnfiguration, btDeformableBodySolver* deformableBodySolver)
{
  return new btDeformableMultiBodyDynamicsWorld(dispatcher, pairCache, constraintSolver,
    collisionCOnfiguration, deformableBodySolver);
}

void btDeformableMultiBodyDynamicsWorld_addForce(btDeformableMultiBodyDynamicsWorld* obj, btSoftBody* psb,
  btDeformableLagrangianForce* force)
{
  obj->addForce(psb, force);
}

void btDeformableMultiBodyDynamicsWorld_addSoftBody(btDeformableMultiBodyDynamicsWorld* obj, btSoftBody* body,
  int collisionFilterGroup, int collisionFilterMask)
{
  obj->addSoftBody(body, collisionFilterGroup, collisionFilterMask);
}

btSoftBodyWorldInfo* btDeformableMultiBodyDynamicsWorld_getWorldInfo(btDeformableMultiBodyDynamicsWorld* obj)
{
  return &obj->getWorldInfo();
}
