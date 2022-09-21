// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class OceanMonumentPiece : public StructurePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTPIECE
public:
    class OceanMonumentPiece& operator=(class OceanMonumentPiece const &) = delete;
    OceanMonumentPiece(class OceanMonumentPiece const &) = delete;
    OceanMonumentPiece() = delete;
#endif

public:
    /*0*/ virtual ~OceanMonumentPiece();
    /*6*/ virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /*7*/ virtual int getWorldX(int, int);
    /*8*/ virtual int getWorldZ(int, int);
    /*11*/ virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMONUMENTPIECE
#endif
    MCAPI OceanMonumentPiece(int &, class BoundingBox &);

//protected:
    MCAPI OceanMonumentPiece(int, int &, class std::shared_ptr<class RoomDefinition>, int, int, int);
    MCAPI bool chunkIntersects(class BoundingBox const &, int, int, int, int);
    MCAPI void generateBoxOnFillOnly(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, class Block const &);
    MCAPI void generateDefaultFloor(class BlockSource &, class BoundingBox const &, int, int, bool);
    MCAPI void generateWaterBox(class BlockSource &, class BoundingBox const &, int, int, int, int, int, int, bool);
    MCAPI void spawnElder(class BlockSource &, class BoundingBox const &, int, int, int);

protected:
    MCAPI static int mGridroomLeftWingConnectIndex;
    MCAPI static int mGridroomRightWingConnectIndex;
    MCAPI static int mGridroomSourceIndex;
    MCAPI static int mGridroomTopConnectIndex;
    MCAPI static int const mLeftWingIndex;
    MCAPI static int const mPenthouseIndex;
    MCAPI static int const mRightWingIndex;

};