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
  EXPORT const btConvexPolyhedron* btPolyhedralConvexShape_getConvexPolyhedron(btPolyhedralConvexShape* obj);
  EXPORT void btPolyhedralConvexShape_getEdge(btPolyhedralConvexShape* obj, int i, btVector3* pa, btVector3* pb);
  EXPORT int btPolyhedralConvexShape_getNumEdges(btPolyhedralConvexShape* obj);
  EXPORT int btPolyhedralConvexShape_getNumPlanes(btPolyhedralConvexShape* obj);
  EXPORT int btPolyhedralConvexShape_getNumVertices(btPolyhedralConvexShape* obj);
  EXPORT void btPolyhedralConvexShape_getPlane(btPolyhedralConvexShape* obj, btVector3* planeNormal, btVector3* planeSupport, int i);
  EXPORT void btPolyhedralConvexShape_getVertex(btPolyhedralConvexShape* obj, int i, btVector3* vtx);
  EXPORT bool btPolyhedralConvexShape_initializePolyhedralFeatures(btPolyhedralConvexShape* obj, int shiftVerticesByMargin);
  EXPORT bool btPolyhedralConvexShape_isInside(btPolyhedralConvexShape* obj, const btVector3* pt, btScalar tolerance);
  EXPORT void btPolyhedralConvexShape_setPolyhedralFeatures(btPolyhedralConvexShape* obj, btConvexPolyhedron* polyhedron);

  EXPORT void btPolyhedralConvexAabbCachingShape_getNonvirtualAabb(btPolyhedralConvexAabbCachingShape* obj, const btTransform* trans, btVector3* aabbMin, btVector3* aabbMax, btScalar margin);
  EXPORT void btPolyhedralConvexAabbCachingShape_recalcLocalAabb(btPolyhedralConvexAabbCachingShape* obj);
#ifdef __cplusplus
}
#endif
