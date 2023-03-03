// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventorySource.hpp"
#include "ItemStack.hpp"
#undef BEFORE_EXTRA

class InventoryAction {

#define AFTER_EXTRA
// Add Member There
public:
    InventorySource source;                    // 0
    uint32_t slot;                             // 12
    ItemStack fromItem;                        // 16
    ItemStack toItem;                          // 264

private:
//    inline void test()
//    {
//        static_assert(offsetof(InventoryAction, slot) == 12);
//        static_assert(offsetof(InventoryAction, fromItem) == 16);
//        static_assert(offsetof(InventoryAction, toItem) == 162);
//    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYACTION
public:
    InventoryAction() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYACTION
#endif
    MCAPI InventoryAction(class InventorySource, unsigned int, class ItemStack const &, class ItemStack const &);
    MCAPI InventoryAction(class InventoryAction const &);
    MCAPI class InventoryAction & operator=(class InventoryAction const &);
    MCAPI ~InventoryAction();

};