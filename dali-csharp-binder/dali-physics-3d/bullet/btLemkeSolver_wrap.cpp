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

// FIXME: weird linker error, unresolved external symbol btLemkeAlgorithm::solve
#if 0
#include <BulletDynamics/MLCPSolvers/btLemkeSolver.h>

#include "btLemkeSolver_wrap.h"

btLemkeSolver* btLemkeSolver_new()
{
  return new btLemkeSolver();
}

int btLemkeSolver_getDebugLevel(btLemkeSolver* obj)
{
  return obj->m_debugLevel;
}

int btLemkeSolver_getMaxLoops(btLemkeSolver* obj)
{
  return obj->m_maxLoops;
}

btScalar btLemkeSolver_getMaxValue(btLemkeSolver* obj)
{
  return obj->m_maxValue;
}

bool btLemkeSolver_getUseLoHighBounds(btLemkeSolver* obj)
{
  return obj->m_useLoHighBounds;
}

void btLemkeSolver_setDebugLevel(btLemkeSolver* obj, int value)
{
  obj->m_debugLevel = value;
}

void btLemkeSolver_setMaxLoops(btLemkeSolver* obj, int value)
{
  obj->m_maxLoops = value;
}

void btLemkeSolver_setMaxValue(btLemkeSolver* obj, btScalar value)
{
  obj->m_maxValue = value;
}

void btLemkeSolver_setUseLoHighBounds(btLemkeSolver* obj, bool value)
{
  obj->m_useLoHighBounds = value;
}
#endif
