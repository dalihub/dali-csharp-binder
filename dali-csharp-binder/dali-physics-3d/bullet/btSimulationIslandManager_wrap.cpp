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

#include <BulletCollision/BroadphaseCollision/btDispatcher.h>
#include <BulletCollision/CollisionDispatch/btCollisionWorld.h>
#include <BulletCollision/CollisionDispatch/btSimulationIslandManager.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>

#include "btSimulationIslandManager_wrap.h"

void btSimulationIslandManager_IslandCallback_processIsland(btSimulationIslandManager_IslandCallback* obj,
  btCollisionObject** bodies, int numBodies, btPersistentManifold** manifolds, int numManifolds,
  int islandId)
{
  obj->processIsland(bodies, numBodies, manifolds, numManifolds, islandId);
}

void btSimulationIslandManager_IslandCallback_delete(btSimulationIslandManager_IslandCallback* obj)
{
  delete obj;
}


btSimulationIslandManager* btSimulationIslandManager_new()
{
  return new btSimulationIslandManager();
}

void btSimulationIslandManager_buildAndProcessIslands(btSimulationIslandManager* obj,
  btDispatcher* dispatcher, btCollisionWorld* collisionWorld, btSimulationIslandManager_IslandCallback* callback)
{
  obj->buildAndProcessIslands(dispatcher, collisionWorld, callback);
}

void btSimulationIslandManager_buildIslands(btSimulationIslandManager* obj, btDispatcher* dispatcher,
  btCollisionWorld* colWorld)
{
  obj->buildIslands(dispatcher, colWorld);
}

void btSimulationIslandManager_findUnions(btSimulationIslandManager* obj, btDispatcher* dispatcher,
  btCollisionWorld* colWorld)
{
  obj->findUnions(dispatcher, colWorld);
}

bool btSimulationIslandManager_getSplitIslands(btSimulationIslandManager* obj)
{
  return obj->getSplitIslands();
}

btUnionFind* btSimulationIslandManager_getUnionFind(btSimulationIslandManager* obj)
{
  return &obj->getUnionFind();
}

void btSimulationIslandManager_initUnionFind(btSimulationIslandManager* obj, int n)
{
  obj->initUnionFind(n);
}

void btSimulationIslandManager_setSplitIslands(btSimulationIslandManager* obj, bool doSplitIslands)
{
  obj->setSplitIslands(doSplitIslands);
}

void btSimulationIslandManager_storeIslandActivationState(btSimulationIslandManager* obj,
  btCollisionWorld* world)
{
  obj->storeIslandActivationState(world);
}

void btSimulationIslandManager_updateActivationState(btSimulationIslandManager* obj,
  btCollisionWorld* colWorld, btDispatcher* dispatcher)
{
  obj->updateActivationState(colWorld, dispatcher);
}

void btSimulationIslandManager_delete(btSimulationIslandManager* obj)
{
  delete obj;
}
