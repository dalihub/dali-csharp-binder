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

#ifndef _BT_ACTION_INTERFACE_H
#define p_btActionInterface_debugDraw void*
#define p_btActionInterface_updateAction void*
#define btActionInterfaceWrapper void
#else
typedef void (*p_btActionInterface_debugDraw)(btIDebugDraw* debugDrawer);
typedef void (*p_btActionInterface_updateAction)(btCollisionWorld* collisionWorld,
  btScalar deltaTimeStep);

class btActionInterfaceWrapper : public btActionInterface
{
private:
  p_btActionInterface_debugDraw _debugDrawCallback;
  p_btActionInterface_updateAction _updateActionCallback;

public:
  btActionInterfaceWrapper(p_btActionInterface_debugDraw debugDrawCallback, p_btActionInterface_updateAction updateActionCallback);

  virtual void debugDraw(btIDebugDraw* debugDrawer);
  virtual void updateAction(btCollisionWorld* collisionWorld, btScalar deltaTimeStep);
};
#endif

#ifdef __cplusplus
extern "C" {
#endif
  EXPORT btActionInterfaceWrapper* btActionInterfaceWrapper_new(p_btActionInterface_debugDraw debugDrawCallback,
    p_btActionInterface_updateAction updateActionCallback);

  EXPORT void btActionInterface_debugDraw(btActionInterface* obj, btIDebugDraw* debugDrawer);
  EXPORT void btActionInterface_updateAction(btActionInterface* obj, btCollisionWorld* collisionWorld, btScalar deltaTimeStep);
  EXPORT void btActionInterface_delete(btActionInterface* obj);
#ifdef __cplusplus
}
#endif
