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

#include <BulletCollision/CollisionDispatch/btCollisionObject.h>
#include <BulletCollision/CollisionDispatch/btCollisionObjectWrapper.h>
#include <BulletCollision/CollisionShapes/btCollisionShape.h>

#include "conversion.h"
#include "btCollisionObjectWrapper_wrap.h"

const btCollisionObject* btCollisionObjectWrapper_getCollisionObject(btCollisionObjectWrapper* obj)
{
  return obj->getCollisionObject();
}

const btCollisionShape* btCollisionObjectWrapper_getCollisionShape(btCollisionObjectWrapper* obj)
{
  return obj->getCollisionShape();
}

int btCollisionObjectWrapper_getIndex(btCollisionObjectWrapper* obj)
{
  return obj->m_index;
}

const btCollisionObjectWrapper* btCollisionObjectWrapper_getParent(btCollisionObjectWrapper* obj)
{
  return obj->m_parent;
}

int btCollisionObjectWrapper_getPartId(btCollisionObjectWrapper* obj)
{
  return obj->m_partId;
}

void btCollisionObjectWrapper_getWorldTransform(btCollisionObjectWrapper* obj, btTransform* value)
{
  BTTRANSFORM_COPY(value, &obj->getWorldTransform());
}

void btCollisionObjectWrapper_setCollisionObject(btCollisionObjectWrapper* obj, const btCollisionObject* value)
{
  obj->m_collisionObject = value;
}

void btCollisionObjectWrapper_setIndex(btCollisionObjectWrapper* obj, int value)
{
  obj->m_index = value;
}

void btCollisionObjectWrapper_setParent(btCollisionObjectWrapper* obj, const btCollisionObjectWrapper* value)
{
  obj->m_parent = value;
}

void btCollisionObjectWrapper_setPartId(btCollisionObjectWrapper* obj, int value)
{
  obj->m_partId = value;
}

void btCollisionObjectWrapper_setShape(btCollisionObjectWrapper* obj, const btCollisionShape* value)
{
  obj->m_shape = value;
}
