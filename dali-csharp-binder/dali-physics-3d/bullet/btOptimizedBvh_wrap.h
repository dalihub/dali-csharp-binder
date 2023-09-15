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
  EXPORT btOptimizedBvh* btOptimizedBvh_new();
  EXPORT void btOptimizedBvh_build(btOptimizedBvh* obj, btStridingMeshInterface* triangles, bool useQuantizedAabbCompression, const btVector3* bvhAabbMin, const btVector3* bvhAabbMax);
  EXPORT btOptimizedBvh* btOptimizedBvh_deSerializeInPlace(void* i_alignedDataBuffer, unsigned int i_dataBufferSize, bool i_swapEndian);
  EXPORT void btOptimizedBvh_refit(btOptimizedBvh* obj, btStridingMeshInterface* triangles, const btVector3* aabbMin, const btVector3* aabbMax);
  EXPORT void btOptimizedBvh_refitPartial(btOptimizedBvh* obj, btStridingMeshInterface* triangles, const btVector3* aabbMin, const btVector3* aabbMax);
  EXPORT bool btOptimizedBvh_serializeInPlace(btOptimizedBvh* obj, void* o_alignedDataBuffer, unsigned int i_dataBufferSize, bool i_swapEndian);
  EXPORT void btOptimizedBvh_updateBvhNodes(btOptimizedBvh* obj, btStridingMeshInterface* meshInterface, int firstNode, int endNode, int index);
#ifdef __cplusplus
}
#endif
