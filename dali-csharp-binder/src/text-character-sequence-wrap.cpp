/*
 * Copyright (c) 2022 Samsung Electronics Co., Ltd.
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

// EXTERNAL INCLUDES
#include <dali-toolkit/dali-toolkit.h>
#include <dali-toolkit/devel-api/text/character-sequence.h>
#include <dali/dali.h>

// INTERNAL INCLUDES
#include "common.h"

/* Callback for returning strings to C# without leaking memory */
typedef char *(SWIGSTDCALL *SWIG_CSharpStringHelperCallback)(const char *);
extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

#ifdef __cplusplus
extern "C" {
#endif

using namespace Dali::Toolkit::Text;

SWIGEXPORT void SWIGSTDCALL
CSharp_Dali_delete_CharacterSequence(void *refCharacterSequence) {
  CharacterSequence *characterSequencePtr = (CharacterSequence *)0;
  characterSequencePtr = (CharacterSequence *)refCharacterSequence;

  {
    try {
      delete characterSequencePtr;
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void *SWIGSTDCALL
CSharp_Dali_CharacterSequence_GetCharacters(void *refCharacterSequence) {

  CharacterSequence *characterSequencePtr;
  void *result = nullptr;

  characterSequencePtr = (CharacterSequence *)refCharacterSequence;
  if (!characterSequencePtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null CharacterSequence", 0);
    return 0;
  }

  {
    try {
      result = new Dali::Vector<uint32_t>(
          (const Dali::Vector<uint32_t> &)(characterSequencePtr
                                               ->GetCharacters()));
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT unsigned int SWIGSTDCALL
CSharp_Dali_CharacterSequence_GetNumberOfCharacters(
    void *refCharacterSequence) {

  CharacterSequence *characterSequencePtr;
  unsigned int result = 0;

  characterSequencePtr = (CharacterSequence *)refCharacterSequence;
  if (!characterSequencePtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null CharacterSequence", 0);
    return 0;
  }

  {
    try {
      result = characterSequencePtr->GetNumberOfCharacters();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  return result;
}

SWIGEXPORT char *SWIGSTDCALL
CSharp_Dali_CharacterSequence_ToString(void *refCharacterSequence) {

  CharacterSequence *characterSequencePtr;
  std::string result;

  characterSequencePtr = (CharacterSequence *)refCharacterSequence;
  if (!characterSequencePtr) {
    SWIG_CSharpSetPendingExceptionArgument(
        SWIG_CSharpArgumentNullException,
        "Attempt to dereference null CharacterSequence", 0);
    return 0;
  }

  {
    try {
      result = characterSequencePtr->ToString();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  char *csResult = SWIG_csharp_string_callback(result.c_str());
  return csResult;
}

#ifdef __cplusplus
}
#endif