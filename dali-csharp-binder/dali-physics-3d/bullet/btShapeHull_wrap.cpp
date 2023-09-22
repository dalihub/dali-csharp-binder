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

#include <BulletCollision/CollisionShapes/btShapeHull.h>

#include "btShapeHull_wrap.h"

btShapeHull* btShapeHull_new(const btConvexShape* shape)
{
  return ALIGNED_NEW(btShapeHull)(shape);
}

bool btShapeHull_buildHull(btShapeHull* obj, btScalar margin, int highRes)
{
  return obj->buildHull(margin, highRes);
}

const unsigned int* btShapeHull_getIndexPointer(btShapeHull* obj)
{
  return obj->getIndexPointer();
}

const btVector3* btShapeHull_getVertexPointer(btShapeHull* obj)
{
  return obj->getVertexPointer();
}

int btShapeHull_numIndices(btShapeHull* obj)
{
  return obj->numIndices();
}

int btShapeHull_numTriangles(btShapeHull* obj)
{
  return obj->numTriangles();
}

int btShapeHull_numVertices(btShapeHull* obj)
{
  return obj->numVertices();
}

void btShapeHull_delete(btShapeHull* obj)
{
  ALIGNED_FREE(obj);
}
