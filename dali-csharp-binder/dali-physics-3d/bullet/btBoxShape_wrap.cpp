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

#include <BulletCollision/CollisionShapes/btBoxShape.h>

#include "conversion.h"
#include "btBoxShape_wrap.h"

btBoxShape* btBoxShape_new(const btVector3* boxHalfExtents)
{
  BTVECTOR3_IN(boxHalfExtents);
  return new btBoxShape(BTVECTOR3_USE(boxHalfExtents));
}

btBoxShape* btBoxShape_new2(btScalar boxHalfExtent)
{
  return new btBoxShape(btVector3(boxHalfExtent, boxHalfExtent, boxHalfExtent));
}

btBoxShape* btBoxShape_new3(btScalar boxHalfExtentX, btScalar boxHalfExtentY, btScalar boxHalfExtentZ)
{
  return new btBoxShape(btVector3(boxHalfExtentX, boxHalfExtentY, boxHalfExtentZ));
}

void btBoxShape_getHalfExtentsWithMargin(btBoxShape* obj, btVector3* value)
{
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->getHalfExtentsWithMargin();
  BTVECTOR3_SET(value, temp);
}

void btBoxShape_getHalfExtentsWithoutMargin(btBoxShape* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getHalfExtentsWithoutMargin());
}

void btBoxShape_getPlaneEquation(btBoxShape* obj, btVector4* plane, int i)
{
  BTVECTOR4_DEF(plane);
  obj->getPlaneEquation(BTVECTOR4_USE(plane), i);
  BTVECTOR4_DEF_OUT(plane);
}
