﻿/*
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
  EXPORT BT_QUANTIZED_BVH_NODE* BT_QUANTIZED_BVH_NODE_new();
  EXPORT int BT_QUANTIZED_BVH_NODE_getDataIndex(BT_QUANTIZED_BVH_NODE* obj);
  EXPORT int BT_QUANTIZED_BVH_NODE_getEscapeIndex(BT_QUANTIZED_BVH_NODE* obj);
  EXPORT int BT_QUANTIZED_BVH_NODE_getEscapeIndexOrDataIndex(BT_QUANTIZED_BVH_NODE* obj);
  EXPORT unsigned short* BT_QUANTIZED_BVH_NODE_getQuantizedAabbMax(BT_QUANTIZED_BVH_NODE* obj);
  EXPORT unsigned short* BT_QUANTIZED_BVH_NODE_getQuantizedAabbMin(BT_QUANTIZED_BVH_NODE* obj);
  EXPORT bool BT_QUANTIZED_BVH_NODE_isLeafNode(BT_QUANTIZED_BVH_NODE* obj);
  EXPORT void BT_QUANTIZED_BVH_NODE_setDataIndex(BT_QUANTIZED_BVH_NODE* obj, int index);
  EXPORT void BT_QUANTIZED_BVH_NODE_setEscapeIndex(BT_QUANTIZED_BVH_NODE* obj, int index);
  EXPORT void BT_QUANTIZED_BVH_NODE_setEscapeIndexOrDataIndex(BT_QUANTIZED_BVH_NODE* obj, int value);
  EXPORT bool BT_QUANTIZED_BVH_NODE_testQuantizedBoxOverlapp(BT_QUANTIZED_BVH_NODE* obj, unsigned short* quantizedMin, unsigned short* quantizedMax);
  EXPORT void BT_QUANTIZED_BVH_NODE_delete(BT_QUANTIZED_BVH_NODE* obj);

  EXPORT GIM_QUANTIZED_BVH_NODE_ARRAY* GIM_QUANTIZED_BVH_NODE_ARRAY_new();
  EXPORT void GIM_QUANTIZED_BVH_NODE_ARRAY_delete(GIM_QUANTIZED_BVH_NODE_ARRAY* obj);

  EXPORT btQuantizedBvhTree* btQuantizedBvhTree_new();
  EXPORT void btQuantizedBvhTree_build_tree(btQuantizedBvhTree* obj, GIM_BVH_DATA_ARRAY* primitive_boxes);
  EXPORT void btQuantizedBvhTree_clearNodes(btQuantizedBvhTree* obj);
  EXPORT const BT_QUANTIZED_BVH_NODE* btQuantizedBvhTree_get_node_pointer(btQuantizedBvhTree* obj, int index);
  EXPORT int btQuantizedBvhTree_getEscapeNodeIndex(btQuantizedBvhTree* obj, int nodeindex);
  EXPORT int btQuantizedBvhTree_getLeftNode(btQuantizedBvhTree* obj, int nodeindex);
  EXPORT void btQuantizedBvhTree_getNodeBound(btQuantizedBvhTree* obj, int nodeindex, btAABB* bound);
  EXPORT int btQuantizedBvhTree_getNodeCount(btQuantizedBvhTree* obj);
  EXPORT int btQuantizedBvhTree_getNodeData(btQuantizedBvhTree* obj, int nodeindex);
  EXPORT int btQuantizedBvhTree_getRightNode(btQuantizedBvhTree* obj, int nodeindex);
  EXPORT bool btQuantizedBvhTree_isLeafNode(btQuantizedBvhTree* obj, int nodeindex);
  EXPORT void btQuantizedBvhTree_quantizePoint(btQuantizedBvhTree* obj, unsigned short* quantizedpoint, const btVector3* point);
  EXPORT void btQuantizedBvhTree_setNodeBound(btQuantizedBvhTree* obj, int nodeindex, const btAABB* bound);
  EXPORT bool btQuantizedBvhTree_testQuantizedBoxOverlapp(btQuantizedBvhTree* obj, int node_index, unsigned short* quantizedMin, unsigned short* quantizedMax);
  EXPORT void btQuantizedBvhTree_delete(btQuantizedBvhTree* obj);

  EXPORT btGImpactQuantizedBvh* btGImpactQuantizedBvh_new();
  EXPORT btGImpactQuantizedBvh* btGImpactQuantizedBvh_new2(btPrimitiveManagerBase* primitive_manager);
  EXPORT bool btGImpactQuantizedBvh_boxQuery(btGImpactQuantizedBvh* obj, const btAABB* box, btAlignedObjectArray_int* collided_results);
  EXPORT bool btGImpactQuantizedBvh_boxQueryTrans(btGImpactQuantizedBvh* obj, const btAABB* box, const btTransform* transform, btAlignedObjectArray_int* collided_results);
  EXPORT void btGImpactQuantizedBvh_buildSet(btGImpactQuantizedBvh* obj);
  EXPORT void btGImpactQuantizedBvh_find_collision(const btGImpactQuantizedBvh* boxset1, const btTransform* trans1, const btGImpactQuantizedBvh* boxset2, const btTransform* trans2, btPairSet* collision_pairs);
  EXPORT const BT_QUANTIZED_BVH_NODE* btGImpactQuantizedBvh_get_node_pointer(btGImpactQuantizedBvh* obj, int index);
  EXPORT int btGImpactQuantizedBvh_getEscapeNodeIndex(btGImpactQuantizedBvh* obj, int nodeindex);
  EXPORT btAABB* btGImpactQuantizedBvh_getGlobalBox(btGImpactQuantizedBvh* obj);
  EXPORT int btGImpactQuantizedBvh_getLeftNode(btGImpactQuantizedBvh* obj, int nodeindex);
  EXPORT void btGImpactQuantizedBvh_getNodeBound(btGImpactQuantizedBvh* obj, int nodeindex, btAABB* bound);
  EXPORT int btGImpactQuantizedBvh_getNodeCount(btGImpactQuantizedBvh* obj);
  EXPORT int btGImpactQuantizedBvh_getNodeData(btGImpactQuantizedBvh* obj, int nodeindex);
  EXPORT void btGImpactQuantizedBvh_getNodeTriangle(btGImpactQuantizedBvh* obj, int nodeindex, btPrimitiveTriangle* triangle);
  EXPORT btPrimitiveManagerBase* btGImpactQuantizedBvh_getPrimitiveManager(btGImpactQuantizedBvh* obj);
  EXPORT int btGImpactQuantizedBvh_getRightNode(btGImpactQuantizedBvh* obj, int nodeindex);
  EXPORT bool btGImpactQuantizedBvh_hasHierarchy(btGImpactQuantizedBvh* obj);
  EXPORT bool btGImpactQuantizedBvh_isLeafNode(btGImpactQuantizedBvh* obj, int nodeindex);
  EXPORT bool btGImpactQuantizedBvh_isTrimesh(btGImpactQuantizedBvh* obj);
  EXPORT bool btGImpactQuantizedBvh_rayQuery(btGImpactQuantizedBvh* obj, const btVector3* ray_dir, const btVector3* ray_origin, btAlignedObjectArray_int* collided_results);
  EXPORT void btGImpactQuantizedBvh_setNodeBound(btGImpactQuantizedBvh* obj, int nodeindex, const btAABB* bound);
  EXPORT void btGImpactQuantizedBvh_setPrimitiveManager(btGImpactQuantizedBvh* obj, btPrimitiveManagerBase* primitive_manager);
  EXPORT void btGImpactQuantizedBvh_update(btGImpactQuantizedBvh* obj);
  EXPORT void btGImpactQuantizedBvh_delete(btGImpactQuantizedBvh* obj);
#ifdef __cplusplus
}
#endif
