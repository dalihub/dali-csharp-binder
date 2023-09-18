/*
 * Copyright (c) 2013-2017 Andres Traks
 *
 * This software is provided 'as-is', without any express or implied warranty.
 * In no event will the authors be held liable for any damages arising from the use of this software.
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it freely,
 * subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#include "main.h"

#ifndef BT_TRIANGLE_CALLBACK_H
#define p_btInternalTriangleIndexCallback_internalProcessTriangleIndex void*
#define p_btTriangleCallback_processTriangle void*
#define btInternalTriangleIndexCallbackWrapper void
#define btTriangleCallbackWrapper void
#else
typedef void (*p_btInternalTriangleIndexCallback_internalProcessTriangleIndex)(btVector3* triangle,
  int partId, int triangleIndex);

class btInternalTriangleIndexCallbackWrapper : public btInternalTriangleIndexCallback
{
private:
  p_btInternalTriangleIndexCallback_internalProcessTriangleIndex _internalProcessTriangleIndexCallback;

public:
  btInternalTriangleIndexCallbackWrapper(p_btInternalTriangleIndexCallback_internalProcessTriangleIndex internalProcessTriangleIndexCallback);

  virtual void internalProcessTriangleIndex(btVector3* triangle, int partId, int triangleIndex);
};

typedef void (*p_btTriangleCallback_processTriangle)(btVector3* triangle, int partId,
  int triangleIndex);

class btTriangleCallbackWrapper : public btTriangleCallback
{
private:
  p_btTriangleCallback_processTriangle _processTriangleCallback;

public:
  btTriangleCallbackWrapper(p_btTriangleCallback_processTriangle processTriangleCallback);

  virtual void processTriangle(btVector3* triangle, int partId, int triangleIndex);
};
#endif

#ifdef __cplusplus
extern "C" {
#endif
  EXPORT btTriangleCallbackWrapper* btTriangleCallbackWrapper_new(p_btTriangleCallback_processTriangle processTriangleCallback);

  EXPORT void btTriangleCallback_delete(btTriangleCallback* obj);

  EXPORT btInternalTriangleIndexCallbackWrapper* btInternalTriangleIndexCallbackWrapper_new(
    p_btInternalTriangleIndexCallback_internalProcessTriangleIndex internalProcessTriangleIndexCallback);

  EXPORT void btInternalTriangleIndexCallback_delete(btInternalTriangleIndexCallback* obj);
#ifdef __cplusplus
}
#endif
