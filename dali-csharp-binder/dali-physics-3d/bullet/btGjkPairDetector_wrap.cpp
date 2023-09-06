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

#include <BulletCollision/CollisionShapes/btConvexShape.h>
#include <BulletCollision/NarrowPhaseCollision/btConvexPenetrationDepthSolver.h>
#include <BulletCollision/NarrowPhaseCollision/btGjkPairDetector.h>
#include <LinearMath/btIDebugDraw.h>

#include "conversion.h"
#include "btGjkPairDetector_wrap.h"

btGjkPairDetector* btGjkPairDetector_new(const btConvexShape* objectA, const btConvexShape* objectB,
  btVoronoiSimplexSolver* simplexSolver, btConvexPenetrationDepthSolver* penetrationDepthSolver)
{
  return new btGjkPairDetector(objectA, objectB, simplexSolver, penetrationDepthSolver);
}

btGjkPairDetector* btGjkPairDetector_new2(const btConvexShape* objectA, const btConvexShape* objectB,
  int shapeTypeA, int shapeTypeB, btScalar marginA, btScalar marginB, btVoronoiSimplexSolver* simplexSolver,
  btConvexPenetrationDepthSolver* penetrationDepthSolver)
{
  return new btGjkPairDetector(objectA, objectB, shapeTypeA, shapeTypeB, marginA,
    marginB, simplexSolver, penetrationDepthSolver);
}

void btGjkPairDetector_getCachedSeparatingAxis(btGjkPairDetector* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getCachedSeparatingAxis());
}

btScalar btGjkPairDetector_getCachedSeparatingDistance(btGjkPairDetector* obj)
{
  return obj->getCachedSeparatingDistance();
}

int btGjkPairDetector_getCatchDegeneracies(btGjkPairDetector* obj)
{
  return obj->m_catchDegeneracies;
}

void btGjkPairDetector_getClosestPointsNonVirtual(btGjkPairDetector* obj, const btDiscreteCollisionDetectorInterface_ClosestPointInput* input,
  btDiscreteCollisionDetectorInterface_Result* output, btIDebugDraw* debugDraw)
{
  obj->getClosestPointsNonVirtual(*input, *output, debugDraw);
}

int btGjkPairDetector_getCurIter(btGjkPairDetector* obj)
{
  return obj->m_curIter;
}

int btGjkPairDetector_getDegenerateSimplex(btGjkPairDetector* obj)
{
  return obj->m_degenerateSimplex;
}

int btGjkPairDetector_getFixContactNormalDirection(btGjkPairDetector* obj)
{
  return obj->m_fixContactNormalDirection;
}

int btGjkPairDetector_getLastUsedMethod(btGjkPairDetector* obj)
{
  return obj->m_lastUsedMethod;
}

void btGjkPairDetector_setCachedSeparatingAxis(btGjkPairDetector* obj, const btVector3* seperatingAxis)
{
  BTVECTOR3_IN(seperatingAxis);
  obj->setCachedSeparatingAxis(BTVECTOR3_USE(seperatingAxis));
}

void btGjkPairDetector_setCatchDegeneracies(btGjkPairDetector* obj, int value)
{
  obj->m_catchDegeneracies = value;
}

void btGjkPairDetector_setCurIter(btGjkPairDetector* obj, int value)
{
  obj->m_curIter = value;
}

void btGjkPairDetector_setDegenerateSimplex(btGjkPairDetector* obj, int value)
{
  obj->m_degenerateSimplex = value;
}

void btGjkPairDetector_setFixContactNormalDirection(btGjkPairDetector* obj, int value)
{
  obj->m_fixContactNormalDirection = value;
}

void btGjkPairDetector_setIgnoreMargin(btGjkPairDetector* obj, bool ignoreMargin)
{
  obj->setIgnoreMargin(ignoreMargin);
}

void btGjkPairDetector_setLastUsedMethod(btGjkPairDetector* obj, int value)
{
  obj->m_lastUsedMethod = value;
}

void btGjkPairDetector_setMinkowskiA(btGjkPairDetector* obj, const btConvexShape* minkA)
{
  obj->setMinkowskiA(minkA);
}

void btGjkPairDetector_setMinkowskiB(btGjkPairDetector* obj, const btConvexShape* minkB)
{
  obj->setMinkowskiB(minkB);
}

void btGjkPairDetector_setPenetrationDepthSolver(btGjkPairDetector* obj, btConvexPenetrationDepthSolver* penetrationDepthSolver)
{
  obj->setPenetrationDepthSolver(penetrationDepthSolver);
}
