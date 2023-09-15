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
  EXPORT btMultiBodyDynamicsWorld* btMultiBodyDynamicsWorld_new(btDispatcher* dispatcher, btBroadphaseInterface* pairCache, btMultiBodyConstraintSolver* constraintSolver, btCollisionConfiguration* collisionConfiguration);
  EXPORT void btMultiBodyDynamicsWorld_addMultiBody(btMultiBodyDynamicsWorld* obj, btMultiBody* body, int group, int mask);
  EXPORT void btMultiBodyDynamicsWorld_addMultiBodyConstraint(btMultiBodyDynamicsWorld* obj, btMultiBodyConstraint* constraint);
  EXPORT void btMultiBodyDynamicsWorld_buildIslands(btMultiBodyDynamicsWorld* obj);
  EXPORT void btMultiBodyDynamicsWorld_clearMultiBodyConstraintForces(btMultiBodyDynamicsWorld* obj);
  EXPORT void btMultiBodyDynamicsWorld_clearMultiBodyForces(btMultiBodyDynamicsWorld* obj);
  EXPORT void btMultiBodyDynamicsWorld_debugDrawMultiBodyConstraint(btMultiBodyDynamicsWorld* obj, btMultiBodyConstraint* constraint);
  EXPORT void btMultiBodyDynamicsWorld_forwardKinematics(btMultiBodyDynamicsWorld* obj);
  EXPORT btMultiBody* btMultiBodyDynamicsWorld_getMultiBody(btMultiBodyDynamicsWorld* obj, int mbIndex);
  EXPORT btMultiBodyConstraint* btMultiBodyDynamicsWorld_getMultiBodyConstraint(btMultiBodyDynamicsWorld* obj, int constraintIndex);
  EXPORT int btMultiBodyDynamicsWorld_getNumMultibodies(btMultiBodyDynamicsWorld* obj);
  EXPORT int btMultiBodyDynamicsWorld_getNumMultiBodyConstraints(btMultiBodyDynamicsWorld* obj);
  EXPORT void btMultiBodyDynamicsWorld_integrateMultiBodyTransforms(btMultiBodyDynamicsWorld* obj, btScalar timeStep);
  EXPORT void btMultiBodyDynamicsWorld_integrateTransforms(btMultiBodyDynamicsWorld* obj, btScalar timeStep);
  EXPORT void btMultiBodyDynamicsWorld_predictMultiBodyTransforms(btMultiBodyDynamicsWorld* obj, btScalar timeStep);
  EXPORT void btMultiBodyDynamicsWorld_predictUnconstraintMotion(btMultiBodyDynamicsWorld* obj, btScalar timeStep);
  EXPORT void btMultiBodyDynamicsWorld_removeMultiBody(btMultiBodyDynamicsWorld* obj, btMultiBody* body);
  EXPORT void btMultiBodyDynamicsWorld_removeMultiBodyConstraint(btMultiBodyDynamicsWorld* obj, btMultiBodyConstraint* constraint);
  EXPORT void btMultiBodyDynamicsWorld_solveExternalForces(btMultiBodyDynamicsWorld* obj, btContactSolverInfo* solverInfo);
  EXPORT void btMultiBodyDynamicsWorld_solveInternalConstraints(btMultiBodyDynamicsWorld* obj, btContactSolverInfo* solverInfo);
#ifdef __cplusplus
}
#endif
