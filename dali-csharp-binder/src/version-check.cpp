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

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_NativeVersionCheck(int * ver1, int * ver2, int * ver3 ) {
  {
    try {
      *ver1 = Dali::CORE_MAJOR_VERSION;
      *ver2 = Dali::CORE_MINOR_VERSION;
      *ver3 = Dali::CORE_MICRO_VERSION;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return false;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return false;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return false;
      };
    }
  }
  return true;
}

/*
dali native and nui versioning : 
  - tizen_4.0 : major version(1), minor version(2), micro version represents dali native release version
  - tizen_5.0 : major version(1), minor version(3), micro version represents dali native release version
  - nui_api_internal_version : only changed when the APIs are changed. for bug fix, this is not changed. (tizenfx version is changed for bug fix)
  - example : No API changed and bug fixed in dali_1.2.86 (dali-csharp-binder-1.2.86+nui401), API changed and whatever for bug fix in dali_1.2.88 (dali-csharp-binder-1.2.88+nui402)
*/
//tizen_4.0
#define CURRENT_MAJOR 1
#define CURRNT_MINOR 2
//by dali_1.2.85, nui_api_internal_version is set as 400
#define NUI_API_INTERNAL_VER_BOUNDARY_1 85
#define NUI_API_INTERNAL_VERSION_1 400
//from dali_1.2.86, nui_api_internal_version is set as 401
#define NUI_API_INTERNAL_BOUNDARY_2 89
#define NUI_API_INTERNAL_VERSION_2 401
//from dali_1.2.90, nui_api_internal_version is set as 402
#define NUI_API_INTERNAL_BOUNDARY_3 90
#define NUI_API_INTERNAL_VERSION_3 402

SWIGEXPORT bool SWIGSTDCALL CSharp_NUI_InternalAPIVersionCheck(int * version, int * reserved1, int * reserved2 )
{
  try
  {
    if(Dali::CORE_MAJOR_VERSION == CURRENT_MAJOR && Dali::CORE_MINOR_VERSION == CURRNT_MINOR)
    {
      if(Dali::CORE_MICRO_VERSION > 0 && Dali::CORE_MICRO_VERSION <= NUI_API_INTERNAL_VER_BOUNDARY_1)
      {
        *version = NUI_API_INTERNAL_VERSION_1;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      else if(Dali::CORE_MICRO_VERSION > NUI_API_INTERNAL_VER_BOUNDARY_1 && Dali::CORE_MICRO_VERSION <= NUI_API_INTERNAL_BOUNDARY_2)
      {
        *version = NUI_API_INTERNAL_VERSION_2;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      else if(Dali::CORE_MICRO_VERSION > NUI_API_INTERNAL_VER_BOUNDARY_1 && Dali::CORE_MICRO_VERSION <= NUI_API_INTERNAL_BOUNDARY_3)
      {
        *version = NUI_API_INTERNAL_VERSION_3;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      //gotten wrong native wrong version
      else
      {
        *version = Dali::CORE_MAJOR_VERSION;
        *reserved1 = Dali::CORE_MINOR_VERSION;
        *reserved2 = Dali::CORE_MICRO_VERSION;
        return false;
      }
    }
    //something wrong
    else
    {
      *version = Dali::CORE_MAJOR_VERSION;
      *reserved1 = Dali::CORE_MINOR_VERSION;
      *reserved2 = Dali::CORE_MICRO_VERSION;
      return false;
    }
  }
  catch (std::out_of_range& e)
  {
    SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what()));
    return false;
  }
  catch (std::exception& e)
  {
    SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what()));
    return false;
   }
  catch (...)
  {
    SWIG_CSharpException(SWIG_UnknownError, "unknown error");
    return false;
  }
  return false;
}

#ifdef __cplusplus
}
#endif

