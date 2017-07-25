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

#ifndef CSHARP_TEXT_EDITOR
#define CSHARP_TEXT_EDITOR
#endif

#include "common.h"
#include <dali-toolkit/devel-api/controls/text-controls/text-editor-devel.h>

SWIGINTERN bool Dali_Signal_void_TextEditor_Scroll_Type__Empty(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_void_TextEditor_Scroll_Type__GetConnectionCount(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > const *self){
  return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_void_TextEditor_Scroll_Type__Connect(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *self,void (*func)(Dali::Toolkit::TextEditor,Dali::Toolkit::DevelTextEditor::Scroll::Type)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_void_TextEditor_Scroll_Type__Disconnect(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *self,void (*func)(Dali::Toolkit::TextEditor,Dali::Toolkit::DevelTextEditor::Scroll::Type)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_void_TextEditor_Scroll_Type__Emit(Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *self,Dali::Toolkit::TextEditor arg1,Dali::Toolkit::DevelTextEditor::Scroll::Type arg2){
  self->Emit( arg1, arg2 );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextEditor_ScrollStateChangedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextEditor *arg1 = 0 ;
  Dali::Toolkit::DevelTextEditor::ScrollStateChangedSignalType *result = 0 ;
  
  arg1 = (Dali::Toolkit::TextEditor *)jarg1;
  if (!arg1) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Dali::Toolkit::TextEditor & type is null", 0);
    return 0;
  }
  {
    try {
      result = (Dali::Toolkit::DevelTextEditor::ScrollStateChangedSignalType *) &Dali::Toolkit::DevelTextEditor::ScrollStateChangedSignal(*arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0; 
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0; 
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

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *) 0 ;
  bool result;
  
  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *)jarg1; 
  {
    try {
      result = (bool)Dali_Signal_void_TextEditor_Scroll_Type__Empty((Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0; 
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0; 
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *) 0 ;
  std::size_t result;
  
  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *)jarg1; 
  {
    try {
      result = Dali_Signal_void_TextEditor_Scroll_Type__GetConnectionCount((Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > const *)arg1);
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0; 
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0; 
      };
    } catch (...) {
      {
        SWIG_CSharpException(SWIG_UnknownError, "unknown error"); return 0; 
      };
    }
  }
  jresult = (unsigned long)result; 
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextEditor,Dali::Toolkit::DevelTextEditor::Scroll::Type) = (void (*)(Dali::Toolkit::TextEditor,Dali::Toolkit::DevelTextEditor::Scroll::Type)) 0 ;
  
  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *)jarg1; 
  arg2 = (void (*)(Dali::Toolkit::TextEditor,Dali::Toolkit::DevelTextEditor::Scroll::Type))jarg2; 
  {
    try {
      Dali_Signal_void_TextEditor_Scroll_Type__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextEditor,Dali::Toolkit::DevelTextEditor::Scroll::Type) = (void (*)(Dali::Toolkit::TextEditor,Dali::Toolkit::DevelTextEditor::Scroll::Type)) 0 ;
  
  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *)jarg1; 
  arg2 = (void (*)(Dali::Toolkit::TextEditor,Dali::Toolkit::DevelTextEditor::Scroll::Type))jarg2; 
  {
    try {
      Dali_Signal_void_TextEditor_Scroll_Type__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ScrollStateChangedSignal_Emit(void * jarg1, void * jarg2, int jarg3) {
  Dali::Signal< void ( Dali::Toolkit::TextEditor,  Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor,  Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *) 0 ;
  Dali::Toolkit::TextEditor arg2 ;
  Dali::Toolkit::DevelTextEditor::Scroll::Type arg3;
  Dali::Toolkit::TextEditor *argp2 ;
  
  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *)jarg1; 
  argp2 = (Dali::Toolkit::TextEditor *)jarg2; 
  arg3 = (Dali::Toolkit::DevelTextEditor::Scroll::Type)jarg3;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TextEditor", 0);
    return ;
  }
  arg2 = *argp2; 
  {
    try {
      Dali_Signal_void_TextEditor_Scroll_Type__Emit(arg1,arg2,arg3);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_ScrollStateChangedSignal() {
  void * jresult ;
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *result = 0 ;
  
  {
    try {
      result = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *)new Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) >();
    } catch (std::out_of_range& e) {
      {
        SWIG_CSharpException(SWIG_IndexError, const_cast<char*>(e.what())); return 0; 
      };
    } catch (std::exception& e) {
      {
        SWIG_CSharpException(SWIG_RuntimeError, const_cast<char*>(e.what())); return 0; 
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ScrollStateChangedSignal(void * jarg1) {
  Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *) 0 ;
  
  arg1 = (Dali::Signal< void ( Dali::Toolkit::TextEditor, Dali::Toolkit::DevelTextEditor::Scroll::Type ) > *)jarg1; 
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

#ifdef __cplusplus
}
#endif

