/*
 * Copyright (c) 2026 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

// EXTERNAL INCLUDES
#include <algorithm>

// INTERNAL INCLUDES
#include <dali-csharp-binder/dali-toolkit-demo/item-factory.h>

SWIGINTERN std::vector<unsigned int>* new_std_vector_Sl_unsigned_SS_int_Sg___SWIG_2(int capacity)
{
  std::vector<unsigned int>* pv = 0;
  if(capacity >= 0)
  {
    pv = new std::vector<unsigned int>();
    pv->reserve(capacity);
  }
  else
  {
    throw std::out_of_range("capacity");
  }
  return pv;
}

SWIGINTERN unsigned int std_vector_Sl_unsigned_SS_int_Sg__getitemcopy(std::vector<unsigned int>* self, int index)
{
  if(index >= 0 && index < (int)self->size())
    return (*self)[index];
  else
    throw std::out_of_range("index");
}

SWIGINTERN unsigned int const& std_vector_Sl_unsigned_SS_int_Sg__getitem(std::vector<unsigned int>* self, int index)
{
  if(index >= 0 && index < (int)self->size())
    return (*self)[index];
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__setitem(std::vector<unsigned int>* self, int index, unsigned int const& val)
{
  if(index >= 0 && index < (int)self->size())
    (*self)[index] = val;
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__Insert(std::vector<unsigned int>* self, int index, unsigned int const& x)
{
  if(index >= 0 && index < (int)self->size() + 1)
    self->insert(self->begin() + index, x);
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__RemoveAt(std::vector<unsigned int>* self, int index)
{
  if(index >= 0 && index < (int)self->size())
    self->erase(self->begin() + index);
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__AddRange(std::vector<unsigned int>* self, std::vector<unsigned int> const& values)
{
  self->insert(self->end(), values.begin(), values.end());
}

SWIGINTERN std::vector<unsigned int>* std_vector_Sl_unsigned_SS_int_Sg__GetRange(std::vector<unsigned int>* self, int index, int count)
{
  if(index < 0)
    throw std::out_of_range("index");
  if(count < 0)
    throw std::out_of_range("count");
  if(index >= (int)self->size() + 1 || index + count > (int)self->size())
    throw std::invalid_argument("invalid range");
  return new std::vector<unsigned int>(self->begin() + index, self->begin() + index + count);
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__InsertRange(std::vector<unsigned int>* self, int index, std::vector<unsigned int> const& values)
{
  if(index >= 0 && index < (int)self->size() + 1)
    self->insert(self->begin() + index, values.begin(), values.end());
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__RemoveRange(std::vector<unsigned int>* self, int index, int count)
{
  if(index < 0)
    throw std::out_of_range("index");
  if(count < 0)
    throw std::out_of_range("count");
  if(index >= (int)self->size() + 1 || index + count > (int)self->size())
    throw std::invalid_argument("invalid range");
  self->erase(self->begin() + index, self->begin() + index + count);
}

SWIGINTERN std::vector<unsigned int>* std_vector_Sl_unsigned_SS_int_Sg__Repeat(unsigned int const& value, int count)
{
  if(count < 0)
    throw std::out_of_range("count");
  return new std::vector<unsigned int>(count, value);
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__Reverse__SWIG_0(std::vector<unsigned int>* self)
{
  std::reverse(self->begin(), self->end());
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__Reverse__SWIG_1(std::vector<unsigned int>* self, int index, int count)
{
  if(index < 0)
    throw std::out_of_range("index");
  if(count < 0)
    throw std::out_of_range("count");
  if(index >= (int)self->size() + 1 || index + count > (int)self->size())
    throw std::invalid_argument("invalid range");
  std::reverse(self->begin() + index, self->begin() + index + count);
}

SWIGINTERN void std_vector_Sl_unsigned_SS_int_Sg__SetRange(std::vector<unsigned int>* self, int index, std::vector<unsigned int> const& values)
{
  if(index < 0)
    throw std::out_of_range("index");
  if(index + values.size() > self->size())
    throw std::out_of_range("index");
  std::copy(values.begin(), values.end(), self->begin() + index);
}

SWIGINTERN bool std_vector_Sl_unsigned_SS_int_Sg__Contains(std::vector<unsigned int>* self, unsigned int const& value)
{
  return std::find(self->begin(), self->end(), value) != self->end();
}

SWIGINTERN int std_vector_Sl_unsigned_SS_int_Sg__IndexOf(std::vector<unsigned int>* self, unsigned int const& value)
{
  int                                 index = -1;
  std::vector<unsigned int>::iterator it    = std::find(self->begin(), self->end(), value);
  if(it != self->end())
    index = (int)(it - self->begin());
  return index;
}

SWIGINTERN int std_vector_Sl_unsigned_SS_int_Sg__LastIndexOf(std::vector<unsigned int>* self, unsigned int const& value)
{
  int                                         index = -1;
  std::vector<unsigned int>::reverse_iterator rit   = std::find(self->rbegin(), self->rend(), value);
  if(rit != self->rend())
    index = (int)(self->rend() - 1 - rit);
  return index;
}

SWIGINTERN bool std_vector_Sl_unsigned_SS_int_Sg__Remove(std::vector<unsigned int>* self, unsigned int const& value)
{
  std::vector<unsigned int>::iterator it = std::find(self->begin(), self->end(), value);
  if(it != self->end())
  {
    self->erase(it);
    return true;
  }
  return false;
}

SWIGINTERN std::vector<std::pair<unsigned int, Dali::Actor> >* new_std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg___SWIG_2(int capacity)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* pv = 0;
  if(capacity >= 0)
  {
    pv = new std::vector<std::pair<unsigned int, Dali::Actor> >();
    pv->reserve(capacity);
  }
  else
  {
    throw std::out_of_range("capacity");
  }
  return pv;
}

SWIGINTERN std::pair<unsigned int, Dali::Actor> std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__getitemcopy(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index)
{
  if(index >= 0 && index < (int)self->size())
    return (*self)[index];
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__setitem(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index, std::pair<unsigned int, Dali::Actor> const& val)
{
  if(index >= 0 && index < (int)self->size())
    (*self)[index] = val;
  else
    throw std::out_of_range("index");
}

SWIGINTERN std::pair<unsigned int, Dali::Actor> const& std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__getitem(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index)
{
  if(index >= 0 && index < (int)self->size())
    return (*self)[index];
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__Insert(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index, std::pair<unsigned int, Dali::Actor> const& x)
{
  if(index >= 0 && index < (int)self->size() + 1)
    self->insert(self->begin() + index, x);
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__RemoveAt(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index)
{
  if(index >= 0 && index < (int)self->size())
    self->erase(self->begin() + index);
  else
    throw std::out_of_range("index");
}

SWIGINTERN std::vector<std::pair<unsigned int, Dali::Actor> >* std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__Repeat(std::pair<unsigned int, Dali::Actor> const& value, int count)
{
  if(count < 0)
    throw std::out_of_range("count");
  return new std::vector<std::pair<unsigned int, Dali::Actor> >(count, value);
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__Reverse__SWIG_0(std::vector<std::pair<unsigned int, Dali::Actor> >* self)
{
  std::reverse(self->begin(), self->end());
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__Reverse__SWIG_1(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index, int count)
{
  if(index < 0)
    throw std::out_of_range("index");
  if(count < 0)
    throw std::out_of_range("count");
  if(index >= (int)self->size() + 1 || index + count > (int)self->size())
    throw std::invalid_argument("invalid range");
  std::reverse(self->begin() + index, self->begin() + index + count);
}

SWIGINTERN std::vector<std::pair<unsigned int, Dali::Actor> >* std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__GetRange(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index, int count)
{
  if(index < 0)
    throw std::out_of_range("index");
  if(count < 0)
    throw std::out_of_range("count");
  if(index >= (int)self->size() + 1 || index + count > (int)self->size())
    throw std::invalid_argument("invalid range");
  return new std::vector<std::pair<unsigned int, Dali::Actor> >(self->begin() + index, self->begin() + index + count);
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__AddRange(std::vector<std::pair<unsigned int, Dali::Actor> >* self, std::vector<std::pair<unsigned int, Dali::Actor> > const& values)
{
  self->insert(self->end(), values.begin(), values.end());
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__InsertRange(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index, std::vector<std::pair<unsigned int, Dali::Actor> > const& values)
{
  if(index >= 0 && index < (int)self->size() + 1)
    self->insert(self->begin() + index, values.begin(), values.end());
  else
    throw std::out_of_range("index");
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__RemoveRange(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index, int count)
{
  if(index < 0)
    throw std::out_of_range("index");
  if(count < 0)
    throw std::out_of_range("count");
  if(index >= (int)self->size() + 1 || index + count > (int)self->size())
    throw std::invalid_argument("invalid range");
  self->erase(self->begin() + index, self->begin() + index + count);
}

SWIGINTERN void std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__SetRange(std::vector<std::pair<unsigned int, Dali::Actor> >* self, int index, std::vector<std::pair<unsigned int, Dali::Actor> > const& values)
{
  if(index < 0)
    throw std::out_of_range("index");
  if(index + values.size() > self->size())
    throw std::out_of_range("index");
  std::copy(values.begin(), values.end(), self->begin() + index);
}

#ifdef __cplusplus
extern "C" {
#endif

// Item

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Item__SWIG_0()
{
  void*                                 jresult;
  std::pair<unsigned int, Dali::Actor>* result = 0;

  {
    try
    {
      result = (std::pair<unsigned int, Dali::Actor>*)new std::pair<unsigned int, Dali::Actor>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Item__SWIG_1(unsigned int jarg1, void* jarg2)
{
  void*                                 jresult;
  unsigned int                          arg1;
  Dali::Actor                           arg2;
  Dali::Actor*                          argp2;
  std::pair<unsigned int, Dali::Actor>* result = 0;

  arg1  = (unsigned int)jarg1;
  argp2 = (Dali::Actor*)jarg2;
  if(!argp2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Attempt to dereference null Dali::Actor", 0);
    return 0;
  }
  arg2 = *argp2;
  {
    try
    {
      result = (std::pair<unsigned int, Dali::Actor>*)new std::pair<unsigned int, Dali::Actor>(arg1, arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_Item__SWIG_2(void* jarg1)
{
  void*                                 jresult;
  std::pair<unsigned int, Dali::Actor>* arg1   = 0;
  std::pair<unsigned int, Dali::Actor>* result = 0;

  arg1 = (std::pair<unsigned int, Dali::Actor>*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::pair< unsigned int,Dali::Actor > const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (std::pair<unsigned int, Dali::Actor>*)new std::pair<unsigned int, Dali::Actor>((std::pair<unsigned int, Dali::Actor> const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Item_first_set(void* jarg1, unsigned int jarg2)
{
  std::pair<unsigned int, Dali::Actor>* arg1 = (std::pair<unsigned int, Dali::Actor>*)0;
  unsigned int                          arg2;

  arg1 = (std::pair<unsigned int, Dali::Actor>*)jarg1;
  arg2 = (unsigned int)jarg2;
  if(arg1) (arg1)->first = arg2;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_Item_first_get(void* jarg1)
{
  unsigned int                          jresult;
  std::pair<unsigned int, Dali::Actor>* arg1 = (std::pair<unsigned int, Dali::Actor>*)0;
  unsigned int                          result;

  arg1    = (std::pair<unsigned int, Dali::Actor>*)jarg1;
  result  = (unsigned int)((arg1)->first);
  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_Item_second_set(void* jarg1, void* jarg2)
{
  std::pair<unsigned int, Dali::Actor>* arg1 = (std::pair<unsigned int, Dali::Actor>*)0;
  Dali::Actor*                          arg2 = (Dali::Actor*)0;

  arg1 = (std::pair<unsigned int, Dali::Actor>*)jarg1;
  arg2 = (Dali::Actor*)jarg2;
  if(arg1) (arg1)->second = *arg2;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_Item_second_get(void* jarg1)
{
  void*                                 jresult;
  std::pair<unsigned int, Dali::Actor>* arg1   = (std::pair<unsigned int, Dali::Actor>*)0;
  Dali::Actor*                          result = 0;

  arg1    = (std::pair<unsigned int, Dali::Actor>*)jarg1;
  result  = (Dali::Actor*)&((arg1)->second);
  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_Item(void* jarg1)
{
  std::pair<unsigned int, Dali::Actor>* arg1 = (std::pair<unsigned int, Dali::Actor>*)0;

  arg1 = (std::pair<unsigned int, Dali::Actor>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

// Item containter

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_Clear(void* jarg1)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  {
    try
    {
      (arg1)->clear();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_Add(void* jarg1, void* jarg2)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  std::pair<unsigned int, Dali::Actor>*               arg2 = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (std::pair<unsigned int, Dali::Actor>*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::pair< unsigned int,Dali::Actor > const & type is null", 0);
    return;
  }
  {
    try
    {
      (arg1)->push_back((std::pair<unsigned int, Dali::Actor> const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ItemContainer_size(void* jarg1)
{
  unsigned long                                                 jresult;
  std::vector<std::pair<unsigned int, Dali::Actor> >*           arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  std::vector<std::pair<unsigned int, Dali::Actor> >::size_type result;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  {
    try
    {
      result = ((std::vector<std::pair<unsigned int, Dali::Actor> > const*)arg1)->size();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ItemContainer_capacity(void* jarg1)
{
  unsigned long                                                 jresult;
  std::vector<std::pair<unsigned int, Dali::Actor> >*           arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  std::vector<std::pair<unsigned int, Dali::Actor> >::size_type result;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  {
    try
    {
      result = ((std::vector<std::pair<unsigned int, Dali::Actor> > const*)arg1)->capacity();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_reserve(void* jarg1, unsigned long jarg2)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >*           arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  std::vector<std::pair<unsigned int, Dali::Actor> >::size_type arg2;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (std::vector<std::pair<unsigned int, Dali::Actor> >::size_type)jarg2;
  {
    try
    {
      (arg1)->reserve(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ItemContainer__SWIG_0()
{
  void*                                               jresult;
  std::vector<std::pair<unsigned int, Dali::Actor> >* result = 0;

  {
    try
    {
      result = (std::vector<std::pair<unsigned int, Dali::Actor> >*)new std::vector<std::pair<unsigned int, Dali::Actor> >();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ItemContainer__SWIG_1(void* jarg1)
{
  void*                                               jresult;
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1   = 0;
  std::vector<std::pair<unsigned int, Dali::Actor> >* result = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< std::pair< unsigned int,Dali::Actor > > const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (std::vector<std::pair<unsigned int, Dali::Actor> >*)new std::vector<std::pair<unsigned int, Dali::Actor> >((std::vector<std::pair<unsigned int, Dali::Actor> > const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ItemContainer__SWIG_2(int jarg1)
{
  void*                                               jresult;
  int                                                 arg1;
  std::vector<std::pair<unsigned int, Dali::Actor> >* result = 0;

  arg1 = (int)jarg1;
  {
    try
    {
      try
      {
        result = (std::vector<std::pair<unsigned int, Dali::Actor> >*)new_std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg___SWIG_2(arg1);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ItemContainer_getitemcopy(void* jarg1, int jarg2)
{
  void*                                               jresult;
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  std::pair<unsigned int, Dali::Actor>                result;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      try
      {
        result = std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__getitemcopy(arg1, arg2);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = new std::pair<unsigned int, Dali::Actor>((const std::pair<unsigned int, Dali::Actor>&)result);
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ItemContainer_getitem(void* jarg1, int jarg2)
{
  void*                                               jresult;
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  std::pair<unsigned int, Dali::Actor>*               result = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      try
      {
        result = (std::pair<unsigned int, Dali::Actor>*)&std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__getitem(arg1, arg2);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_setitem(void* jarg1, int jarg2, void* jarg3)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  std::pair<unsigned int, Dali::Actor>*               arg3 = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (std::pair<unsigned int, Dali::Actor>*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::pair< unsigned int,Dali::Actor > const & type is null", 0);
    return;
  }
  {
    try
    {
      try
      {
        std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__setitem(arg1, arg2, (std::pair<unsigned int, Dali::Actor> const&)*arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_AddRange(void* jarg1, void* jarg2)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg2 = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< std::pair< unsigned int,Dali::Actor > > const & type is null", 0);
    return;
  }
  {
    try
    {
      std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__AddRange(arg1, (std::vector<std::pair<unsigned int, Dali::Actor> > const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ItemContainer_GetRange(void* jarg1, int jarg2, int jarg3)
{
  void*                                               jresult;
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  int                                                 arg3;
  std::vector<std::pair<unsigned int, Dali::Actor> >* result = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  {
    try
    {
      try
      {
        result = (std::vector<std::pair<unsigned int, Dali::Actor> >*)std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__GetRange(arg1, arg2, arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
      catch(std::invalid_argument& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentException, (&_e)->what(), "");
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_Insert(void* jarg1, int jarg2, void* jarg3)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  std::pair<unsigned int, Dali::Actor>*               arg3 = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (std::pair<unsigned int, Dali::Actor>*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::pair< unsigned int,Dali::Actor > const & type is null", 0);
    return;
  }
  {
    try
    {
      try
      {
        std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__Insert(arg1, arg2, (std::pair<unsigned int, Dali::Actor> const&)*arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_InsertRange(void* jarg1, int jarg2, void* jarg3)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg3 = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< std::pair< unsigned int,Dali::Actor > > const & type is null", 0);
    return;
  }
  {
    try
    {
      try
      {
        std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__InsertRange(arg1, arg2, (std::vector<std::pair<unsigned int, Dali::Actor> > const&)*arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_RemoveAt(void* jarg1, int jarg2)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      try
      {
        std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__RemoveAt(arg1, arg2);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_RemoveRange(void* jarg1, int jarg2, int jarg3)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  int                                                 arg3;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  {
    try
    {
      try
      {
        std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__RemoveRange(arg1, arg2, arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
      catch(std::invalid_argument& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentException, (&_e)->what(), "");
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ItemContainer_Repeat(void* jarg1, int jarg2)
{
  void*                                               jresult;
  std::pair<unsigned int, Dali::Actor>*               arg1 = 0;
  int                                                 arg2;
  std::vector<std::pair<unsigned int, Dali::Actor> >* result = 0;

  arg1 = (std::pair<unsigned int, Dali::Actor>*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::pair< unsigned int,Dali::Actor > const & type is null", 0);
    return 0;
  }
  arg2 = (int)jarg2;
  {
    try
    {
      try
      {
        result = (std::vector<std::pair<unsigned int, Dali::Actor> >*)std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__Repeat((std::pair<unsigned int, Dali::Actor> const&)*arg1, arg2);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_Reverse__SWIG_0(void* jarg1)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  {
    try
    {
      std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__Reverse__SWIG_0(arg1);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_Reverse__SWIG_1(void* jarg1, int jarg2, int jarg3)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  int                                                 arg3;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  {
    try
    {
      try
      {
        std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__Reverse__SWIG_1(arg1, arg2, arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
      catch(std::invalid_argument& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentException, (&_e)->what(), "");
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemContainer_SetRange(void* jarg1, int jarg2, void* jarg3)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;
  int                                                 arg2;
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg3 = 0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< std::pair< unsigned int,Dali::Actor > > const & type is null", 0);
    return;
  }
  {
    try
    {
      try
      {
        std_vector_Sl_std_pair_Sl_unsigned_SS_int_Sc_Dali_Actor_Sg__Sg__SetRange(arg1, arg2, (std::vector<std::pair<unsigned int, Dali::Actor> > const&)*arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemContainer(void* jarg1)
{
  std::vector<std::pair<unsigned int, Dali::Actor> >* arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)0;

  arg1 = (std::vector<std::pair<unsigned int, Dali::Actor> >*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

// Item id container

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_Clear(void* jarg1)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  {
    try
    {
      (arg1)->clear();
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_Add(void* jarg1, unsigned int jarg2)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  unsigned int*              arg2 = 0;
  unsigned int               temp2;

  arg1  = (std::vector<unsigned int>*)jarg1;
  temp2 = (unsigned int)jarg2;
  arg2  = &temp2;
  {
    try
    {
      (arg1)->push_back((unsigned int const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ItemIdContainer_size(void* jarg1)
{
  unsigned long                        jresult;
  std::vector<unsigned int>*           arg1 = (std::vector<unsigned int>*)0;
  std::vector<unsigned int>::size_type result;

  arg1 = (std::vector<unsigned int>*)jarg1;
  {
    try
    {
      result = ((std::vector<unsigned int> const*)arg1)->size();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT unsigned long SWIGSTDCALL CSharp_Dali_ItemIdContainer_capacity(void* jarg1)
{
  unsigned long                        jresult;
  std::vector<unsigned int>*           arg1 = (std::vector<unsigned int>*)0;
  std::vector<unsigned int>::size_type result;

  arg1 = (std::vector<unsigned int>*)jarg1;
  {
    try
    {
      result = ((std::vector<unsigned int> const*)arg1)->capacity();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (unsigned long)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_reserve(void* jarg1, unsigned long jarg2)
{
  std::vector<unsigned int>*           arg1 = (std::vector<unsigned int>*)0;
  std::vector<unsigned int>::size_type arg2;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (std::vector<unsigned int>::size_type)jarg2;
  {
    try
    {
      (arg1)->reserve(arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ItemIdContainer__SWIG_0()
{
  void*                      jresult;
  std::vector<unsigned int>* result = 0;

  {
    try
    {
      result = (std::vector<unsigned int>*)new std::vector<unsigned int>();
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ItemIdContainer__SWIG_1(void* jarg1)
{
  void*                      jresult;
  std::vector<unsigned int>* arg1   = 0;
  std::vector<unsigned int>* result = 0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  if(!arg1)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< unsigned int > const & type is null", 0);
    return 0;
  }
  {
    try
    {
      result = (std::vector<unsigned int>*)new std::vector<unsigned int>((std::vector<unsigned int> const&)*arg1);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_new_ItemIdContainer__SWIG_2(int jarg1)
{
  void*                      jresult;
  int                        arg1;
  std::vector<unsigned int>* result = 0;

  arg1 = (int)jarg1;
  {
    try
    {
      try
      {
        result = (std::vector<unsigned int>*)new_std_vector_Sl_unsigned_SS_int_Sg___SWIG_2(arg1);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemIdContainer_getitemcopy(void* jarg1, int jarg2)
{
  unsigned int               jresult;
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  unsigned int               result;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      try
      {
        result = (unsigned int)std_vector_Sl_unsigned_SS_int_Sg__getitemcopy(arg1, arg2);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT unsigned int SWIGSTDCALL CSharp_Dali_ItemIdContainer_getitem(void* jarg1, int jarg2)
{
  unsigned int               jresult;
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  unsigned int*              result = 0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      try
      {
        result = (unsigned int*)&std_vector_Sl_unsigned_SS_int_Sg__getitem(arg1, arg2);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = *result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_setitem(void* jarg1, int jarg2, unsigned int jarg3)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  unsigned int*              arg3 = 0;
  unsigned int               temp3;

  arg1  = (std::vector<unsigned int>*)jarg1;
  arg2  = (int)jarg2;
  temp3 = (unsigned int)jarg3;
  arg3  = &temp3;
  {
    try
    {
      try
      {
        std_vector_Sl_unsigned_SS_int_Sg__setitem(arg1, arg2, (unsigned int const&)*arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_AddRange(void* jarg1, void* jarg2)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  std::vector<unsigned int>* arg2 = 0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (std::vector<unsigned int>*)jarg2;
  if(!arg2)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< unsigned int > const & type is null", 0);
    return;
  }
  {
    try
    {
      std_vector_Sl_unsigned_SS_int_Sg__AddRange(arg1, (std::vector<unsigned int> const&)*arg2);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ItemIdContainer_GetRange(void* jarg1, int jarg2, int jarg3)
{
  void*                      jresult;
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  int                        arg3;
  std::vector<unsigned int>* result = 0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  {
    try
    {
      try
      {
        result = (std::vector<unsigned int>*)std_vector_Sl_unsigned_SS_int_Sg__GetRange(arg1, arg2, arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
      catch(std::invalid_argument& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentException, (&_e)->what(), "");
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_Insert(void* jarg1, int jarg2, unsigned int jarg3)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  unsigned int*              arg3 = 0;
  unsigned int               temp3;

  arg1  = (std::vector<unsigned int>*)jarg1;
  arg2  = (int)jarg2;
  temp3 = (unsigned int)jarg3;
  arg3  = &temp3;
  {
    try
    {
      try
      {
        std_vector_Sl_unsigned_SS_int_Sg__Insert(arg1, arg2, (unsigned int const&)*arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_InsertRange(void* jarg1, int jarg2, void* jarg3)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  std::vector<unsigned int>* arg3 = 0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (std::vector<unsigned int>*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< unsigned int > const & type is null", 0);
    return;
  }
  {
    try
    {
      try
      {
        std_vector_Sl_unsigned_SS_int_Sg__InsertRange(arg1, arg2, (std::vector<unsigned int> const&)*arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_RemoveAt(void* jarg1, int jarg2)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (int)jarg2;
  {
    try
    {
      try
      {
        std_vector_Sl_unsigned_SS_int_Sg__RemoveAt(arg1, arg2);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_RemoveRange(void* jarg1, int jarg2, int jarg3)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  int                        arg3;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  {
    try
    {
      try
      {
        std_vector_Sl_unsigned_SS_int_Sg__RemoveRange(arg1, arg2, arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
      catch(std::invalid_argument& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentException, (&_e)->what(), "");
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void* SWIGSTDCALL CSharp_Dali_ItemIdContainer_Repeat(unsigned int jarg1, int jarg2)
{
  void*                      jresult;
  unsigned int*              arg1 = 0;
  int                        arg2;
  unsigned int               temp1;
  std::vector<unsigned int>* result = 0;

  temp1 = (unsigned int)jarg1;
  arg1  = &temp1;
  arg2  = (int)jarg2;
  {
    try
    {
      try
      {
        result = (std::vector<unsigned int>*)std_vector_Sl_unsigned_SS_int_Sg__Repeat((unsigned int const&)*arg1, arg2);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return 0;
      }
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = (void*)result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_Reverse__SWIG_0(void* jarg1)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  {
    try
    {
      std_vector_Sl_unsigned_SS_int_Sg__Reverse__SWIG_0(arg1);
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_Reverse__SWIG_1(void* jarg1, int jarg2, int jarg3)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  int                        arg3;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (int)jarg3;
  {
    try
    {
      try
      {
        std_vector_Sl_unsigned_SS_int_Sg__Reverse__SWIG_1(arg1, arg2, arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
      catch(std::invalid_argument& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentException, (&_e)->what(), "");
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_ItemIdContainer_SetRange(void* jarg1, int jarg2, void* jarg3)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  int                        arg2;
  std::vector<unsigned int>* arg3 = 0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  arg2 = (int)jarg2;
  arg3 = (std::vector<unsigned int>*)jarg3;
  if(!arg3)
  {
    SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "std::vector< unsigned int > const & type is null", 0);
    return;
  }
  {
    try
    {
      try
      {
        std_vector_Sl_unsigned_SS_int_Sg__SetRange(arg1, arg2, (std::vector<unsigned int> const&)*arg3);
      }
      catch(std::out_of_range& _e)
      {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentOutOfRangeException, 0, (&_e)->what());
        return;
      }
    }
    CALL_CATCH_EXCEPTION();
  }
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ItemIdContainer_Contains(void* jarg1, unsigned int jarg2)
{
  bool                       jresult;
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  unsigned int*              arg2 = 0;
  unsigned int               temp2;
  bool                       result;

  arg1  = (std::vector<unsigned int>*)jarg1;
  temp2 = (unsigned int)jarg2;
  arg2  = &temp2;
  {
    try
    {
      result = (bool)std_vector_Sl_unsigned_SS_int_Sg__Contains(arg1, (unsigned int const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemIdContainer_IndexOf(void* jarg1, unsigned int jarg2)
{
  int                        jresult;
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  unsigned int*              arg2 = 0;
  unsigned int               temp2;
  int                        result;

  arg1  = (std::vector<unsigned int>*)jarg1;
  temp2 = (unsigned int)jarg2;
  arg2  = &temp2;
  {
    try
    {
      result = (int)std_vector_Sl_unsigned_SS_int_Sg__IndexOf(arg1, (unsigned int const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT int SWIGSTDCALL CSharp_Dali_ItemIdContainer_LastIndexOf(void* jarg1, unsigned int jarg2)
{
  int                        jresult;
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  unsigned int*              arg2 = 0;
  unsigned int               temp2;
  int                        result;

  arg1  = (std::vector<unsigned int>*)jarg1;
  temp2 = (unsigned int)jarg2;
  arg2  = &temp2;
  {
    try
    {
      result = (int)std_vector_Sl_unsigned_SS_int_Sg__LastIndexOf(arg1, (unsigned int const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT bool SWIGSTDCALL CSharp_Dali_ItemIdContainer_Remove(void* jarg1, unsigned int jarg2)
{
  bool                       jresult;
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;
  unsigned int*              arg2 = 0;
  unsigned int               temp2;
  bool                       result;

  arg1  = (std::vector<unsigned int>*)jarg1;
  temp2 = (unsigned int)jarg2;
  arg2  = &temp2;
  {
    try
    {
      result = (bool)std_vector_Sl_unsigned_SS_int_Sg__Remove(arg1, (unsigned int const&)*arg2);
    }
    CALL_CATCH_EXCEPTION(0);
  }

  jresult = result;
  return jresult;
}

SWIGEXPORT void SWIGSTDCALL CSharp_Dali_delete_ItemIdContainer(void* jarg1)
{
  std::vector<unsigned int>* arg1 = (std::vector<unsigned int>*)0;

  arg1 = (std::vector<unsigned int>*)jarg1;
  {
    try
    {
      delete arg1;
    }
    CALL_CATCH_EXCEPTION();
  }
}

#ifdef __cplusplus
}
#endif
