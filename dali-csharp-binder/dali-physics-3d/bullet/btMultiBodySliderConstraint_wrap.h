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
  EXPORT btMultiBodySliderConstraint* btMultiBodySliderConstraint_new(btMultiBody* body, int link, btRigidBody* bodyB, const btVector3* pivotInA, const btVector3* pivotInB, const btMatrix3x3* frameInA, const btMatrix3x3* frameInB, const btVector3* jointAxis);
  EXPORT btMultiBodySliderConstraint* btMultiBodySliderConstraint_new2(btMultiBody* bodyA, int linkA, btMultiBody* bodyB, int linkB, const btVector3* pivotInA, const btVector3* pivotInB, const btMatrix3x3* frameInA, const btMatrix3x3* frameInB, const btVector3* jointAxis);
  EXPORT void btMultiBodySliderConstraint_getFrameInA(btMultiBodySliderConstraint* obj, btMatrix3x3* value);
  EXPORT void btMultiBodySliderConstraint_getFrameInB(btMultiBodySliderConstraint* obj, btMatrix3x3* value);
  EXPORT void btMultiBodySliderConstraint_getJointAxis(btMultiBodySliderConstraint* obj, btVector3* value);
  EXPORT void btMultiBodySliderConstraint_getPivotInA(btMultiBodySliderConstraint* obj, btVector3* value);
  EXPORT void btMultiBodySliderConstraint_getPivotInB(btMultiBodySliderConstraint* obj, btVector3* value);
  EXPORT void btMultiBodySliderConstraint_setFrameInA(btMultiBodySliderConstraint* obj, const btMatrix3x3* frameInA);
  EXPORT void btMultiBodySliderConstraint_setFrameInB(btMultiBodySliderConstraint* obj, const btMatrix3x3* frameInB);
  EXPORT void btMultiBodySliderConstraint_setJointAxis(btMultiBodySliderConstraint* obj, const btVector3* jointAxis);
  EXPORT void btMultiBodySliderConstraint_setPivotInA(btMultiBodySliderConstraint* obj, const btVector3* pivotInA);
  EXPORT void btMultiBodySliderConstraint_setPivotInB(btMultiBodySliderConstraint* obj, const btVector3* pivotInB);
#ifdef __cplusplus
}
#endif
