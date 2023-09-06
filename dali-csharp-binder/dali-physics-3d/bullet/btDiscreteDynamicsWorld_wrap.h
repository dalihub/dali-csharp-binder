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
  EXPORT btDiscreteDynamicsWorld* btDiscreteDynamicsWorld_new(btDispatcher* dispatcher, btBroadphaseInterface* pairCache, btConstraintSolver* constraintSolver, btCollisionConfiguration* collisionConfiguration);
  EXPORT void btDiscreteDynamicsWorld_applyGravity(btDiscreteDynamicsWorld* obj);
  EXPORT void btDiscreteDynamicsWorld_debugDrawConstraint(btDiscreteDynamicsWorld* obj, btTypedConstraint* constraint);
  EXPORT bool btDiscreteDynamicsWorld_getApplySpeculativeContactRestitution(btDiscreteDynamicsWorld* obj);
  EXPORT btCollisionWorld* btDiscreteDynamicsWorld_getCollisionWorld(btDiscreteDynamicsWorld* obj);
  EXPORT bool btDiscreteDynamicsWorld_getLatencyMotionStateInterpolation(btDiscreteDynamicsWorld* obj);
  EXPORT btAlignedObjectArray_btRigidBodyPtr* btDiscreteDynamicsWorld_getNonStaticRigidBodies(btDiscreteDynamicsWorld* obj);
  EXPORT btSimulationIslandManager* btDiscreteDynamicsWorld_getSimulationIslandManager(btDiscreteDynamicsWorld* obj);
  EXPORT bool btDiscreteDynamicsWorld_getSynchronizeAllMotionStates(btDiscreteDynamicsWorld* obj);
  EXPORT void btDiscreteDynamicsWorld_setApplySpeculativeContactRestitution(btDiscreteDynamicsWorld* obj, bool enable);
  EXPORT void btDiscreteDynamicsWorld_setLatencyMotionStateInterpolation(btDiscreteDynamicsWorld* obj, bool latencyInterpolation);
  EXPORT void btDiscreteDynamicsWorld_setNumTasks(btDiscreteDynamicsWorld* obj, int numTasks);
  EXPORT void btDiscreteDynamicsWorld_setSynchronizeAllMotionStates(btDiscreteDynamicsWorld* obj, bool synchronizeAll);
  EXPORT void btDiscreteDynamicsWorld_solveConstraints(btDiscreteDynamicsWorld* obj, btContactSolverInfo* solverInfo);
  EXPORT void btDiscreteDynamicsWorld_synchronizeSingleMotionState(btDiscreteDynamicsWorld* obj, btRigidBody* body);
  EXPORT void btDiscreteDynamicsWorld_updateVehicles(btDiscreteDynamicsWorld* obj, btScalar timeStep);
#ifdef __cplusplus
}
#endif
