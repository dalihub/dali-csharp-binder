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

#include "main.h"

#ifdef __cplusplus
extern "C" {
#endif
  EXPORT btBvhTriangleMeshShape* btBvhTriangleMeshShape_new(btStridingMeshInterface* meshInterface, bool useQuantizedAabbCompression, bool buildBvh);
  EXPORT btBvhTriangleMeshShape* btBvhTriangleMeshShape_new2(btStridingMeshInterface* meshInterface, bool useQuantizedAabbCompression, const btVector3* bvhAabbMin, const btVector3* bvhAabbMax, bool buildBvh);
  EXPORT void btBvhTriangleMeshShape_buildOptimizedBvh(btBvhTriangleMeshShape* obj);
  EXPORT btOptimizedBvh* btBvhTriangleMeshShape_getOptimizedBvh(btBvhTriangleMeshShape* obj);
  EXPORT bool btBvhTriangleMeshShape_getOwnsBvh(btBvhTriangleMeshShape* obj);
  EXPORT btTriangleInfoMap* btBvhTriangleMeshShape_getTriangleInfoMap(btBvhTriangleMeshShape* obj);
  EXPORT void btBvhTriangleMeshShape_partialRefitTree(btBvhTriangleMeshShape* obj, const btVector3* aabbMin, const btVector3* aabbMax);
  EXPORT void btBvhTriangleMeshShape_performConvexcast(btBvhTriangleMeshShape* obj, btTriangleCallback* callback, const btVector3* boxSource, const btVector3* boxTarget, const btVector3* boxMin, const btVector3* boxMax);
  EXPORT void btBvhTriangleMeshShape_performRaycast(btBvhTriangleMeshShape* obj, btTriangleCallback* callback, const btVector3* raySource, const btVector3* rayTarget);
  EXPORT void btBvhTriangleMeshShape_refitTree(btBvhTriangleMeshShape* obj, const btVector3* aabbMin, const btVector3* aabbMax);
  EXPORT void btBvhTriangleMeshShape_serializeSingleBvh(btBvhTriangleMeshShape* obj, btSerializer* serializer);
  EXPORT void btBvhTriangleMeshShape_serializeSingleTriangleInfoMap(btBvhTriangleMeshShape* obj, btSerializer* serializer);
  EXPORT void btBvhTriangleMeshShape_setOptimizedBvh(btBvhTriangleMeshShape* obj, btOptimizedBvh* bvh);
  EXPORT void btBvhTriangleMeshShape_setOptimizedBvh2(btBvhTriangleMeshShape* obj, btOptimizedBvh* bvh, const btVector3* localScaling);
  EXPORT void btBvhTriangleMeshShape_setTriangleInfoMap(btBvhTriangleMeshShape* obj, btTriangleInfoMap* triangleInfoMap);
  EXPORT bool btBvhTriangleMeshShape_usesQuantizedAabbCompression(btBvhTriangleMeshShape* obj);
#ifdef __cplusplus
}
#endif
