// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockBlobFeature : public Feature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKBLOBFEATURE
public:
    class BlockBlobFeature& operator=(class BlockBlobFeature const &) = delete;
    BlockBlobFeature(class BlockBlobFeature const &) = delete;
    BlockBlobFeature() = delete;
#endif

public:
    /*0*/ virtual ~BlockBlobFeature();
    /*1*/ virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKBLOBFEATURE
#endif

};