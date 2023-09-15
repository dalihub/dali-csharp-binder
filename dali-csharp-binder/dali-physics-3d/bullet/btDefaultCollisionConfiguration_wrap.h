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
  EXPORT btDefaultCollisionConstructionInfo* btDefaultCollisionConstructionInfo_new();
  EXPORT btPoolAllocator* btDefaultCollisionConstructionInfo_getCollisionAlgorithmPool(btDefaultCollisionConstructionInfo* obj);
  EXPORT int btDefaultCollisionConstructionInfo_getCustomCollisionAlgorithmMaxElementSize(btDefaultCollisionConstructionInfo* obj);
  EXPORT int btDefaultCollisionConstructionInfo_getDefaultMaxCollisionAlgorithmPoolSize(btDefaultCollisionConstructionInfo* obj);
  EXPORT int btDefaultCollisionConstructionInfo_getDefaultMaxPersistentManifoldPoolSize(btDefaultCollisionConstructionInfo* obj);
  EXPORT btPoolAllocator* btDefaultCollisionConstructionInfo_getPersistentManifoldPool(btDefaultCollisionConstructionInfo* obj);
  EXPORT int btDefaultCollisionConstructionInfo_getUseEpaPenetrationAlgorithm(btDefaultCollisionConstructionInfo* obj);
  EXPORT void btDefaultCollisionConstructionInfo_setCollisionAlgorithmPool(btDefaultCollisionConstructionInfo* obj, btPoolAllocator* value);
  EXPORT void btDefaultCollisionConstructionInfo_setCustomCollisionAlgorithmMaxElementSize(btDefaultCollisionConstructionInfo* obj, int value);
  EXPORT void btDefaultCollisionConstructionInfo_setDefaultMaxCollisionAlgorithmPoolSize(btDefaultCollisionConstructionInfo* obj, int value);
  EXPORT void btDefaultCollisionConstructionInfo_setDefaultMaxPersistentManifoldPoolSize(btDefaultCollisionConstructionInfo* obj, int value);
  EXPORT void btDefaultCollisionConstructionInfo_setPersistentManifoldPool(btDefaultCollisionConstructionInfo* obj, btPoolAllocator* value);
  EXPORT void btDefaultCollisionConstructionInfo_setUseEpaPenetrationAlgorithm(btDefaultCollisionConstructionInfo* obj, int value);
  EXPORT void btDefaultCollisionConstructionInfo_delete(btDefaultCollisionConstructionInfo* obj);

  EXPORT btDefaultCollisionConfiguration* btDefaultCollisionConfiguration_new();
  EXPORT btDefaultCollisionConfiguration* btDefaultCollisionConfiguration_new2(const btDefaultCollisionConstructionInfo* constructionInfo);
  EXPORT btCollisionAlgorithmCreateFunc* btDefaultCollisionConfiguration_getClosestPointsAlgorithmCreateFunc(btDefaultCollisionConfiguration* obj, int proxyType0, int proxyType1);
  EXPORT void btDefaultCollisionConfiguration_setConvexConvexMultipointIterations(btDefaultCollisionConfiguration* obj, int numPerturbationIterations, int minimumPointsPerturbationThreshold);
  EXPORT void btDefaultCollisionConfiguration_setPlaneConvexMultipointIterations(btDefaultCollisionConfiguration* obj, int numPerturbationIterations, int minimumPointsPerturbationThreshold);
#ifdef __cplusplus
}
#endif
