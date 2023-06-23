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

// INTERNAL INCLUDES
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
    } CALL_CATCH_EXCEPTION(false);
  }
  return true;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_NUI_InternalAPIVersionCheck(int * version, int * reserved1, int * reserved2 )
{
  try
  {
    if(Dali::CORE_MAJOR_VERSION == 1 && Dali::CORE_MINOR_VERSION == 2)
    {
      //by dali_1.2.85, nui_api_internal_version is set as 400
      if(Dali::CORE_MICRO_VERSION <= 85)
      {
        *version = 400;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      //from dali_1.2.86, nui_api_internal_version is set as 401
      else if(Dali::CORE_MICRO_VERSION == 86)
      {
        *version = 401;
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
    else if(Dali::CORE_MAJOR_VERSION == 1 && Dali::CORE_MINOR_VERSION == 3)
    {
      if(Dali::CORE_MICRO_VERSION <= 22)
      {
        //by dali_1.3.22, nui_api_internal_version is set as 500
        *version = 500;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      else if(Dali::CORE_MICRO_VERSION <= 27)
      {
        //from dali_1.3.23 to dali 1.3.27, nui_api_internal_version is set as 501
        *version = 501;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      else if(Dali::CORE_MICRO_VERSION <= 33)
      {
        //from dali_1.3.28, nui_api_internal_version is set as 502
        *version = 502;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      else if(Dali::CORE_MICRO_VERSION <= 40)
      {
        //from dali_1.3.34, nui_api_internal_version is set as 503
        *version = 503;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      else if(Dali::CORE_MICRO_VERSION <= 47)
      {
        //from dali_1.3.41, nui_api_internal_version is set as 504
        *version = 504;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
      else if(Dali::CORE_MICRO_VERSION <= 99)
      {
        //from dali_1.3.48, nui_api_internal_version is set as 505
        *version = 505;
        *reserved1 = 0;
        *reserved2 = 0;
        return true;
      }
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
  CALL_CATCH_EXCEPTION(false);
  return false;
}

#ifdef __cplusplus
}
#endif

