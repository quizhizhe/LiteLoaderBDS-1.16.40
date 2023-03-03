// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StrongholdFeature : public StructureFeature {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDFEATURE
public:
    class StrongholdFeature& operator=(class StrongholdFeature const &) = delete;
    StrongholdFeature(class StrongholdFeature const &) = delete;
    StrongholdFeature() = delete;
#endif

public:
    /*0*/ virtual ~StrongholdFeature();
    /*3*/ virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource &, class BlockPos const &, class BlockPos &);
    /*4*/ virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int);
    /*5*/ virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource &, class Random &, class ChunkPos const &);
    /*7*/ virtual std::vector<class BlockPos> getGuesstimatedFeaturePositions();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRONGHOLDFEATURE
#endif

//protected:
    MCAPI void generatePositions(class Random &, class BiomeSource const &, unsigned int);

//private:
    MCAPI struct StrongholdFeature::StrongholdResult const _generateStronghold(unsigned int, class ChunkPos const &);
    MCAPI bool _getNearestStronghold(unsigned int, class BlockPos const &, class BlockPos &);

protected:

private:

};