// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DesertWellFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESERTWELLFEATURE
public:
    class DesertWellFeature& operator=(class DesertWellFeature const &) = delete;
    DesertWellFeature(class DesertWellFeature const &) = delete;
    DesertWellFeature() = delete;
#endif

public:
    /*0*/ virtual ~DesertWellFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DESERTWELLFEATURE
#endif

};