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

#include <new>
#include <LinearMath/btMotionState.h>

#include "conversion.h"
#include "btMotionState_wrap.h"

btMotionStateWrapper::btMotionStateWrapper(p_btMotionState_getWorldTransform getWorldTransformCallback,
  p_btMotionState_setWorldTransform setWorldTransformCallback)
{
  _getWorldTransformCallback = getWorldTransformCallback;
  _setWorldTransformCallback = setWorldTransformCallback;
}

void btMotionStateWrapper::getWorldTransform(btTransform& worldTrans) const
{
  BTTRANSFORM_DEF(worldTrans);
  _getWorldTransformCallback(&BTTRANSFORM_USE_REF(worldTrans));
  BTTRANSFORM_DEF_OUT_REF(worldTrans);
}

void btMotionStateWrapper::setWorldTransform(const btTransform& worldTrans)
{
  BTTRANSFORM_IN_REF(worldTrans);
  _setWorldTransformCallback(&BTTRANSFORM_USE_REF(worldTrans));
}


btMotionStateWrapper* btMotionStateWrapper_new(p_btMotionState_getWorldTransform getWorldTransformCallback,
  p_btMotionState_setWorldTransform setWorldTransformCallback)
{
  return ALIGNED_NEW(btMotionStateWrapper)(getWorldTransformCallback, setWorldTransformCallback);
}


void btMotionState_getWorldTransform(btMotionState* obj, btTransform* worldTrans)
{
  BTTRANSFORM_IN(worldTrans);
  obj->getWorldTransform(BTTRANSFORM_USE(worldTrans));
  BTTRANSFORM_DEF_OUT(worldTrans);
}

void btMotionState_setWorldTransform(btMotionState* obj, const btTransform* worldTrans)
{
  BTTRANSFORM_IN(worldTrans);
  obj->setWorldTransform(BTTRANSFORM_USE(worldTrans));
}

void btMotionState_delete(btMotionState* obj)
{
  ALIGNED_FREE(obj);
}
