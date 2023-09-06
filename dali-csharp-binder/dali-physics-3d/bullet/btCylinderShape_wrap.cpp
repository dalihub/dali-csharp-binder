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

#include <BulletCollision/CollisionShapes/btCylinderShape.h>

#include "conversion.h"
#include "btCylinderShape_wrap.h"

btCylinderShape* btCylinderShape_new(const btVector3* halfExtents)
{
  BTVECTOR3_IN(halfExtents);
  return new btCylinderShape(BTVECTOR3_USE(halfExtents));
}

btCylinderShape* btCylinderShape_new2(btScalar halfExtentX, btScalar halfExtentY, btScalar halfExtentZ)
{
  return new btCylinderShape(btVector3(halfExtentX, halfExtentY, halfExtentZ));
}

void btCylinderShape_getHalfExtentsWithMargin(btCylinderShape* obj, btVector3* value)
{
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->getHalfExtentsWithMargin();
  BTVECTOR3_SET(value, temp);
}

void btCylinderShape_getHalfExtentsWithoutMargin(btCylinderShape* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getHalfExtentsWithoutMargin());
}

btScalar btCylinderShape_getRadius(btCylinderShape* obj)
{
  return obj->getRadius();
}

int btCylinderShape_getUpAxis(btCylinderShape* obj)
{
  return obj->getUpAxis();
}


btCylinderShapeX* btCylinderShapeX_new(const btVector3* halfExtents)
{
  BTVECTOR3_IN(halfExtents);
  return new btCylinderShapeX(BTVECTOR3_USE(halfExtents));
}

btCylinderShapeX* btCylinderShapeX_new2(btScalar halfExtentX, btScalar halfExtentY, btScalar halfExtentZ)
{
  return new btCylinderShapeX(btVector3(halfExtentX, halfExtentY, halfExtentZ));
}


btCylinderShapeZ* btCylinderShapeZ_new(const btVector3* halfExtents)
{
  BTVECTOR3_IN(halfExtents);
  return new btCylinderShapeZ(BTVECTOR3_USE(halfExtents));
}

btCylinderShapeZ* btCylinderShapeZ_new2(btScalar halfExtentX, btScalar halfExtentY, btScalar halfExtentZ)
{
  return new btCylinderShapeZ(btVector3(halfExtentX, halfExtentY, halfExtentZ));
}
