﻿/*
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

#include <BulletCollision/CollisionShapes/btStaticPlaneShape.h>

#include "conversion.h"
#include "btStaticPlaneShape_wrap.h"

btStaticPlaneShape* btStaticPlaneShape_new(const btVector3* planeNormal, btScalar planeConstant)
{
  BTVECTOR3_IN(planeNormal);
  return new btStaticPlaneShape(BTVECTOR3_USE(planeNormal), planeConstant);
}

btScalar btStaticPlaneShape_getPlaneConstant(btStaticPlaneShape* obj)
{
  return obj->getPlaneConstant();
}

void btStaticPlaneShape_getPlaneNormal(btStaticPlaneShape* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getPlaneNormal());
}
