// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BedrockItems {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKITEMS
public:
    class BedrockItems& operator=(class BedrockItems const &) = delete;
    BedrockItems(class BedrockItems const &) = delete;
    BedrockItems() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCKITEMS
#endif
    MCAPI static class WeakPtr<class Item> mAir;
    MCAPI static void registerItems();

};