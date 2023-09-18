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
#include <LinearMath/btIDebugDraw.h>

#include "conversion.h"
#include "btConvexPenetrationDepthSolver_wrap.h"

bool btConvexPenetrationDepthSolver_calcPenDepth(btConvexPenetrationDepthSolver* obj,
  btVoronoiSimplexSolver* simplexSolver, const btConvexShape* convexA, const btConvexShape* convexB,
  const btTransform* transA, const btTransform* transB, btVector3* v, btVector3* pa,
  btVector3* pb, btIDebugDraw* debugDraw)
{
  BTTRANSFORM_IN(transA);
  BTTRANSFORM_IN(transB);
  BTVECTOR3_DEF(v);
  BTVECTOR3_DEF(pa);
  BTVECTOR3_DEF(pb);
  bool ret = obj->calcPenDepth(*simplexSolver, convexA, convexB, BTTRANSFORM_USE(transA),
    BTTRANSFORM_USE(transB), BTVECTOR3_USE(v), BTVECTOR3_USE(pa), BTVECTOR3_USE(pb),
    debugDraw);
  BTVECTOR3_DEF_OUT(v);
  BTVECTOR3_DEF_OUT(pa);
  BTVECTOR3_DEF_OUT(pb);
  return ret;
}

void btConvexPenetrationDepthSolver_delete(btConvexPenetrationDepthSolver* obj)
{
  delete obj;
}
