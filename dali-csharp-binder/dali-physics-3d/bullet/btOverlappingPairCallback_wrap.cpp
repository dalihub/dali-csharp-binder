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

#include <BulletCollision/BroadphaseCollision/btBroadphaseProxy.h>
#include <BulletCollision/BroadphaseCollision/btDispatcher.h>
#include <BulletCollision/BroadphaseCollision/btOverlappingPairCallback.h>

#include "btOverlappingPairCallback_wrap.h"

btBroadphasePair* btOverlappingPairCallback_addOverlappingPair(btOverlappingPairCallback* obj,
  btBroadphaseProxy* proxy0, btBroadphaseProxy* proxy1)
{
  return obj->addOverlappingPair(proxy0, proxy1);
}

void* btOverlappingPairCallback_removeOverlappingPair(btOverlappingPairCallback* obj,
  btBroadphaseProxy* proxy0, btBroadphaseProxy* proxy1, btDispatcher* dispatcher)
{
  return obj->removeOverlappingPair(proxy0, proxy1, dispatcher);
}

void btOverlappingPairCallback_removeOverlappingPairsContainingProxy(btOverlappingPairCallback* obj,
  btBroadphaseProxy* proxy0, btDispatcher* dispatcher)
{
  obj->removeOverlappingPairsContainingProxy(proxy0, dispatcher);
}

void btOverlappingPairCallback_delete(btOverlappingPairCallback* obj)
{
  delete obj;
}
