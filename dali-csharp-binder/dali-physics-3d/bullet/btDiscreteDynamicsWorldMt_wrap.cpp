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

#include <BulletCollision/CollisionDispatch/btCollisionConfiguration.h>
#include <BulletCollision/CollisionDispatch/btSimulationIslandManager.h>
#include <BulletDynamics/ConstraintSolver/btConstraintSolver.h>
#include <BulletDynamics/Dynamics/btDiscreteDynamicsWorldMt.h>

#include "btDiscreteDynamicsWorldMt_wrap.h"

btConstraintSolverPoolMt* btConstraintSolverPoolMt_new(int numSolvers)
{
  return ALIGNED_NEW(btConstraintSolverPoolMt)(numSolvers);
}

btConstraintSolverPoolMt* btConstraintSolverPoolMt_new2(btConstraintSolver** solvers, int numSolvers)
{
  return ALIGNED_NEW(btConstraintSolverPoolMt)(solvers, numSolvers);
}


btDiscreteDynamicsWorldMt* btDiscreteDynamicsWorldMt_new(btDispatcher* dispatcher, btBroadphaseInterface* pairCache,
  btConstraintSolverPoolMt* constraintSolver, btConstraintSolver* constraintSolverMt,
  btCollisionConfiguration* collisionConfiguration)
{
  return new btDiscreteDynamicsWorldMt(dispatcher, pairCache, constraintSolver, constraintSolverMt,
    collisionConfiguration);
}
