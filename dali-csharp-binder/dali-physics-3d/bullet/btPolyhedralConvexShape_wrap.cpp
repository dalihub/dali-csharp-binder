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

#include <BulletCollision/CollisionShapes/btConvexPolyhedron.h>
#include <BulletCollision/CollisionShapes/btPolyhedralConvexShape.h>

#include "conversion.h"
#include "btPolyhedralConvexShape_wrap.h"

const btConvexPolyhedron* btPolyhedralConvexShape_getConvexPolyhedron(btPolyhedralConvexShape* obj)
{
  return obj->getConvexPolyhedron();
}

void btPolyhedralConvexShape_getEdge(btPolyhedralConvexShape* obj, int i, btVector3* pa,
  btVector3* pb)
{
  BTVECTOR3_DEF(pa);
  BTVECTOR3_DEF(pb);
  obj->getEdge(i, BTVECTOR3_USE(pa), BTVECTOR3_USE(pb));
  BTVECTOR3_DEF_OUT(pa);
  BTVECTOR3_DEF_OUT(pb);
}

int btPolyhedralConvexShape_getNumEdges(btPolyhedralConvexShape* obj)
{
  return obj->getNumEdges();
}

int btPolyhedralConvexShape_getNumPlanes(btPolyhedralConvexShape* obj)
{
  return obj->getNumPlanes();
}

int btPolyhedralConvexShape_getNumVertices(btPolyhedralConvexShape* obj)
{
  return obj->getNumVertices();
}

void btPolyhedralConvexShape_getPlane(btPolyhedralConvexShape* obj, btVector3* planeNormal,
  btVector3* planeSupport, int i)
{
  BTVECTOR3_DEF(planeNormal);
  BTVECTOR3_DEF(planeSupport);
  obj->getPlane(BTVECTOR3_USE(planeNormal), BTVECTOR3_USE(planeSupport), i);
  BTVECTOR3_DEF_OUT(planeNormal);
  BTVECTOR3_DEF_OUT(planeSupport);
}

void btPolyhedralConvexShape_getVertex(btPolyhedralConvexShape* obj, int i, btVector3* vtx)
{
  BTVECTOR3_DEF(vtx);
  obj->getVertex(i, BTVECTOR3_USE(vtx));
  BTVECTOR3_DEF_OUT(vtx);
}

bool btPolyhedralConvexShape_initializePolyhedralFeatures(btPolyhedralConvexShape* obj,
  int shiftVerticesByMargin)
{
  return obj->initializePolyhedralFeatures(shiftVerticesByMargin);
}

bool btPolyhedralConvexShape_isInside(btPolyhedralConvexShape* obj, const btVector3* pt,
  btScalar tolerance)
{
  BTVECTOR3_IN(pt);
  return obj->isInside(BTVECTOR3_USE(pt), tolerance);
}

void btPolyhedralConvexShape_setPolyhedralFeatures(btPolyhedralConvexShape* obj, btConvexPolyhedron* polyhedron)
{
  obj->setPolyhedralFeatures(*polyhedron);
}


void btPolyhedralConvexAabbCachingShape_getNonvirtualAabb(btPolyhedralConvexAabbCachingShape* obj,
  const btTransform* trans, btVector3* aabbMin, btVector3* aabbMax, btScalar margin)
{
  BTTRANSFORM_IN(trans);
  BTVECTOR3_DEF(aabbMin);
  BTVECTOR3_DEF(aabbMax);
  obj->getNonvirtualAabb(BTTRANSFORM_USE(trans), BTVECTOR3_USE(aabbMin), BTVECTOR3_USE(aabbMax),
    margin);
  BTVECTOR3_DEF_OUT(aabbMin);
  BTVECTOR3_DEF_OUT(aabbMax);
}

void btPolyhedralConvexAabbCachingShape_recalcLocalAabb(btPolyhedralConvexAabbCachingShape* obj)
{
  obj->recalcLocalAabb();
}
