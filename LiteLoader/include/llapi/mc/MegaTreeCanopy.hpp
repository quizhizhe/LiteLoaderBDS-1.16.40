// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MegaTreeCanopy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEGATREECANOPY
public:
    class MegaTreeCanopy& operator=(class MegaTreeCanopy const &) = delete;
    MegaTreeCanopy(class MegaTreeCanopy const &) = delete;
    MegaTreeCanopy() = delete;
#endif

public:
    /*0*/ virtual ~MegaTreeCanopy();
    /*1*/ virtual class std::optional<class BlockPos> placeCanopy(class IBlockPlacementTarget &, class BlockPos const &, class Random &, struct TreeHelper::TreeParams const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEGATREECANOPY
#endif

};