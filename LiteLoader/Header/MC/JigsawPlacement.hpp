// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class JigsawPlacement {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWPLACEMENT
public:
    class JigsawPlacement& operator=(class JigsawPlacement const &) = delete;
    JigsawPlacement(class JigsawPlacement const &) = delete;
    JigsawPlacement() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JIGSAWPLACEMENT
#endif
    MCAPI JigsawPlacement(unsigned __int64, unsigned __int64, std::vector<std::unique_ptr<class StructurePiece>> &, class std::function<std::unique_ptr<class PoolElementStructurePiece> (class StructurePoolElement const &, class BlockPos const &, enum Rotation const &, int, struct JigsawJunction &, class BoundingBox const &, class BlockPos const &)>, class Random &, class JigsawStructureRegistry const &, class Dimension &);
    MCAPI void addPieces(class StructurePoolElement const &, class BlockPos const &, enum Rotation const &);
    MCAPI ~JigsawPlacement();

//private:
    MCAPI void _addPiece(class PoolElementStructurePiece const &, class BlockPos const &, enum Rotation const &, class BlockPos const &, unsigned __int64);
    MCAPI bool _tryPlacingPiece(class PoolElementStructurePiece const &, class BoundingBox const &, class JigsawBlockInfo const &, class BlockPos const &, class StructureTemplatePool const *, class BlockPos const &, unsigned __int64);

private:

};