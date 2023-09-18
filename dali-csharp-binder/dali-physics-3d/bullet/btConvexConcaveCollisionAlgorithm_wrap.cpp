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

#include <BulletCollision/CollisionDispatch/btCollisionObjectWrapper.h>
#include <BulletCollision/CollisionDispatch/btConvexConcaveCollisionAlgorithm.h>
#include <BulletCollision/CollisionDispatch/btManifoldResult.h>

#include "conversion.h"
#include "btConvexConcaveCollisionAlgorithm_wrap.h"

btConvexTriangleCallback* btConvexTriangleCallback_new(btDispatcher* dispatcher,
  const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap,
  bool isSwapped)
{
  return new btConvexTriangleCallback(dispatcher, body0Wrap, body1Wrap, isSwapped);
}

void btConvexTriangleCallback_clearCache(btConvexTriangleCallback* obj)
{
  obj->clearCache();
}

void btConvexTriangleCallback_clearWrapperData(btConvexTriangleCallback* obj)
{
  obj->clearWrapperData();
}

void btConvexTriangleCallback_getAabbMax(btConvexTriangleCallback* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAabbMax());
}

void btConvexTriangleCallback_getAabbMin(btConvexTriangleCallback* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getAabbMin());
}

btPersistentManifold* btConvexTriangleCallback_getManifoldPtr(btConvexTriangleCallback* obj)
{
  return obj->m_manifoldPtr;
}

int btConvexTriangleCallback_getTriangleCount(btConvexTriangleCallback* obj)
{
  return obj->m_triangleCount;
}

void btConvexTriangleCallback_setManifoldPtr(btConvexTriangleCallback* obj, btPersistentManifold* value)
{
  obj->m_manifoldPtr = value;
}

void btConvexTriangleCallback_setTimeStepAndCounters(btConvexTriangleCallback* obj,
  btScalar collisionMarginTriangle, const btDispatcherInfo* dispatchInfo, const btCollisionObjectWrapper* convexBodyWrap,
  const btCollisionObjectWrapper* triBodyWrap, btManifoldResult* resultOut)
{
  obj->setTimeStepAndCounters(collisionMarginTriangle, *dispatchInfo, convexBodyWrap,
    triBodyWrap, resultOut);
}

void btConvexTriangleCallback_setTriangleCount(btConvexTriangleCallback* obj, int value)
{
  obj->m_triangleCount = value;
}


btConvexConcaveCollisionAlgorithm_CreateFunc* btConvexConcaveCollisionAlgorithm_CreateFunc_new()
{
  return new btConvexConcaveCollisionAlgorithm::CreateFunc();
}


btConvexConcaveCollisionAlgorithm_SwappedCreateFunc* btConvexConcaveCollisionAlgorithm_SwappedCreateFunc_new()
{
  return new btConvexConcaveCollisionAlgorithm::SwappedCreateFunc();
}


btConvexConcaveCollisionAlgorithm* btConvexConcaveCollisionAlgorithm_new(const btCollisionAlgorithmConstructionInfo* ci,
  const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap,
  bool isSwapped)
{
  return new btConvexConcaveCollisionAlgorithm(*ci, body0Wrap, body1Wrap, isSwapped);
}

void btConvexConcaveCollisionAlgorithm_clearCache(btConvexConcaveCollisionAlgorithm* obj)
{
  obj->clearCache();
}
