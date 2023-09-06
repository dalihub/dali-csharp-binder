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

#include <BulletCollision/CollisionShapes/btTriangleShape.h>

#include "conversion.h"
#include "btTriangleShape_wrap.h"

btTriangleShape* btTriangleShape_new()
{
  return new btTriangleShape();
}

btTriangleShape* btTriangleShape_new2(const btVector3* p0, const btVector3* p1, const btVector3* p2)
{
  BTVECTOR3_IN(p0);
  BTVECTOR3_IN(p1);
  BTVECTOR3_IN(p2);
  return new btTriangleShape(BTVECTOR3_USE(p0), BTVECTOR3_USE(p1), BTVECTOR3_USE(p2));
}

void btTriangleShape_calcNormal(btTriangleShape* obj, btVector3* normal)
{
  BTVECTOR3_DEF(normal);
  obj->calcNormal(BTVECTOR3_USE(normal));
  BTVECTOR3_DEF_OUT(normal);
}

void btTriangleShape_getPlaneEquation(btTriangleShape* obj, int i, btVector3* planeNormal,
  btVector3* planeSupport)
{
  BTVECTOR3_DEF(planeNormal);
  BTVECTOR3_DEF(planeSupport);
  obj->getPlaneEquation(i, BTVECTOR3_USE(planeNormal), BTVECTOR3_USE(planeSupport));
  BTVECTOR3_DEF_OUT(planeNormal);
  BTVECTOR3_DEF_OUT(planeSupport);
}

const btScalar* btTriangleShape_getVertexPtr(btTriangleShape* obj, int index)
{
  return obj->getVertexPtr(index);
}

btVector3* btTriangleShape_getVertices1(btTriangleShape* obj)
{
  return obj->m_vertices1;
}
