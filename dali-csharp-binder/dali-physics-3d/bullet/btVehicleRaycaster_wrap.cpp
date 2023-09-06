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

#include <BulletDynamics/Vehicle/btVehicleRaycaster.h>

#include "conversion.h"
#include "btVehicleRaycaster_wrap.h"

#ifndef BULLETC_DISABLE_IACTION_CLASSES

btVehicleRaycaster_btVehicleRaycasterResult* btVehicleRaycaster_btVehicleRaycasterResult_new()
{
  return new btVehicleRaycaster::btVehicleRaycasterResult();
}

btScalar btVehicleRaycaster_btVehicleRaycasterResult_getDistFraction(btVehicleRaycaster_btVehicleRaycasterResult* obj)
{
  return obj->m_distFraction;
}

void btVehicleRaycaster_btVehicleRaycasterResult_getHitNormalInWorld(btVehicleRaycaster_btVehicleRaycasterResult* obj,
  btVector3* value)
{
  BTVECTOR3_SET(value, obj->m_hitNormalInWorld);
}

void btVehicleRaycaster_btVehicleRaycasterResult_getHitPointInWorld(btVehicleRaycaster_btVehicleRaycasterResult* obj,
  btVector3* value)
{
  BTVECTOR3_SET(value, obj->m_hitPointInWorld);
}

void btVehicleRaycaster_btVehicleRaycasterResult_setDistFraction(btVehicleRaycaster_btVehicleRaycasterResult* obj,
  btScalar value)
{
  obj->m_distFraction = value;
}

void btVehicleRaycaster_btVehicleRaycasterResult_setHitNormalInWorld(btVehicleRaycaster_btVehicleRaycasterResult* obj,
  const btVector3* value)
{
  BTVECTOR3_COPY(&obj->m_hitNormalInWorld, value);
}

void btVehicleRaycaster_btVehicleRaycasterResult_setHitPointInWorld(btVehicleRaycaster_btVehicleRaycasterResult* obj,
  const btVector3* value)
{
  BTVECTOR3_COPY(&obj->m_hitPointInWorld, value);
}

void btVehicleRaycaster_btVehicleRaycasterResult_delete(btVehicleRaycaster_btVehicleRaycasterResult* obj)
{
  delete obj;
}


void* btVehicleRaycaster_castRay(btVehicleRaycaster* obj, const btVector3* from,
  const btVector3* to, btVehicleRaycaster_btVehicleRaycasterResult* result)
{
  BTVECTOR3_IN(from);
  BTVECTOR3_IN(to);
  return obj->castRay(BTVECTOR3_USE(from), BTVECTOR3_USE(to), *result);
}

void btVehicleRaycaster_delete(btVehicleRaycaster* obj)
{
  delete obj;
}

#endif
