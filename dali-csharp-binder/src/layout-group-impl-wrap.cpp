/*
 * Copyright (c) 2018 Samsung Electronics Co., Ltd.
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

// CLASS HEADER
#include "layout-group-impl-wrap.h"

// INTERNAL INCLUDES

#ifdef __cplusplus
extern "C" {
#endif

using namespace Dali::Toolkit;

SwigDirector_LayoutGroupImpl::SwigDirector_LayoutGroupImpl() : Dali::Toolkit::Internal::LayoutGroup()
{
  swig_init_callbacks();
}

SwigDirector_LayoutGroupImpl::~SwigDirector_LayoutGroupImpl()
{

}

void SwigDirector_LayoutGroupImpl::swig_connect_director( SWIG_Callback0_t callbackOnMeasure )
{
  swig_callbackOnMeasure = callbackOnMeasure;
}

void SwigDirector_LayoutGroupImpl::swig_init_callbacks()
{
  swig_callbackOnMeasure = 0;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutGroupImpl_director_connect( void *objarg, SwigDirector_LayoutGroupImpl::SWIG_Callback0_t callback1 )
{
  SwigDirector_LayoutGroupImpl *director = static_cast<SwigDirector_LayoutGroupImpl *>(objarg);
  if (director)
  {
    director->swig_connect_director( callback1 );
  }
}

void SwigDirector_LayoutGroupImpl::OnMeasure( Dali::Toolkit::MeasureSpec widthMeasureSpec, Dali::Toolkit::MeasureSpec heightMeasureSpec )
{
  if (swig_callbackOnMeasure)
  {
    swig_callbackOnMeasure(100, 100); // has to be fixed
  }
}

/// LayoutGroupImpl

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutGroupImpl()
{
  void * jresult ;
  Dali::Toolkit::Internal::LayoutGroup *result = 0 ;

  try
  {
    result = (Dali::Toolkit::Internal::LayoutGroup *) new SwigDirector_LayoutGroupImpl();
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (Dali::DaliException e)
  {
    SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }

  jresult = (void *)result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_LayoutGroupImpl_IsLayoutRequested( void * jarg )
{
  Dali::Toolkit::Internal::LayoutGroup *arg = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  arg = ( Dali::Toolkit::Internal::LayoutGroup* ) jarg;
  return arg->IsLayoutRequested();
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_New( void * jarg )
{
  void * jresult ;
  Dali::Toolkit::Internal::LayoutGroup *arg = (Dali::Toolkit::Internal::LayoutGroup *) 0 ;
  Dali::Toolkit::LayoutGroup result;

  arg = static_cast<Dali::Toolkit::Internal::LayoutGroup*> (jarg);
  try
  {
    result = LayoutGroup(arg);
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
  }
  catch (Dali::DaliException e)
  {
    SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
  }

  jresult = new Dali::Toolkit::LayoutGroup((const Dali::Toolkit::LayoutGroup &)result);
  return jresult;
}

// LayoutGroup
SWIGEXPORT Dali::Toolkit::LayoutGroup * SWIGSTDCALL CSharp_Dali_LayoutGroupWrapper_SWIGUpcast( Dali::Toolkit::Internal::LayoutGroup *jarg1 )
{
  return (Dali::Toolkit::LayoutGroup *) jarg1;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutGroupWrapper( void * jarg1 )
{
  Dali::Toolkit::LayoutGroup *arg1 = (Dali::Toolkit::LayoutGroup *) 0;

  arg1 = (Dali::Toolkit::LayoutGroup *) jarg1;
  {
    try
    {
      delete arg1;
    }
    catch (std::out_of_range& e)
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
    }
    catch (std::exception& e)
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
    }
    catch (Dali::DaliException e)
    {
      SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
    }
    catch (...)
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_View_SetLayout(void * jarg1, void * jarg2)
{
  Dali::Toolkit::Control *arg1 = (Dali::Toolkit::Control *) 0 ;
  arg1 = (Dali::Toolkit::Control *)jarg1;
  Dali::Toolkit::Internal::Control& controlImpl = Dali::Toolkit::Internal::GetImplementation( *arg1 );

  Dali::Toolkit::LayoutGroup *arg2 = 0 ;
  arg2 = (Dali::Toolkit::LayoutGroup *)jarg2;

  if (!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::LayoutGroup & type is null", 0);
  }

  try
  {
    DevelControl::SetLayout( controlImpl, (Dali::Toolkit::LayoutGroup &)*arg2 );
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
  }
  catch (Dali::DaliException e)
  {
    SWIG_CSharpException(SWIG_UnknownError, e.condition);
  }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error");
  }
}

#ifdef __cplusplus
}
#endif