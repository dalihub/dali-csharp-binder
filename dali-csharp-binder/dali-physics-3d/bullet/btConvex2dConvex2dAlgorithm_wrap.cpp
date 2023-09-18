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

#include <BulletCollision/CollisionDispatch/btConvex2dConvex2dAlgorithm.h>
#include <BulletCollision/NarrowPhaseCollision/btConvexPenetrationDepthSolver.h>

#include "btConvex2dConvex2dAlgorithm_wrap.h"

btConvex2dConvex2dAlgorithm_CreateFunc* btConvex2dConvex2dAlgorithm_CreateFunc_new(
  btVoronoiSimplexSolver* simplexSolver, btConvexPenetrationDepthSolver* pdSolver)
{
  return new btConvex2dConvex2dAlgorithm::CreateFunc(simplexSolver, pdSolver);
}

int btConvex2dConvex2dAlgorithm_CreateFunc_getMinimumPointsPerturbationThreshold(
  btConvex2dConvex2dAlgorithm_CreateFunc* obj)
{
  return obj->m_minimumPointsPerturbationThreshold;
}

int btConvex2dConvex2dAlgorithm_CreateFunc_getNumPerturbationIterations(btConvex2dConvex2dAlgorithm_CreateFunc* obj)
{
  return obj->m_numPerturbationIterations;
}

btConvexPenetrationDepthSolver* btConvex2dConvex2dAlgorithm_CreateFunc_getPdSolver(
  btConvex2dConvex2dAlgorithm_CreateFunc* obj)
{
  return obj->m_pdSolver;
}

btVoronoiSimplexSolver* btConvex2dConvex2dAlgorithm_CreateFunc_getSimplexSolver(btConvex2dConvex2dAlgorithm_CreateFunc* obj)
{
  return obj->m_simplexSolver;
}

void btConvex2dConvex2dAlgorithm_CreateFunc_setMinimumPointsPerturbationThreshold(
  btConvex2dConvex2dAlgorithm_CreateFunc* obj, int value)
{
  obj->m_minimumPointsPerturbationThreshold = value;
}

void btConvex2dConvex2dAlgorithm_CreateFunc_setNumPerturbationIterations(btConvex2dConvex2dAlgorithm_CreateFunc* obj,
  int value)
{
  obj->m_numPerturbationIterations = value;
}

void btConvex2dConvex2dAlgorithm_CreateFunc_setPdSolver(btConvex2dConvex2dAlgorithm_CreateFunc* obj,
  btConvexPenetrationDepthSolver* value)
{
  obj->m_pdSolver = value;
}

void btConvex2dConvex2dAlgorithm_CreateFunc_setSimplexSolver(btConvex2dConvex2dAlgorithm_CreateFunc* obj,
  btVoronoiSimplexSolver* value)
{
  obj->m_simplexSolver = value;
}


btConvex2dConvex2dAlgorithm* btConvex2dConvex2dAlgorithm_new(btPersistentManifold* mf,
  const btCollisionAlgorithmConstructionInfo* ci, const btCollisionObjectWrapper* body0Wrap,
  const btCollisionObjectWrapper* body1Wrap, btVoronoiSimplexSolver* simplexSolver,
  btConvexPenetrationDepthSolver* pdSolver, int numPerturbationIterations, int minimumPointsPerturbationThreshold)
{
  return new btConvex2dConvex2dAlgorithm(mf, *ci, body0Wrap, body1Wrap, simplexSolver,
    pdSolver, numPerturbationIterations, minimumPointsPerturbationThreshold);
}

const btPersistentManifold* btConvex2dConvex2dAlgorithm_getManifold(btConvex2dConvex2dAlgorithm* obj)
{
  return obj->getManifold();
}

void btConvex2dConvex2dAlgorithm_setLowLevelOfDetail(btConvex2dConvex2dAlgorithm* obj,
  bool useLowLevel)
{
  obj->setLowLevelOfDetail(useLowLevel);
}
