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
  EXPORT btGImpactCollisionAlgorithm_CreateFunc* btGImpactCollisionAlgorithm_CreateFunc_new();

  EXPORT btGImpactCollisionAlgorithm* btGImpactCollisionAlgorithm_new(const btCollisionAlgorithmConstructionInfo* ci, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap);
  EXPORT int btGImpactCollisionAlgorithm_getFace0(btGImpactCollisionAlgorithm* obj);
  EXPORT int btGImpactCollisionAlgorithm_getFace1(btGImpactCollisionAlgorithm* obj);
  EXPORT int btGImpactCollisionAlgorithm_getPart0(btGImpactCollisionAlgorithm* obj);
  EXPORT int btGImpactCollisionAlgorithm_getPart1(btGImpactCollisionAlgorithm* obj);
  EXPORT void btGImpactCollisionAlgorithm_gimpact_vs_compoundshape(btGImpactCollisionAlgorithm* obj, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, const btGImpactShapeInterface* shape0, const btCompoundShape* shape1, bool swapped);
  EXPORT void btGImpactCollisionAlgorithm_gimpact_vs_concave(btGImpactCollisionAlgorithm* obj, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, const btGImpactShapeInterface* shape0, const btConcaveShape* shape1, bool swapped);
  EXPORT void btGImpactCollisionAlgorithm_gimpact_vs_gimpact(btGImpactCollisionAlgorithm* obj, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, const btGImpactShapeInterface* shape0, const btGImpactShapeInterface* shape1);
  EXPORT void btGImpactCollisionAlgorithm_gimpact_vs_shape(btGImpactCollisionAlgorithm* obj, const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap, const btGImpactShapeInterface* shape0, const btCollisionShape* shape1, bool swapped);
  EXPORT btManifoldResult* btGImpactCollisionAlgorithm_internalGetResultOut(btGImpactCollisionAlgorithm* obj);
  EXPORT void btGImpactCollisionAlgorithm_registerAlgorithm(btCollisionDispatcher* dispatcher);
  EXPORT void btGImpactCollisionAlgorithm_setFace0(btGImpactCollisionAlgorithm* obj, int value);
  EXPORT void btGImpactCollisionAlgorithm_setFace1(btGImpactCollisionAlgorithm* obj, int value);
  EXPORT void btGImpactCollisionAlgorithm_setPart0(btGImpactCollisionAlgorithm* obj, int value);
  EXPORT void btGImpactCollisionAlgorithm_setPart1(btGImpactCollisionAlgorithm* obj, int value);
#ifdef __cplusplus
}
#endif
