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

#include <BulletCollision/CollisionDispatch/btSphereBoxCollisionAlgorithm.h>

#include "conversion.h"
#include "btSphereBoxCollisionAlgorithm_wrap.h"

btSphereBoxCollisionAlgorithm_CreateFunc* btSphereBoxCollisionAlgorithm_CreateFunc_new()
{
  return new btSphereBoxCollisionAlgorithm::CreateFunc();
}


btSphereBoxCollisionAlgorithm* btSphereBoxCollisionAlgorithm_new(btPersistentManifold* mf,
  const btCollisionAlgorithmConstructionInfo* ci, const btCollisionObjectWrapper* body0Wrap,
  const btCollisionObjectWrapper* body1Wrap, bool isSwapped)
{
  return new btSphereBoxCollisionAlgorithm(mf, *ci, body0Wrap, body1Wrap, isSwapped);
}

bool btSphereBoxCollisionAlgorithm_getSphereDistance(btSphereBoxCollisionAlgorithm* obj,
  const btCollisionObjectWrapper* boxObjWrap, btVector3* v3PointOnBox, btVector3* normal,
  btScalar* penetrationDepth, const btVector3* v3SphereCenter, btScalar fRadius,
  btScalar maxContactDistance)
{
  BTVECTOR3_DEF(v3PointOnBox);
  BTVECTOR3_DEF(normal);
  BTVECTOR3_IN(v3SphereCenter);
  bool ret = obj->getSphereDistance(boxObjWrap, BTVECTOR3_USE(v3PointOnBox), BTVECTOR3_USE(normal),
    *penetrationDepth, BTVECTOR3_USE(v3SphereCenter), fRadius, maxContactDistance);
  BTVECTOR3_DEF_OUT(v3PointOnBox);
  BTVECTOR3_DEF_OUT(normal);
  return ret;
}

btScalar btSphereBoxCollisionAlgorithm_getSpherePenetration(btSphereBoxCollisionAlgorithm* obj,
  const btVector3* boxHalfExtent, const btVector3* sphereRelPos, btVector3* closestPoint,
  btVector3* normal)
{
  BTVECTOR3_IN(boxHalfExtent);
  BTVECTOR3_IN(sphereRelPos);
  BTVECTOR3_DEF(closestPoint);
  BTVECTOR3_DEF(normal);
  btScalar ret = obj->getSpherePenetration(BTVECTOR3_USE(boxHalfExtent), BTVECTOR3_USE(sphereRelPos),
    BTVECTOR3_USE(closestPoint), BTVECTOR3_USE(normal));
  BTVECTOR3_DEF_OUT(closestPoint);
  BTVECTOR3_DEF_OUT(normal);
  return ret;
}
