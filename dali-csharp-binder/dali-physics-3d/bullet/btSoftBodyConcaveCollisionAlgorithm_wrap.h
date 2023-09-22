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
  EXPORT btSoftBodyConcaveCollisionAlgorithm_CreateFunc* btSoftBodyConcaveCollisionAlgorithm_CreateFunc_new();

  EXPORT btSoftBodyConcaveCollisionAlgorithm_SwappedCreateFunc* btSoftBodyConcaveCollisionAlgorithm_SwappedCreateFunc_new();

  EXPORT btSoftBodyConcaveCollisionAlgorithm* btSoftBodyConcaveCollisionAlgorithm_new(const btCollisionAlgorithmConstructionInfo* ci, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, bool isSwapped);
  EXPORT void btSoftBodyConcaveCollisionAlgorithm_clearCache(btSoftBodyConcaveCollisionAlgorithm* obj);
#ifdef __cplusplus
}
#endif
