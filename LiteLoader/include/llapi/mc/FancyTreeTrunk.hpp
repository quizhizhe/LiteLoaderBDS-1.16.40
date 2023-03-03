// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FancyTreeTrunk {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FANCYTREETRUNK
public:
    class FancyTreeTrunk& operator=(class FancyTreeTrunk const &) = delete;
    FancyTreeTrunk(class FancyTreeTrunk const &) = delete;
    FancyTreeTrunk() = delete;
#endif

public:
    /*0*/ virtual ~FancyTreeTrunk();
    /*1*/ virtual class std::optional<class BlockPos> placeTrunk(class IBlockPlacementTarget &, class BlockPos const &, class Random &, struct TreeHelper::TreeParams const &, class ITreeCanopy const *) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FANCYTREETRUNK
#endif

//private:
    MCAPI int _checkLine(class IBlockPlacementTarget &, class BlockPos const &, class BlockPos const &, struct TreeHelper::TreeParams const &) const;
    MCAPI void _placeLimb(class IBlockPlacementTarget &, class BlockPos const &, class BlockPos const &) const;

private:

};