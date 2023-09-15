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

#include <BulletDynamics/ConstraintSolver/btConeTwistConstraint.h>

#include "conversion.h"
#include "btConeTwistConstraint_wrap.h"

btConeTwistConstraint* btConeTwistConstraint_new(btRigidBody* rbA, btRigidBody* rbB,
  const btTransform* rbAFrame, const btTransform* rbBFrame)
{
  BTTRANSFORM_IN(rbAFrame);
  BTTRANSFORM_IN(rbBFrame);
  return new btConeTwistConstraint(*rbA, *rbB, BTTRANSFORM_USE(rbAFrame), BTTRANSFORM_USE(rbBFrame));
}

btConeTwistConstraint* btConeTwistConstraint_new2(btRigidBody* rbA, const btTransform* rbAFrame)
{
  BTTRANSFORM_IN(rbAFrame);
  return new btConeTwistConstraint(*rbA, BTTRANSFORM_USE(rbAFrame));
}

void btConeTwistConstraint_calcAngleInfo(btConeTwistConstraint* obj)
{
  obj->calcAngleInfo();
}

void btConeTwistConstraint_calcAngleInfo2(btConeTwistConstraint* obj, const btTransform* transA,
  const btTransform* transB, const btMatrix3x3* invInertiaWorldA, const btMatrix3x3* invInertiaWorldB)
{
  BTTRANSFORM_IN(transA);
  BTTRANSFORM_IN(transB);
  BTMATRIX3X3_IN(invInertiaWorldA);
  BTMATRIX3X3_IN(invInertiaWorldB);
  obj->calcAngleInfo2(BTTRANSFORM_USE(transA), BTTRANSFORM_USE(transB), BTMATRIX3X3_USE(invInertiaWorldA),
    BTMATRIX3X3_USE(invInertiaWorldB));
}

void btConeTwistConstraint_enableMotor(btConeTwistConstraint* obj, bool b)
{
  obj->enableMotor(b);
}

void btConeTwistConstraint_getAFrame(btConeTwistConstraint* obj, btTransform* value)
{
  BTTRANSFORM_COPY(value, &obj->getAFrame());
}

bool btConeTwistConstraint_getAngularOnly(btConeTwistConstraint* obj)
{
  return obj->getAngularOnly();
}

void btConeTwistConstraint_getBFrame(btConeTwistConstraint* obj, btTransform* value)
{
  BTTRANSFORM_COPY(value, &obj->getBFrame());
}

btScalar btConeTwistConstraint_getBiasFactor(btConeTwistConstraint* obj)
{
  return obj->getBiasFactor();
}

btScalar btConeTwistConstraint_getDamping(btConeTwistConstraint* obj)
{
  return obj->getDamping();
}

btScalar btConeTwistConstraint_getFixThresh(btConeTwistConstraint* obj)
{
  return obj->getFixThresh();
}

int btConeTwistConstraint_getFlags(btConeTwistConstraint* obj)
{
  return obj->getFlags();
}

void btConeTwistConstraint_getFrameOffsetA(btConeTwistConstraint* obj, btTransform* value)
{
  BTTRANSFORM_COPY(value, &obj->getFrameOffsetA());
}

void btConeTwistConstraint_getFrameOffsetB(btConeTwistConstraint* obj, btTransform* value)
{
  BTTRANSFORM_COPY(value, &obj->getFrameOffsetB());
}

void btConeTwistConstraint_getInfo1NonVirtual(btConeTwistConstraint* obj, btTypedConstraint_btConstraintInfo1* info)
{
  obj->getInfo1NonVirtual(info);
}

void btConeTwistConstraint_getInfo2NonVirtual(btConeTwistConstraint* obj, btTypedConstraint_btConstraintInfo2* info,
  const btTransform* transA, const btTransform* transB, const btMatrix3x3* invInertiaWorldA,
  const btMatrix3x3* invInertiaWorldB)
{
  BTTRANSFORM_IN(transA);
  BTTRANSFORM_IN(transB);
  BTMATRIX3X3_IN(invInertiaWorldA);
  BTMATRIX3X3_IN(invInertiaWorldB);
  obj->getInfo2NonVirtual(info, BTTRANSFORM_USE(transA), BTTRANSFORM_USE(transB),
    BTMATRIX3X3_USE(invInertiaWorldA), BTMATRIX3X3_USE(invInertiaWorldB));
}

btScalar btConeTwistConstraint_getLimit(btConeTwistConstraint* obj, int limitIndex)
{
  return obj->getLimit(limitIndex);
}

btScalar btConeTwistConstraint_getLimitSoftness(btConeTwistConstraint* obj)
{
  return obj->getLimitSoftness();
}

btScalar btConeTwistConstraint_getMaxMotorImpulse(btConeTwistConstraint* obj)
{
  return obj->getMaxMotorImpulse();
}

void btConeTwistConstraint_getMotorTarget(btConeTwistConstraint* obj, btQuaternion* value)
{
  BTQUATERNION_COPY(value, &obj->getMotorTarget());
}

void btConeTwistConstraint_GetPointForAngle(btConeTwistConstraint* obj, btScalar fAngleInRadians,
  btScalar fLength, btVector3* value)
{
  ATTRIBUTE_ALIGNED16(btVector3) temp = obj->GetPointForAngle(fAngleInRadians, fLength);
  BTVECTOR3_SET(value, temp);
}

btScalar btConeTwistConstraint_getRelaxationFactor(btConeTwistConstraint* obj)
{
  return obj->getRelaxationFactor();
}

int btConeTwistConstraint_getSolveSwingLimit(btConeTwistConstraint* obj)
{
  return obj->getSolveSwingLimit();
}

int btConeTwistConstraint_getSolveTwistLimit(btConeTwistConstraint* obj)
{
  return obj->getSolveTwistLimit();
}

btScalar btConeTwistConstraint_getSwingSpan1(btConeTwistConstraint* obj)
{
  return obj->getSwingSpan1();
}

btScalar btConeTwistConstraint_getSwingSpan2(btConeTwistConstraint* obj)
{
  return obj->getSwingSpan2();
}

btScalar btConeTwistConstraint_getTwistAngle(btConeTwistConstraint* obj)
{
  return obj->getTwistAngle();
}

btScalar btConeTwistConstraint_getTwistLimitSign(btConeTwistConstraint* obj)
{
  return obj->getTwistLimitSign();
}

btScalar btConeTwistConstraint_getTwistSpan(btConeTwistConstraint* obj)
{
  return obj->getTwistSpan();
}

bool btConeTwistConstraint_isMaxMotorImpulseNormalized(btConeTwistConstraint* obj)
{
  return obj->isMaxMotorImpulseNormalized();
}

bool btConeTwistConstraint_isMotorEnabled(btConeTwistConstraint* obj)
{
  return obj->isMotorEnabled();
}

bool btConeTwistConstraint_isPastSwingLimit(btConeTwistConstraint* obj)
{
  return obj->isPastSwingLimit();
}

void btConeTwistConstraint_setAngularOnly(btConeTwistConstraint* obj, bool angularOnly)
{
  obj->setAngularOnly(angularOnly);
}

void btConeTwistConstraint_setDamping(btConeTwistConstraint* obj, btScalar damping)
{
  obj->setDamping(damping);
}

void btConeTwistConstraint_setFixThresh(btConeTwistConstraint* obj, btScalar fixThresh)
{
  obj->setFixThresh(fixThresh);
}

void btConeTwistConstraint_setFrames(btConeTwistConstraint* obj, const btTransform* frameA,
  const btTransform* frameB)
{
  BTTRANSFORM_IN(frameA);
  BTTRANSFORM_IN(frameB);
  obj->setFrames(BTTRANSFORM_USE(frameA), BTTRANSFORM_USE(frameB));
}

void btConeTwistConstraint_setLimit(btConeTwistConstraint* obj, int limitIndex, btScalar limitValue)
{
  obj->setLimit(limitIndex, limitValue);
}

void btConeTwistConstraint_setLimit2(btConeTwistConstraint* obj, btScalar _swingSpan1,
  btScalar _swingSpan2, btScalar _twistSpan, btScalar _softness, btScalar _biasFactor,
  btScalar _relaxationFactor)
{
  obj->setLimit(_swingSpan1, _swingSpan2, _twistSpan, _softness, _biasFactor, _relaxationFactor);
}

void btConeTwistConstraint_setMaxMotorImpulse(btConeTwistConstraint* obj, btScalar maxMotorImpulse)
{
  obj->setMaxMotorImpulse(maxMotorImpulse);
}

void btConeTwistConstraint_setMaxMotorImpulseNormalized(btConeTwistConstraint* obj,
  btScalar maxMotorImpulse)
{
  obj->setMaxMotorImpulseNormalized(maxMotorImpulse);
}

void btConeTwistConstraint_setMotorTarget(btConeTwistConstraint* obj, const btQuaternion* q)
{
  BTQUATERNION_IN(q);
  obj->setMotorTarget(BTQUATERNION_USE(q));
}

void btConeTwistConstraint_setMotorTargetInConstraintSpace(btConeTwistConstraint* obj,
  const btQuaternion* q)
{
  BTQUATERNION_IN(q);
  obj->setMotorTargetInConstraintSpace(BTQUATERNION_USE(q));
}

void btConeTwistConstraint_updateRHS(btConeTwistConstraint* obj, btScalar timeStep)
{
  obj->updateRHS(timeStep);
}
