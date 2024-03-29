﻿/*
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
  EXPORT bool btUsageBitfield_getUnused1(btUsageBitfield* obj);
  EXPORT bool btUsageBitfield_getUnused2(btUsageBitfield* obj);
  EXPORT bool btUsageBitfield_getUnused3(btUsageBitfield* obj);
  EXPORT bool btUsageBitfield_getUnused4(btUsageBitfield* obj);
  EXPORT bool btUsageBitfield_getUsedVertexA(btUsageBitfield* obj);
  EXPORT bool btUsageBitfield_getUsedVertexB(btUsageBitfield* obj);
  EXPORT bool btUsageBitfield_getUsedVertexC(btUsageBitfield* obj);
  EXPORT bool btUsageBitfield_getUsedVertexD(btUsageBitfield* obj);
  EXPORT void btUsageBitfield_reset(btUsageBitfield* obj);
  EXPORT void btUsageBitfield_setUnused1(btUsageBitfield* obj, bool value);
  EXPORT void btUsageBitfield_setUnused2(btUsageBitfield* obj, bool value);
  EXPORT void btUsageBitfield_setUnused3(btUsageBitfield* obj, bool value);
  EXPORT void btUsageBitfield_setUnused4(btUsageBitfield* obj, bool value);
  EXPORT void btUsageBitfield_setUsedVertexA(btUsageBitfield* obj, bool value);
  EXPORT void btUsageBitfield_setUsedVertexB(btUsageBitfield* obj, bool value);
  EXPORT void btUsageBitfield_setUsedVertexC(btUsageBitfield* obj, bool value);
  EXPORT void btUsageBitfield_setUsedVertexD(btUsageBitfield* obj, bool value);

  EXPORT btSubSimplexClosestResult* btSubSimplexClosestResult_new();
  EXPORT btScalar* btSubSimplexClosestResult_getBarycentricCoords(btSubSimplexClosestResult* obj);
  EXPORT void btSubSimplexClosestResult_getClosestPointOnSimplex(btSubSimplexClosestResult* obj, btVector3* value);
  EXPORT bool btSubSimplexClosestResult_getDegenerate(btSubSimplexClosestResult* obj);
  EXPORT btUsageBitfield* btSubSimplexClosestResult_getUsedVertices(btSubSimplexClosestResult* obj);
  EXPORT bool btSubSimplexClosestResult_isValid(btSubSimplexClosestResult* obj);
  EXPORT void btSubSimplexClosestResult_reset(btSubSimplexClosestResult* obj);
  EXPORT void btSubSimplexClosestResult_setBarycentricCoordinates(btSubSimplexClosestResult* obj);
  EXPORT void btSubSimplexClosestResult_setBarycentricCoordinates2(btSubSimplexClosestResult* obj, btScalar a);
  EXPORT void btSubSimplexClosestResult_setBarycentricCoordinates3(btSubSimplexClosestResult* obj, btScalar a, btScalar b);
  EXPORT void btSubSimplexClosestResult_setBarycentricCoordinates4(btSubSimplexClosestResult* obj, btScalar a, btScalar b, btScalar c);
  EXPORT void btSubSimplexClosestResult_setBarycentricCoordinates5(btSubSimplexClosestResult* obj, btScalar a, btScalar b, btScalar c, btScalar d);
  EXPORT void btSubSimplexClosestResult_setClosestPointOnSimplex(btSubSimplexClosestResult* obj, const btVector3* value);
  EXPORT void btSubSimplexClosestResult_setDegenerate(btSubSimplexClosestResult* obj, bool value);
  EXPORT void btSubSimplexClosestResult_setUsedVertices(btSubSimplexClosestResult* obj, const btUsageBitfield* value);
  EXPORT void btSubSimplexClosestResult_delete(btSubSimplexClosestResult* obj);

  EXPORT btVoronoiSimplexSolver* btVoronoiSimplexSolver_new();
  EXPORT void btVoronoiSimplexSolver_addVertex(btVoronoiSimplexSolver* obj, const btVector3* w, const btVector3* p, const btVector3* q);
  EXPORT void btVoronoiSimplexSolver_backup_closest(btVoronoiSimplexSolver* obj, btVector3* v);
  EXPORT bool btVoronoiSimplexSolver_closest(btVoronoiSimplexSolver* obj, btVector3* v);
  EXPORT bool btVoronoiSimplexSolver_closestPtPointTetrahedron(btVoronoiSimplexSolver* obj, const btVector3* p, const btVector3* a, const btVector3* b, const btVector3* c, const btVector3* d, btSubSimplexClosestResult* finalResult);
  EXPORT bool btVoronoiSimplexSolver_closestPtPointTriangle(btVoronoiSimplexSolver* obj, const btVector3* p, const btVector3* a, const btVector3* b, const btVector3* c, btSubSimplexClosestResult* result);
  EXPORT void btVoronoiSimplexSolver_compute_points(btVoronoiSimplexSolver* obj, btVector3* p1, btVector3* p2);
  EXPORT bool btVoronoiSimplexSolver_emptySimplex(btVoronoiSimplexSolver* obj);
  EXPORT bool btVoronoiSimplexSolver_fullSimplex(btVoronoiSimplexSolver* obj);
  EXPORT btSubSimplexClosestResult* btVoronoiSimplexSolver_getCachedBC(btVoronoiSimplexSolver* obj);
  EXPORT void btVoronoiSimplexSolver_getCachedP1(btVoronoiSimplexSolver* obj, btVector3* value);
  EXPORT void btVoronoiSimplexSolver_getCachedP2(btVoronoiSimplexSolver* obj, btVector3* value);
  EXPORT void btVoronoiSimplexSolver_getCachedV(btVoronoiSimplexSolver* obj, btVector3* value);
  EXPORT bool btVoronoiSimplexSolver_getCachedValidClosest(btVoronoiSimplexSolver* obj);
  EXPORT btScalar btVoronoiSimplexSolver_getEqualVertexThreshold(btVoronoiSimplexSolver* obj);
  EXPORT void btVoronoiSimplexSolver_getLastW(btVoronoiSimplexSolver* obj, btVector3* value);
  EXPORT bool btVoronoiSimplexSolver_getNeedsUpdate(btVoronoiSimplexSolver* obj);
  EXPORT int btVoronoiSimplexSolver_getNumVertices(btVoronoiSimplexSolver* obj);
  EXPORT int btVoronoiSimplexSolver_getSimplex(btVoronoiSimplexSolver* obj, btVector3* pBuf, btVector3* qBuf, btVector3* yBuf);
  EXPORT btVector3* btVoronoiSimplexSolver_getSimplexPointsP(btVoronoiSimplexSolver* obj);
  EXPORT btVector3* btVoronoiSimplexSolver_getSimplexPointsQ(btVoronoiSimplexSolver* obj);
  EXPORT btVector3* btVoronoiSimplexSolver_getSimplexVectorW(btVoronoiSimplexSolver* obj);
  EXPORT bool btVoronoiSimplexSolver_inSimplex(btVoronoiSimplexSolver* obj, const btVector3* w);
  EXPORT btScalar btVoronoiSimplexSolver_maxVertex(btVoronoiSimplexSolver* obj);
  EXPORT int btVoronoiSimplexSolver_numVertices(btVoronoiSimplexSolver* obj);
  EXPORT int btVoronoiSimplexSolver_pointOutsideOfPlane(btVoronoiSimplexSolver* obj, const btVector3* p, const btVector3* a, const btVector3* b, const btVector3* c, const btVector3* d);
  EXPORT void btVoronoiSimplexSolver_reduceVertices(btVoronoiSimplexSolver* obj, const btUsageBitfield* usedVerts);
  EXPORT void btVoronoiSimplexSolver_removeVertex(btVoronoiSimplexSolver* obj, int index);
  EXPORT void btVoronoiSimplexSolver_reset(btVoronoiSimplexSolver* obj);
  EXPORT void btVoronoiSimplexSolver_setCachedBC(btVoronoiSimplexSolver* obj, const btSubSimplexClosestResult* value);
  EXPORT void btVoronoiSimplexSolver_setCachedP1(btVoronoiSimplexSolver* obj, const btVector3* value);
  EXPORT void btVoronoiSimplexSolver_setCachedP2(btVoronoiSimplexSolver* obj, const btVector3* value);
  EXPORT void btVoronoiSimplexSolver_setCachedV(btVoronoiSimplexSolver* obj, const btVector3* value);
  EXPORT void btVoronoiSimplexSolver_setCachedValidClosest(btVoronoiSimplexSolver* obj, bool value);
  EXPORT void btVoronoiSimplexSolver_setEqualVertexThreshold(btVoronoiSimplexSolver* obj, btScalar threshold);
  EXPORT void btVoronoiSimplexSolver_setLastW(btVoronoiSimplexSolver* obj, const btVector3* value);
  EXPORT void btVoronoiSimplexSolver_setNeedsUpdate(btVoronoiSimplexSolver* obj, bool value);
  EXPORT void btVoronoiSimplexSolver_setNumVertices(btVoronoiSimplexSolver* obj, int value);
  EXPORT bool btVoronoiSimplexSolver_updateClosestVectorAndPoints(btVoronoiSimplexSolver* obj);
  EXPORT void btVoronoiSimplexSolver_delete(btVoronoiSimplexSolver* obj);
#ifdef __cplusplus
}
#endif
