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

#include <BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h>

#include "conversion.h"
#include "btBvhTriangleMeshShape_wrap.h"

btBvhTriangleMeshShape* btBvhTriangleMeshShape_new(btStridingMeshInterface* meshInterface,
  bool useQuantizedAabbCompression, bool buildBvh)
{
  return new btBvhTriangleMeshShape(meshInterface, useQuantizedAabbCompression,
    buildBvh);
}

btBvhTriangleMeshShape* btBvhTriangleMeshShape_new2(btStridingMeshInterface* meshInterface,
  bool useQuantizedAabbCompression, const btVector3* bvhAabbMin, const btVector3* bvhAabbMax,
  bool buildBvh)
{
  BTVECTOR3_IN(bvhAabbMin);
  BTVECTOR3_IN(bvhAabbMax);
  return new btBvhTriangleMeshShape(meshInterface, useQuantizedAabbCompression,
    BTVECTOR3_USE(bvhAabbMin), BTVECTOR3_USE(bvhAabbMax), buildBvh);
}

void btBvhTriangleMeshShape_buildOptimizedBvh(btBvhTriangleMeshShape* obj)
{
  obj->buildOptimizedBvh();
}

btOptimizedBvh* btBvhTriangleMeshShape_getOptimizedBvh(btBvhTriangleMeshShape* obj)
{
  return obj->getOptimizedBvh();
}

bool btBvhTriangleMeshShape_getOwnsBvh(btBvhTriangleMeshShape* obj)
{
  return obj->getOwnsBvh();
}

btTriangleInfoMap* btBvhTriangleMeshShape_getTriangleInfoMap(btBvhTriangleMeshShape* obj)
{
  return obj->getTriangleInfoMap();
}

void btBvhTriangleMeshShape_partialRefitTree(btBvhTriangleMeshShape* obj, const btVector3* aabbMin,
  const btVector3* aabbMax)
{
  BTVECTOR3_IN(aabbMin);
  BTVECTOR3_IN(aabbMax);
  obj->partialRefitTree(BTVECTOR3_USE(aabbMin), BTVECTOR3_USE(aabbMax));
}

void btBvhTriangleMeshShape_performConvexcast(btBvhTriangleMeshShape* obj, btTriangleCallback* callback,
  const btVector3* boxSource, const btVector3* boxTarget, const btVector3* boxMin,
  const btVector3* boxMax)
{
  BTVECTOR3_IN(boxSource);
  BTVECTOR3_IN(boxTarget);
  BTVECTOR3_IN(boxMin);
  BTVECTOR3_IN(boxMax);
  obj->performConvexcast(callback, BTVECTOR3_USE(boxSource), BTVECTOR3_USE(boxTarget),
    BTVECTOR3_USE(boxMin), BTVECTOR3_USE(boxMax));
}

void btBvhTriangleMeshShape_performRaycast(btBvhTriangleMeshShape* obj, btTriangleCallback* callback,
  const btVector3* raySource, const btVector3* rayTarget)
{
  BTVECTOR3_IN(raySource);
  BTVECTOR3_IN(rayTarget);
  obj->performRaycast(callback, BTVECTOR3_USE(raySource), BTVECTOR3_USE(rayTarget));
}

void btBvhTriangleMeshShape_refitTree(btBvhTriangleMeshShape* obj, const btVector3* aabbMin,
  const btVector3* aabbMax)
{
  BTVECTOR3_IN(aabbMin);
  BTVECTOR3_IN(aabbMax);
  obj->refitTree(BTVECTOR3_USE(aabbMin), BTVECTOR3_USE(aabbMax));
}

void btBvhTriangleMeshShape_serializeSingleBvh(btBvhTriangleMeshShape* obj, btSerializer* serializer)
{
  obj->serializeSingleBvh(serializer);
}

void btBvhTriangleMeshShape_serializeSingleTriangleInfoMap(btBvhTriangleMeshShape* obj,
  btSerializer* serializer)
{
  obj->serializeSingleTriangleInfoMap(serializer);
}

void btBvhTriangleMeshShape_setOptimizedBvh(btBvhTriangleMeshShape* obj, btOptimizedBvh* bvh)
{
  obj->setOptimizedBvh(bvh);
}

void btBvhTriangleMeshShape_setOptimizedBvh2(btBvhTriangleMeshShape* obj, btOptimizedBvh* bvh,
  const btVector3* localScaling)
{
  BTVECTOR3_IN(localScaling);
  obj->setOptimizedBvh(bvh, BTVECTOR3_USE(localScaling));
}

void btBvhTriangleMeshShape_setTriangleInfoMap(btBvhTriangleMeshShape* obj, btTriangleInfoMap* triangleInfoMap)
{
  obj->setTriangleInfoMap(triangleInfoMap);
}

bool btBvhTriangleMeshShape_usesQuantizedAabbCompression(btBvhTriangleMeshShape* obj)
{
  return obj->usesQuantizedAabbCompression();
}
