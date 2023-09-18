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
  EXPORT btCylinderShape* btCylinderShape_new(const btVector3* halfExtents);
  EXPORT btCylinderShape* btCylinderShape_new2(btScalar halfExtentX, btScalar halfExtentY, btScalar halfExtentZ);
  EXPORT void btCylinderShape_getHalfExtentsWithMargin(btCylinderShape* obj, btVector3* value);
  EXPORT void btCylinderShape_getHalfExtentsWithoutMargin(btCylinderShape* obj, btVector3* value);
  EXPORT btScalar btCylinderShape_getRadius(btCylinderShape* obj);
  EXPORT int btCylinderShape_getUpAxis(btCylinderShape* obj);

  EXPORT btCylinderShapeX* btCylinderShapeX_new(const btVector3* halfExtents);
  EXPORT btCylinderShapeX* btCylinderShapeX_new2(btScalar halfExtentX, btScalar halfExtentY, btScalar halfExtentZ);

  EXPORT btCylinderShapeZ* btCylinderShapeZ_new(const btVector3* halfExtents);
  EXPORT btCylinderShapeZ* btCylinderShapeZ_new2(btScalar halfExtentX, btScalar halfExtentY, btScalar halfExtentZ);
#ifdef __cplusplus
}
#endif
