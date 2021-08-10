#include "control-devel-wrap.h"

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Implementation Signal <void(std::string &)> is used in signals:
 *     AccessibilityGetName
 *     AccessibilityGetDescription
 */

using StringToVoidFunc = void (*)(std::string &);
using StringToVoidSignal = Dali::Signal<void(std::string &)>;

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_Empty(void *arg1) {
  bool result = false;
  GUARD_ON_NULL_RET0(arg1);
  try_catch([&]() {
      auto object = (StringToVoidSignal*)arg1;
      result = object->Empty();
  });
  return result;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_GetConnectionCount(void *arg1) {
  std::size_t result = 0;
  GUARD_ON_NULL_RET0(arg1);
  try_catch([&]() {
      auto object = (StringToVoidSignal*)arg1;
      result = object->GetConnectionCount();
  });
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_Connect(void *arg1, void *arg2) {
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch([&]() {
      auto object = (StringToVoidSignal*)arg1;
      auto func = (StringToVoidFunc)arg2;
      object->Connect(func);
  });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_Disconnect(void *arg1, void *arg2) {
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch([&] () {
      auto object = (StringToVoidSignal*)arg1;
      auto func = (StringToVoidFunc)arg2;
      object->Disconnect(func);
  });
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_new() {
  try_catch([&]() {
      return new StringToVoidSignal();
  });
  return nullptr;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_delete(void *arg1) {
  GUARD_ON_NULL_RET(arg1);
  try_catch([&]() {
      auto object = (StringToVoidSignal*)arg1;
      delete object;
  });
}

SWIGEXPORT char * SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_GetResult(void *arg1) {
  GUARD_ON_NULL_RET0(arg1);
  std::string *data = (std::string*)arg1;
  return SWIG_csharp_string_callback(data->c_str());
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_StringToVoid_SetResult(void *arg1, char *arg2) {
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch([&]() {
      auto result = (std::string*)arg1;
      (*result) = arg2;
  });
}

/*
 * Implementation Signal <void(std::pair<Dali::Accessibility::GestureInfo, bool>&)> is used in signals:
 *     AccessibilityDoGestureSignalType
 */

using GesturePair = std::pair<Dali::Accessibility::GestureInfo, bool>;
using GesturePairFunc = void (*)(GesturePair &);
using GesturePairSignal = Dali::Signal<void(GesturePair&)>;

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_Empty(void *arg1) {
  bool result = false;
  GUARD_ON_NULL_RET0(arg1);
  try_catch([&]() {
      auto object = (GesturePairSignal*)arg1;
      result = object->Empty();
  });
  return result;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_GetConnectionCount(void *arg1) {
  std::size_t result = 0;
  GUARD_ON_NULL_RET0(arg1);
  try_catch([&]() {
      auto object = (GesturePairSignal*)arg1;
      result = object->GetConnectionCount();
  });
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_Connect(void *arg1, void *arg2) {
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch([&]() {
      auto object = (GesturePairSignal*)arg1;
      auto func = (GesturePairFunc)arg2;
      object->Connect( func );
  });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_Disconnect(void *arg1, void *arg2) {
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch([&] () {
      auto object = (GesturePairSignal*)arg1;
      auto func = (GesturePairFunc)arg2;
      object->Disconnect(func);
  });
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_Emit(void *arg1, void *arg2) {
  GUARD_ON_NULL_RET(arg1);
  GUARD_ON_NULL_RET(arg2);
  try_catch([&]() {
      auto object = (GesturePairSignal*)arg1;
      auto gesturePair = (GesturePair*)arg2;
      object->Emit(*gesturePair);
  });
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_new() {
  try_catch([&]() {
      return new GesturePairSignal();
  });
  return nullptr;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_delete(void *arg1) {
  GUARD_ON_NULL_RET(arg1);
  try_catch([&]() {
      auto object = (GesturePairSignal*)arg1;
      delete object;
  });
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_GetSizeOfGestureInfo(void) {
  return sizeof(Dali::Accessibility::GestureInfo);
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_GetResult(void *arg1) {
  bool result = false;
  GUARD_ON_NULL_RET0(arg1);
  try_catch([&]() {
      auto gesturePair = (GesturePair*)arg1;
      result = (bool)gesturePair->second;
  });
  return result;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Signal_GesturePairToVoid_SetResult(void *arg1, bool arg2) {
  bool result = arg2;
  GUARD_ON_NULL_RET(arg1);
  try_catch([&]() {
      auto gesturePair = (GesturePair*)arg1;
      gesturePair->second = result;
  });
}

#ifdef __cplusplus
}
#endif
