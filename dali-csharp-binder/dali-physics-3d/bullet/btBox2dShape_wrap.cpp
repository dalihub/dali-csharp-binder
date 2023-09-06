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

#include <BulletCollision/CollisionShapes/btBox2dShape.h>

#include "conversion.h"
#include "btBox2dShape_wrap.h"

btBox2dShape* btBox2dShape_new(const btVector3* boxHalfExtents)
{
  BTVECTOR3_IN(boxHalfExtents);
  return new btBox2dShape(BTVECTOR3_USE(boxHalfExtents));
}

btBox2dShape* btBox2dShape_new2(btScalar boxHalfExtent)
{
  return new btBox2dShape(btVector3(boxHalfExtent, boxHalfExtent, boxHalfExtent));
}

btBox2dShape* btBox2dShape_new3(btScalar boxHalfExtentX, btScalar boxHalfExtentY, btScalar boxHalfExtentZ)
{
  return new btBox2dShape(btVector3(boxHalfExtentX, boxHalfExtentY, boxHalfExtentZ));
}

void btBox2dShape_getCentroid(btBox2dShape* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getCentroid());
}

void btBox2dShape_getHalfExtentsWithMargin(btBox2dShape* obj, btVector3* value)
{
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->getHalfExtentsWithMargin();
  BTVECTOR3_SET(value, temp);
}

void btBox2dShape_getHalfExtentsWithoutMargin(btBox2dShape* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getHalfExtentsWithoutMargin());
}

const btVector3* btBox2dShape_getNormals(btBox2dShape* obj)
{
  return obj->getNormals();
}

void btBox2dShape_getPlaneEquation(btBox2dShape* obj, btVector4* plane, int i)
{
  BTVECTOR4_DEF(plane);
  obj->getPlaneEquation(BTVECTOR4_USE(plane), i);
  BTVECTOR4_DEF_OUT(plane);
}

int btBox2dShape_getVertexCount(btBox2dShape* obj)
{
  return obj->getVertexCount();
}

const btVector3* btBox2dShape_getVertices(btBox2dShape* obj)
{
  return obj->getVertices();
}
