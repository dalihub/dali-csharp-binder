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
  EXPORT btHeightfieldTerrainShape* btHeightfieldTerrainShape_new(int heightStickWidth, int heightStickLength, const void* heightfieldData, btScalar heightScale, btScalar minHeight, btScalar maxHeight, int upAxis, PHY_ScalarType heightDataType, bool flipQuadEdges);
  EXPORT btHeightfieldTerrainShape* btHeightfieldTerrainShape_new2(int heightStickWidth, int heightStickLength, const void* heightfieldData, btScalar maxHeight, int upAxis, bool useFloatData, bool flipQuadEdges);
  EXPORT void btHeightfieldTerrainShape_performRaycast(btHeightfieldTerrainShape* obj, btTriangleCallback* callback, const btVector3* raySource, const btVector3* rayTarget);
  EXPORT void btHeightfieldTerrainShape_buildAccelerator(btHeightfieldTerrainShape* obj, int chunkSize);
  EXPORT void btHeightfieldTerrainShape_clearAccelerator(btHeightfieldTerrainShape* obj);
  EXPORT int btHeightfieldTerrainShape_getUpAxis(btHeightfieldTerrainShape* obj);
  EXPORT void btHeightfieldTerrainShape_setFlipTriangleWinding(btHeightfieldTerrainShape* obj, bool flipTriangleWinding);
  EXPORT void btHeightfieldTerrainShape_setUseDiamondSubdivision(btHeightfieldTerrainShape* obj);
  EXPORT void btHeightfieldTerrainShape_setUseDiamondSubdivision2(btHeightfieldTerrainShape* obj, bool useDiamondSubdivision);
  EXPORT void btHeightfieldTerrainShape_setUseZigzagSubdivision(btHeightfieldTerrainShape* obj);
  EXPORT void btHeightfieldTerrainShape_setUseZigzagSubdivision2(btHeightfieldTerrainShape* obj, bool useZigzagSubdivision);
#ifdef __cplusplus
}
#endif
