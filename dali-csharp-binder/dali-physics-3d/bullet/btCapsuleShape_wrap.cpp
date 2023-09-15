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

#include <BulletCollision/CollisionShapes/btCapsuleShape.h>

#include "btCapsuleShape_wrap.h"

btCapsuleShape* btCapsuleShape_new(btScalar radius, btScalar height)
{
  return new btCapsuleShape(radius, height);
}

void btCapsuleShape_deSerializeFloat(btCapsuleShape* obj, btCapsuleShapeData* dataBuffer)
{
  obj->deSerializeFloat(dataBuffer);
}

btScalar btCapsuleShape_getHalfHeight(btCapsuleShape* obj)
{
  return obj->getHalfHeight();
}

btScalar btCapsuleShape_getRadius(btCapsuleShape* obj)
{
  return obj->getRadius();
}

int btCapsuleShape_getUpAxis(btCapsuleShape* obj)
{
  return obj->getUpAxis();
}


btCapsuleShapeX* btCapsuleShapeX_new(btScalar radius, btScalar height)
{
  return new btCapsuleShapeX(radius, height);
}


btCapsuleShapeZ* btCapsuleShapeZ_new(btScalar radius, btScalar height)
{
  return new btCapsuleShapeZ(radius, height);
}
