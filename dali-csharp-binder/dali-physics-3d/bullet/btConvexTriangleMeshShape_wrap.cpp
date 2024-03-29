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

#include <BulletCollision/CollisionShapes/btConvexTriangleMeshShape.h>
#include <BulletCollision/CollisionShapes/btStridingMeshInterface.h>

#include "conversion.h"
#include "btConvexTriangleMeshShape_wrap.h"

btConvexTriangleMeshShape* btConvexTriangleMeshShape_new(btStridingMeshInterface* meshInterface,
  bool calcAabb)
{
  return new btConvexTriangleMeshShape(meshInterface, calcAabb);
}

void btConvexTriangleMeshShape_calculatePrincipalAxisTransform(btConvexTriangleMeshShape* obj,
  btTransform* principal, btVector3* inertia, btScalar* volume)
{
  BTTRANSFORM_IN(principal);
  BTVECTOR3_DEF(inertia);
  obj->calculatePrincipalAxisTransform(BTTRANSFORM_USE(principal), BTVECTOR3_USE(inertia),
    *volume);
  BTTRANSFORM_DEF_OUT(principal);
  BTVECTOR3_DEF_OUT(inertia);
}

btStridingMeshInterface* btConvexTriangleMeshShape_getMeshInterface(btConvexTriangleMeshShape* obj)
{
  return obj->getMeshInterface();
}
