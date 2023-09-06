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

#include <BulletCollision/BroadphaseCollision/btCollisionAlgorithm.h>
#include <BulletCollision/CollisionDispatch/btCollisionCreateFunc.h>
#include <BulletCollision/CollisionDispatch/btCollisionObjectWrapper.h>

#include "btCollisionCreateFunc_wrap.h"

btCollisionAlgorithmCreateFunc* btCollisionAlgorithmCreateFunc_new()
{
  return new btCollisionAlgorithmCreateFunc();
}

btCollisionAlgorithm* btCollisionAlgorithmCreateFunc_CreateCollisionAlgorithm(btCollisionAlgorithmCreateFunc* obj,
  btCollisionAlgorithmConstructionInfo* __unnamed0, const btCollisionObjectWrapper* body0Wrap,
  const btCollisionObjectWrapper* body1Wrap)
{
  return obj->CreateCollisionAlgorithm(*__unnamed0, body0Wrap, body1Wrap);
}

bool btCollisionAlgorithmCreateFunc_getSwapped(btCollisionAlgorithmCreateFunc* obj)
{
  return obj->m_swapped;
}

void btCollisionAlgorithmCreateFunc_setSwapped(btCollisionAlgorithmCreateFunc* obj,
  bool value)
{
  obj->m_swapped = value;
}

void btCollisionAlgorithmCreateFunc_delete(btCollisionAlgorithmCreateFunc* obj)
{
  delete obj;
}
