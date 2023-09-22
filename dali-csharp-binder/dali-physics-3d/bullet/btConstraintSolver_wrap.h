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
  EXPORT void btConstraintSolver_allSolved(btConstraintSolver* obj, const btContactSolverInfo* __unnamed0, btIDebugDraw* __unnamed1);
  EXPORT btConstraintSolverType btConstraintSolver_getSolverType(btConstraintSolver* obj);
  EXPORT void btConstraintSolver_prepareSolve(btConstraintSolver* obj, int __unnamed0, int __unnamed1);
  EXPORT void btConstraintSolver_reset(btConstraintSolver* obj);
  EXPORT btScalar btConstraintSolver_solveGroup(btConstraintSolver* obj, btCollisionObject** bodies, int numBodies, btPersistentManifold** manifold, int numManifolds, btTypedConstraint** constraints, int numConstraints, const btContactSolverInfo* info, btIDebugDraw* debugDrawer, btDispatcher* dispatcher);
  EXPORT void btConstraintSolver_delete(btConstraintSolver* obj);
#ifdef __cplusplus
}
#endif
