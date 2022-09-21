// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BonusChestFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BONUSCHESTFEATURE
public:
    class BonusChestFeature& operator=(class BonusChestFeature const &) = delete;
    BonusChestFeature(class BonusChestFeature const &) = delete;
    BonusChestFeature() = delete;
#endif

public:
    /*0*/ virtual ~BonusChestFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BONUSCHESTFEATURE
#endif

//private:
    MCAPI bool _place(class BlockSource &, class BlockPos const &, class Random &) const;

private:

};