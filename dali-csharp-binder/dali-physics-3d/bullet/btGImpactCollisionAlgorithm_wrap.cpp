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

#include <BulletCollision/Gimpact/btGImpactCollisionAlgorithm.h>

#include "btGImpactCollisionAlgorithm_wrap.h"

btGImpactCollisionAlgorithm_CreateFunc* btGImpactCollisionAlgorithm_CreateFunc_new()
{
  return new btGImpactCollisionAlgorithm::CreateFunc();
}


btGImpactCollisionAlgorithm* btGImpactCollisionAlgorithm_new(const btCollisionAlgorithmConstructionInfo* ci,
  const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap)
{
  return new btGImpactCollisionAlgorithm(*ci, body0Wrap, body1Wrap);
}

int btGImpactCollisionAlgorithm_getFace0(btGImpactCollisionAlgorithm* obj)
{
  return obj->getFace0();
}

int btGImpactCollisionAlgorithm_getFace1(btGImpactCollisionAlgorithm* obj)
{
  return obj->getFace1();
}

int btGImpactCollisionAlgorithm_getPart0(btGImpactCollisionAlgorithm* obj)
{
  return obj->getPart0();
}

int btGImpactCollisionAlgorithm_getPart1(btGImpactCollisionAlgorithm* obj)
{
  return obj->getPart1();
}

void btGImpactCollisionAlgorithm_gimpact_vs_compoundshape(btGImpactCollisionAlgorithm* obj,
  const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap,
  const btGImpactShapeInterface* shape0, const btCompoundShape* shape1, bool swapped)
{
  obj->gimpact_vs_compoundshape(body0Wrap, body1Wrap, shape0, shape1, swapped);
}

void btGImpactCollisionAlgorithm_gimpact_vs_concave(btGImpactCollisionAlgorithm* obj,
  const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap,
  const btGImpactShapeInterface* shape0, const btConcaveShape* shape1, bool swapped)
{
  obj->gimpact_vs_concave(body0Wrap, body1Wrap, shape0, shape1, swapped);
}

void btGImpactCollisionAlgorithm_gimpact_vs_gimpact(btGImpactCollisionAlgorithm* obj,
  const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap,
  const btGImpactShapeInterface* shape0, const btGImpactShapeInterface* shape1)
{
  obj->gimpact_vs_gimpact(body0Wrap, body1Wrap, shape0, shape1);
}

void btGImpactCollisionAlgorithm_gimpact_vs_shape(btGImpactCollisionAlgorithm* obj,
  const btCollisionObjectWrapper* body0Wrap, const btCollisionObjectWrapper* body1Wrap,
  const btGImpactShapeInterface* shape0, const btCollisionShape* shape1, bool swapped)
{
  obj->gimpact_vs_shape(body0Wrap, body1Wrap, shape0, shape1, swapped);
}

btManifoldResult* btGImpactCollisionAlgorithm_internalGetResultOut(btGImpactCollisionAlgorithm* obj)
{
  return obj->internalGetResultOut();
}

void btGImpactCollisionAlgorithm_registerAlgorithm(btCollisionDispatcher* dispatcher)
{
  btGImpactCollisionAlgorithm::registerAlgorithm(dispatcher);
}

void btGImpactCollisionAlgorithm_setFace0(btGImpactCollisionAlgorithm* obj, int value)
{
  obj->setFace0(value);
}

void btGImpactCollisionAlgorithm_setFace1(btGImpactCollisionAlgorithm* obj, int value)
{
  obj->setFace1(value);
}

void btGImpactCollisionAlgorithm_setPart0(btGImpactCollisionAlgorithm* obj, int value)
{
  obj->setPart0(value);
}

void btGImpactCollisionAlgorithm_setPart1(btGImpactCollisionAlgorithm* obj, int value)
{
  obj->setPart1(value);
}
