// EXTERNAL INCLUDES
#include <dali-toolkit/dali-toolkit.h>
#include <typeinfo>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>
#include <dali-toolkit/devel-api/focus-manager/keyboard-focus-manager-devel.h>
#include <dali/devel-api/update/frame-callback-interface.h>

#include <dali-csharp-binder/common/dali-wrap.h> ///< Must include after common.h

using namespace Dali;
using namespace Dali::Toolkit;

#ifdef __cplusplus
extern "C" {
#endif

// dali-core-wrap.cpp

SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginTop_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::ParentOrigin::TOP;
  jresult = result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginBottom_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::ParentOrigin::BOTTOM;
  jresult = result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginLeft_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::ParentOrigin::LEFT;
  jresult = result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginRight_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::ParentOrigin::RIGHT;
  jresult = result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_ParentOriginMiddle_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::ParentOrigin::MIDDLE;
  jresult = result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginTopLeft_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::TOP_LEFT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginTopCenter_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::TOP_CENTER;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginTopRight_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::TOP_RIGHT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginCenterLeft_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::CENTER_LEFT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginCenter_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::CENTER;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginCenterRight_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::CENTER_RIGHT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginBottomLeft_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::BOTTOM_LEFT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginBottomCenter_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::BOTTOM_CENTER;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ParentOriginBottomRight_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::ParentOrigin::BOTTOM_RIGHT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointTop_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::AnchorPoint::TOP;
  jresult = result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointBottom_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::AnchorPoint::BOTTOM;
  jresult = result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointLeft_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::AnchorPoint::LEFT;
  jresult = result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointRight_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::AnchorPoint::RIGHT;
  jresult = result;
  return jresult;
}
SWIGEXPORT float SWIGSTDCALL CSharp_Dali_AnchorPointMiddle_get()
{
  float jresult;
  float result;
  result  = (float)(float)Dali::AnchorPoint::MIDDLE;
  jresult = result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AnchorPointTopCenter_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::AnchorPoint::TOP_CENTER;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AnchorPointTopRight_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::AnchorPoint::TOP_RIGHT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AnchorPointCenterLeft_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::AnchorPoint::CENTER_LEFT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AnchorPointCenter_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::AnchorPoint::CENTER;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AnchorPointCenterRight_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::AnchorPoint::CENTER_RIGHT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AnchorPointBottomLeft_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::AnchorPoint::BOTTOM_LEFT;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AnchorPointBottomCenter_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::AnchorPoint::BOTTOM_CENTER;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_AnchorPointBottomRight_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::AnchorPoint::BOTTOM_RIGHT;
  jresult               = (void*)result;
  return jresult;
}

// vector-wrap.cpp

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector2_ONE_get()
{
  void*          jresult;
  Dali::Vector2* result = 0;
  result                = (Dali::Vector2*)&Dali::Vector2::ONE;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector2_XAXIS_get()
{
  void*          jresult;
  Dali::Vector2* result = 0;
  result                = (Dali::Vector2*)&Dali::Vector2::XAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector2_YAXIS_get()
{
  void*          jresult;
  Dali::Vector2* result = 0;
  result                = (Dali::Vector2*)&Dali::Vector2::YAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector2_NEGATIVE_XAXIS_get()
{
  void*          jresult;
  Dali::Vector2* result = 0;
  result                = (Dali::Vector2*)&Dali::Vector2::NEGATIVE_XAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector2_NEGATIVE_YAXIS_get()
{
  void*          jresult;
  Dali::Vector2* result = 0;
  result                = (Dali::Vector2*)&Dali::Vector2::NEGATIVE_YAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector2_ZERO_get()
{
  void*          jresult;
  Dali::Vector2* result = 0;
  result                = (Dali::Vector2*)&Dali::Vector2::ZERO;
  jresult               = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector3_ONE_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::Vector3::ONE;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector3_XAXIS_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::Vector3::XAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector3_YAXIS_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::Vector3::YAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector3_ZAXIS_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::Vector3::ZAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector3_NEGATIVE_XAXIS_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::Vector3::NEGATIVE_XAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector3_NEGATIVE_YAXIS_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::Vector3::NEGATIVE_YAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector3_NEGATIVE_ZAXIS_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::Vector3::NEGATIVE_ZAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector3_ZERO_get()
{
  void*          jresult;
  Dali::Vector3* result = 0;
  result                = (Dali::Vector3*)&Dali::Vector3::ZERO;
  jresult               = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector4_ONE_get()
{
  void*          jresult;
  Dali::Vector4* result = 0;
  result                = (Dali::Vector4*)&Dali::Vector4::ONE;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector4_XAXIS_get()
{
  void*          jresult;
  Dali::Vector4* result = 0;
  result                = (Dali::Vector4*)&Dali::Vector4::XAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector4_YAXIS_get()
{
  void*          jresult;
  Dali::Vector4* result = 0;
  result                = (Dali::Vector4*)&Dali::Vector4::YAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector4_ZAXIS_get()
{
  void*          jresult;
  Dali::Vector4* result = 0;
  result                = (Dali::Vector4*)&Dali::Vector4::ZAXIS;
  jresult               = (void*)result;
  return jresult;
}
SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Vector4_ZERO_get()
{
  void*          jresult;
  Dali::Vector4* result = 0;
  result                = (Dali::Vector4*)&Dali::Vector4::ZERO;
  jresult               = (void*)result;
  return jresult;
}

// CSharp_Dali_ViewImpl_director_connect

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ViewImpl_director_connect(void* objarg, SwigDirector_ViewImpl::SWIG_Callback0_t callback0, SwigDirector_ViewImpl::SWIG_Callback1_t callback1, SwigDirector_ViewImpl::SWIG_Callback2_t callback2, SwigDirector_ViewImpl::SWIG_Callback3_t callback3, SwigDirector_ViewImpl::SWIG_Callback4_t callback4, SwigDirector_ViewImpl::SWIG_Callback5_t callback5, SwigDirector_ViewImpl::SWIG_Callback6_t callback6, SwigDirector_ViewImpl::SWIG_Callback9_t callback9, SwigDirector_ViewImpl::SWIG_Callback11_t callback11, SwigDirector_ViewImpl::SWIG_Callback12_t callback12, SwigDirector_ViewImpl::SWIG_Callback13_t callback13, SwigDirector_ViewImpl::SWIG_Callback14_t callback14, SwigDirector_ViewImpl::SWIG_Callback15_t callback15, SwigDirector_ViewImpl::SWIG_Callback16_t callback16, SwigDirector_ViewImpl::SWIG_Callback17_t callback17, SwigDirector_ViewImpl::SWIG_Callback18_t callback18, SwigDirector_ViewImpl::SWIG_Callback19_t callback19, SwigDirector_ViewImpl::SWIG_Callback20_t callback20, SwigDirector_ViewImpl::SWIG_Callback21_t callback21, SwigDirector_ViewImpl::SWIG_Callback24_t callback24, SwigDirector_ViewImpl::SWIG_Callback25_t callback25, SwigDirector_ViewImpl::SWIG_Callback30_t callback30, SwigDirector_ViewImpl::SWIG_Callback31_t callback31, SwigDirector_ViewImpl::SWIG_Callback32_t callback32, SwigDirector_ViewImpl::SWIG_Callback33_t callback33, SwigDirector_ViewImpl::SWIG_Callback34_t callback34, SwigDirector_ViewImpl::SWIG_Callback35_t callback35, SwigDirector_ViewImpl::SWIG_Callback36_t callback36, SwigDirector_ViewImpl::SWIG_Callback37_t callback37, SwigDirector_ViewImpl::SWIG_Callback38_t callback38, SwigDirector_ViewImpl::SWIG_Callback39_t callback39, SwigDirector_ViewImpl::SWIG_Callback40_t callback40)
{
  Dali::Toolkit::Internal::Control* obj      = (Dali::Toolkit::Internal::Control*)objarg;
  SwigDirector_ViewImpl*            director = dynamic_cast<SwigDirector_ViewImpl*>(obj);
  if(director)
  {
    director->swig_connect_director(callback0, callback1, callback2, callback3, callback4, callback5, callback6, callback9, callback11, callback12, callback13, callback14, callback15, callback16, callback17, callback18, callback19, callback20, callback21, callback24, callback25, callback30, callback31, callback32, callback33, callback34, callback35, callback36, callback37, callback38, callback39, callback40);
  }
}

// std::type_info

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_TypeRegistry_GetTypeInfo__SWIG_1(void* jarg1, void* jarg2)
{
  void*               jresult;
  Dali::TypeRegistry* arg1 = (Dali::TypeRegistry*)0;
  std::type_info*     arg2 = 0;
  Dali::TypeInfo      result;

  arg1 = (Dali::TypeRegistry*)jarg1;
  arg2 = (std::type_info*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::type_info const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (arg1)->GetTypeInfo((std::type_info const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::TypeInfo((const Dali::TypeInfo&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_TypeRegistration__SWIG_0(void* jarg1, void* jarg2, void* jarg3)
{
  void*                          jresult;
  std::type_info*                arg1   = 0;
  std::type_info*                arg2   = 0;
  Dali::TypeInfo::CreateFunction arg3   = (Dali::TypeInfo::CreateFunction)0;
  Dali::TypeRegistration*        result = 0;

  arg1 = (std::type_info*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::type_info const & type is null", 0);
    return 0;
  }
  arg2 = (std::type_info*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::type_info const & type is null", 0);
    return 0;
  }
  arg3 = (Dali::TypeInfo::CreateFunction)jarg3;
  {
    try
    {
      result = (Dali::TypeRegistration*)new Dali::TypeRegistration((std::type_info const&)*arg1, (std::type_info const&)*arg2, arg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_TypeRegistration__SWIG_1(void* jarg1, void* jarg2, void* jarg3, bool jarg4)
{
  void*                          jresult;
  std::type_info*                arg1 = 0;
  std::type_info*                arg2 = 0;
  Dali::TypeInfo::CreateFunction arg3 = (Dali::TypeInfo::CreateFunction)0;
  bool                           arg4;
  Dali::TypeRegistration*        result = 0;

  arg1 = (std::type_info*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::type_info const & type is null", 0);
    return 0;
  }
  arg2 = (std::type_info*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::type_info const & type is null", 0);
    return 0;
  }
  arg3 = (Dali::TypeInfo::CreateFunction)jarg3;
  arg4 = jarg4 ? true : false;
  {
    try
    {
      result = (Dali::TypeRegistration*)new Dali::TypeRegistration((std::type_info const&)*arg1, (std::type_info const&)*arg2, arg3, arg4);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_TypeRegistration__SWIG_2(char* jarg1, void* jarg2, void* jarg3)
{
  void*                          jresult;
  std::string*                   arg1   = 0;
  std::type_info*                arg2   = 0;
  Dali::TypeInfo::CreateFunction arg3   = (Dali::TypeInfo::CreateFunction)0;
  Dali::TypeRegistration*        result = 0;

  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  arg2 = (std::type_info*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::type_info const & type is null", 0);
    return 0;
  }
  arg3 = (Dali::TypeInfo::CreateFunction)jarg3;
  {
    try
    {
      result = (Dali::TypeRegistration*)new Dali::TypeRegistration((std::string const&)*arg1, (std::type_info const&)*arg2, arg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_RegisterType(char* jarg1, void* jarg2, void* jarg3)
{
  bool                                 jresult;
  std::string*                         arg1 = 0;
  std::type_info*                      arg2 = 0;
  Dali::CSharpTypeInfo::CreateFunction arg3 = (Dali::CSharpTypeInfo::CreateFunction)0;
  bool                                 result;

  if(!jarg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string arg1_str(jarg1);
  arg1 = &arg1_str;
  arg2 = (std::type_info*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::type_info const & type is null", 0);
    return 0;
  }
  arg3 = (Dali::CSharpTypeInfo::CreateFunction)jarg3;
  {
    try
    {
      result = (bool)Dali::CSharpTypeRegistry::RegisterType((std::string const&)*arg1, (std::type_info const&)*arg2, arg3);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Any_GetType(void* jarg1)
{
  void*           jresult;
  Dali::Any*      arg1   = (Dali::Any*)0;
  std::type_info* result = 0;

  arg1 = (Dali::Any*)jarg1;
  {
    try
    {
      result = (std::type_info*)&((Dali::Any const*)arg1)->GetType();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

#ifdef __cplusplus
}
#endif