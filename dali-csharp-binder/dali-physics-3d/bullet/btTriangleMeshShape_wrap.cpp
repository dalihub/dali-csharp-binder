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

#include <BulletCollision/CollisionShapes/btTriangleMeshShape.h>

#include "conversion.h"
#include "btTriangleMeshShape_wrap.h"

void btTriangleMeshShape_getLocalAabbMax(btTriangleMeshShape* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getLocalAabbMax());
}

void btTriangleMeshShape_getLocalAabbMin(btTriangleMeshShape* obj, btVector3* value)
{
  BTVECTOR3_COPY(value, &obj->getLocalAabbMin());
}

btStridingMeshInterface* btTriangleMeshShape_getMeshInterface(btTriangleMeshShape* obj)
{
  return obj->getMeshInterface();
}

void btTriangleMeshShape_localGetSupportingVertex(btTriangleMeshShape* obj, const btVector3* vec,
  btVector3* value)
{
  BTVECTOR3_IN(vec);
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->localGetSupportingVertex(BTVECTOR3_USE(vec));
  BTVECTOR3_SET(value, temp);
}

void btTriangleMeshShape_localGetSupportingVertexWithoutMargin(btTriangleMeshShape* obj,
  const btVector3* vec, btVector3* value)
{
  BTVECTOR3_IN(vec);
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->localGetSupportingVertexWithoutMargin(BTVECTOR3_USE(vec));
  BTVECTOR3_SET(value, temp);
}

void btTriangleMeshShape_recalcLocalAabb(btTriangleMeshShape* obj)
{
  obj->recalcLocalAabb();
}
