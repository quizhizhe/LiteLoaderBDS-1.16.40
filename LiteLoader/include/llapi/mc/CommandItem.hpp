// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CommandItem {

#define AFTER_EXTRA
    // Add Member There
    int version; //0
    int itemId; //4

public:
    CommandItem(){
        this->version = 0;
        this->itemId = 0;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDITEM
public:
    class CommandItem& operator=(class CommandItem const &) = delete;
    CommandItem(class CommandItem const &) = delete;
    //CommandItem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDITEM
#endif
    MCAPI class std::optional<class ItemInstance> createInstance(int, int, class CommandOutput *, bool) const;

};