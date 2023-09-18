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
  EXPORT const btCollisionObject* btCollisionObjectWrapper_getCollisionObject(btCollisionObjectWrapper* obj);
  EXPORT const btCollisionShape* btCollisionObjectWrapper_getCollisionShape(btCollisionObjectWrapper* obj);
  EXPORT int btCollisionObjectWrapper_getIndex(btCollisionObjectWrapper* obj);
  EXPORT const btCollisionObjectWrapper* btCollisionObjectWrapper_getParent(btCollisionObjectWrapper* obj);
  EXPORT int btCollisionObjectWrapper_getPartId(btCollisionObjectWrapper* obj);
  EXPORT void btCollisionObjectWrapper_getWorldTransform(btCollisionObjectWrapper* obj, btTransform* value);
  EXPORT void btCollisionObjectWrapper_setCollisionObject(btCollisionObjectWrapper* obj, const btCollisionObject* value);
  EXPORT void btCollisionObjectWrapper_setIndex(btCollisionObjectWrapper* obj, int value);
  EXPORT void btCollisionObjectWrapper_setParent(btCollisionObjectWrapper* obj, const btCollisionObjectWrapper* value);
  EXPORT void btCollisionObjectWrapper_setPartId(btCollisionObjectWrapper* obj, int value);
  EXPORT void btCollisionObjectWrapper_setShape(btCollisionObjectWrapper* obj, const btCollisionShape* value);
#ifdef __cplusplus
}
#endif
