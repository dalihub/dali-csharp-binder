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

#include <BulletCollision/CollisionDispatch/btUnionFind.h>

#include "btUnionFind_wrap.h"

btElement* btElement_new()
{
  return new btElement();
}

int btElement_getId(btElement* obj)
{
  return obj->m_id;
}

int btElement_getSz(btElement* obj)
{
  return obj->m_sz;
}

void btElement_setId(btElement* obj, int value)
{
  obj->m_id = value;
}

void btElement_setSz(btElement* obj, int value)
{
  obj->m_sz = value;
}

void btElement_delete(btElement* obj)
{
  delete obj;
}


btUnionFind* btUnionFind_new()
{
  return new btUnionFind();
}

void btUnionFind_allocate(btUnionFind* obj, int N)
{
  obj->allocate(N);
}

int btUnionFind_find(btUnionFind* obj, int p, int q)
{
  return obj->find(p, q);
}

int btUnionFind_find2(btUnionFind* obj, int x)
{
  return obj->find(x);
}

void btUnionFind_Free(btUnionFind* obj)
{
  obj->Free();
}

btElement* btUnionFind_getElement(btUnionFind* obj, int index)
{
  return &obj->getElement(index);
}

int btUnionFind_getNumElements(btUnionFind* obj)
{
  return obj->getNumElements();
}

bool btUnionFind_isRoot(btUnionFind* obj, int x)
{
  return obj->isRoot(x);
}

void btUnionFind_reset(btUnionFind* obj, int N)
{
  obj->reset(N);
}

void btUnionFind_sortIslands(btUnionFind* obj)
{
  obj->sortIslands();
}

void btUnionFind_unite(btUnionFind* obj, int p, int q)
{
  obj->unite(p, q);
}

void btUnionFind_delete(btUnionFind* obj)
{
  delete obj;
}
