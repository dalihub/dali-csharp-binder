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

#include <BulletCollision/CollisionShapes/btConvexShape.h>

#include "conversion.h"
#include "btConvexShape_wrap.h"

void btConvexShape_batchedUnitVectorGetSupportingVertexWithoutMargin(btConvexShape* obj,
  const btVector3* vectors, btVector3* supportVerticesOut, int numVectors)
{
  obj->batchedUnitVectorGetSupportingVertexWithoutMargin(vectors, supportVerticesOut,
    numVectors);
}

void btConvexShape_getAabbNonVirtual(btConvexShape* obj, const btTransform* t, btVector3* aabbMin,
  btVector3* aabbMax)
{
  BTTRANSFORM_IN(t);
  BTVECTOR3_DEF(aabbMin);
  BTVECTOR3_DEF(aabbMax);
  obj->getAabbNonVirtual(BTTRANSFORM_USE(t), BTVECTOR3_USE(aabbMin), BTVECTOR3_USE(aabbMax));
  BTVECTOR3_DEF_OUT(aabbMin);
  BTVECTOR3_DEF_OUT(aabbMax);
}

void btConvexShape_getAabbSlow(btConvexShape* obj, const btTransform* t, btVector3* aabbMin,
  btVector3* aabbMax)
{
  BTTRANSFORM_IN(t);
  BTVECTOR3_DEF(aabbMin);
  BTVECTOR3_DEF(aabbMax);
  obj->getAabbSlow(BTTRANSFORM_USE(t), BTVECTOR3_USE(aabbMin), BTVECTOR3_USE(aabbMax));
  BTVECTOR3_DEF_OUT(aabbMin);
  BTVECTOR3_DEF_OUT(aabbMax);
}

btScalar btConvexShape_getMarginNonVirtual(btConvexShape* obj)
{
  return obj->getMarginNonVirtual();
}

int btConvexShape_getNumPreferredPenetrationDirections(btConvexShape* obj)
{
  return obj->getNumPreferredPenetrationDirections();
}

void btConvexShape_getPreferredPenetrationDirection(btConvexShape* obj, int index,
  btVector3* penetrationVector)
{
  BTVECTOR3_DEF(penetrationVector);
  obj->getPreferredPenetrationDirection(index, BTVECTOR3_USE(penetrationVector));
  BTVECTOR3_DEF_OUT(penetrationVector);
}

void btConvexShape_localGetSupportingVertex(btConvexShape* obj, const btVector3* vec,
  btVector3* value)
{
  BTVECTOR3_IN(vec);
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->localGetSupportingVertex(BTVECTOR3_USE(vec));
  BTVECTOR3_SET(value, temp);
}

void btConvexShape_localGetSupportingVertexWithoutMargin(btConvexShape* obj, const btVector3* vec,
  btVector3* value)
{
  BTVECTOR3_IN(vec);
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->localGetSupportingVertexWithoutMargin(BTVECTOR3_USE(vec));
  BTVECTOR3_SET(value, temp);
}

void btConvexShape_localGetSupportVertexNonVirtual(btConvexShape* obj, const btVector3* vec,
  btVector3* value)
{
  BTVECTOR3_IN(vec);
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->localGetSupportVertexNonVirtual(BTVECTOR3_USE(vec));
  BTVECTOR3_SET(value, temp);
}

void btConvexShape_localGetSupportVertexWithoutMarginNonVirtual(btConvexShape* obj,
  const btVector3* vec, btVector3* value)
{
  BTVECTOR3_IN(vec);
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->localGetSupportVertexWithoutMarginNonVirtual(BTVECTOR3_USE(vec));
  BTVECTOR3_SET(value, temp);
}

void btConvexShape_project(btConvexShape* obj, const btTransform* trans, const btVector3* dir,
  btScalar* minProj, btScalar* maxProj, btVector3* witnesPtMin, btVector3* witnesPtMax)
{
  BTTRANSFORM_IN(trans);
  BTVECTOR3_IN(dir);
  BTVECTOR3_DEF(witnesPtMin);
  BTVECTOR3_DEF(witnesPtMax);
  obj->project(BTTRANSFORM_USE(trans), BTVECTOR3_USE(dir), *minProj, *maxProj,
    BTVECTOR3_USE(witnesPtMin), BTVECTOR3_USE(witnesPtMax));
  BTVECTOR3_DEF_OUT(witnesPtMin);
  BTVECTOR3_DEF_OUT(witnesPtMax);
}
