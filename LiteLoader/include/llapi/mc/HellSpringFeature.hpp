// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HellSpringFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HELLSPRINGFEATURE
public:
    class HellSpringFeature& operator=(class HellSpringFeature const &) = delete;
    HellSpringFeature(class HellSpringFeature const &) = delete;
    HellSpringFeature() = delete;
#endif

public:
    /*0*/ virtual ~HellSpringFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HELLSPRINGFEATURE
#endif

};