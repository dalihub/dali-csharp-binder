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

#ifndef BT_MOTIONSTATE_H
#define p_btMotionState_getWorldTransform void*
#define p_btMotionState_setWorldTransform void*
#define btMotionStateWrapper void
#else
typedef void (*p_btMotionState_getWorldTransform)(btTransform* worldTrans);
typedef void (*p_btMotionState_setWorldTransform)(const btTransform* worldTrans);

class btMotionStateWrapper : public btMotionState
{
private:
  p_btMotionState_getWorldTransform _getWorldTransformCallback;
  p_btMotionState_setWorldTransform _setWorldTransformCallback;

public:
  btMotionStateWrapper(p_btMotionState_getWorldTransform getWorldTransformCallback,
    p_btMotionState_setWorldTransform setWorldTransformCallback);

  virtual void getWorldTransform(btTransform& worldTrans) const;
  virtual void setWorldTransform(const btTransform& worldTrans);
};
#endif

#ifdef __cplusplus
extern "C" {
#endif
  EXPORT btMotionStateWrapper* btMotionStateWrapper_new(p_btMotionState_getWorldTransform getWorldTransformCallback,
    p_btMotionState_setWorldTransform setWorldTransformCallback);

  EXPORT void btMotionState_getWorldTransform(btMotionState* obj, btTransform* worldTrans);
  EXPORT void btMotionState_setWorldTransform(btMotionState* obj, const btTransform* worldTrans);
  EXPORT void btMotionState_delete(btMotionState* obj);
#ifdef __cplusplus
}
#endif
