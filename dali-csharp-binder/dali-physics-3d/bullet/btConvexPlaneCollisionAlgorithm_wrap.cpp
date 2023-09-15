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

#include <BulletCollision/CollisionDispatch/btConvexPlaneCollisionAlgorithm.h>

#include "conversion.h"
#include "btConvexPlaneCollisionAlgorithm_wrap.h"

btConvexPlaneCollisionAlgorithm_CreateFunc* btConvexPlaneCollisionAlgorithm_CreateFunc_new()
{
  return new btConvexPlaneCollisionAlgorithm::CreateFunc();
}

int btConvexPlaneCollisionAlgorithm_CreateFunc_getMinimumPointsPerturbationThreshold(
  btConvexPlaneCollisionAlgorithm_CreateFunc* obj)
{
  return obj->m_minimumPointsPerturbationThreshold;
}

int btConvexPlaneCollisionAlgorithm_CreateFunc_getNumPerturbationIterations(btConvexPlaneCollisionAlgorithm_CreateFunc* obj)
{
  return obj->m_numPerturbationIterations;
}

void btConvexPlaneCollisionAlgorithm_CreateFunc_setMinimumPointsPerturbationThreshold(
  btConvexPlaneCollisionAlgorithm_CreateFunc* obj, int value)
{
  obj->m_minimumPointsPerturbationThreshold = value;
}

void btConvexPlaneCollisionAlgorithm_CreateFunc_setNumPerturbationIterations(btConvexPlaneCollisionAlgorithm_CreateFunc* obj,
  int value)
{
  obj->m_numPerturbationIterations = value;
}


btConvexPlaneCollisionAlgorithm* btConvexPlaneCollisionAlgorithm_new(btPersistentManifold* mf,
  const btCollisionAlgorithmConstructionInfo* ci, const btCollisionObjectWrapper* body0Wrap,
  const btCollisionObjectWrapper* body1Wrap, bool isSwapped, int numPerturbationIterations,
  int minimumPointsPerturbationThreshold)
{
  return new btConvexPlaneCollisionAlgorithm(mf, *ci, body0Wrap, body1Wrap, isSwapped,
    numPerturbationIterations, minimumPointsPerturbationThreshold);
}

void btConvexPlaneCollisionAlgorithm_collideSingleContact(btConvexPlaneCollisionAlgorithm* obj,
  const btQuaternion* perturbeRot, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap,
  const btDispatcherInfo* dispatchInfo, btManifoldResult* resultOut)
{
  BTQUATERNION_IN(perturbeRot);
  obj->collideSingleContact(BTQUATERNION_USE(perturbeRot), body0Wrap, body1Wrap,
    *dispatchInfo, resultOut);
}
