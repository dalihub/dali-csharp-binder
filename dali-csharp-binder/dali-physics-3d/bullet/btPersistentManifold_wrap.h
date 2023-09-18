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

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif
  EXPORT btPersistentManifold* btPersistentManifold_new();
  EXPORT btPersistentManifold* btPersistentManifold_new2(const btCollisionObject* body0, const btCollisionObject* body1, int __unnamed2, btScalar contactBreakingThreshold, btScalar contactProcessingThreshold);
  EXPORT int btPersistentManifold_addManifoldPoint(btPersistentManifold* obj, const btManifoldPoint* newPoint, bool isPredictive);
  EXPORT void btPersistentManifold_clearManifold(btPersistentManifold* obj);
  EXPORT void btPersistentManifold_clearUserCache(btPersistentManifold* obj, btManifoldPoint* pt);
  EXPORT const btCollisionObject* btPersistentManifold_getBody0(btPersistentManifold* obj);
  EXPORT const btCollisionObject* btPersistentManifold_getBody1(btPersistentManifold* obj);
  EXPORT int btPersistentManifold_getCacheEntry(btPersistentManifold* obj, const btManifoldPoint* newPoint);
  EXPORT int btPersistentManifold_getCompanionIdA(btPersistentManifold* obj);
  EXPORT int btPersistentManifold_getCompanionIdB(btPersistentManifold* obj);
  EXPORT btScalar btPersistentManifold_getContactBreakingThreshold(btPersistentManifold* obj);
  EXPORT btManifoldPoint* btPersistentManifold_getContactPoint(btPersistentManifold* obj, int index);
  EXPORT btScalar btPersistentManifold_getContactProcessingThreshold(btPersistentManifold* obj);
  EXPORT int btPersistentManifold_getIndex1a(btPersistentManifold* obj);
  EXPORT int btPersistentManifold_getNumContacts(btPersistentManifold* obj);
  EXPORT void btPersistentManifold_refreshContactPoints(btPersistentManifold* obj, const btTransform* trA, const btTransform* trB);
  EXPORT void btPersistentManifold_removeContactPoint(btPersistentManifold* obj, int index);
  EXPORT void btPersistentManifold_replaceContactPoint(btPersistentManifold* obj, const btManifoldPoint* newPoint, int insertIndex);
  EXPORT void btPersistentManifold_setBodies(btPersistentManifold* obj, const btCollisionObject* body0, const btCollisionObject* body1);
  EXPORT void btPersistentManifold_setCompanionIdA(btPersistentManifold* obj, int value);
  EXPORT void btPersistentManifold_setCompanionIdB(btPersistentManifold* obj, int value);
  EXPORT void btPersistentManifold_setContactBreakingThreshold(btPersistentManifold* obj, btScalar contactBreakingThreshold);
  EXPORT void btPersistentManifold_setContactProcessingThreshold(btPersistentManifold* obj, btScalar contactProcessingThreshold);
  EXPORT void btPersistentManifold_setIndex1a(btPersistentManifold* obj, int value);
  EXPORT void btPersistentManifold_setNumContacts(btPersistentManifold* obj, int cachedPoints);
  EXPORT bool btPersistentManifold_validContactDistance(btPersistentManifold* obj, const btManifoldPoint* pt);
  EXPORT void btPersistentManifold_delete(btPersistentManifold* obj);

  EXPORT ContactDestroyedCallback getGContactDestroyedCallback();
  EXPORT ContactProcessedCallback getGContactProcessedCallback();
  EXPORT void setGContactDestroyedCallback(ContactDestroyedCallback callback);
  EXPORT void setGContactProcessedCallback(ContactProcessedCallback callback);
#ifdef __cplusplus
}
#endif
