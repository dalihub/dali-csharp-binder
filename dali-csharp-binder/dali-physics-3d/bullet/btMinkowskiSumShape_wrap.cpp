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

#include <BulletCollision/CollisionShapes/btMinkowskiSumShape.h>

#include "conversion.h"
#include "btMinkowskiSumShape_wrap.h"

btMinkowskiSumShape* btMinkowskiSumShape_new(const btConvexShape* shapeA, const btConvexShape* shapeB)
{
  return new btMinkowskiSumShape(shapeA, shapeB);
}

const btConvexShape* btMinkowskiSumShape_getShapeA(btMinkowskiSumShape* obj)
{
  return obj->getShapeA();
}

const btConvexShape* btMinkowskiSumShape_getShapeB(btMinkowskiSumShape* obj)
{
  return obj->getShapeB();
}

void btMinkowskiSumShape_getTransformA(btMinkowskiSumShape* obj, btTransform* value)
{
  BTTRANSFORM_COPY(value, &obj->getTransformA());
}

void btMinkowskiSumShape_GetTransformB(btMinkowskiSumShape* obj, btTransform* value)
{
  BTTRANSFORM_COPY(value, &obj->GetTransformB());
}

void btMinkowskiSumShape_setTransformA(btMinkowskiSumShape* obj, const btTransform* transA)
{
  BTTRANSFORM_IN(transA);
  obj->setTransformA(BTTRANSFORM_USE(transA));
}

void btMinkowskiSumShape_setTransformB(btMinkowskiSumShape* obj, const btTransform* transB)
{
  BTTRANSFORM_IN(transB);
  obj->setTransformB(BTTRANSFORM_USE(transB));
}
