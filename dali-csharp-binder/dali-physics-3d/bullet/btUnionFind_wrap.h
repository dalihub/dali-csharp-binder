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
  EXPORT btElement* btElement_new();
  EXPORT int btElement_getId(btElement* obj);
  EXPORT int btElement_getSz(btElement* obj);
  EXPORT void btElement_setId(btElement* obj, int value);
  EXPORT void btElement_setSz(btElement* obj, int value);
  EXPORT void btElement_delete(btElement* obj);

  EXPORT btUnionFind* btUnionFind_new();
  EXPORT void btUnionFind_allocate(btUnionFind* obj, int N);
  EXPORT int btUnionFind_find(btUnionFind* obj, int p, int q);
  EXPORT int btUnionFind_find2(btUnionFind* obj, int x);
  EXPORT void btUnionFind_Free(btUnionFind* obj);
  EXPORT btElement* btUnionFind_getElement(btUnionFind* obj, int index);
  EXPORT int btUnionFind_getNumElements(btUnionFind* obj);
  EXPORT bool btUnionFind_isRoot(btUnionFind* obj, int x);
  EXPORT void btUnionFind_reset(btUnionFind* obj, int N);
  EXPORT void btUnionFind_sortIslands(btUnionFind* obj);
  EXPORT void btUnionFind_unite(btUnionFind* obj, int p, int q);
  EXPORT void btUnionFind_delete(btUnionFind* obj);
#ifdef __cplusplus
}
#endif
