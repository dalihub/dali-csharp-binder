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
  EXPORT btCompoundShapeChild* btCompoundShapeChild_array_at(btCompoundShapeChild* a, int n);
  EXPORT btSoftBody_Node* btSoftBodyNodePtrArray_at(btSoftBodyNodePtrArray* obj, int n);
  EXPORT void btSoftBodyNodePtrArray_set(btSoftBodyNodePtrArray* obj, btSoftBody_Node* value, int index);
  EXPORT void btVector3_array_at(const btVector3* a, int n, btVector3* value);
  EXPORT void btVector3_array_set(btVector3* obj, int n, const btVector3* value);
  EXPORT btAlignedObjectArray_btVector3* btAlignedObjectArray_btVector3_new();
  EXPORT void btAlignedObjectArray_btVector3_at(btAlignedObjectArray_btVector3* obj, int n, btVector3* value);
  EXPORT void btAlignedObjectArray_btVector3_push_back(btAlignedObjectArray_btVector3* obj, const btVector3* value);
  EXPORT void btAlignedObjectArray_btVector3_push_back2(btAlignedObjectArray_btVector3* obj, const btVector4* value);
  EXPORT void btAlignedObjectArray_btVector3_set(btAlignedObjectArray_btVector3* obj, int n, const btVector3* value);
  EXPORT int btAlignedObjectArray_btVector3_size(btAlignedObjectArray_btVector3* obj);
  EXPORT void btAlignedObjectArray_btVector3_delete(btAlignedObjectArray_btVector3* obj);
#ifdef __cplusplus
}
#endif
