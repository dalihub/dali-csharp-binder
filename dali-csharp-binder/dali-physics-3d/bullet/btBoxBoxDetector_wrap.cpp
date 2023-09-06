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

#include <BulletCollision/CollisionDispatch/btBoxBoxDetector.h>
#include <BulletCollision/CollisionShapes/btBoxShape.h>

#include "btBoxBoxDetector_wrap.h"

btBoxBoxDetector* btBoxBoxDetector_new(const btBoxShape* box1, const btBoxShape* box2)
{
  return new btBoxBoxDetector(box1, box2);
}

const btBoxShape* btBoxBoxDetector_getBox1(btBoxBoxDetector* obj)
{
  return obj->m_box1;
}

const btBoxShape* btBoxBoxDetector_getBox2(btBoxBoxDetector* obj)
{
  return obj->m_box2;
}

void btBoxBoxDetector_setBox1(btBoxBoxDetector* obj, const btBoxShape* value)
{
  obj->m_box1 = value;
}

void btBoxBoxDetector_setBox2(btBoxBoxDetector* obj, const btBoxShape* value)
{
  obj->m_box2 = value;
}
