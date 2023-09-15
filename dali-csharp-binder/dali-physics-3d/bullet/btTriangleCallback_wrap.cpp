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

#include <BulletCollision/CollisionShapes/btTriangleCallback.h>

#include "conversion.h"
#include "btTriangleCallback_wrap.h"

btInternalTriangleIndexCallbackWrapper::btInternalTriangleIndexCallbackWrapper(p_btInternalTriangleIndexCallback_internalProcessTriangleIndex internalProcessTriangleIndexCallback)
{
  _internalProcessTriangleIndexCallback = internalProcessTriangleIndexCallback;
}

void btInternalTriangleIndexCallbackWrapper::internalProcessTriangleIndex(btVector3* triangle,
  int partId, int triangleIndex)
{
  _internalProcessTriangleIndexCallback(triangle, partId, triangleIndex);
}


btTriangleCallbackWrapper::btTriangleCallbackWrapper(p_btTriangleCallback_processTriangle processTriangleCallback)
{
  _processTriangleCallback = processTriangleCallback;
}

void btTriangleCallbackWrapper::processTriangle(btVector3* triangle, int partId,
  int triangleIndex)
{
  _processTriangleCallback(triangle, partId, triangleIndex);
}


btTriangleCallbackWrapper* btTriangleCallbackWrapper_new(p_btTriangleCallback_processTriangle processTriangleCallback)
{
  return new btTriangleCallbackWrapper(processTriangleCallback);
}

void btTriangleCallback_delete(btTriangleCallback* obj)
{
  delete obj;
}


btInternalTriangleIndexCallbackWrapper* btInternalTriangleIndexCallbackWrapper_new(
  p_btInternalTriangleIndexCallback_internalProcessTriangleIndex internalProcessTriangleIndexCallback)
{
  return new btInternalTriangleIndexCallbackWrapper(internalProcessTriangleIndexCallback);
}

void btInternalTriangleIndexCallback_delete(btInternalTriangleIndexCallback* obj)
{
  delete obj;
}
