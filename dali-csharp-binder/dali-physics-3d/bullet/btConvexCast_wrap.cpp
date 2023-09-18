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

#include <BulletCollision/NarrowPhaseCollision/btConvexCast.h>

#include "conversion.h"
#include "btConvexCast_wrap.h"

btConvexCast_CastResult* btConvexCast_CastResult_new()
{
  return new btConvexCast::CastResult();
}

void btConvexCast_CastResult_DebugDraw(btConvexCast_CastResult* obj, btScalar fraction)
{
  obj->DebugDraw(fraction);
}

void btConvexCast_CastResult_drawCoordSystem(btConvexCast_CastResult* obj, const btTransform* trans)
{
  BTTRANSFORM_IN(trans);
  obj->drawCoordSystem(BTTRANSFORM_USE(trans));
}

btScalar btConvexCast_CastResult_getAllowedPenetration(btConvexCast_CastResult* obj)
{
  return obj->m_allowedPenetration;
}

btIDebugDraw* btConvexCast_CastResult_getDebugDrawer(btConvexCast_CastResult* obj)
{
  return obj->m_debugDrawer;
}

btScalar btConvexCast_CastResult_getFraction(btConvexCast_CastResult* obj)
{
  return obj->m_fraction;
}

void btConvexCast_CastResult_getHitPoint(btConvexCast_CastResult* obj, btVector3* value)
{
  BTVECTOR3_SET(value, obj->m_hitPoint);
}

void btConvexCast_CastResult_getHitTransformA(btConvexCast_CastResult* obj, btTransform* value)
{
  BTTRANSFORM_SET(value, obj->m_hitTransformA);
}

void btConvexCast_CastResult_getHitTransformB(btConvexCast_CastResult* obj, btTransform* value)
{
  BTTRANSFORM_SET(value, obj->m_hitTransformB);
}

void btConvexCast_CastResult_getNormal(btConvexCast_CastResult* obj, btVector3* value)
{
  BTVECTOR3_SET(value, obj->m_normal);
}

void btConvexCast_CastResult_reportFailure(btConvexCast_CastResult* obj, int errNo,
  int numIterations)
{
  obj->reportFailure(errNo, numIterations);
}

void btConvexCast_CastResult_setAllowedPenetration(btConvexCast_CastResult* obj,
  btScalar value)
{
  obj->m_allowedPenetration = value;
}

void btConvexCast_CastResult_setDebugDrawer(btConvexCast_CastResult* obj, btIDebugDraw* value)
{
  obj->m_debugDrawer = value;
}

void btConvexCast_CastResult_setFraction(btConvexCast_CastResult* obj, btScalar value)
{
  obj->m_fraction = value;
}

void btConvexCast_CastResult_setHitPoint(btConvexCast_CastResult* obj, const btVector3* value)
{
  BTVECTOR3_COPY(&obj->m_hitPoint, value);
}

void btConvexCast_CastResult_setHitTransformA(btConvexCast_CastResult* obj, const btTransform* value)
{
  BTTRANSFORM_COPY(&obj->m_hitTransformA, value);
}

void btConvexCast_CastResult_setHitTransformB(btConvexCast_CastResult* obj, const btTransform* value)
{
  BTTRANSFORM_COPY(&obj->m_hitTransformB, value);
}

void btConvexCast_CastResult_setNormal(btConvexCast_CastResult* obj, const btVector3* value)
{
  BTVECTOR3_COPY(&obj->m_normal, value);
}

void btConvexCast_CastResult_delete(btConvexCast_CastResult* obj)
{
  delete obj;
}


bool btConvexCast_calcTimeOfImpact(btConvexCast* obj, const btTransform* fromA, const btTransform* toA,
  const btTransform* fromB, const btTransform* toB, btConvexCast_CastResult* result)
{
  BTTRANSFORM_IN(fromA);
  BTTRANSFORM_IN(toA);
  BTTRANSFORM_IN(fromB);
  BTTRANSFORM_IN(toB);
  return obj->calcTimeOfImpact(BTTRANSFORM_USE(fromA), BTTRANSFORM_USE(toA), BTTRANSFORM_USE(fromB),
    BTTRANSFORM_USE(toB), *result);
}

void btConvexCast_delete(btConvexCast* obj)
{
  delete obj;
}
