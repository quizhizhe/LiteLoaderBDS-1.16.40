// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LegacySwampFoliageFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSWAMPFOLIAGEFEATURE
public:
    class LegacySwampFoliageFeature& operator=(class LegacySwampFoliageFeature const &) = delete;
    LegacySwampFoliageFeature(class LegacySwampFoliageFeature const &) = delete;
    LegacySwampFoliageFeature() = delete;
#endif

public:
    /*0*/ virtual ~LegacySwampFoliageFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYSWAMPFOLIAGEFEATURE
#endif
    MCAPI LegacySwampFoliageFeature(class FeatureRegistry &);

};