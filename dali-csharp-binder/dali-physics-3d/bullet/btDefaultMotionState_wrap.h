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
  EXPORT btDefaultMotionState* btDefaultMotionState_new();
  EXPORT btDefaultMotionState* btDefaultMotionState_new2(const btTransform* startTrans);
  EXPORT btDefaultMotionState* btDefaultMotionState_new3(const btTransform* startTrans, const btTransform* centerOfMassOffset);
  EXPORT void btDefaultMotionState_getCenterOfMassOffset(btDefaultMotionState* obj, btTransform* value);
  EXPORT void btDefaultMotionState_getGraphicsWorldTrans(btDefaultMotionState* obj, btTransform* value);
  EXPORT void btDefaultMotionState_getStartWorldTrans(btDefaultMotionState* obj, btTransform* value);
  EXPORT void* btDefaultMotionState_getUserPointer(btDefaultMotionState* obj);
  EXPORT void btDefaultMotionState_setCenterOfMassOffset(btDefaultMotionState* obj, const btTransform* value);
  EXPORT void btDefaultMotionState_setGraphicsWorldTrans(btDefaultMotionState* obj, const btTransform* value);
  EXPORT void btDefaultMotionState_setStartWorldTrans(btDefaultMotionState* obj, const btTransform* value);
  EXPORT void btDefaultMotionState_setUserPointer(btDefaultMotionState* obj, void* value);
#ifdef __cplusplus
}
#endif
