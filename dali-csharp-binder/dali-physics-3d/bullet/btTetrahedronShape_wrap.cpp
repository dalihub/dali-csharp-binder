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

#include <BulletCollision/CollisionShapes/btTetrahedronShape.h>

#include "conversion.h"
#include "btTetrahedronShape_wrap.h"

btBU_Simplex1to4* btBU_Simplex1to4_new()
{
  return new btBU_Simplex1to4();
}

btBU_Simplex1to4* btBU_Simplex1to4_new2(const btVector3* pt0)
{
  BTVECTOR3_IN(pt0);
  return new btBU_Simplex1to4(BTVECTOR3_USE(pt0));
}

btBU_Simplex1to4* btBU_Simplex1to4_new3(const btVector3* pt0, const btVector3* pt1)
{
  BTVECTOR3_IN(pt0);
  BTVECTOR3_IN(pt1);
  return new btBU_Simplex1to4(BTVECTOR3_USE(pt0), BTVECTOR3_USE(pt1));
}

btBU_Simplex1to4* btBU_Simplex1to4_new4(const btVector3* pt0, const btVector3* pt1,
  const btVector3* pt2)
{
  BTVECTOR3_IN(pt0);
  BTVECTOR3_IN(pt1);
  BTVECTOR3_IN(pt2);
  return new btBU_Simplex1to4(BTVECTOR3_USE(pt0), BTVECTOR3_USE(pt1), BTVECTOR3_USE(pt2));
}

btBU_Simplex1to4* btBU_Simplex1to4_new5(const btVector3* pt0, const btVector3* pt1,
  const btVector3* pt2, const btVector3* pt3)
{
  BTVECTOR3_IN(pt0);
  BTVECTOR3_IN(pt1);
  BTVECTOR3_IN(pt2);
  BTVECTOR3_IN(pt3);
  return new btBU_Simplex1to4(BTVECTOR3_USE(pt0), BTVECTOR3_USE(pt1), BTVECTOR3_USE(pt2),
    BTVECTOR3_USE(pt3));
}

void btBU_Simplex1to4_addVertex(btBU_Simplex1to4* obj, const btVector3* pt)
{
  BTVECTOR3_IN(pt);
  obj->addVertex(BTVECTOR3_USE(pt));
}

int btBU_Simplex1to4_getIndex(btBU_Simplex1to4* obj, int i)
{
  return obj->getIndex(i);
}

void btBU_Simplex1to4_reset(btBU_Simplex1to4* obj)
{
  obj->reset();
}
