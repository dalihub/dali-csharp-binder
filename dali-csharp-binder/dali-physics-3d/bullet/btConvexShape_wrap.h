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
  EXPORT void btConvexShape_batchedUnitVectorGetSupportingVertexWithoutMargin(btConvexShape* obj, const btVector3* vectors, btVector3* supportVerticesOut, int numVectors);
  EXPORT void btConvexShape_getAabbNonVirtual(btConvexShape* obj, const btTransform* t, btVector3* aabbMin, btVector3* aabbMax);
  EXPORT void btConvexShape_getAabbSlow(btConvexShape* obj, const btTransform* t, btVector3* aabbMin, btVector3* aabbMax);
  EXPORT btScalar btConvexShape_getMarginNonVirtual(btConvexShape* obj);
  EXPORT int btConvexShape_getNumPreferredPenetrationDirections(btConvexShape* obj);
  EXPORT void btConvexShape_getPreferredPenetrationDirection(btConvexShape* obj, int index, btVector3* penetrationVector);
  EXPORT void btConvexShape_localGetSupportingVertex(btConvexShape* obj, const btVector3* vec, btVector3* value);
  EXPORT void btConvexShape_localGetSupportingVertexWithoutMargin(btConvexShape* obj, const btVector3* vec, btVector3* value);
  EXPORT void btConvexShape_localGetSupportVertexNonVirtual(btConvexShape* obj, const btVector3* vec, btVector3* value);
  EXPORT void btConvexShape_localGetSupportVertexWithoutMarginNonVirtual(btConvexShape* obj, const btVector3* vec, btVector3* value);
  EXPORT void btConvexShape_project(btConvexShape* obj, const btTransform* trans, const btVector3* dir, btScalar* minProj, btScalar* maxProj, btVector3* witnesPtMin, btVector3* witnesPtMax);
#ifdef __cplusplus
}
#endif
