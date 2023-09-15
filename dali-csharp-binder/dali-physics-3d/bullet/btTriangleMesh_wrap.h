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
  EXPORT btTriangleMesh* btTriangleMesh_new(bool use32bitIndices, bool use4componentVertices);
  EXPORT void btTriangleMesh_addIndex(btTriangleMesh* obj, int index);
  EXPORT void btTriangleMesh_addTriangle(btTriangleMesh* obj, const btVector3* vertex0, const btVector3* vertex1, const btVector3* vertex2, bool removeDuplicateVertices);
  EXPORT void btTriangleMesh_addTriangleIndices(btTriangleMesh* obj, int index1, int index2, int index3);
  EXPORT int btTriangleMesh_findOrAddVertex(btTriangleMesh* obj, const btVector3* vertex, bool removeDuplicateVertices);
  EXPORT int btTriangleMesh_getNumTriangles(btTriangleMesh* obj);
  EXPORT bool btTriangleMesh_getUse32bitIndices(btTriangleMesh* obj);
  EXPORT bool btTriangleMesh_getUse4componentVertices(btTriangleMesh* obj);
  EXPORT btScalar btTriangleMesh_getWeldingThreshold(btTriangleMesh* obj);
  EXPORT void btTriangleMesh_setWeldingThreshold(btTriangleMesh* obj, btScalar value);
#ifdef __cplusplus
}
#endif
