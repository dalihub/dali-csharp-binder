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

#include <BulletCollision/CollisionShapes/btConeShape.h>

#include "btConeShape_wrap.h"

btConeShape* btConeShape_new(btScalar radius, btScalar height)
{
  return new btConeShape(radius, height);
}

int btConeShape_getConeUpIndex(btConeShape* obj)
{
  return obj->getConeUpIndex();
}

btScalar btConeShape_getHeight(btConeShape* obj)
{
  return obj->getHeight();
}

btScalar btConeShape_getRadius(btConeShape* obj)
{
  return obj->getRadius();
}

void btConeShape_setConeUpIndex(btConeShape* obj, int upIndex)
{
  obj->setConeUpIndex(upIndex);
}

void btConeShape_setHeight(btConeShape* obj, btScalar height)
{
  obj->setHeight(height);
}

void btConeShape_setRadius(btConeShape* obj, btScalar radius)
{
  obj->setRadius(radius);
}


btConeShapeX* btConeShapeX_new(btScalar radius, btScalar height)
{
  return new btConeShapeX(radius, height);
}


btConeShapeZ* btConeShapeZ_new(btScalar radius, btScalar height)
{
  return new btConeShapeZ(radius, height);
}
