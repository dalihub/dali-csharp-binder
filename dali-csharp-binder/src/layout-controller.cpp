/*
 * Copyright (c) 2019 Samsung Electronics Co., Ltd.
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

#include "layout-controller.h"
#include <dali/integration-api/adaptor-framework/adaptor.h>

#ifdef __cplusplus
extern "C" {
#endif

namespace
{
static int gLayoutControllerId = 1;
} // unnamed namespace

LayoutController::LayoutController() : handler(NULL), mId( gLayoutControllerId++ )
{
  Dali::Adaptor::Get().RegisterProcessor(*this);
}


LayoutController::~LayoutController()
{
  Dali::Adaptor::Get().UnregisterProcessor(*this);
}


int LayoutController::GetId() const
{
  return mId;
}

void LayoutController::Process()
{
  if( handler )
  {
    handler( mId );
  }
}

void LayoutController::SetCallback(  LayoutControllerProcessCallback callback )
{
  handler = callback;
}

// LayoutController Bindings

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_LayoutController() {

  LayoutController *result = 0 ;

  {
    try {
      result = (LayoutController *)new LayoutController();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0;
      };
    }
  }

  return (void *)result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_LayoutController(void * jarg1) {

  LayoutController * arg1 = (LayoutController *)jarg1;
  {
    try {
      delete arg1;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_LayoutController_SetCallback( void* jarg1, LayoutController::LayoutControllerProcessCallback callback )
{
  LayoutController* layoutController = (LayoutController *) jarg1;

  if( layoutController )
  {
    layoutController->SetCallback( callback );
  }
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_LayoutController_GetId( void* jarg1 )
{
  LayoutController * layoutController = (LayoutController *)jarg1;
  int ret = 0;
  if( layoutController )
  {
    ret = layoutController->GetId();
  }
  return ret;
}

#ifdef __cplusplus
}
#endif