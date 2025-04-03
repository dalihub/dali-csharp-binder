/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
#include <cstdint>
#include <dali/public-api/animation/constraint.h>
#include <type_traits> ///< for std::is_arithmetic

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

namespace
{
// Since we only support communicate C#-C++ by pointer,
// We should define custom contraint functions here, who use reference, and emit signal to C# by pointer.
template<typename T>
using SWIG_ConstraintSignal = void (SWIGSTDCALL*)(T*, uint32_t, const void*);


/*************************************
 * Implement for Cunstraint function *
 * callback convertor class          *
 *************************************/

template<typename T>
class CSharpConstraintFunction;

namespace Internal
{
template<typename T>
class CSharpConstraintFunction;

template<typename T>
using CSharpConstraintFunctionPtr = Dali::IntrusivePtr<CSharpConstraintFunction<T>>;

static uint32_t gConstraintFunctionId = 0u;

template<typename T>
class CSharpConstraintFunction : public Dali::BaseObject
{
public:
  static CSharpConstraintFunctionPtr<T> New()
  {
    CSharpConstraintFunctionPtr<T> constraintFunction = new CSharpConstraintFunction<T>();
    return constraintFunction;
  }

public:
  void SetHandler(SWIG_ConstraintSignal<T> handler)
  {
    mHandler = handler;
  }

  uint32_t GetId() const
  {
    return mId;
  }

  void ConstraintCallback(T& current, const Dali::PropertyInputContainer& inputs)
  {
    if constexpr (std::is_arithmetic<T>::value)
    {
      mHandler(&current, mId, reinterpret_cast<const void*>(&inputs));
    }
    else
    {
      T* copiedValue = new T(current);
      mHandler(copiedValue, mId, reinterpret_cast<const void*>(&inputs));
      current = *copiedValue;
      delete copiedValue;
    }
  }

protected:
  CSharpConstraintFunction()
  : mHandler(nullptr),
    mId(++gConstraintFunctionId)
  {
  }
  ~CSharpConstraintFunction() override
  {
    mHandler = nullptr;
  }

private:
  CSharpConstraintFunction(const CSharpConstraintFunction&) = delete;
  CSharpConstraintFunction& operator=(const CSharpConstraintFunction& rhs) = delete;

private:
  SWIG_ConstraintSignal<T> mHandler;
  uint32_t mId;
};

} // namespace Internal

/**
 * @brief CSharpConstraintFunction is a wrapper class for C# to use C++ ConstraintFunction.
 */
template<typename T>
class CSharpConstraintFunction : public Dali::BaseHandle
{
public:
  CSharpConstraintFunction() = default;
  ~CSharpConstraintFunction() = default;

  CSharpConstraintFunction(const CSharpConstraintFunction& handle) = default;
  CSharpConstraintFunction& operator=(const CSharpConstraintFunction& rhs) = default;
  CSharpConstraintFunction(CSharpConstraintFunction&& rhs) noexcept = default;
  CSharpConstraintFunction& operator=(CSharpConstraintFunction&& rhs) noexcept = default;

public:
  void SetHandler(SWIG_ConstraintSignal<T> handler)
  {
    (static_cast<Internal::CSharpConstraintFunction<T>&>(GetBaseObject())).SetHandler(handler);
  }

  uint32_t GetId() const
  {
    return (static_cast<const Internal::CSharpConstraintFunction<T>&>(GetBaseObject())).GetId();
  }

public:
  static CSharpConstraintFunction<T> New()
  {
    Internal::CSharpConstraintFunctionPtr<T> internal = Internal::CSharpConstraintFunction<T>::New();
    return CSharpConstraintFunction(internal.Get());
  }

  void ConstraintCallback(T& current, const Dali::PropertyInputContainer& inputs)
  {
    (static_cast<Internal::CSharpConstraintFunction<T>&>(GetBaseObject())).ConstraintCallback(current, inputs);
  }

public:
  explicit CSharpConstraintFunction(Internal::CSharpConstraintFunction<T>* internal)
  : BaseHandle(internal)
  {
  }
};

/**
 * @brief Macro to generate constraint function
 */
#define GENERATE_CONSTRAINT_FUNCTIONS(Type, TypeName)                                                                                       \
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Constraint_Function_##TypeName##_New()                                                            \
{                                                                                                                                           \
  void * jresult = 0;                                                                                                                       \
  CSharpConstraintFunction<Type> result;                                                                                                    \
  {                                                                                                                                         \
    try                                                                                                                                     \
    {                                                                                                                                       \
      result = CSharpConstraintFunction<Type>::New();                                                                                       \
    } CALL_CATCH_EXCEPTION(0);                                                                                                              \
  }                                                                                                                                         \
  jresult = new CSharpConstraintFunction((const CSharpConstraintFunction<Type> &)result);                                                   \
  return jresult;                                                                                                                           \
}                                                                                                                                           \
                                                                                                                                            \
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_Function_##TypeName##_SetHandler(void* nuiConstraintFunction, void* handler)             \
{                                                                                                                                           \
  CSharpConstraintFunction<Type>* constraintFunction = (CSharpConstraintFunction<Type>*)0;                                                  \
                                                                                                                                            \
  GUARD_ON_NULL_RET(nuiConstraintFunction);                                                                                                 \
                                                                                                                                            \
  constraintFunction = (CSharpConstraintFunction<Type>*)nuiConstraintFunction;                                                              \
  {                                                                                                                                         \
    try                                                                                                                                     \
    {                                                                                                                                       \
      constraintFunction->SetHandler((SWIG_ConstraintSignal<Type>)handler);                                                                 \
    } CALL_CATCH_EXCEPTION();                                                                                                               \
  }                                                                                                                                         \
}                                                                                                                                           \
SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_Constraint_Function_##TypeName##_GetId(void* nuiConstraintFunction)                             \
{                                                                                                                                           \
  CSharpConstraintFunction<Type>* constraintFunction = (CSharpConstraintFunction<Type>*)0;                                                  \
                                                                                                                                            \
  GUARD_ON_NULL_RET0(nuiConstraintFunction);                                                                                                \
                                                                                                                                            \
  constraintFunction = (CSharpConstraintFunction<Type>*)nuiConstraintFunction;                                                              \
  uint32_t ret = 0;                                                                                                                         \
  {                                                                                                                                         \
    try                                                                                                                                     \
    {                                                                                                                                       \
      ret = constraintFunction->GetId();                                                                                                    \
    } CALL_CATCH_EXCEPTION(0);                                                                                                              \
  }                                                                                                                                         \
  return ret;                                                                                                                               \
}                                                                                                                                           \
                                                                                                                                            \
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Constraint_Function_##TypeName(void* nuiConstraintFunction)                                  \
{                                                                                                                                           \
  CSharpConstraintFunction<Type>* constraintFunction = (CSharpConstraintFunction<Type> *) 0;                                                \
                                                                                                                                            \
  constraintFunction = (CSharpConstraintFunction<Type>*)nuiConstraintFunction;                                                              \
  {                                                                                                                                         \
    try                                                                                                                                     \
    {                                                                                                                                       \
      delete constraintFunction;                                                                                                            \
    } CALL_CATCH_EXCEPTION();                                                                                                               \
  }                                                                                                                                         \
}                                                                                                                                           \
                                                                                                                                            \
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Constraint_New_##TypeName(void* nuiHandle, int nuiTargetIndex, void* nuiConstraintFunction)       \
{                                                                                                                                           \
  Dali::Handle *handle = (Dali::Handle *) 0;                                                                                                \
  Dali::Property::Index targetIndex;                                                                                                        \
  CSharpConstraintFunction<Type>* constraintFunction = (CSharpConstraintFunction<Type>*)0;                                                  \
  Dali::Constraint result;                                                                                                                  \
  void * jresult = 0;                                                                                                                       \
                                                                                                                                            \
  GUARD_ON_NULL_RET0(nuiHandle);                                                                                                            \
  GUARD_ON_NULL_RET0(nuiConstraintFunction);                                                                                                \
  handle = (Dali::Handle *)nuiHandle;                                                                                                       \
  targetIndex = (Dali::Property::Index)nuiTargetIndex;                                                                                      \
  constraintFunction = (CSharpConstraintFunction<Type> *)nuiConstraintFunction;                                                             \
                                                                                                                                            \
  {                                                                                                                                         \
    try                                                                                                                                     \
    {                                                                                                                                       \
      result = Dali::Constraint::New<Type>(*handle, targetIndex, *constraintFunction, &CSharpConstraintFunction<Type>::ConstraintCallback); \
    } CALL_CATCH_EXCEPTION(0);                                                                                                              \
  }                                                                                                                                         \
                                                                                                                                            \
  jresult = new Dali::Constraint((const Dali::Constraint &)result);                                                                         \
  return jresult;                                                                                                                           \
}

} // namespace

#ifdef __cplusplus
extern "C"
{
#endif

/// Special constraint Functors
SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_EqualConstraintWithParentFloat_New(void* nuiHandle, int nuiTargetIndex, int nuiParentIndex)
{
  Dali::Handle *handle = (Dali::Handle *) 0;
  Dali::Property::Index targetIndex;
  Dali::Property::Index parentIndex;
  Dali::Constraint result;
  void * jresult = 0;

  GUARD_ON_NULL_RET0(nuiHandle);
  handle = (Dali::Handle *)nuiHandle;
  targetIndex = (Dali::Property::Index)nuiTargetIndex;
  parentIndex = (Dali::Property::Index)nuiParentIndex;

  {
    try
    {
      result = Dali::Constraint::New<float>(*handle, targetIndex, Dali::EqualToConstraint());
      result.AddSource(Dali::ParentSource(parentIndex));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Constraint((const Dali::Constraint &)result);
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_RelativeConstraintWithParentFloat_New(void* nuiHandle, int nuiTargetIndex, int nuiParentIndex, float nuiRelativeRate)
{
  Dali::Handle *handle = (Dali::Handle *) 0;
  Dali::Property::Index targetIndex;
  Dali::Property::Index parentIndex;
  float relativeRate;
  Dali::Constraint result;
  void * jresult = 0;

  GUARD_ON_NULL_RET0(nuiHandle);
  handle = (Dali::Handle *)nuiHandle;
  targetIndex = (Dali::Property::Index)nuiTargetIndex;
  parentIndex = (Dali::Property::Index)nuiParentIndex;
  relativeRate = nuiRelativeRate;

  {
    try
    {
      result = Dali::Constraint::New<float>(*handle, targetIndex, Dali::RelativeToConstraintFloat(relativeRate));
      result.AddSource(Dali::ParentSource(parentIndex));
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Constraint((const Dali::Constraint &)result);
  return jresult;
}

/// Dali::PropertyInputContainer relative functions
SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetCount(void* nuiPropertyInputContainer)
{
  GUARD_ON_NULL_RET0(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;

  uint32_t result = 0;
  try_catch(([&]() {
      result = container.Count();
    }
  ));
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetType(void* nuiPropertyInputContainer, uint32_t index)
{
  GUARD_ON_NULL_RET0(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;

  int result = 0;
  try_catch(([&]() {
      result = static_cast<int>(container[index]->GetType());
    }
  ));
  return result;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetBoolean(void* nuiPropertyInputContainer, uint32_t index)
{
  GUARD_ON_NULL_RET0(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;

  bool result = false;
  try_catch(([&]() {
      result = container[index]->GetBoolean();
    }
  ));
  return result;
}

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetFloat(void* nuiPropertyInputContainer, uint32_t index)
{
  GUARD_ON_NULL_RET0(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;

  float result = 0.0f;
  try_catch(([&]() {
      result = container[index]->GetFloat();
    }
  ));
  return result;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetInteger(void* nuiPropertyInputContainer, uint32_t index)
{
  GUARD_ON_NULL_RET0(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;

  int result = 0;
  try_catch(([&]() {
      result = container[index]->GetInteger();
    }
  ));
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetVector2_Componentwise(void* nuiPropertyInputContainer, uint32_t index, float* outX, float* outY)
{
  GUARD_ON_NULL_RET(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;

  try_catch(([&]() {
      const auto& result = container[index]->GetVector2();
      *outX = result.x;
      *outY = result.y;
    }
  ));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetVector3_Componentwise(void* nuiPropertyInputContainer, uint32_t index, float* outX, float* outY, float* outZ)
{
  GUARD_ON_NULL_RET(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;

  try_catch(([&]() {
      const auto& result = container[index]->GetVector3();
      *outX = result.x;
      *outY = result.y;
      *outZ = result.z;
    }
  ));
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetVector4_Componentwise(void* nuiPropertyInputContainer, uint32_t index, float* outX, float* outY, float* outZ, float* outW)
{
  GUARD_ON_NULL_RET(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;

  try_catch(([&]() {
      const auto& result = container[index]->GetVector4();
      *outX = result.x;
      *outY = result.y;
      *outZ = result.z;
      *outW = result.w;
    }
  ));
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetMatrix3(void* nuiPropertyInputContainer, uint32_t index)
{
  GUARD_ON_NULL_RET0(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;
  Dali::Matrix3* jresult = 0;

  try_catch(([&]() {
      jresult = (Dali::Matrix3 *)new Dali::Matrix3(container[index]->GetMatrix3());
    }
  ));
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetMatrix(void* nuiPropertyInputContainer, uint32_t index)
{
  GUARD_ON_NULL_RET0(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;
  Dali::Matrix* jresult = 0;

  try_catch(([&]() {
      jresult = (Dali::Matrix *)new Dali::Matrix(container[index]->GetMatrix());
    }
  ));
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_PropertyInputContainer_GetQuaternion(void* nuiPropertyInputContainer, uint32_t index)
{
  GUARD_ON_NULL_RET0(nuiPropertyInputContainer);
  const Dali::PropertyInputContainer& container = *(const Dali::PropertyInputContainer*)nuiPropertyInputContainer;
  Dali::Quaternion* jresult = 0;

  try_catch(([&]() {
      jresult = (Dali::Quaternion *)new Dali::Quaternion(container[index]->GetQuaternion());
    }
  ));
  return jresult;
}

/// Constraint Functor

GENERATE_CONSTRAINT_FUNCTIONS(bool, Boolean)
// CSharp_Dali_Constraint_Function_Boolean_New
// CSharp_Dali_Constraint_Function_Boolean_SetHandler
// CSharp_Dali_Constraint_Function_Boolean_GetId
// CSharp_Dali_delete_Constraint_Function_Boolean
// CSharp_Dali_Constraint_New_Boolean

GENERATE_CONSTRAINT_FUNCTIONS(float, Float)
// CSharp_Dali_Constraint_Function_Float_New
// CSharp_Dali_Constraint_Function_Float_SetHandler
// CSharp_Dali_Constraint_Function_Float_GetId
// CSharp_Dali_delete_Constraint_Function_Float
// CSharp_Dali_Constraint_New_Float

GENERATE_CONSTRAINT_FUNCTIONS(int, Integer)
// CSharp_Dali_Constraint_Function_Integer_New
// CSharp_Dali_Constraint_Function_Integer_SetHandler
// CSharp_Dali_Constraint_Function_Integer_GetId
// CSharp_Dali_delete_Constraint_Function_Integer
// CSharp_Dali_Constraint_New_Integer

GENERATE_CONSTRAINT_FUNCTIONS(Dali::Vector2, Vector2)
// CSharp_Dali_Constraint_Function_Vector2_New
// CSharp_Dali_Constraint_Function_Vector2_SetHandler
// CSharp_Dali_Constraint_Function_Vector2_GetId
// CSharp_Dali_delete_Constraint_Function_Vector2
// CSharp_Dali_Constraint_New_Vector2

GENERATE_CONSTRAINT_FUNCTIONS(Dali::Vector3, Vector3)
// CSharp_Dali_Constraint_Function_Vector3_New
// CSharp_Dali_Constraint_Function_Vector3_SetHandler
// CSharp_Dali_Constraint_Function_Vector3_GetId
// CSharp_Dali_delete_Constraint_Function_Vector3
// CSharp_Dali_Constraint_New_Vector3

GENERATE_CONSTRAINT_FUNCTIONS(Dali::Vector4, Vector4)
// CSharp_Dali_Constraint_Function_Vector4_New
// CSharp_Dali_Constraint_Function_Vector4_SetHandler
// CSharp_Dali_Constraint_Function_Vector4_GetId
// CSharp_Dali_delete_Constraint_Function_Vector4
// CSharp_Dali_Constraint_New_Vector4

GENERATE_CONSTRAINT_FUNCTIONS(Dali::Matrix3, Matrix3)
// CSharp_Dali_Constraint_Function_Matrix3_New
// CSharp_Dali_Constraint_Function_Matrix3_SetHandler
// CSharp_Dali_Constraint_Function_Matrix3_GetId
// CSharp_Dali_delete_Constraint_Function_Matrix3
// CSharp_Dali_Constraint_New_Matrix3

GENERATE_CONSTRAINT_FUNCTIONS(Dali::Matrix, Matrix)
// CSharp_Dali_Constraint_Function_Matrix_New
// CSharp_Dali_Constraint_Function_Matrix_SetHandler
// CSharp_Dali_Constraint_Function_Matrix_GetId
// CSharp_Dali_delete_Constraint_Function_Matrix
// CSharp_Dali_Constraint_New_Matrix

GENERATE_CONSTRAINT_FUNCTIONS(Dali::Quaternion, Quaternion)
// CSharp_Dali_Constraint_Function_Quaternion_New
// CSharp_Dali_Constraint_Function_Quaternion_SetHandler
// CSharp_Dali_Constraint_Function_Quaternion_GetId
// CSharp_Dali_delete_Constraint_Function_Quaternion
// CSharp_Dali_Constraint_New_Quaternion

/// Constraint itselfs
SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_AddSource(void* nuiConstraint, void* nuiSourceHandle, int sourceIndex)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  Dali::Handle* sourceHandle = (Dali::Handle *) 0;

  GUARD_ON_NULL_RET(nuiConstraint);
  GUARD_ON_NULL_RET(nuiSourceHandle);
  constraint = (Dali::Constraint *)nuiConstraint;
  sourceHandle = (Dali::Handle *)nuiSourceHandle;

  {
    try
    {
      (*constraint).AddSource(Dali::Source(*sourceHandle, sourceIndex));
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_AddLocalSource(void* nuiConstraint, int sourceIndex)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  GUARD_ON_NULL_RET(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;

  {
    try
    {
      (*constraint).AddSource(Dali::LocalSource(sourceIndex));
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_AddParentSource(void* nuiConstraint, int sourceIndex)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  GUARD_ON_NULL_RET(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;

  {
    try
    {
      (*constraint).AddSource(Dali::ParentSource(sourceIndex));
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_Apply(void* nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  GUARD_ON_NULL_RET(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;

  {
    try
    {
      (*constraint).Apply();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_ApplyPost(void* nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  GUARD_ON_NULL_RET(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;

  {
    try
    {
      (*constraint).ApplyPost();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_Remove(void* nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  GUARD_ON_NULL_RET(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;

  {
    try
    {
      (*constraint).Remove();
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_SetRemoveAction(void* nuiConstraint, int nuiRemoveAction)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  Dali::Constraint::RemoveAction removeAction = Dali::Constraint::DEFAULT_REMOVE_ACTION;

  GUARD_ON_NULL_RET(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;
  removeAction = (Dali::Constraint::RemoveAction)nuiRemoveAction;

  {
    try
    {
      (*constraint).SetRemoveAction(removeAction);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Constraint_GetRemoveAction(void* nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  int jresult = 0;

  GUARD_ON_NULL_RET0(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;

  {
    try
    {
      jresult = (int)(*constraint).GetRemoveAction();
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Constraint_SetTag(void* nuiConstraint, uint32_t nuiTag)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  uint32_t tag = 0;

  GUARD_ON_NULL_RET(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;
  tag = nuiTag;

  {
    try
    {
      (*constraint).SetTag(tag);
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT uint32_t SWIGSTDCALL CSharp_Dali_Constraint_GetTag(void* nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  uint32_t jresult = 0;

  GUARD_ON_NULL_RET0(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;

  {
    try
    {
      jresult = (*constraint).GetTag();
    } CALL_CATCH_EXCEPTION(0);
  }

  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_Constraint_GetTargetObject(void* nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  Dali::Handle result = Dali::Handle();
  void * jresult = 0;

  GUARD_ON_NULL_RET0(nuiConstraint);
  constraint = (Dali::Constraint *)nuiConstraint;

  {
    try
    {
      result = (*constraint).GetTargetObject();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Handle((const Dali::Handle &)result);
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Constraint_GetTargetProperty(void* nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;
  Dali::Property::Index result = Dali::Property::INVALID_INDEX;
  int jresult = 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  if (!constraint)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Constraint is null", 0);
    return Dali::Property::INVALID_INDEX;
  }

  {
    try
    {
      result = (*constraint).GetTargetProperty();
    } CALL_CATCH_EXCEPTION(Dali::Property::INVALID_INDEX);
  }

  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Constraint(void* nuiConstraint)
{
  Dali::Constraint *constraint = (Dali::Constraint *) 0;

  constraint = (Dali::Constraint *)nuiConstraint;
  {
    try
    {
      delete constraint;
    } CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
