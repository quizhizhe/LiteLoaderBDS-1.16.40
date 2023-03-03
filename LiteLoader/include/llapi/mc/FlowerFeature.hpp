// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FlowerFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERFEATURE
public:
    class FlowerFeature& operator=(class FlowerFeature const &) = delete;
    FlowerFeature(class FlowerFeature const &) = delete;
    FlowerFeature() = delete;
#endif

public:
    /*0*/ virtual ~FlowerFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOWERFEATURE
#endif

//private:
    MCAPI bool _placeMushroom(class BlockSource &, class BlockPos const &, class Block const &, class Random &) const;

private:

};