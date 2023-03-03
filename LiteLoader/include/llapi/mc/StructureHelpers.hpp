// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class StructureHelpers {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREHELPERS
public:
    class StructureHelpers& operator=(class StructureHelpers const &) = delete;
    StructureHelpers(class StructureHelpers const &) = delete;
    StructureHelpers() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREHELPERS
#endif
    MCAPI static bool createChest(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int, int, int, unsigned char, std::string const &);
    MCAPI static bool createDispenser(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int, int, int, int, std::string const &);
    MCAPI static bool createMinecartChest(class StructurePiece &, class BlockSource &, class BoundingBox const &, class Random &, int, int, int, int, std::string const &);
    MCAPI static void fillColumnDown(class StructurePiece &, class BlockSource &, class Block const &, int, int, int, class BoundingBox const &);
    MCAPI static int getTorchRotation(int, unsigned short);

};