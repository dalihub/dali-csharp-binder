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
  EXPORT btGjkPairDetector* btGjkPairDetector_new(const btConvexShape* objectA, const btConvexShape* objectB, btVoronoiSimplexSolver* simplexSolver, btConvexPenetrationDepthSolver* penetrationDepthSolver);
  EXPORT btGjkPairDetector* btGjkPairDetector_new2(const btConvexShape* objectA, const btConvexShape* objectB, int shapeTypeA, int shapeTypeB, btScalar marginA, btScalar marginB, btVoronoiSimplexSolver* simplexSolver, btConvexPenetrationDepthSolver* penetrationDepthSolver);
  EXPORT void btGjkPairDetector_getCachedSeparatingAxis(btGjkPairDetector* obj, btVector3* value);
  EXPORT btScalar btGjkPairDetector_getCachedSeparatingDistance(btGjkPairDetector* obj);
  EXPORT int btGjkPairDetector_getCatchDegeneracies(btGjkPairDetector* obj);
  EXPORT void btGjkPairDetector_getClosestPointsNonVirtual(btGjkPairDetector* obj, const btDiscreteCollisionDetectorInterface_ClosestPointInput* input, btDiscreteCollisionDetectorInterface_Result* output, btIDebugDraw* debugDraw);
  EXPORT int btGjkPairDetector_getCurIter(btGjkPairDetector* obj);
  EXPORT int btGjkPairDetector_getDegenerateSimplex(btGjkPairDetector* obj);
  EXPORT int btGjkPairDetector_getFixContactNormalDirection(btGjkPairDetector* obj);
  EXPORT int btGjkPairDetector_getLastUsedMethod(btGjkPairDetector* obj);
  EXPORT void btGjkPairDetector_setCachedSeparatingAxis(btGjkPairDetector* obj, const btVector3* seperatingAxis);
  EXPORT void btGjkPairDetector_setCatchDegeneracies(btGjkPairDetector* obj, int value);
  EXPORT void btGjkPairDetector_setCurIter(btGjkPairDetector* obj, int value);
  EXPORT void btGjkPairDetector_setDegenerateSimplex(btGjkPairDetector* obj, int value);
  EXPORT void btGjkPairDetector_setFixContactNormalDirection(btGjkPairDetector* obj, int value);
  EXPORT void btGjkPairDetector_setIgnoreMargin(btGjkPairDetector* obj, bool ignoreMargin);
  EXPORT void btGjkPairDetector_setLastUsedMethod(btGjkPairDetector* obj, int value);
  EXPORT void btGjkPairDetector_setMinkowskiA(btGjkPairDetector* obj, const btConvexShape* minkA);
  EXPORT void btGjkPairDetector_setMinkowskiB(btGjkPairDetector* obj, const btConvexShape* minkB);
  EXPORT void btGjkPairDetector_setPenetrationDepthSolver(btGjkPairDetector* obj, btConvexPenetrationDepthSolver* penetrationDepthSolver);
#ifdef __cplusplus
}
#endif
