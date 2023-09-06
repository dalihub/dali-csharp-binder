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
  EXPORT btBU_Simplex1to4* btBU_Simplex1to4_new();
  EXPORT btBU_Simplex1to4* btBU_Simplex1to4_new2(const btVector3* pt0);
  EXPORT btBU_Simplex1to4* btBU_Simplex1to4_new3(const btVector3* pt0, const btVector3* pt1);
  EXPORT btBU_Simplex1to4* btBU_Simplex1to4_new4(const btVector3* pt0, const btVector3* pt1, const btVector3* pt2);
  EXPORT btBU_Simplex1to4* btBU_Simplex1to4_new5(const btVector3* pt0, const btVector3* pt1, const btVector3* pt2, const btVector3* pt3);
  EXPORT void btBU_Simplex1to4_addVertex(btBU_Simplex1to4* obj, const btVector3* pt);
  EXPORT int btBU_Simplex1to4_getIndex(btBU_Simplex1to4* obj, int i);
  EXPORT void btBU_Simplex1to4_reset(btBU_Simplex1to4* obj);
#ifdef __cplusplus
}
#endif
