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

#include <BulletCollision/CollisionDispatch/btCollisionObject.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>

#include "conversion.h"
#include "btPersistentManifold_wrap.h"

btPersistentManifold* btPersistentManifold_new()
{
  return new btPersistentManifold();
}

btPersistentManifold* btPersistentManifold_new2(const btCollisionObject* body0, const btCollisionObject* body1,
  int __unnamed2, btScalar contactBreakingThreshold, btScalar contactProcessingThreshold)
{
  return new btPersistentManifold(body0, body1, __unnamed2, contactBreakingThreshold,
    contactProcessingThreshold);
}

int btPersistentManifold_addManifoldPoint(btPersistentManifold* obj, const btManifoldPoint* newPoint,
  bool isPredictive)
{
  return obj->addManifoldPoint(*newPoint, isPredictive);
}

void btPersistentManifold_clearManifold(btPersistentManifold* obj)
{
  obj->clearManifold();
}

void btPersistentManifold_clearUserCache(btPersistentManifold* obj, btManifoldPoint* pt)
{
  obj->clearUserCache(*pt);
}

const btCollisionObject* btPersistentManifold_getBody0(btPersistentManifold* obj)
{
  return obj->getBody0();
}

const btCollisionObject* btPersistentManifold_getBody1(btPersistentManifold* obj)
{
  return obj->getBody1();
}

int btPersistentManifold_getCacheEntry(btPersistentManifold* obj, const btManifoldPoint* newPoint)
{
  return obj->getCacheEntry(*newPoint);
}

int btPersistentManifold_getCompanionIdA(btPersistentManifold* obj)
{
  return obj->m_companionIdA;
}

int btPersistentManifold_getCompanionIdB(btPersistentManifold* obj)
{
  return obj->m_companionIdB;
}

btScalar btPersistentManifold_getContactBreakingThreshold(btPersistentManifold* obj)
{
  return obj->getContactBreakingThreshold();
}

btManifoldPoint* btPersistentManifold_getContactPoint(btPersistentManifold* obj,
  int index)
{
  return &obj->getContactPoint(index);
}

btScalar btPersistentManifold_getContactProcessingThreshold(btPersistentManifold* obj)
{
  return obj->getContactProcessingThreshold();
}

int btPersistentManifold_getIndex1a(btPersistentManifold* obj)
{
  return obj->m_index1a;
}

int btPersistentManifold_getNumContacts(btPersistentManifold* obj)
{
  return obj->getNumContacts();
}

void btPersistentManifold_refreshContactPoints(btPersistentManifold* obj, const btTransform* trA,
  const btTransform* trB)
{
  BTTRANSFORM_IN(trA);
  BTTRANSFORM_IN(trB);
  obj->refreshContactPoints(BTTRANSFORM_USE(trA), BTTRANSFORM_USE(trB));
}

void btPersistentManifold_removeContactPoint(btPersistentManifold* obj, int index)
{
  obj->removeContactPoint(index);
}

void btPersistentManifold_replaceContactPoint(btPersistentManifold* obj, const btManifoldPoint* newPoint,
  int insertIndex)
{
  obj->replaceContactPoint(*newPoint, insertIndex);
}

void btPersistentManifold_setBodies(btPersistentManifold* obj, const btCollisionObject* body0,
  const btCollisionObject* body1)
{
  obj->setBodies(body0, body1);
}

void btPersistentManifold_setCompanionIdA(btPersistentManifold* obj, int value)
{
  obj->m_companionIdA = value;
}

void btPersistentManifold_setCompanionIdB(btPersistentManifold* obj, int value)
{
  obj->m_companionIdB = value;
}

void btPersistentManifold_setContactBreakingThreshold(btPersistentManifold* obj,
  btScalar contactBreakingThreshold)
{
  obj->setContactBreakingThreshold(contactBreakingThreshold);
}

void btPersistentManifold_setContactProcessingThreshold(btPersistentManifold* obj,
  btScalar contactProcessingThreshold)
{
  obj->setContactProcessingThreshold(contactProcessingThreshold);
}

void btPersistentManifold_setIndex1a(btPersistentManifold* obj, int value)
{
  obj->m_index1a = value;
}

void btPersistentManifold_setNumContacts(btPersistentManifold* obj, int cachedPoints)
{
  obj->setNumContacts(cachedPoints);
}

bool btPersistentManifold_validContactDistance(btPersistentManifold* obj, const btManifoldPoint* pt)
{
  return obj->validContactDistance(*pt);
}

void btPersistentManifold_delete(btPersistentManifold* obj)
{
  delete obj;
}


ContactDestroyedCallback getGContactDestroyedCallback()
{
  return gContactDestroyedCallback;
}

ContactProcessedCallback getGContactProcessedCallback()
{
  return gContactProcessedCallback;
}

void setGContactDestroyedCallback(ContactDestroyedCallback callback)
{
  gContactDestroyedCallback = callback;
}

void setGContactProcessedCallback(ContactProcessedCallback callback)
{
  gContactProcessedCallback = callback;
}
