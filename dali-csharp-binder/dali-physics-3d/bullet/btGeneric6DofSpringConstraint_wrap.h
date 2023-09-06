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
  EXPORT btGeneric6DofSpringConstraint* btGeneric6DofSpringConstraint_new(btRigidBody* rbA, btRigidBody* rbB, const btTransform* frameInA, const btTransform* frameInB, bool useLinearReferenceFrameA);
  EXPORT btGeneric6DofSpringConstraint* btGeneric6DofSpringConstraint_new2(btRigidBody* rbB, const btTransform* frameInB, bool useLinearReferenceFrameB);
  EXPORT void btGeneric6DofSpringConstraint_enableSpring(btGeneric6DofSpringConstraint* obj, int index, bool onOff);
  EXPORT btScalar btGeneric6DofSpringConstraint_getDamping(btGeneric6DofSpringConstraint* obj, int index);
  EXPORT btScalar btGeneric6DofSpringConstraint_getEquilibriumPoint(btGeneric6DofSpringConstraint* obj, int index);
  EXPORT btScalar btGeneric6DofSpringConstraint_getStiffness(btGeneric6DofSpringConstraint* obj, int index);
  EXPORT bool btGeneric6DofSpringConstraint_isSpringEnabled(btGeneric6DofSpringConstraint* obj, int index);
  EXPORT void btGeneric6DofSpringConstraint_setDamping(btGeneric6DofSpringConstraint* obj, int index, btScalar damping);
  EXPORT void btGeneric6DofSpringConstraint_setEquilibriumPoint(btGeneric6DofSpringConstraint* obj);
  EXPORT void btGeneric6DofSpringConstraint_setEquilibriumPoint2(btGeneric6DofSpringConstraint* obj, int index);
  EXPORT void btGeneric6DofSpringConstraint_setEquilibriumPoint3(btGeneric6DofSpringConstraint* obj, int index, btScalar val);
  EXPORT void btGeneric6DofSpringConstraint_setStiffness(btGeneric6DofSpringConstraint* obj, int index, btScalar stiffness);
#ifdef __cplusplus
}
#endif
