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

#include <BulletCollision/CollisionShapes/btConvexInternalShape.h>

#include "conversion.h"
#include "btConvexInternalShape_wrap.h"

void btConvexInternalShape_getImplicitShapeDimensions(btConvexInternalShape* obj,
  btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getImplicitShapeDimensions());
}

void btConvexInternalShape_getLocalScalingNV(btConvexInternalShape* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getLocalScalingNV());
}

btScalar btConvexInternalShape_getMarginNV(btConvexInternalShape* obj)
{
  return obj->getMarginNV();
}

void btConvexInternalShape_setImplicitShapeDimensions(btConvexInternalShape* obj,
  const btVector3* dimensions)
{
  BTVECTOR3_IN(dimensions);
  obj->setImplicitShapeDimensions(BTVECTOR3_USE(dimensions));
}

void btConvexInternalShape_setSafeMargin(btConvexInternalShape* obj, btScalar minDimension,
  btScalar defaultMarginMultiplier)
{
  obj->setSafeMargin(minDimension, defaultMarginMultiplier);
}

void btConvexInternalShape_setSafeMargin2(btConvexInternalShape* obj, const btVector3* halfExtents,
  btScalar defaultMarginMultiplier)
{
  BTVECTOR3_IN(halfExtents);
  obj->setSafeMargin(BTVECTOR3_USE(halfExtents), defaultMarginMultiplier);
}


void btConvexInternalAabbCachingShape_recalcLocalAabb(btConvexInternalAabbCachingShape* obj)
{
  obj->recalcLocalAabb();
}
