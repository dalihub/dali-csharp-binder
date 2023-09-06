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

#include <BulletCollision/CollisionDispatch/btConvexConvexAlgorithm.h>
#include <BulletCollision/NarrowPhaseCollision/btConvexPenetrationDepthSolver.h>

#include "btConvexConvexAlgorithm_wrap.h"

btConvexConvexAlgorithm_CreateFunc* btConvexConvexAlgorithm_CreateFunc_new(btConvexPenetrationDepthSolver* pdSolver)
{
  return new btConvexConvexAlgorithm::CreateFunc(pdSolver);
}

int btConvexConvexAlgorithm_CreateFunc_getMinimumPointsPerturbationThreshold(btConvexConvexAlgorithm_CreateFunc* obj)
{
  return obj->m_minimumPointsPerturbationThreshold;
}

int btConvexConvexAlgorithm_CreateFunc_getNumPerturbationIterations(btConvexConvexAlgorithm_CreateFunc* obj)
{
  return obj->m_numPerturbationIterations;
}

btConvexPenetrationDepthSolver* btConvexConvexAlgorithm_CreateFunc_getPdSolver(btConvexConvexAlgorithm_CreateFunc* obj)
{
  return obj->m_pdSolver;
}

void btConvexConvexAlgorithm_CreateFunc_setMinimumPointsPerturbationThreshold(btConvexConvexAlgorithm_CreateFunc* obj,
  int value)
{
  obj->m_minimumPointsPerturbationThreshold = value;
}

void btConvexConvexAlgorithm_CreateFunc_setNumPerturbationIterations(btConvexConvexAlgorithm_CreateFunc* obj,
  int value)
{
  obj->m_numPerturbationIterations = value;
}

void btConvexConvexAlgorithm_CreateFunc_setPdSolver(btConvexConvexAlgorithm_CreateFunc* obj,
  btConvexPenetrationDepthSolver* value)
{
  obj->m_pdSolver = value;
}


btConvexConvexAlgorithm* btConvexConvexAlgorithm_new(btPersistentManifold* mf, const btCollisionAlgorithmConstructionInfo* ci,
  const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap,
  btConvexPenetrationDepthSolver* pdSolver, int numPerturbationIterations,
  int minimumPointsPerturbationThreshold)
{
  return new btConvexConvexAlgorithm(mf, *ci, body0Wrap, body1Wrap, pdSolver,
    numPerturbationIterations, minimumPointsPerturbationThreshold);
}

const btPersistentManifold* btConvexConvexAlgorithm_getManifold(btConvexConvexAlgorithm* obj)
{
  return obj->getManifold();
}

void btConvexConvexAlgorithm_setLowLevelOfDetail(btConvexConvexAlgorithm* obj, bool useLowLevel)
{
  obj->setLowLevelOfDetail(useLowLevel);
}
