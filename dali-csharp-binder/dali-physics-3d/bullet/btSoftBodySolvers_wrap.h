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
  EXPORT bool btSoftBodySolver_checkInitialized(btSoftBodySolver* obj);
  EXPORT void btSoftBodySolver_copyBackToSoftBodies(btSoftBodySolver* obj, bool bMove);
  EXPORT int btSoftBodySolver_getNumberOfPositionIterations(btSoftBodySolver* obj);
  EXPORT int btSoftBodySolver_getNumberOfVelocityIterations(btSoftBodySolver* obj);
  //EXPORT SolverTypes btSoftBodySolver_getSolverType(btSoftBodySolver* obj);
  EXPORT float btSoftBodySolver_getTimeScale(btSoftBodySolver* obj);
  EXPORT void btSoftBodySolver_optimize(btSoftBodySolver* obj, btAlignedObjectArray_btSoftBodyPtr* softBodies, bool forceUpdate);
  EXPORT void btSoftBodySolver_predictMotion(btSoftBodySolver* obj, float solverdt);
  //EXPORT void btSoftBodySolver_processCollision(btSoftBodySolver* obj, btSoftBody* __unnamed0, const btCollisionObjectWrapper* __unnamed1);
  //EXPORT void btSoftBodySolver_processCollision2(btSoftBodySolver* obj, btSoftBody* __unnamed0, btSoftBody* __unnamed1);
  EXPORT void btSoftBodySolver_setNumberOfPositionIterations(btSoftBodySolver* obj, int iterations);
  EXPORT void btSoftBodySolver_setNumberOfVelocityIterations(btSoftBodySolver* obj, int iterations);
  EXPORT void btSoftBodySolver_solveConstraints(btSoftBodySolver* obj, float solverdt);
  EXPORT void btSoftBodySolver_updateSoftBodies(btSoftBodySolver* obj);
  EXPORT void btSoftBodySolver_delete(btSoftBodySolver* obj);

  //EXPORT void btSoftBodySolverOutput_copySoftBodyToVertexBuffer(btSoftBodySolverOutput* obj, const btSoftBody* softBody, btVertexBufferDescriptor* vertexBuffer);
  EXPORT void btSoftBodySolverOutput_delete(btSoftBodySolverOutput* obj);
#ifdef __cplusplus
}
#endif
