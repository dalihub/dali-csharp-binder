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
  EXPORT btTriangle* btTriangle_new();
  EXPORT int btTriangle_getPartId(btTriangle* obj);
  EXPORT int btTriangle_getTriangleIndex(btTriangle* obj);
  EXPORT void btTriangle_getVertex0(btTriangle* obj, btVector3* value);
  EXPORT void btTriangle_getVertex1(btTriangle* obj, btVector3* value);
  EXPORT void btTriangle_getVertex2(btTriangle* obj, btVector3* value);
  EXPORT void btTriangle_setPartId(btTriangle* obj, int value);
  EXPORT void btTriangle_setTriangleIndex(btTriangle* obj, int value);
  EXPORT void btTriangle_setVertex0(btTriangle* obj, const btVector3* value);
  EXPORT void btTriangle_setVertex1(btTriangle* obj, const btVector3* value);
  EXPORT void btTriangle_setVertex2(btTriangle* obj, const btVector3* value);
  EXPORT void btTriangle_delete(btTriangle* obj);

  EXPORT btTriangleBuffer* btTriangleBuffer_new();
  EXPORT void btTriangleBuffer_clearBuffer(btTriangleBuffer* obj);
  EXPORT int btTriangleBuffer_getNumTriangles(btTriangleBuffer* obj);
  EXPORT const btTriangle* btTriangleBuffer_getTriangle(btTriangleBuffer* obj, int index);
#ifdef __cplusplus
}
#endif
