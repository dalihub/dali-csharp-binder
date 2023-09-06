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
  EXPORT btBox2dShape* btBox2dShape_new(const btVector3* boxHalfExtents);
  EXPORT btBox2dShape* btBox2dShape_new2(btScalar boxHalfExtent);
  EXPORT btBox2dShape* btBox2dShape_new3(btScalar boxHalfExtentX, btScalar boxHalfExtentY, btScalar boxHalfExtentZ);
  EXPORT void btBox2dShape_getCentroid(btBox2dShape* obj, btVector3* value);
  EXPORT void btBox2dShape_getHalfExtentsWithMargin(btBox2dShape* obj, btVector3* value);
  EXPORT void btBox2dShape_getHalfExtentsWithoutMargin(btBox2dShape* obj, btVector3* value);
  EXPORT const btVector3* btBox2dShape_getNormals(btBox2dShape* obj);
  EXPORT void btBox2dShape_getPlaneEquation(btBox2dShape* obj, btVector4* plane, int i);
  EXPORT int btBox2dShape_getVertexCount(btBox2dShape* obj);
  EXPORT const btVector3* btBox2dShape_getVertices(btBox2dShape* obj);
#ifdef __cplusplus
}
#endif
