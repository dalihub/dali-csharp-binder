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
  EXPORT btIndexedMesh* btIndexedMesh_new();
  EXPORT PHY_ScalarType btIndexedMesh_getIndexType(btIndexedMesh* obj);
  EXPORT int btIndexedMesh_getNumTriangles(btIndexedMesh* obj);
  EXPORT int btIndexedMesh_getNumVertices(btIndexedMesh* obj);
  EXPORT const unsigned char* btIndexedMesh_getTriangleIndexBase(btIndexedMesh* obj);
  EXPORT int btIndexedMesh_getTriangleIndexStride(btIndexedMesh* obj);
  EXPORT const unsigned char* btIndexedMesh_getVertexBase(btIndexedMesh* obj);
  EXPORT int btIndexedMesh_getVertexStride(btIndexedMesh* obj);
  EXPORT PHY_ScalarType btIndexedMesh_getVertexType(btIndexedMesh* obj);
  EXPORT void btIndexedMesh_setIndexType(btIndexedMesh* obj, PHY_ScalarType value);
  EXPORT void btIndexedMesh_setNumTriangles(btIndexedMesh* obj, int value);
  EXPORT void btIndexedMesh_setNumVertices(btIndexedMesh* obj, int value);
  EXPORT void btIndexedMesh_setTriangleIndexBase(btIndexedMesh* obj, const unsigned char* value);
  EXPORT void btIndexedMesh_setTriangleIndexStride(btIndexedMesh* obj, int value);
  EXPORT void btIndexedMesh_setVertexBase(btIndexedMesh* obj, const unsigned char* value);
  EXPORT void btIndexedMesh_setVertexStride(btIndexedMesh* obj, int value);
  EXPORT void btIndexedMesh_setVertexType(btIndexedMesh* obj, PHY_ScalarType value);
  EXPORT void btIndexedMesh_delete(btIndexedMesh* obj);

  EXPORT btTriangleIndexVertexArray* btTriangleIndexVertexArray_new();
  EXPORT btTriangleIndexVertexArray* btTriangleIndexVertexArray_new2(int numTriangles, int* triangleIndexBase, int triangleIndexStride, int numVertices, btScalar* vertexBase, int vertexStride);
  EXPORT void btTriangleIndexVertexArray_addIndexedMesh(btTriangleIndexVertexArray* obj, const btIndexedMesh* mesh, PHY_ScalarType indexType);
  EXPORT btAlignedObjectArray_btIndexedMesh* btTriangleIndexVertexArray_getIndexedMeshArray(btTriangleIndexVertexArray* obj);
#ifdef __cplusplus
}
#endif
