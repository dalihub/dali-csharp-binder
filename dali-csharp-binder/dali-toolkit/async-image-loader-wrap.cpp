/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
#include <dali/devel-api/adaptor-framework/pixel-buffer.h>

#include <dali-toolkit/dali-toolkit.h>
#include <dali-toolkit/devel-api/image-loader/async-image-loader-devel.h>
#include <dali-toolkit/public-api/image-loader/image.h>
#include <dali-toolkit/public-api/image-loader/image-url.h>

#include <functional>
#include <memory>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

extern SWIG_CSharpStringHelperCallback SWIG_csharp_string_callback;

using namespace Dali;
using namespace Dali::Toolkit;

namespace
{

// Since we only support communicate C#-C++ by pointer,
// We should connect new signal here, who use reference, and emit signal to C# by pointer.
// Note : Since Devel::PixelBuffer* didn't works well, (IntrusivePtr<> copy operation not be called) we should make BaseHandle as parameters
typedef void (SWIGSTDCALL* SWIG_PixelBufferLoadedSignal)(uint32_t, uint32_t, Devel::PixelBuffer, Devel::PixelBuffer, Devel::PixelBuffer);

class AsyncImageLoaderCallbackConverter : public Dali::ConnectionTracker
{
public:
  AsyncImageLoaderCallbackConverter() = default;
  ~AsyncImageLoaderCallbackConverter() = default;

public:
  void SetHandler(SWIG_PixelBufferLoadedSignal handler)
  {
    mHandler = handler;
  }
  SWIG_PixelBufferLoadedSignal GetHandler() const
  {
    return mHandler;
  }

public: /// Callbacks from AsyncImageLoader
  void OnPixelBufferLoadedSignal(uint32_t id, std::vector<Devel::PixelBuffer>& pixelBuffers)
  {
    if(mHandler)
    {
      static Devel::PixelBuffer sEmptyPixelBuffer;
      mHandler(id, static_cast<uint32_t>(pixelBuffers.size())
      , 0u < pixelBuffers.size() ? pixelBuffers[0] : sEmptyPixelBuffer
      , 1u < pixelBuffers.size() ? pixelBuffers[1] : sEmptyPixelBuffer
      , 2u < pixelBuffers.size() ? pixelBuffers[2] : sEmptyPixelBuffer);
    }
  }

private:
  SWIG_PixelBufferLoadedSignal mHandler{nullptr};
};

using AsyncImageLoaderCallbackConverterPtr = std::shared_ptr<AsyncImageLoaderCallbackConverter>;

// Register callback converter, and destroy at delete.
std::unordered_map<Dali::Toolkit::AsyncImageLoader const *, AsyncImageLoaderCallbackConverterPtr> swig_asyncImageLoaderCallbackConverterMapper;

inline void CreateCallbackConverter(const Dali::Toolkit::AsyncImageLoader* asyncImageLoader)
{
  if(swig_asyncImageLoaderCallbackConverterMapper.find(asyncImageLoader) == swig_asyncImageLoaderCallbackConverterMapper.end())
  {
    swig_asyncImageLoaderCallbackConverterMapper[asyncImageLoader] = std::make_shared<AsyncImageLoaderCallbackConverter>();
  }
}

inline AsyncImageLoaderCallbackConverterPtr GetCallbackConverter(const Dali::Toolkit::AsyncImageLoader* asyncImageLoader)
{
  return swig_asyncImageLoaderCallbackConverterMapper[asyncImageLoader];
}

inline void DestroyCallbackConverter(const Dali::Toolkit::AsyncImageLoader* asyncImageLoader)
{
  swig_asyncImageLoaderCallbackConverterMapper.erase(asyncImageLoader);
}

}

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_AsyncImageLoader(void * jarg1) {
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  {
    try {
      DestroyCallbackConverter(arg1);
      delete arg1;
    } CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void * SWIGSTDCALL CSharp_Dali_AsyncImageLoader_New() {
  void * jresult ;
  Dali::Toolkit::AsyncImageLoader result;

  {
    try {
      result = Dali::Toolkit::AsyncImageLoader::New();
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = new Dali::Toolkit::AsyncImageLoader((const Dali::Toolkit::AsyncImageLoader &)result);
  CreateCallbackConverter(static_cast<Dali::Toolkit::AsyncImageLoader *>(jresult));
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Load__SWIG_0(void * jarg1, const char * jarg2) {
  unsigned int jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  uint32_t result;

  GUARD_ON_NULL_RET0(jarg1);
  GUARD_ON_NULL_RET0(jarg2);

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  std::string arg2(jarg2);
  {
    try {
      result = (arg1)->Load((std::string const &)arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Load__SWIG_1(void * jarg1, const char * jarg2, void * jarg3) {
  unsigned int jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  Dali::ImageDimensions arg3 ;
  uint32_t result;

  GUARD_ON_NULL_RET0(jarg1);
  GUARD_ON_NULL_RET0(jarg2);
  GUARD_ON_NULL_RET0(jarg3);

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  std::string arg2(jarg2);
  arg3 = *(Dali::ImageDimensions *)jarg3;
  {
    try {
      result = (arg1)->Load((std::string const &)arg2, arg3);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  return jresult;
}


SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Load__SWIG_2(void * jarg1, const char * jarg2, void * jarg3, int jarg4, int jarg5, bool jarg6) {
  unsigned int jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  Dali::ImageDimensions arg3 ;
  Dali::FittingMode::Type arg4 ;
  Dali::SamplingMode::Type arg5 ;
  bool arg6 ;
  uint32_t result;

  GUARD_ON_NULL_RET0(jarg1);
  GUARD_ON_NULL_RET0(jarg2);
  GUARD_ON_NULL_RET0(jarg3);

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  std::string arg2(jarg2);
  arg3 = *(Dali::ImageDimensions *)jarg3;
  arg4 = (Dali::FittingMode::Type)jarg4;
  arg5 = (Dali::SamplingMode::Type)jarg5;
  arg6 = jarg6 ? true : false;
  {
    try {
      result = (arg1)->Load((std::string const &)arg2, arg3, arg4, arg5, arg6);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;

  //argout typemap for const std::string&

  return jresult;
}


SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_AsyncImageLoader_Cancel(void * jarg1, unsigned int jarg2) {
  bool jresult ;
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;
  uint32_t arg2 ;
  bool result;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  arg2 = (uint32_t)jarg2;
  {
    try {
      result = (bool)(arg1)->Cancel(arg2);
    } CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}


SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AsyncImageLoader_CancelAll(void * jarg1) {
  Dali::Toolkit::AsyncImageLoader *arg1 = (Dali::Toolkit::AsyncImageLoader *) 0 ;

  arg1 = (Dali::Toolkit::AsyncImageLoader *)jarg1;
  {
    try {
      (arg1)->CancelAll();
    } CALL_CATCH_EXCEPTION();
  }

}

// AsyncImageLoader Signals
GENERATE_SIGNAL(Dali::Toolkit::AsyncImageLoader*, void(*)(uint32_t, Dali::PixelData), Dali_AsyncImageLoader, ImageLoadedSignal);
// CSharp_Dali_AsyncImageLoader_ImageLoadedSignal_Connect
// CSharp_Dali_AsyncImageLoader_ImageLoadedSignal_Disconnect

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AsyncImageLoader_PixelBufferLoadedSignal_Connect(void* caller, void* handler)
{
  GUARD_ON_NULL_RET(caller);

  try
  {
    Dali::Toolkit::AsyncImageLoader* asyncImageLoader = (Dali::Toolkit::AsyncImageLoader*)caller;
    auto callbackConverter = GetCallbackConverter(asyncImageLoader);
    DALI_ASSERT_ALWAYS(callbackConverter.get() && "Try to connect invalid AsyncImageLoader!");
    callbackConverter->SetHandler((SWIG_PixelBufferLoadedSignal)handler);
    Dali::Toolkit::DevelAsyncImageLoader::PixelBufferLoadedSignal(*asyncImageLoader).Connect(callbackConverter.get(), &AsyncImageLoaderCallbackConverter::OnPixelBufferLoadedSignal);
  }
  CALL_CATCH_EXCEPTION();
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_AsyncImageLoader_PixelBufferLoadedSignal_Disconnect(void* caller, void* handler)
{
  GUARD_ON_NULL_RET(caller);

  try
  {
    Dali::Toolkit::AsyncImageLoader* asyncImageLoader = (Dali::Toolkit::AsyncImageLoader*)caller;
    auto callbackConverter = GetCallbackConverter(asyncImageLoader);
    DALI_ASSERT_ALWAYS(callbackConverter.get() && "Try to disconnect invalid AsyncImageLoader!");
    DALI_ASSERT_ALWAYS(callbackConverter->GetHandler() == (SWIG_PixelBufferLoadedSignal)handler && "Try to disconnect unmatched handler!");
    Dali::Toolkit::DevelAsyncImageLoader::PixelBufferLoadedSignal(*asyncImageLoader).Disconnect(callbackConverter.get(), &AsyncImageLoaderCallbackConverter::OnPixelBufferLoadedSignal);
    callbackConverter->SetHandler((SWIG_PixelBufferLoadedSignal)nullptr);
  }
  CALL_CATCH_EXCEPTION();
}

#ifdef __cplusplus
} // extern "C"
#endif
