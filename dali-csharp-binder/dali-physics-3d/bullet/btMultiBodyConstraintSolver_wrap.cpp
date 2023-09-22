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

#include <BulletCollision/BroadphaseCollision/btDispatcher.h>
#include <BulletCollision/NarrowPhaseCollision/btPersistentManifold.h>
#include <BulletDynamics/Featherstone/btMultiBodyConstraintSolver.h>
#include <LinearMath/btIDebugDraw.h>

#include "btMultiBodyConstraintSolver_wrap.h"

btMultiBodyConstraintSolver* btMultiBodyConstraintSolver_new()
{
  return new btMultiBodyConstraintSolver();
}

btScalar btMultiBodyConstraintSolver_solveGroupCacheFriendlyFinish(btMultiBodyConstraintSolver* obj,
  btCollisionObject** bodies, int numBodies, const btContactSolverInfo* infoGlobal)
{
  return obj->solveGroupCacheFriendlyFinish(bodies, numBodies, *infoGlobal);
}

void btMultiBodyConstraintSolver_solveMultiBodyGroup(btMultiBodyConstraintSolver* obj,
  btCollisionObject** bodies, int numBodies, btPersistentManifold** manifold, int numManifolds,
  btTypedConstraint** constraints, int numConstraints, btMultiBodyConstraint** multiBodyConstraints,
  int numMultiBodyConstraints, const btContactSolverInfo* info, btIDebugDraw* debugDrawer,
  btDispatcher* dispatcher)
{
  obj->solveMultiBodyGroup(bodies, numBodies, manifold, numManifolds, constraints,
    numConstraints, multiBodyConstraints, numMultiBodyConstraints, *info, debugDrawer,
    dispatcher);
}
