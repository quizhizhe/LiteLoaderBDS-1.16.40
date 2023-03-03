// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MegaTreeTrunk {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEGATREETRUNK
public:
    class MegaTreeTrunk& operator=(class MegaTreeTrunk const &) = delete;
    MegaTreeTrunk(class MegaTreeTrunk const &) = delete;
    MegaTreeTrunk() = delete;
#endif

public:
    /*0*/ virtual ~MegaTreeTrunk();
    /*1*/ virtual class std::optional<class BlockPos> placeTrunk(class IBlockPlacementTarget &, class BlockPos const &, class Random &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEGATREETRUNK
#endif

//private:
    MCAPI bool _prepareSpawn(class IBlockPlacementTarget &, class BlockPos const &, int, struct TreeHelper::TreeParams const &) const;

private:

};