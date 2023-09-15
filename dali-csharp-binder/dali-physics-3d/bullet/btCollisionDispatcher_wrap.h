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
  EXPORT btCollisionDispatcher* btCollisionDispatcher_new(btCollisionConfiguration* collisionConfiguration);
  EXPORT void btCollisionDispatcher_defaultNearCallback(btBroadphasePair* collisionPair, btCollisionDispatcher* dispatcher, const btDispatcherInfo* dispatchInfo);
  EXPORT btCollisionConfiguration* btCollisionDispatcher_getCollisionConfiguration(btCollisionDispatcher* obj);
  EXPORT int btCollisionDispatcher_getDispatcherFlags(btCollisionDispatcher* obj);
  EXPORT btNearCallback btCollisionDispatcher_getNearCallback(btCollisionDispatcher* obj);
  EXPORT void btCollisionDispatcher_registerCollisionCreateFunc(btCollisionDispatcher* obj, int proxyType0, int proxyType1, btCollisionAlgorithmCreateFunc* createFunc);
  EXPORT void btCollisionDispatcher_registerClosestPointsCreateFunc(btCollisionDispatcher* obj, int proxyType0, int proxyType1, btCollisionAlgorithmCreateFunc* createFunc);
  EXPORT void btCollisionDispatcher_setCollisionConfiguration(btCollisionDispatcher* obj, btCollisionConfiguration* config);
  EXPORT void btCollisionDispatcher_setDispatcherFlags(btCollisionDispatcher* obj, int flags);
  EXPORT void btCollisionDispatcher_setNearCallback(btCollisionDispatcher* obj, btNearCallback nearCallback);
#ifdef __cplusplus
}
#endif
