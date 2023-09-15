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
  EXPORT btSparseSdf_3* btSparseSdf_new();
  EXPORT void btSparseSdf3_GarbageCollect(btSparseSdf_3* obj, int lifetime);
  EXPORT btScalar btSparseSdf3_getDefaultVoxelsz(btSparseSdf_3* obj);
  EXPORT void btSparseSdf3_Initialize(btSparseSdf_3* obj, int hashsize, int clampCells);
  EXPORT int btSparseSdf3_RemoveReferences(btSparseSdf_3* obj, btCollisionShape* pcs);
  EXPORT void btSparseSdf3_Reset(btSparseSdf_3* obj);
  EXPORT void btSparseSdf3_setDefaultVoxelsz(btSparseSdf_3* obj, btScalar sz);
  EXPORT void btSparseSdf_delete(btSparseSdf_3* obj);
#ifdef __cplusplus
}
#endif
