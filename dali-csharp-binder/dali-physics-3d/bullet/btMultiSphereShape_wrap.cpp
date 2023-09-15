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

#include <BulletCollision/CollisionShapes/btMultiSphereShape.h>

#include "conversion.h"
#include "btMultiSphereShape_wrap.h"

btMultiSphereShape* btMultiSphereShape_new(const btScalar* positions, const btScalar* radi,
  int numSpheres)
{
  btVector3* positionsTemp = new btVector3[numSpheres];
  for (int i = 0; i < numSpheres; i++)
  {
    Vector3TobtVector3(&positions[i*3], &positionsTemp[i]);
  }
  btMultiSphereShape* shape = new btMultiSphereShape(positionsTemp, radi, numSpheres);
  delete[] positionsTemp;
  return shape;
}

btMultiSphereShape* btMultiSphereShape_new2(const btVector3* positions, const btScalar* radi, int numSpheres)
{
  return new btMultiSphereShape(positions, radi, numSpheres);
}

int btMultiSphereShape_getSphereCount(btMultiSphereShape* obj)
{
  return obj->getSphereCount();
}

void btMultiSphereShape_getSpherePosition(btMultiSphereShape* obj, int index, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getSpherePosition(index));
}

btScalar btMultiSphereShape_getSphereRadius(btMultiSphereShape* obj, int index)
{
  return obj->getSphereRadius(index);
}
