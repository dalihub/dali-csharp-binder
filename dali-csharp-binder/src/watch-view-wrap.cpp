/** Copyright (c) 2020 Samsung Electronics Co., Ltd.
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

#include <watch_viewer_dali/public_api/watch_view/watch_view.h>
#include <dali/public-api/adaptor-framework/window.h>

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT Dali::Toolkit::Control * SWIGSTDCALL CSharp_Dali_WatchView_SWIGUpcast(Dali::WatchView::WatchView *jarg1) {
    return (Dali::Toolkit::Control *)jarg1;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchView_New(void * nuiWindow, char * nuiWatchId, char * nuiContentInfo, int nuiWidth, int nuiHeight) {
  void * jresult ;
  Dali::Window* window = (Dali::Window*)nuiWindow ;
  std::string *watchId = 0 ;
  std::string *contentInfo = 0 ;
  int width ;
  int height ;
  Dali::WatchView::WatchView result;

  if (!nuiWatchId) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string watchid_str(nuiWatchId);
  watchId = &watchid_str;

  if (!nuiContentInfo) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "null string", 0);
    return 0;
  }
  std::string contenInfo_str(nuiContentInfo);
  contentInfo = &contenInfo_str;
  width = (int)nuiWidth;
  height = (int)nuiHeight;

  {
    try {
      result = Dali::WatchView::WatchView::New( *window,(std::string const &)*watchId,(std::string const &)*contentInfo,width,height);
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

  jresult = new Dali::WatchView::WatchView((const Dali::WatchView::WatchView &)result);

  //argout typemap for const std::string&


  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchView_DownCast(void * nuiHandle) {
  void * jresult ;
  Dali::BaseHandle arg1 ;
  Dali::BaseHandle *argp1 ;
  Dali::WatchView::WatchView result;

  argp1 = (Dali::BaseHandle *)nuiHandle;
  if (!argp1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::BaseHandle", 0);
    return 0;
  }
  arg1 = *argp1;
  {
    try {
      result = Dali::WatchView::WatchView::DownCast(arg1);
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

  jresult = new Dali::WatchView::WatchView((const Dali::WatchView::WatchView &)result);
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WatchView__SWIG_0() {
  void * jresult ;
  Dali::WatchView::WatchView *result = 0 ;

  {
    try {
      result = (Dali::WatchView::WatchView *)new Dali::WatchView::WatchView();
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

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_WatchView__SWIG_1(void * nuiHandle) {
  void * jresult ;
  Dali::WatchView::WatchView *handle = 0 ;
  Dali::WatchView::WatchView *result = 0 ;

  handle = (Dali::WatchView::WatchView *)nuiHandle;
  if (!handle) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WatchView::WatchView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WatchView::WatchView *)new Dali::WatchView::WatchView((Dali::WatchView::WatchView const &)*handle);
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

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_WatchView_Assign(void * nuiWatchview1, void * nuiWatchview2) {
  void * jresult ;
  Dali::WatchView::WatchView *watchView1 = (Dali::WatchView::WatchView *) 0 ;
  Dali::WatchView::WatchView *watchView2 = 0 ;
  Dali::WatchView::WatchView *result = 0 ;

  watchView1 = (Dali::WatchView::WatchView *)nuiWatchview1;
  watchView2 = (Dali::WatchView::WatchView *)nuiWatchview2;
  if (!watchView2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::WidgetView::WidgetView const & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::WatchView::WatchView *) &(watchView1)->operator =((Dali::WatchView::WatchView const &)*watchView2);
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

  jresult = (void *)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_WatchView(void * nuiWatchview) {
  Dali::WatchView::WatchView *watchView = (Dali::WatchView::WatchView *) 0 ;

  watchView = (Dali::WatchView::WatchView *)nuiWatchview;
  {
    try {
      delete watchView;
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return ;
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return ;
      };
    } catch (Dali::DaliException e) {
      {
        SWIG_CSharpException(SWIG_UnknownError, e.condition); return ;
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return ;
      };
    }
  }

}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WatchView_PauseWatch(void * nuiWatchview) {
  unsigned int jresult ;
  Dali::WatchView::WatchView *watchView = (Dali::WatchView::WatchView *) 0 ;
  bool result;

  watchView = (Dali::WatchView::WatchView *)nuiWatchview;
  {
    try {
      result = (bool)(watchView)->PauseWatch();
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

  jresult = result;
  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_WatchView_ResumeWatch(void * nuiWatchview) {
  unsigned int jresult ;
  Dali::WatchView::WatchView *watchView = (Dali::WatchView::WatchView *) 0 ;
  bool result;

  watchView = (Dali::WatchView::WatchView *)nuiWatchview;
  {
    try {
      result = (bool)(watchView)->ResumeWatch();
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

  jresult = result;
  return jresult;
}

#ifdef __cplusplus
}
#endif

