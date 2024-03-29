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

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif
  EXPORT btManifoldPoint* btManifoldPoint_new();
  EXPORT btManifoldPoint* btManifoldPoint_new2(const btVector3* pointA, const btVector3* pointB, const btVector3* normal, btScalar distance);
  EXPORT btScalar btManifoldPoint_getAppliedImpulse(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getAppliedImpulseLateral1(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getAppliedImpulseLateral2(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getCombinedContactDamping1(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getCombinedContactStiffness1(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getCombinedFriction(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getCombinedRestitution(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getCombinedRollingFriction(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getContactCFM(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getContactERP(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getContactMotion1(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getContactMotion2(btManifoldPoint* obj);
  EXPORT int btManifoldPoint_getContactPointFlags(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getDistance(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getDistance1(btManifoldPoint* obj);
  EXPORT btScalar btManifoldPoint_getFrictionCFM(btManifoldPoint* obj);
  EXPORT int btManifoldPoint_getIndex0(btManifoldPoint* obj);
  EXPORT int btManifoldPoint_getIndex1(btManifoldPoint* obj);
  EXPORT void btManifoldPoint_getLateralFrictionDir1(btManifoldPoint* obj, btVector3* value);
  EXPORT void btManifoldPoint_getLateralFrictionDir2(btManifoldPoint* obj, btVector3* value);
  EXPORT int btManifoldPoint_getLifeTime(btManifoldPoint* obj);
  EXPORT void btManifoldPoint_getLocalPointA(btManifoldPoint* obj, btVector3* value);
  EXPORT void btManifoldPoint_getLocalPointB(btManifoldPoint* obj, btVector3* value);
  EXPORT void btManifoldPoint_getNormalWorldOnB(btManifoldPoint* obj, btVector3* value);
  EXPORT int btManifoldPoint_getPartId0(btManifoldPoint* obj);
  EXPORT int btManifoldPoint_getPartId1(btManifoldPoint* obj);
  EXPORT void btManifoldPoint_getPositionWorldOnA(btManifoldPoint* obj, btVector3* value);
  EXPORT void btManifoldPoint_getPositionWorldOnB(btManifoldPoint* obj, btVector3* value);
  EXPORT void* btManifoldPoint_getUserPersistentData(btManifoldPoint* obj);
  EXPORT void btManifoldPoint_setAppliedImpulse(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setAppliedImpulseLateral1(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setAppliedImpulseLateral2(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setCombinedContactDamping1(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setCombinedContactStiffness1(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setCombinedFriction(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setCombinedRestitution(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setCombinedRollingFriction(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setContactCFM(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setContactERP(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setContactMotion1(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setContactMotion2(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setContactPointFlags(btManifoldPoint* obj, int value);
  EXPORT void btManifoldPoint_setDistance(btManifoldPoint* obj, btScalar dist);
  EXPORT void btManifoldPoint_setDistance1(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setFrictionCFM(btManifoldPoint* obj, btScalar value);
  EXPORT void btManifoldPoint_setIndex0(btManifoldPoint* obj, int value);
  EXPORT void btManifoldPoint_setIndex1(btManifoldPoint* obj, int value);
  EXPORT void btManifoldPoint_setLateralFrictionDir1(btManifoldPoint* obj, const btVector3* value);
  EXPORT void btManifoldPoint_setLateralFrictionDir2(btManifoldPoint* obj, const btVector3* value);
  EXPORT void btManifoldPoint_setLifeTime(btManifoldPoint* obj, int value);
  EXPORT void btManifoldPoint_setLocalPointA(btManifoldPoint* obj, const btVector3* value);
  EXPORT void btManifoldPoint_setLocalPointB(btManifoldPoint* obj, const btVector3* value);
  EXPORT void btManifoldPoint_setNormalWorldOnB(btManifoldPoint* obj, const btVector3* value);
  EXPORT void btManifoldPoint_setPartId0(btManifoldPoint* obj, int value);
  EXPORT void btManifoldPoint_setPartId1(btManifoldPoint* obj, int value);
  EXPORT void btManifoldPoint_setPositionWorldOnA(btManifoldPoint* obj, const btVector3* value);
  EXPORT void btManifoldPoint_setPositionWorldOnB(btManifoldPoint* obj, const btVector3* value);
  EXPORT void btManifoldPoint_setUserPersistentData(btManifoldPoint* obj, void* value);
  EXPORT void btManifoldPoint_delete(btManifoldPoint* obj);

  EXPORT ContactAddedCallback getGContactAddedCallback();
  EXPORT void setGContactAddedCallback(ContactAddedCallback value);
#ifdef __cplusplus
}
#endif
