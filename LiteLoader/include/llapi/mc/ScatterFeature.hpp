// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScatterFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTERFEATURE
public:
    class ScatterFeature& operator=(class ScatterFeature const &) = delete;
    ScatterFeature(class ScatterFeature const &) = delete;
    ScatterFeature() = delete;
#endif

public:
    /*0*/ virtual ~ScatterFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockPlacementTarget &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCATTERFEATURE
#endif

};