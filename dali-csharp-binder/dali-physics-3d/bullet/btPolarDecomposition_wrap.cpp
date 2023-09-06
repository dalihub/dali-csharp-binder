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

#include <LinearMath/btPolarDecomposition.h>

#include "conversion.h"
#include "btPolarDecomposition_wrap.h"

btPolarDecomposition* btPolarDecomposition_new(btScalar tolerance, unsigned int maxIterations)
{
  return new btPolarDecomposition(tolerance, maxIterations);
}

unsigned int btPolarDecomposition_decompose(btPolarDecomposition* obj, const btMatrix3x3* a,
  btMatrix3x3* u, btMatrix3x3* h)
{
  BTMATRIX3X3_IN(a);
  BTMATRIX3X3_DEF(u);
  BTMATRIX3X3_DEF(h);
  unsigned int ret = obj->decompose(BTMATRIX3X3_USE(a), BTMATRIX3X3_USE(u), BTMATRIX3X3_USE(h));
  BTMATRIX3X3_DEF_OUT(u);
  BTMATRIX3X3_DEF_OUT(h);
  return ret;
}

unsigned int btPolarDecomposition_maxIterations(btPolarDecomposition* obj)
{
  return obj->maxIterations();
}

void btPolarDecomposition_delete(btPolarDecomposition* obj)
{
  delete obj;
}
