// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RoofedTreeCanopy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROOFEDTREECANOPY
public:
    class RoofedTreeCanopy& operator=(class RoofedTreeCanopy const &) = delete;
    RoofedTreeCanopy(class RoofedTreeCanopy const &) = delete;
    RoofedTreeCanopy() = delete;
#endif

public:
    /*0*/ virtual ~RoofedTreeCanopy();
    /*1*/ virtual class std::optional<class BlockPos> placeCanopy(class IBlockPlacementTarget &, class BlockPos const &, class Random &, struct TreeHelper::TreeParams const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ROOFEDTREECANOPY
#endif

};