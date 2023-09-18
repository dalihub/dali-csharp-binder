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
  EXPORT bool btCharacterControllerInterface_canJump(btCharacterControllerInterface* obj);
  EXPORT void btCharacterControllerInterface_jump(btCharacterControllerInterface* obj);
  EXPORT void btCharacterControllerInterface_jump2(btCharacterControllerInterface* obj, const btVector3* dir);
  EXPORT bool btCharacterControllerInterface_onGround(btCharacterControllerInterface* obj);
  EXPORT void btCharacterControllerInterface_playerStep(btCharacterControllerInterface* obj, btCollisionWorld* collisionWorld, btScalar dt);
  EXPORT void btCharacterControllerInterface_preStep(btCharacterControllerInterface* obj, btCollisionWorld* collisionWorld);
  EXPORT void btCharacterControllerInterface_reset(btCharacterControllerInterface* obj, btCollisionWorld* collisionWorld);
  EXPORT void btCharacterControllerInterface_setUpInterpolate(btCharacterControllerInterface* obj, bool value);
  EXPORT void btCharacterControllerInterface_setWalkDirection(btCharacterControllerInterface* obj, const btVector3* walkDirection);
  EXPORT void btCharacterControllerInterface_setVelocityForTimeInterval(btCharacterControllerInterface* obj, const btVector3* velocity, btScalar timeInterval);
  EXPORT void btCharacterControllerInterface_warp(btCharacterControllerInterface* obj, const btVector3* origin);
#ifdef __cplusplus
}
#endif
