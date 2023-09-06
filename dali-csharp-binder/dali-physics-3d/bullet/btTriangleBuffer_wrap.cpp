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

#include <BulletCollision/CollisionShapes/btTriangleBuffer.h>

#include "conversion.h"
#include "btTriangleBuffer_wrap.h"

btTriangle* btTriangle_new()
{
  return new btTriangle();
}

int btTriangle_getPartId(btTriangle* obj)
{
  return obj->m_partId;
}

int btTriangle_getTriangleIndex(btTriangle* obj)
{
  return obj->m_triangleIndex;
}

void btTriangle_getVertex0(btTriangle* obj, btVector3* value)
{
  BTVECTOR3_SET(value, obj->m_vertex0);
}

void btTriangle_getVertex1(btTriangle* obj, btVector3* value)
{
  BTVECTOR3_SET(value, obj->m_vertex1);
}

void btTriangle_getVertex2(btTriangle* obj, btVector3* value)
{
  BTVECTOR3_SET(value, obj->m_vertex2);
}

void btTriangle_setPartId(btTriangle* obj, int value)
{
  obj->m_partId = value;
}

void btTriangle_setTriangleIndex(btTriangle* obj, int value)
{
  obj->m_triangleIndex = value;
}

void btTriangle_setVertex0(btTriangle* obj, const btVector3* value)
{
  BTVECTOR3_COPY(&obj->m_vertex0, value);
}

void btTriangle_setVertex1(btTriangle* obj, const btVector3* value)
{
  BTVECTOR3_COPY(&obj->m_vertex1, value);
}

void btTriangle_setVertex2(btTriangle* obj, const btVector3* value)
{
  BTVECTOR3_COPY(&obj->m_vertex2, value);
}

void btTriangle_delete(btTriangle* obj)
{
  delete obj;
}


btTriangleBuffer* btTriangleBuffer_new()
{
  return new btTriangleBuffer();
}

void btTriangleBuffer_clearBuffer(btTriangleBuffer* obj)
{
  obj->clearBuffer();
}

int btTriangleBuffer_getNumTriangles(btTriangleBuffer* obj)
{
  return obj->getNumTriangles();
}

const btTriangle* btTriangleBuffer_getTriangle(btTriangleBuffer* obj, int index)
{
  return &obj->getTriangle(index);
}
