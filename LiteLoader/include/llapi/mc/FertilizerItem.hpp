// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FertilizerItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZERITEM
public:
    class FertilizerItem& operator=(class FertilizerItem const &) = delete;
    FertilizerItem(class FertilizerItem const &) = delete;
    FertilizerItem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FERTILIZERITEM
    MCVAPI bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, float, float, float) const;
    MCVAPI bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    MCVAPI bool isFertilizer(int) const;
#endif

};