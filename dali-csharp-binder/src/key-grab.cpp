/** Copyright (c) 2017 Samsung Electronics Co., Ltd.
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

#include "common.h"

#include <dali/dali.h>
#include <dali-toolkit/dali-toolkit.h>
#include <dali/public-api/common/dali-common.h>
#include <dali/integration-api/debug.h>
#include <dali/public-api/adaptor-framework/key-grab.h>
#include <dali/devel-api/adaptor-framework/window-devel.h>

#include <stdexcept>
#include <exception>


#ifdef TIZEN_BUILD
#include <Ecore_Wayland.h>
#endif

#undef LOG
//#define LOG DALI_LOG_ERROR
#define LOG(a...)


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GrabKeyTopmost(void * window, int daliKey)
{
  Dali::Window *_win = (Dali::Window *)window;
  bool ret;

  LOG("CSharp_Dali_GrabKeyTopmost() [DP1] window=%d, dalikey=%d", window, daliKey);

  {
    try {
      ret = Dali::KeyGrab::GrabKeyTopmost(*_win, (Dali::KEY)daliKey);
    } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return false;
    };
    } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return false;
    };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }

  LOG("CSharp_Dali_GrabKeyTopmost() [DP2] ret=%d", ret);

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_UngrabKeyTopmost(void * window, int daliKey)
{
  Dali::Window *_win = (Dali::Window *)window;
  bool ret;

  LOG("CSharp_Dali_UngrabKeyTopmost() [DP1] window=%d, dalikey=%d", window, daliKey);

  {
    try {
      ret = Dali::KeyGrab::UngrabKeyTopmost(*_win, (Dali::KEY)daliKey);
    } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return false;
    };
    } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return false;
    };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }

  LOG("CSharp_Dali_UngrabKeyTopmost() [DP2] ret=%d", ret);

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_GrabKey(void * window, int daliKey, int grabMode)
{
  Dali::Window *_win = (Dali::Window *)window;
  bool ret;

  LOG("CSharp_Dali_GrabKey() [DP1] window=%d, dalikey=%d, grabmode=%d", window, daliKey, grabMode);

  {
    try {
      ret = Dali::KeyGrab::GrabKey(*_win, (Dali::KEY)daliKey, (Dali::KeyGrab::KeyGrabMode)grabMode);
    } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return false;
    };
    } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return false;
    };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }

  DALI_LOG_ERROR("CSharp_Dali_GrabKey() [DP2] ret=%d", ret);

  return ret;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_UngrabKey(void * window, int daliKey)
{
  Dali::Window *_win = (Dali::Window *)window;
  bool ret;

  LOG("CSharp_Dali_UngrabKey() [DP1] window=%d, dalikey=%d", window, daliKey);

  {
    try {
      ret = Dali::KeyGrab::UngrabKey(*_win, (Dali::KEY)daliKey);
    } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return false;
    };
    } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return false;
    };
    } catch (Dali::DaliException e) { SWIG_CSharpException(SWIG_UnknownError, e.condition); return 0; } catch (...) { SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; }  }

  LOG("CSharp_Dali_UngrabKey() [DP2] ret=%d", ret);

  return ret;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_GetNativeWindowHandler( void* window )
{
  Dali::Window *_win = (Dali::Window *)window;
  void * ret = NULL;

  LOG("CSharp_Dali_GetNativeWindowHandler() [DP1] window=%d", window);

  {
    Dali::Any result;
    try {
      result = _win->GetNativeHandle();

      Ecore_Wl_Window * ecore_win = Dali::AnyCast<Ecore_Wl_Window*>(result);
      ret = (void*)ecore_win;

    } catch (std::out_of_range& e) {
    {
      SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return NULL;
    };
    } catch (std::exception& e) {
    {
      SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return NULL;
    };
    } catch (...) {
    {
      SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return NULL;
    };
    }
  }

  if(ret != NULL)
  {
    LOG("CSharp_Dali_GetNativeWindowHandler() [DP2] ret=%d", ret);
  }

  return ret;
}


#ifdef __cplusplus
}
#endif

