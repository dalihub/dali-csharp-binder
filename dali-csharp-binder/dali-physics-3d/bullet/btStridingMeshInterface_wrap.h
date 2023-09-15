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
  EXPORT void btStridingMeshInterface_calculateAabbBruteForce(btStridingMeshInterface* obj, btVector3* aabbMin, btVector3* aabbMax);
  EXPORT int btStridingMeshInterface_calculateSerializeBufferSize(btStridingMeshInterface* obj);
  EXPORT void btStridingMeshInterface_getLockedReadOnlyVertexIndexBase(btStridingMeshInterface* obj, const unsigned char** vertexbase, int* numverts, PHY_ScalarType* type, int* vertexStride, const unsigned char** indexbase, int* indexstride, int* numfaces, PHY_ScalarType* indicestype, int subpart);
  EXPORT void btStridingMeshInterface_getLockedVertexIndexBase(btStridingMeshInterface* obj, unsigned char** vertexbase, int* numverts, PHY_ScalarType* type, int* vertexStride, unsigned char** indexbase, int* indexstride, int* numfaces, PHY_ScalarType* indicestype, int subpart);
  EXPORT int btStridingMeshInterface_getNumSubParts(btStridingMeshInterface* obj);
  EXPORT void btStridingMeshInterface_getPremadeAabb(btStridingMeshInterface* obj, btVector3* aabbMin, btVector3* aabbMax);
  EXPORT void btStridingMeshInterface_getScaling(btStridingMeshInterface* obj, btVector3* value);
  EXPORT bool btStridingMeshInterface_hasPremadeAabb(btStridingMeshInterface* obj);
  EXPORT void btStridingMeshInterface_InternalProcessAllTriangles(btStridingMeshInterface* obj, btInternalTriangleIndexCallback* callback, const btVector3* aabbMin, const btVector3* aabbMax);
  EXPORT void btStridingMeshInterface_preallocateIndices(btStridingMeshInterface* obj, int numindices);
  EXPORT void btStridingMeshInterface_preallocateVertices(btStridingMeshInterface* obj, int numverts);
  EXPORT const char* btStridingMeshInterface_serialize(btStridingMeshInterface* obj, void* dataBuffer, btSerializer* serializer);
  EXPORT void btStridingMeshInterface_setPremadeAabb(btStridingMeshInterface* obj, const btVector3* aabbMin, const btVector3* aabbMax);
  EXPORT void btStridingMeshInterface_setScaling(btStridingMeshInterface* obj, const btVector3* scaling);
  EXPORT void btStridingMeshInterface_unLockReadOnlyVertexBase(btStridingMeshInterface* obj, int subpart);
  EXPORT void btStridingMeshInterface_unLockVertexBase(btStridingMeshInterface* obj, int subpart);
  EXPORT void btStridingMeshInterface_delete(btStridingMeshInterface* obj);
#ifdef __cplusplus
}
#endif
