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
  EXPORT btMultiBodyFixedConstraint* btMultiBodyFixedConstraint_new(btMultiBody* body, int link, btRigidBody* bodyB, const btVector3* pivotInA, const btVector3* pivotInB, const btMatrix3x3* frameInA, const btMatrix3x3* frameInB);
  EXPORT btMultiBodyFixedConstraint* btMultiBodyFixedConstraint_new2(btMultiBody* bodyA, int linkA, btMultiBody* bodyB, int linkB, const btVector3* pivotInA, const btVector3* pivotInB, const btMatrix3x3* frameInA, const btMatrix3x3* frameInB);
  EXPORT void btMultiBodyFixedConstraint_getFrameInA(btMultiBodyFixedConstraint* obj, btMatrix3x3* value);
  EXPORT void btMultiBodyFixedConstraint_getFrameInB(btMultiBodyFixedConstraint* obj, btMatrix3x3* value);
  EXPORT void btMultiBodyFixedConstraint_getPivotInA(btMultiBodyFixedConstraint* obj, btVector3* value);
  EXPORT void btMultiBodyFixedConstraint_getPivotInB(btMultiBodyFixedConstraint* obj, btVector3* value);
  EXPORT void btMultiBodyFixedConstraint_setFrameInA(btMultiBodyFixedConstraint* obj, const btMatrix3x3* frameInA);
  EXPORT void btMultiBodyFixedConstraint_setFrameInB(btMultiBodyFixedConstraint* obj, const btMatrix3x3* frameInB);
  EXPORT void btMultiBodyFixedConstraint_setPivotInA(btMultiBodyFixedConstraint* obj, const btVector3* pivotInA);
  EXPORT void btMultiBodyFixedConstraint_setPivotInB(btMultiBodyFixedConstraint* obj, const btVector3* pivotInB);
#ifdef __cplusplus
}
#endif
