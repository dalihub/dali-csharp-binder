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

#ifdef __cplusplus
extern "C" {
#endif
  EXPORT btPointCollector* btPointCollector_new();
  EXPORT btScalar btPointCollector_getDistance(btPointCollector* obj);
  EXPORT bool btPointCollector_getHasResult(btPointCollector* obj);
  EXPORT void btPointCollector_getNormalOnBInWorld(btPointCollector* obj, btVector3* value);
  EXPORT void btPointCollector_getPointInWorld(btPointCollector* obj, btVector3* value);
  EXPORT void btPointCollector_setDistance(btPointCollector* obj, btScalar value);
  EXPORT void btPointCollector_setHasResult(btPointCollector* obj, bool value);
  EXPORT void btPointCollector_setNormalOnBInWorld(btPointCollector* obj, const btVector3* value);
  EXPORT void btPointCollector_setPointInWorld(btPointCollector* obj, const btVector3* value);
#ifdef __cplusplus
}
#endif
