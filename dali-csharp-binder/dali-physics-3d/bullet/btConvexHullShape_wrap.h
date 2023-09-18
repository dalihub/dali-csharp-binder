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
  EXPORT btConvexHullShape* btConvexHullShape_new();
  EXPORT btConvexHullShape* btConvexHullShape_new2(const btScalar* points);
  EXPORT btConvexHullShape* btConvexHullShape_new3(const btScalar* points, int numPoints);
  EXPORT btConvexHullShape* btConvexHullShape_new4(const btScalar* points, int numPoints, int stride);
  EXPORT void btConvexHullShape_addPoint(btConvexHullShape* obj, const btVector3* point, bool recalculateLocalAabb);
  EXPORT int btConvexHullShape_getNumPoints(btConvexHullShape* obj);
  EXPORT void btConvexHullShape_getScaledPoint(btConvexHullShape* obj, int i, btVector3* value);
  EXPORT btVector3* btConvexHullShape_getUnscaledPoints(btConvexHullShape* obj);
  EXPORT void btConvexHullShape_optimizeConvexHull(btConvexHullShape* obj);
#ifdef __cplusplus
}
#endif
