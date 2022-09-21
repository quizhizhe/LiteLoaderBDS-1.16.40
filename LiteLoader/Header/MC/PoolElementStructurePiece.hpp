// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PoolElementStructurePiece : public StructurePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POOLELEMENTSTRUCTUREPIECE
public:
    class PoolElementStructurePiece& operator=(class PoolElementStructurePiece const &) = delete;
    PoolElementStructurePiece(class PoolElementStructurePiece const &) = delete;
    PoolElementStructurePiece() = delete;
#endif

public:
    /*0*/ virtual ~PoolElementStructurePiece();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual class PoolElementStructurePiece * asPoolElement();
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /*6*/ virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /*13*/ virtual class Block const * getSupportBlock(class BlockSource &, class BlockPos const &, class Block const &) const = 0;
    /*14*/ virtual class Block const & getBeardStabilizeBlock(class Block const &) const = 0;
    /*15*/ virtual bool _needsPostProcessing(class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POOLELEMENTSTRUCTUREPIECE
#endif
    MCAPI PoolElementStructurePiece(class StructurePoolElement const &, class BlockPos, enum Rotation, int, struct JigsawJunction &, class BoundingBox const &, class BlockPos);

//private:
    MCAPI void _fillWithSupportBlock(class BlockPos const &, class BlockSource &, class BoundingBox const &, class Block const &, class Random &);
    MCAPI void _stabilizeBeard(class BlockPos const &, class BlockSource &, class Block const &);

private:

};