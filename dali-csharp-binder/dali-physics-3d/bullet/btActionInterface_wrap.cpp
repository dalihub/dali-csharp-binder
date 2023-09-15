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

#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>
#include <BulletDynamics/Dynamics/btActionInterface.h>
#include <LinearMath/btIDebugDraw.h>

#include "btActionInterface_wrap.h"

btActionInterfaceWrapper::btActionInterfaceWrapper(p_btActionInterface_debugDraw debugDrawCallback,
  p_btActionInterface_updateAction updateActionCallback)
{
  _debugDrawCallback = debugDrawCallback;
  _updateActionCallback = updateActionCallback;
}

void btActionInterfaceWrapper::debugDraw(btIDebugDraw* debugDrawer)
{
  _debugDrawCallback(debugDrawer);
}

void btActionInterfaceWrapper::updateAction(btCollisionWorld* collisionWorld, btScalar deltaTimeStep)
{
  _updateActionCallback(collisionWorld, deltaTimeStep);
}


btActionInterfaceWrapper* btActionInterfaceWrapper_new(p_btActionInterface_debugDraw debugDrawCallback,
  p_btActionInterface_updateAction updateActionCallback)
{
  return new btActionInterfaceWrapper(debugDrawCallback, updateActionCallback);
}


void btActionInterface_debugDraw(btActionInterface* obj, btIDebugDraw* debugDrawer)
{
  obj->debugDraw(debugDrawer);
}

void btActionInterface_updateAction(btActionInterface* obj, btCollisionWorld* collisionWorld,
  btScalar deltaTimeStep)
{
  obj->updateAction(collisionWorld, deltaTimeStep);
}

void btActionInterface_delete(btActionInterface* obj)
{
  delete obj;
}
