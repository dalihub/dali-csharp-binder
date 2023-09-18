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
  EXPORT void btDynamicsWorld_addAction(btDynamicsWorld* obj, btActionInterface* action);
  EXPORT void btDynamicsWorld_addConstraint(btDynamicsWorld* obj, btTypedConstraint* constraint, bool disableCollisionsBetweenLinkedBodies);
  EXPORT void btDynamicsWorld_addRigidBody(btDynamicsWorld* obj, btRigidBody* body);
  EXPORT void btDynamicsWorld_addRigidBody2(btDynamicsWorld* obj, btRigidBody* body, int group, int mask);
  EXPORT void btDynamicsWorld_clearForces(btDynamicsWorld* obj);
  EXPORT btTypedConstraint* btDynamicsWorld_getConstraint(btDynamicsWorld* obj, int index);
  EXPORT btConstraintSolver* btDynamicsWorld_getConstraintSolver(btDynamicsWorld* obj);
  EXPORT void btDynamicsWorld_getGravity(btDynamicsWorld* obj, btVector3* value);
  EXPORT int btDynamicsWorld_getNumConstraints(btDynamicsWorld* obj);
  EXPORT btContactSolverInfo* btDynamicsWorld_getSolverInfo(btDynamicsWorld* obj);
  EXPORT btDynamicsWorldType btDynamicsWorld_getWorldType(btDynamicsWorld* obj);
  EXPORT void* btDynamicsWorld_getWorldUserInfo(btDynamicsWorld* obj);
  EXPORT void btDynamicsWorld_removeAction(btDynamicsWorld* obj, btActionInterface* action);
  EXPORT void btDynamicsWorld_removeConstraint(btDynamicsWorld* obj, btTypedConstraint* constraint);
  EXPORT void btDynamicsWorld_removeRigidBody(btDynamicsWorld* obj, btRigidBody* body);
  EXPORT void btDynamicsWorld_setConstraintSolver(btDynamicsWorld* obj, btConstraintSolver* solver);
  EXPORT void btDynamicsWorld_setGravity(btDynamicsWorld* obj, const btVector3* gravity);
  EXPORT void btDynamicsWorld_setInternalTickCallback(btDynamicsWorld* obj, btInternalTickCallback cb, void* worldUserInfo, bool isPreTick);
  EXPORT void btDynamicsWorld_setWorldUserInfo(btDynamicsWorld* obj, void* worldUserInfo);
  EXPORT int btDynamicsWorld_stepSimulation(btDynamicsWorld* obj, btScalar timeStep, int maxSubSteps, btScalar fixedTimeStep);
  EXPORT void btDynamicsWorld_synchronizeMotionStates(btDynamicsWorld* obj);
#ifdef __cplusplus
}
#endif
