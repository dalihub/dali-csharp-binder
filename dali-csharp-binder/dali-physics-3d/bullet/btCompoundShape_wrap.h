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
  EXPORT btScalar btCompoundShapeChild_getChildMargin(btCompoundShapeChild* obj);
  EXPORT btCollisionShape* btCompoundShapeChild_getChildShape(btCompoundShapeChild* obj);
  EXPORT int btCompoundShapeChild_getChildShapeType(btCompoundShapeChild* obj);
  EXPORT btDbvtNode* btCompoundShapeChild_getNode(btCompoundShapeChild* obj);
  EXPORT void btCompoundShapeChild_getTransform(btCompoundShapeChild* obj, btTransform* value);
  EXPORT void btCompoundShapeChild_setChildMargin(btCompoundShapeChild* obj, btScalar value);
  EXPORT void btCompoundShapeChild_setChildShape(btCompoundShapeChild* obj, btCollisionShape* value);
  EXPORT void btCompoundShapeChild_setChildShapeType(btCompoundShapeChild* obj, int value);
  EXPORT void btCompoundShapeChild_setNode(btCompoundShapeChild* obj, btDbvtNode* value);
  EXPORT void btCompoundShapeChild_setTransform(btCompoundShapeChild* obj, const btTransform* value);
  EXPORT void btCompoundShapeChild_delete(btCompoundShapeChild* obj);

  EXPORT btCompoundShape* btCompoundShape_new(bool enableDynamicAabbTree, int initialChildCapacity);
  EXPORT void btCompoundShape_addChildShape(btCompoundShape* obj, const btTransform* localTransform, btCollisionShape* shape);
  EXPORT void btCompoundShape_calculatePrincipalAxisTransform(btCompoundShape* obj, btScalar* masses, btTransform* principal, btVector3* inertia);
  EXPORT void btCompoundShape_createAabbTreeFromChildren(btCompoundShape* obj);
  EXPORT btCompoundShapeChild* btCompoundShape_getChildList(btCompoundShape* obj);
  EXPORT btCollisionShape* btCompoundShape_getChildShape(btCompoundShape* obj, int index);
  EXPORT void btCompoundShape_getChildTransform(btCompoundShape* obj, int index, btTransform* value);
  EXPORT btDbvt* btCompoundShape_getDynamicAabbTree(btCompoundShape* obj);
  EXPORT int btCompoundShape_getNumChildShapes(btCompoundShape* obj);
  EXPORT int btCompoundShape_getUpdateRevision(btCompoundShape* obj);
  EXPORT void btCompoundShape_recalculateLocalAabb(btCompoundShape* obj);
  EXPORT void btCompoundShape_removeChildShape(btCompoundShape* obj, btCollisionShape* shape);
  EXPORT void btCompoundShape_removeChildShapeByIndex(btCompoundShape* obj, int childShapeindex);
  EXPORT void btCompoundShape_updateChildTransform(btCompoundShape* obj, int childIndex, const btTransform* newChildTransform, bool shouldRecalculateLocalAabb);
#ifdef __cplusplus
}
#endif
