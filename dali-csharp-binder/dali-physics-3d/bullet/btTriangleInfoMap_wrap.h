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
  EXPORT btTriangleInfo* btTriangleInfo_new();
  EXPORT btScalar btTriangleInfo_getEdgeV0V1Angle(btTriangleInfo* obj);
  EXPORT btScalar btTriangleInfo_getEdgeV1V2Angle(btTriangleInfo* obj);
  EXPORT btScalar btTriangleInfo_getEdgeV2V0Angle(btTriangleInfo* obj);
  EXPORT int btTriangleInfo_getFlags(btTriangleInfo* obj);
  EXPORT void btTriangleInfo_setEdgeV0V1Angle(btTriangleInfo* obj, btScalar value);
  EXPORT void btTriangleInfo_setEdgeV1V2Angle(btTriangleInfo* obj, btScalar value);
  EXPORT void btTriangleInfo_setEdgeV2V0Angle(btTriangleInfo* obj, btScalar value);
  EXPORT void btTriangleInfo_setFlags(btTriangleInfo* obj, int value);
  EXPORT void btTriangleInfo_delete(btTriangleInfo* obj);

  EXPORT btTriangleInfoMap* btTriangleInfoMap_new();
  EXPORT int btTriangleInfoMap_calculateSerializeBufferSize(btTriangleInfoMap* obj);
  //EXPORT void btTriangleInfoMap_deSerialize(btTriangleInfoMap* obj, btTriangleInfoMapData* data);
  EXPORT btScalar btTriangleInfoMap_getConvexEpsilon(btTriangleInfoMap* obj);
  EXPORT btScalar btTriangleInfoMap_getEdgeDistanceThreshold(btTriangleInfoMap* obj);
  EXPORT btScalar btTriangleInfoMap_getEqualVertexThreshold(btTriangleInfoMap* obj);
  EXPORT btScalar btTriangleInfoMap_getMaxEdgeAngleThreshold(btTriangleInfoMap* obj);
  EXPORT btScalar btTriangleInfoMap_getPlanarEpsilon(btTriangleInfoMap* obj);
  EXPORT btScalar btTriangleInfoMap_getZeroAreaThreshold(btTriangleInfoMap* obj);
  EXPORT const char* btTriangleInfoMap_serialize(btTriangleInfoMap* obj, void* dataBuffer, btSerializer* serializer);
  EXPORT void btTriangleInfoMap_setConvexEpsilon(btTriangleInfoMap* obj, btScalar value);
  EXPORT void btTriangleInfoMap_setEdgeDistanceThreshold(btTriangleInfoMap* obj, btScalar value);
  EXPORT void btTriangleInfoMap_setEqualVertexThreshold(btTriangleInfoMap* obj, btScalar value);
  EXPORT void btTriangleInfoMap_setMaxEdgeAngleThreshold(btTriangleInfoMap* obj, btScalar value);
  EXPORT void btTriangleInfoMap_setPlanarEpsilon(btTriangleInfoMap* obj, btScalar value);
  EXPORT void btTriangleInfoMap_setZeroAreaThreshold(btTriangleInfoMap* obj, btScalar value);
  EXPORT void btTriangleInfoMap_delete(btTriangleInfoMap* obj);
#ifdef __cplusplus
}
#endif
