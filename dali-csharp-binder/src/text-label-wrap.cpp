#include "common.h"
#include <dali-toolkit/public-api/controls/text-controls/text-label.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-label-devel.h>

SWIGINTERN bool Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Empty(Dali::Signal< void (Dali::Toolkit::TextLabel) > const *self){
  return self->Empty();
}
SWIGINTERN std::size_t Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__GetConnectionCount(Dali::Signal< void (Dali::Toolkit::TextLabel) > const *self){
return self->GetConnectionCount();
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Connect(Dali::Signal< void (Dali::Toolkit::TextLabel) > *self,void (*func)(Dali::Toolkit::TextLabel)){
  self->Connect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Disconnect(Dali::Signal< void (Dali::Toolkit::TextLabel) > *self,void (*func)(Dali::Toolkit::TextLabel)){
  self->Disconnect( func );
}
SWIGINTERN void Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Emit(Dali::Signal< void (Dali::Toolkit::TextLabel) > *self,Dali::Toolkit::TextLabel arg){
  self->Emit( arg );
}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT int SWIGSTDCALL CSharp_TextLabel_Property_TEXT_FIT_get()
{
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::TEXT_FIT;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_TextLabel_Property_FONT_SIZE_SCALE_get()
{
  int jresult;
  int result;

  result = (int)Dali::Toolkit::DevelTextLabel::Property::FONT_SIZE_SCALE;
  jresult = (int)result;
  return jresult;
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_TextLabel_AnchorClickedSignal(void * jarg1) {
  void * jresult ;
  Dali::Toolkit::TextLabel *arg1 = (Dali::Toolkit::TextLabel *) 0 ;
  Dali::Toolkit::DevelTextLabel::AnchorClickedSignalType *result = 0 ;

  arg1 = (Dali::Toolkit::TextLabel *)jarg1;
  {
    try {
      result = (Dali::Toolkit::DevelTextLabel::AnchorClickedSignalType *)&Dali::Toolkit::DevelTextLabel::AnchorClickedSignal(*arg1);
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


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_TextLabelSignal_Empty(void * jarg1) {
  unsigned int jresult ;
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  bool result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  {
    try {
      result = (bool)Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Empty((Dali::Signal< void (Dali::Toolkit::TextLabel) > const *)arg1);
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


SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_TextLabelSignal_GetConnectionCount(void * jarg1) {
  unsigned long jresult ;
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  std::size_t result;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  {
    try {
      result = Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__GetConnectionCount((Dali::Signal< void (Dali::Toolkit::TextLabel) > const *)arg1);
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

  jresult = (unsigned long)result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabelSignal_Connect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextLabel) = (void (*)(Dali::Toolkit::TextLabel)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextLabel))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Connect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabelSignal_Disconnect(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  void (*arg2)(Dali::Toolkit::TextLabel) = (void (*)(Dali::Toolkit::TextLabel)) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  arg2 = (void (*)(Dali::Toolkit::TextLabel))jarg2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Disconnect(arg1,arg2);
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_TextLabelSignal_Emit(void * jarg1, void * jarg2) {
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;
  Dali::Toolkit::TextLabel arg2 ;
  Dali::Toolkit::TextLabel *argp2 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
  argp2 = (Dali::Toolkit::TextLabel *)jarg2;
  if (!argp2) {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Toolkit::TextLabel", 0);
    return ;
  }
  arg2 = *argp2;
  {
    try {
      Dali_Signal_Sl_void_Sp_Dali_Toolkit_TextLabel_SP__Sg__Emit(arg1,arg2);
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


SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_new_TextLabelSignal() {
  void * jresult ;
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *result = 0 ;

  {
    try {
      result = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)new Dali::Signal< void (Dali::Toolkit::TextLabel) >();
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


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_TextLabelSignal(void * jarg1) {
  Dali::Signal< void (Dali::Toolkit::TextLabel) > *arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *) 0 ;

  arg1 = (Dali::Signal< void (Dali::Toolkit::TextLabel) > *)jarg1;
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

#ifdef __cplusplus
}
#endif

