// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DoublePlantFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DOUBLEPLANTFEATURE
public:
    class DoublePlantFeature& operator=(class DoublePlantFeature const &) = delete;
    DoublePlantFeature(class DoublePlantFeature const &) = delete;
    DoublePlantFeature() = delete;
#endif

public:
    /*0*/ virtual ~DoublePlantFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DOUBLEPLANTFEATURE
#endif
    MCAPI bool place(class BlockSource &, class BlockPos const &, class Random &, enum DoublePlantType) const;

};