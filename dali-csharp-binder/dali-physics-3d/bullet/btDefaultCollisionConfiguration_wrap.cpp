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

#include <BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h>
#include <BulletCollision/NarrowPhaseCollision/btVoronoiSimplexSolver.h>
#include <LinearMath/btPoolAllocator.h>

#include "btDefaultCollisionConfiguration_wrap.h"

btDefaultCollisionConstructionInfo* btDefaultCollisionConstructionInfo_new()
{
  return new btDefaultCollisionConstructionInfo();
}

btPoolAllocator* btDefaultCollisionConstructionInfo_getCollisionAlgorithmPool(btDefaultCollisionConstructionInfo* obj)
{
  return obj->m_collisionAlgorithmPool;
}

int btDefaultCollisionConstructionInfo_getCustomCollisionAlgorithmMaxElementSize(
  btDefaultCollisionConstructionInfo* obj)
{
  return obj->m_customCollisionAlgorithmMaxElementSize;
}

int btDefaultCollisionConstructionInfo_getDefaultMaxCollisionAlgorithmPoolSize(btDefaultCollisionConstructionInfo* obj)
{
  return obj->m_defaultMaxCollisionAlgorithmPoolSize;
}

int btDefaultCollisionConstructionInfo_getDefaultMaxPersistentManifoldPoolSize(btDefaultCollisionConstructionInfo* obj)
{
  return obj->m_defaultMaxPersistentManifoldPoolSize;
}

btPoolAllocator* btDefaultCollisionConstructionInfo_getPersistentManifoldPool(btDefaultCollisionConstructionInfo* obj)
{
  return obj->m_persistentManifoldPool;
}

int btDefaultCollisionConstructionInfo_getUseEpaPenetrationAlgorithm(btDefaultCollisionConstructionInfo* obj)
{
  return obj->m_useEpaPenetrationAlgorithm;
}

void btDefaultCollisionConstructionInfo_setCollisionAlgorithmPool(btDefaultCollisionConstructionInfo* obj,
  btPoolAllocator* value)
{
  obj->m_collisionAlgorithmPool = value;
}

void btDefaultCollisionConstructionInfo_setCustomCollisionAlgorithmMaxElementSize(
  btDefaultCollisionConstructionInfo* obj, int value)
{
  obj->m_customCollisionAlgorithmMaxElementSize = value;
}

void btDefaultCollisionConstructionInfo_setDefaultMaxCollisionAlgorithmPoolSize(btDefaultCollisionConstructionInfo* obj,
  int value)
{
  obj->m_defaultMaxCollisionAlgorithmPoolSize = value;
}

void btDefaultCollisionConstructionInfo_setDefaultMaxPersistentManifoldPoolSize(btDefaultCollisionConstructionInfo* obj,
  int value)
{
  obj->m_defaultMaxPersistentManifoldPoolSize = value;
}

void btDefaultCollisionConstructionInfo_setPersistentManifoldPool(btDefaultCollisionConstructionInfo* obj,
  btPoolAllocator* value)
{
  obj->m_persistentManifoldPool = value;
}

void btDefaultCollisionConstructionInfo_setUseEpaPenetrationAlgorithm(btDefaultCollisionConstructionInfo* obj,
  int value)
{
  obj->m_useEpaPenetrationAlgorithm = value;
}

void btDefaultCollisionConstructionInfo_delete(btDefaultCollisionConstructionInfo* obj)
{
  delete obj;
}


btDefaultCollisionConfiguration* btDefaultCollisionConfiguration_new()
{
  return new btDefaultCollisionConfiguration();
}

btDefaultCollisionConfiguration* btDefaultCollisionConfiguration_new2(const btDefaultCollisionConstructionInfo* constructionInfo)
{
  return new btDefaultCollisionConfiguration(*constructionInfo);
}

btCollisionAlgorithmCreateFunc* btDefaultCollisionConfiguration_getClosestPointsAlgorithmCreateFunc(
  btDefaultCollisionConfiguration* obj, int proxyType0, int proxyType1)
{
  return obj->getClosestPointsAlgorithmCreateFunc(proxyType0, proxyType1);
}

void btDefaultCollisionConfiguration_setConvexConvexMultipointIterations(btDefaultCollisionConfiguration* obj,
  int numPerturbationIterations, int minimumPointsPerturbationThreshold)
{
  obj->setConvexConvexMultipointIterations(numPerturbationIterations, minimumPointsPerturbationThreshold);
}

void btDefaultCollisionConfiguration_setPlaneConvexMultipointIterations(btDefaultCollisionConfiguration* obj,
  int numPerturbationIterations, int minimumPointsPerturbationThreshold)
{
  obj->setPlaneConvexMultipointIterations(numPerturbationIterations, minimumPointsPerturbationThreshold);
}
