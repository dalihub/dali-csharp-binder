#ifndef CSHARP_ITEM_FACTORY_H
#define CSHARP_ITEM_FACTORY_H

/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd.
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
#include <dali-toolkit/public-api/controls/scrollable/item-view/item-factory.h>

// INTERNAL INCLUDES
#include <dali-csharp-binder/common/common.h>

class SwigDirector_ItemFactory : public Dali::Toolkit::ItemFactory, public Swig::Director {
public:
  SwigDirector_ItemFactory() {
    swig_init_callbacks();
  }

  virtual ~SwigDirector_ItemFactory() {
  }

  virtual unsigned int GetNumberOfItems() {
    unsigned int c_result = SwigValueInit< unsigned int >() ;
    unsigned int jresult = 0 ;

    if (!swig_callbackGetNumberOfItems) {
      throw Swig::DirectorPureVirtualException("Dali::Toolkit::ItemFactory::GetNumberOfItems");
    } else {
      jresult = (unsigned int) swig_callbackGetNumberOfItems();
      c_result = (unsigned int)jresult;
    }
    return c_result;
  }

  virtual Dali::Actor NewItem(unsigned int itemId) {
    Dali::Actor c_result ;
    void * jresult = 0 ;
    unsigned int jitemId;

    if (!swig_callbackNewItem) {
      throw Swig::DirectorPureVirtualException("Dali::Toolkit::ItemFactory::NewItem");
    } else {
      jitemId = itemId;
      jresult = (void *) swig_callbackNewItem(jitemId);
      if (!jresult) {
        SWIG_CSharpSetPendingExceptionArgument(SWIG_CSharpArgumentNullException, "Unexpected null return for type Dali::Actor", 0);
        return c_result;
      }
      c_result = *(Dali::Actor *)jresult;
    }
    return c_result;
  }

  virtual void ItemReleased(unsigned int itemId, Dali::Actor actor) {
    if(!swig_callbackItemReleased)
    {
      Dali::Toolkit::ItemFactory::ItemReleased(itemId, actor);
      return;
    }
    else
    {
      swig_callbackItemReleased(itemId, (void*)(&actor));
    }
  }

  virtual Dali::Toolkit::ItemFactory::Extension *GetExtension() {
    return Dali::Toolkit::ItemFactory::GetExtension();
  }

  typedef unsigned int (SWIGSTDCALL* SWIG_Callback0_t)();
  typedef void * (SWIGSTDCALL* SWIG_Callback1_t)(unsigned int);
  typedef void (SWIGSTDCALL* SWIG_Callback2_t)(unsigned int, void *);

  void swig_connect_director(SWIG_Callback0_t callbackGetNumberOfItems, SWIG_Callback1_t callbackNewItem, SWIG_Callback2_t callbackItemReleased) {
    swig_callbackGetNumberOfItems = callbackGetNumberOfItems;
    swig_callbackNewItem = callbackNewItem;
    swig_callbackItemReleased = callbackItemReleased;
  }

private:
  SWIG_Callback0_t swig_callbackGetNumberOfItems;
  SWIG_Callback1_t swig_callbackNewItem;
  SWIG_Callback2_t swig_callbackItemReleased;

  void swig_init_callbacks() {
    swig_callbackGetNumberOfItems = 0;
    swig_callbackNewItem = 0;
    swig_callbackItemReleased = 0;
  }
};

#endif // CSHARP_ITEM_FACTORY_H
