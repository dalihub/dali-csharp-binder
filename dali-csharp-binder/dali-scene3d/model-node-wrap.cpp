/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// EXTERNAL INCLUDES
#include <dali-scene3d/public-api/model-components/model-node.h>
#include <dali-scene3d/public-api/algorithm/navigation-mesh.h>
#include <dali-scene3d/public-api/loader/navigation-mesh-factory.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Node_New_SWIG_0()
{
  Dali::Scene3D::ModelNode result;
  {
    try
    {
      result = Dali::Scene3D::ModelNode::New();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return new Dali::Scene3D::ModelNode((const Dali::Scene3D::ModelNode&)result);
}


SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Model_Node_SWIG_1(void* csModel)
{
  Dali::Scene3D::ModelNode* model  = (Dali::Scene3D::ModelNode*)csModel;
  Dali::Scene3D::ModelNode* result = 0;

  if(!model)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::ModelNode const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::ModelNode*)new Dali::Scene3D::ModelNode((Dali::Scene3D::ModelNode const&)*model);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Model_Node(void* csModel)
{
  Dali::Scene3D::ModelNode* model = (Dali::Scene3D::ModelNode*)csModel;
  {
    try
    {
      delete model;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Node_Assign(void* csDestination, void* csSource)
{
  Dali::Scene3D::ModelNode* destination = (Dali::Scene3D::ModelNode*)csDestination;
  Dali::Scene3D::ModelNode* source      = (Dali::Scene3D::ModelNode*)csSource;
  Dali::Scene3D::ModelNode* result      = 0;

  if(!source)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Scene3D::ModelNode const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (Dali::Scene3D::ModelNode*)&(destination)->operator=((Dali::Scene3D::ModelNode const&)*source);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return (void*)result;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Model_Node_GetModelPrimitiveCount(void* csModelNode)
{
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;

  if(!modelNode)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
    return 0;
  }
  {
    try
    {
      return modelNode->GetModelPrimitiveCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_Node_AddModelPrimitive(void* csModelNode, void* csModelPrimitive)
{
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;
  Dali::Scene3D::ModelPrimitive* modelPrimitive = (Dali::Scene3D::ModelPrimitive*)csModelPrimitive;

  if(!modelNode)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
    return;
  }
  if(!modelPrimitive)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelPrimitive", 0);
    return;
  }
  {
    try
    {
      modelNode->AddModelPrimitive(*modelPrimitive);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_Node_RemoveModelPrimitive1(void* csModelNode, void* csModelPrimitive)
{
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;
  Dali::Scene3D::ModelPrimitive* modelPrimitive = (Dali::Scene3D::ModelPrimitive*)csModelPrimitive;

  if(!modelNode)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
    return;
  }
  if(!modelPrimitive)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelPrimitive", 0);
    return;
  }
  {
    try
    {
      modelNode->RemoveModelPrimitive(*modelPrimitive);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Model_Node_RemoveModelPrimitive2(void* csModelNode, unsigned int index)
{
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;

  if(!modelNode)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
    return;
  }
  {
    try
    {
      modelNode->RemoveModelPrimitive(index);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Node_GetModelPrimitive(void* csModelNode, unsigned int index)
{
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;
  Dali::Scene3D::ModelPrimitive       result;

  if(!modelNode)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
    return nullptr;
  }
  {
    try
    {
      result = modelNode->GetModelPrimitive(index);
    }
    CALL_CATCH_EXCEPTION(nullptr);
  }
  return new Dali::Scene3D::ModelPrimitive((const Dali::Scene3D::ModelPrimitive&)result);
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Node_FindChildModelNodeByName(void* csModelNode, char* nodeName)
{
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;
  Dali::Scene3D::ModelNode result;

  if(!modelNode)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
    return nullptr;
  }
  {
    try
    {
      result = modelNode->FindChildModelNodeByName(nodeName);
    }
    CALL_CATCH_EXCEPTION(nullptr);
  }
  return new Dali::Scene3D::ModelNode((const Dali::Scene3D::ModelNode&)result);
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Model_Node_GetChildModelNodeCount(void* csModelNode)
{
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;

  if(!modelNode)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
    return 0;
  }
  {
    try
    {
      return modelNode->GetChildCount();
    }
    CALL_CATCH_EXCEPTION(0);
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Model_Node_GetChildModelNodeAt(void* csModelNode, uint32_t index)
{
  Dali::Scene3D::ModelNode* modelNode = (Dali::Scene3D::ModelNode*)csModelNode;
  Dali::Scene3D::ModelNode result;

  if(!modelNode)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Scene3D::ModelNode", 0);
    return nullptr;
  }
  {
    try
    {
      Dali::Actor actor = modelNode->GetChildAt(index);
      result = Dali::Scene3D::ModelNode::DownCast(actor);
    }
    CALL_CATCH_EXCEPTION(nullptr);
  }
  return new Dali::Scene3D::ModelNode((const Dali::Scene3D::ModelNode&)result);
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ModelNode_SetColliderMesh(void *modelNodePtr, void* vertexPtr, void* normalPtr, unsigned long vertexCount, void* indexPtr, unsigned long indexCount) {
  Dali::Scene3D::ModelNode *modelNode = (Dali::Scene3D::ModelNode *) modelNodePtr;
  auto vertices = reinterpret_cast<Dali::Vector3*>(vertexPtr);
  auto normals = reinterpret_cast<Dali::Vector3*>(normalPtr);
  auto indices = reinterpret_cast<uint32_t*>(indexPtr);

  try {
    auto colliderMesh = Dali::Scene3D::Loader::NavigationMeshFactory::CreateFromVertexFaceList(vertices, normals, vertexCount, indices, indexCount);
    modelNode->SetColliderMesh(std::move(colliderMesh));
  } CALL_CATCH_EXCEPTION();
}

#ifdef __cplusplus
}
#endif
