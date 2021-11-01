/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
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

#include <string.h>
#include "common.h"
#include <dali-toolkit/public-api/controls/model3d-view/model3d-view.h>

#ifdef __cplusplus
extern "C"
{
#endif

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Model3dView_Property_GEOMETRY_URL_get()
  {
    return (int)Dali::Toolkit::Model3dView::Property::GEOMETRY_URL;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Model3dView_Property_MATERIAL_URL_get()
  {
    return (int)Dali::Toolkit::Model3dView::Property::MATERIAL_URL;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Model3dView_Property_IMAGES_URL_get()
  {
    return (int)Dali::Toolkit::Model3dView::Property::IMAGES_URL;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Model3dView_Property_ILLUMINATION_TYPE_get()
  {
    return (int)Dali::Toolkit::Model3dView::Property::ILLUMINATION_TYPE;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Model3dView_Property_TEXTURE0_URL_get()
  {
    return (int)Dali::Toolkit::Model3dView::Property::TEXTURE0_URL;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Model3dView_Property_TEXTURE1_URL_get()
  {
    return (int)Dali::Toolkit::Model3dView::Property::TEXTURE1_URL;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Model3dView_Property_TEXTURE2_URL_get()
  {
    return (int)Dali::Toolkit::Model3dView::Property::TEXTURE2_URL;
  }

  SWIGEXPORT int SWIGSTDCALL CSharp_Dali_Model3dView_Property_LIGHT_POSITION_get()
  {
    return (int)Dali::Toolkit::Model3dView::Property::LIGHT_POSITION;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Model3dView_Property()
  {
    void *jresult;
    Dali::Toolkit::Model3dView::Property *result = 0;

    {
      try
      {
        result = (Dali::Toolkit::Model3dView::Property *)new Dali::Toolkit::Model3dView::Property();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    jresult = (void *)result;
    return jresult;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Model3dView_Property(void *csProperty)
  {
    Dali::Toolkit::Model3dView::Property *property = (Dali::Toolkit::Model3dView::Property *)csProperty;

    {
      try
      {
        delete property;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Model3dView_New_SWIG_0()
  {
    Dali::Toolkit::Model3dView result;

    {
      try
      {
        result = Dali::Toolkit::Model3dView::New();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Toolkit::Model3dView((const Dali::Toolkit::Model3dView &)result);
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Model3dView_New_SWIG_1(char *csModelUrl, char *csMaterialUrl, char *csTextureDirectoryUrl)
  {
    Dali::Toolkit::Model3dView result;

    if (!csModelUrl)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string modelUrl(csModelUrl);

    if (!csMaterialUrl)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string materialUrl(csMaterialUrl);

    if (!csTextureDirectoryUrl)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
      return 0;
    }
    std::string textureDirectoryUrl(csTextureDirectoryUrl);

    {
      try
      {
        result = Dali::Toolkit::Model3dView::New(modelUrl, materialUrl, textureDirectoryUrl);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Toolkit::Model3dView((const Dali::Toolkit::Model3dView &)result);
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Model3dView_SWIG_0()
  {
    Dali::Toolkit::Model3dView *result = 0;

    {
      try
      {
        result = (Dali::Toolkit::Model3dView *)new Dali::Toolkit::Model3dView();
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_new_Model3dView_SWIG_1(void *csModel3dView)
  {
    Dali::Toolkit::Model3dView *model3dView = (Dali::Toolkit::Model3dView *)csModel3dView;
    Dali::Toolkit::Model3dView *result = 0;

    if (!model3dView)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Model3dView const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::Model3dView *)new Dali::Toolkit::Model3dView((Dali::Toolkit::Model3dView const &)*model3dView);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Model3dView(void *csModel3dView)
  {
    Dali::Toolkit::Model3dView *model3dView = (Dali::Toolkit::Model3dView *)csModel3dView;
    {
      try
      {
        delete model3dView;
      }
      CALL_CATCH_EXCEPTION();
    }
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Model3dView_Assign(void *csDestination, void *csSource)
  {
    Dali::Toolkit::Model3dView *destination = (Dali::Toolkit::Model3dView *)csDestination;
    Dali::Toolkit::Model3dView *source = (Dali::Toolkit::Model3dView *)csSource;
    Dali::Toolkit::Model3dView *result = 0;

    if (!source)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::Model3dView const & type is null", 0);
      return 0;
    }
    {
      try
      {
        result = (Dali::Toolkit::Model3dView *)&(destination)->operator=((Dali::Toolkit::Model3dView const &)*source);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return (void *)result;
  }

  SWIGEXPORT void *SWIGSTDCALL CSharp_Dali_Model3dView_DownCast(void *csHandle)
  {
    Dali::BaseHandle *handle = (Dali::BaseHandle *)csHandle;;
    Dali::Toolkit::Model3dView result;

    if (!handle)
    {
      SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
      return 0;
    }
    {
      try
      {
        result = Dali::Toolkit::Model3dView::DownCast(*handle);
      }
      CALL_CATCH_EXCEPTION(0);
    }

    return new Dali::Toolkit::Model3dView((const Dali::Toolkit::Model3dView &)result);
  }

#ifdef __cplusplus
}
#endif
