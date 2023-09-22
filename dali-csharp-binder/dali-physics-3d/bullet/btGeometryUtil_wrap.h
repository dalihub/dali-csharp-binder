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

#ifndef BULLETC_DISABLE_GEOMETRY_UTIL
#ifdef __cplusplus
extern "C" {
#endif
  EXPORT bool btGeometryUtil_areVerticesBehindPlane(const btVector3* planeNormal, const btAlignedObjectArray_btVector3* vertices, btScalar margin);
  EXPORT void btGeometryUtil_getPlaneEquationsFromVertices(btAlignedObjectArray_btVector3* vertices, btAlignedObjectArray_btVector3* planeEquationsOut);
  EXPORT void btGeometryUtil_getVerticesFromPlaneEquations(const btAlignedObjectArray_btVector3* planeEquations, btAlignedObjectArray_btVector3* verticesOut);
  //EXPORT bool btGeometryUtil_isInside(const btAlignedObjectArray_btVector3* vertices, const btVector3* planeNormal, btScalar margin);
  EXPORT bool btGeometryUtil_isPointInsidePlanes(const btAlignedObjectArray_btVector3* planeEquations, const btVector3* point, btScalar margin);
#ifdef __cplusplus
}
#endif
#endif
