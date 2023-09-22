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
  EXPORT btFace* btFace_new();
  EXPORT btAlignedObjectArray_int* btFace_getIndices(btFace* obj);
  EXPORT btScalar* btFace_getPlane(btFace* obj);
  EXPORT void btFace_delete(btFace* obj);

  EXPORT btConvexPolyhedron* btConvexPolyhedron_new();
  EXPORT void btConvexPolyhedron_getExtents(btConvexPolyhedron* obj, btVector3* value);
  EXPORT btAlignedObjectArray_btFace* btConvexPolyhedron_getFaces(btConvexPolyhedron* obj);
  EXPORT void btConvexPolyhedron_getLocalCenter(btConvexPolyhedron* obj, btVector3* value);
  EXPORT void btConvexPolyhedron_getMC(btConvexPolyhedron* obj, btVector3* value);
  EXPORT void btConvexPolyhedron_getME(btConvexPolyhedron* obj, btVector3* value);
  EXPORT btScalar btConvexPolyhedron_getRadius(btConvexPolyhedron* obj);
  EXPORT btAlignedObjectArray_btVector3* btConvexPolyhedron_getUniqueEdges(btConvexPolyhedron* obj);
  EXPORT btAlignedObjectArray_btVector3* btConvexPolyhedron_getVertices(btConvexPolyhedron* obj);
  EXPORT void btConvexPolyhedron_initialize(btConvexPolyhedron* obj);
  EXPORT void btConvexPolyhedron_initialize2(btConvexPolyhedron* obj);
  EXPORT void btConvexPolyhedron_project(btConvexPolyhedron* obj, const btTransform* trans, const btVector3* dir, btScalar* minProj, btScalar* maxProj, btVector3* witnesPtMin, btVector3* witnesPtMax);
  EXPORT void btConvexPolyhedron_setExtents(btConvexPolyhedron* obj, const btVector3* value);
  EXPORT void btConvexPolyhedron_setLocalCenter(btConvexPolyhedron* obj, const btVector3* value);
  EXPORT void btConvexPolyhedron_setMC(btConvexPolyhedron* obj, const btVector3* value);
  EXPORT void btConvexPolyhedron_setME(btConvexPolyhedron* obj, const btVector3* value);
  EXPORT void btConvexPolyhedron_setRadius(btConvexPolyhedron* obj, btScalar value);
  EXPORT bool btConvexPolyhedron_testContainment(btConvexPolyhedron* obj);
  EXPORT void btConvexPolyhedron_delete(btConvexPolyhedron* obj);
#ifdef __cplusplus
}
#endif
