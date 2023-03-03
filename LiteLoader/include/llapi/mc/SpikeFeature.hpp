// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SpikeFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPIKEFEATURE
public:
    class SpikeFeature& operator=(class SpikeFeature const &) = delete;
    SpikeFeature(class SpikeFeature const &) = delete;
    SpikeFeature() = delete;
#endif

public:
    /*0*/ virtual ~SpikeFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPIKEFEATURE
#endif
    MCAPI void postProcessMobsAt(class BlockSource &, class BlockPos const &, class Random &) const;

};