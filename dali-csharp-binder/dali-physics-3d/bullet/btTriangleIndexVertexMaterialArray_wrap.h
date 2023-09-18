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
  EXPORT btMaterialProperties* btMaterialProperties_new();
  EXPORT const unsigned char* btMaterialProperties_getMaterialBase(btMaterialProperties* obj);
  EXPORT int btMaterialProperties_getMaterialStride(btMaterialProperties* obj);
  EXPORT PHY_ScalarType btMaterialProperties_getMaterialType(btMaterialProperties* obj);
  EXPORT int btMaterialProperties_getNumMaterials(btMaterialProperties* obj);
  EXPORT int btMaterialProperties_getNumTriangles(btMaterialProperties* obj);
  EXPORT const unsigned char* btMaterialProperties_getTriangleMaterialsBase(btMaterialProperties* obj);
  EXPORT int btMaterialProperties_getTriangleMaterialStride(btMaterialProperties* obj);
  EXPORT PHY_ScalarType btMaterialProperties_getTriangleType(btMaterialProperties* obj);
  EXPORT void btMaterialProperties_setMaterialBase(btMaterialProperties* obj, const unsigned char* value);
  EXPORT void btMaterialProperties_setMaterialStride(btMaterialProperties* obj, int value);
  EXPORT void btMaterialProperties_setMaterialType(btMaterialProperties* obj, PHY_ScalarType value);
  EXPORT void btMaterialProperties_setNumMaterials(btMaterialProperties* obj, int value);
  EXPORT void btMaterialProperties_setNumTriangles(btMaterialProperties* obj, int value);
  EXPORT void btMaterialProperties_setTriangleMaterialsBase(btMaterialProperties* obj, const unsigned char* value);
  EXPORT void btMaterialProperties_setTriangleMaterialStride(btMaterialProperties* obj, int value);
  EXPORT void btMaterialProperties_setTriangleType(btMaterialProperties* obj, PHY_ScalarType value);
  EXPORT void btMaterialProperties_delete(btMaterialProperties* obj);

  EXPORT btTriangleIndexVertexMaterialArray* btTriangleIndexVertexMaterialArray_new();
  EXPORT btTriangleIndexVertexMaterialArray* btTriangleIndexVertexMaterialArray_new2(int numTriangles, int* triangleIndexBase, int triangleIndexStride, int numVertices, btScalar* vertexBase, int vertexStride, int numMaterials, unsigned char* materialBase, int materialStride, int* triangleMaterialsBase, int materialIndexStride);
  EXPORT void btTriangleIndexVertexMaterialArray_addMaterialProperties(btTriangleIndexVertexMaterialArray* obj, const btMaterialProperties* mat, PHY_ScalarType triangleType);
  EXPORT void btTriangleIndexVertexMaterialArray_getLockedMaterialBase(btTriangleIndexVertexMaterialArray* obj, unsigned char** materialBase, int* numMaterials, PHY_ScalarType* materialType, int* materialStride, unsigned char** triangleMaterialBase, int* numTriangles, int* triangleMaterialStride, PHY_ScalarType* triangleType, int subpart);
  EXPORT void btTriangleIndexVertexMaterialArray_getLockedReadOnlyMaterialBase(btTriangleIndexVertexMaterialArray* obj, const unsigned char** materialBase, int* numMaterials, PHY_ScalarType* materialType, int* materialStride, const unsigned char** triangleMaterialBase, int* numTriangles, int* triangleMaterialStride, PHY_ScalarType* triangleType, int subpart);
#ifdef __cplusplus
}
#endif
