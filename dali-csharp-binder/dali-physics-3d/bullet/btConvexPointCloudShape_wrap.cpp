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

#include <BulletCollision/CollisionShapes/btConvexPointCloudShape.h>

#include "conversion.h"
#include "btConvexPointCloudShape_wrap.h"

btConvexPointCloudShape* btConvexPointCloudShape_new()
{
  return new btConvexPointCloudShape();
}

btConvexPointCloudShape* btConvexPointCloudShape_new2(btVector3* points, int numPoints,
  const btVector3* localScaling, bool computeAabb)
{
  BTVECTOR3_IN(localScaling);
  return new btConvexPointCloudShape(points, numPoints, BTVECTOR3_USE(localScaling),
    computeAabb);
}

int btConvexPointCloudShape_getNumPoints(btConvexPointCloudShape* obj)
{
  return obj->getNumPoints();
}

void btConvexPointCloudShape_getScaledPoint(btConvexPointCloudShape* obj, int index,
  btVector3* value)
{
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->getScaledPoint(index);
  BTVECTOR3_SET(value, temp);
}

btVector3* btConvexPointCloudShape_getUnscaledPoints(btConvexPointCloudShape* obj)
{
  return obj->getUnscaledPoints();
}

void btConvexPointCloudShape_setPoints(btConvexPointCloudShape* obj, btVector3* points,
  int numPoints)
{
  obj->setPoints(points, numPoints);
}

void btConvexPointCloudShape_setPoints(btConvexPointCloudShape* obj, btVector3* points,
  int numPoints, bool computeAabb)
{
  obj->setPoints(points, numPoints, computeAabb);
}

void btConvexPointCloudShape_setPoints2(btConvexPointCloudShape* obj, btVector3* points,
  int numPoints, bool computeAabb, const btVector3* localScaling)
{
  BTVECTOR3_IN(localScaling);
  obj->setPoints(points, numPoints, computeAabb, BTVECTOR3_USE(localScaling));
}
