// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SeagrassFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAGRASSFEATURE
public:
    class SeagrassFeature& operator=(class SeagrassFeature const &) = delete;
    SeagrassFeature(class SeagrassFeature const &) = delete;
    SeagrassFeature() = delete;
#endif

public:
    /*0*/ virtual ~SeagrassFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEAGRASSFEATURE
#endif

//private:
    MCAPI bool _isNotIce(class BlockSource &, class BlockPos const &) const;

private:

};