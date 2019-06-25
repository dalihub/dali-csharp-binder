
#ifndef CSHARP_TEXT_LABEL
#define CSHARP_TEXT_LABEL
#endif

#include "common.h"
#include <dali-toolkit/public-api/controls/text-controls/text-label.h>
#include <dali-toolkit/devel-api/controls/text-controls/text-label-devel.h>

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

#ifdef __cplusplus
}
#endif

