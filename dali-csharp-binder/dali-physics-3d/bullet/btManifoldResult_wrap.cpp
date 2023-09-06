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

#include <BulletCollision/CollisionDispatch/btManifoldResult.h>

#include "btManifoldResult_wrap.h"

btManifoldResult* btManifoldResult_new()
{
  return new btManifoldResult();
}

btManifoldResult* btManifoldResult_new2(const btCollisionObjectWrapper* body0Wrap,
  const btCollisionObjectWrapper* body1Wrap)
{
  return new btManifoldResult(body0Wrap, body1Wrap);
}

btScalar btManifoldResult_calculateCombinedContactDamping(const btCollisionObject* body0,
  const btCollisionObject* body1)
{
  return btManifoldResult::calculateCombinedContactDamping(body0, body1);
}

btScalar btManifoldResult_calculateCombinedContactStiffness(const btCollisionObject* body0,
  const btCollisionObject* body1)
{
  return btManifoldResult::calculateCombinedContactStiffness(body0, body1);
}

btScalar btManifoldResult_calculateCombinedFriction(const btCollisionObject* body0,
  const btCollisionObject* body1)
{
  return btManifoldResult::calculateCombinedFriction(body0, body1);
}

btScalar btManifoldResult_calculateCombinedRestitution(const btCollisionObject* body0,
  const btCollisionObject* body1)
{
  return btManifoldResult::calculateCombinedRestitution(body0, body1);
}

btScalar btManifoldResult_calculateCombinedRollingFriction(const btCollisionObject* body0,
  const btCollisionObject* body1)
{
  return btManifoldResult::calculateCombinedRollingFriction(body0, body1);
}

btScalar btManifoldResult_getClosestPointDistanceThreshold(btManifoldResult * obj)
{
  return obj->m_closestPointDistanceThreshold;
}

const btCollisionObject* btManifoldResult_getBody0Internal(btManifoldResult* obj)
{
  return obj->getBody0Internal();
}

const btCollisionObjectWrapper* btManifoldResult_getBody0Wrap(btManifoldResult* obj)
{
  return obj->getBody0Wrap();
}

const btCollisionObject* btManifoldResult_getBody1Internal(btManifoldResult* obj)
{
  return obj->getBody1Internal();
}

const btCollisionObjectWrapper* btManifoldResult_getBody1Wrap(btManifoldResult* obj)
{
  return obj->getBody1Wrap();
}

btPersistentManifold* btManifoldResult_getPersistentManifold(btManifoldResult* obj)
{
  return obj->getPersistentManifold();
}

void btManifoldResult_refreshContactPoints(btManifoldResult* obj)
{
  obj->refreshContactPoints();
}

void btManifoldResult_setBody0Wrap(btManifoldResult* obj, const btCollisionObjectWrapper* obj0Wrap)
{
  obj->setBody0Wrap(obj0Wrap);
}

void btManifoldResult_setBody1Wrap(btManifoldResult* obj, const btCollisionObjectWrapper* obj1Wrap)
{
  obj->setBody1Wrap(obj1Wrap);
}

void btManifoldResult_setClosestPointDistanceThreshold(btManifoldResult * obj, btScalar value)
{
  obj->m_closestPointDistanceThreshold = value;
}

void btManifoldResult_setPersistentManifold(btManifoldResult* obj, btPersistentManifold* manifoldPtr)
{
  obj->setPersistentManifold(manifoldPtr);
}
