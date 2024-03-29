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

#include <BulletCollision/CollisionDispatch/btSphereTriangleCollisionAlgorithm.h>

#include "btSphereTriangleCollisionAlgorithm_wrap.h"

btSphereTriangleCollisionAlgorithm_CreateFunc* btSphereTriangleCollisionAlgorithm_CreateFunc_new()
{
  return new btSphereTriangleCollisionAlgorithm::CreateFunc();
}


btSphereTriangleCollisionAlgorithm* btSphereTriangleCollisionAlgorithm_new(btPersistentManifold* mf,
  const btCollisionAlgorithmConstructionInfo* ci, const btCollisionObjectWrapper* body0Wrap,
  const btCollisionObjectWrapper* body1Wrap, bool swapped)
{
  return new btSphereTriangleCollisionAlgorithm(mf, *ci, body0Wrap, body1Wrap,
    swapped);
}

btSphereTriangleCollisionAlgorithm* btSphereTriangleCollisionAlgorithm_new2(const btCollisionAlgorithmConstructionInfo* ci)
{
  return new btSphereTriangleCollisionAlgorithm(*ci);
}
