// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class JunglePyramidPiece : public StructurePiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUNGLEPYRAMIDPIECE
public:
    class JunglePyramidPiece& operator=(class JunglePyramidPiece const &) = delete;
    JunglePyramidPiece(class JunglePyramidPiece const &) = delete;
    JunglePyramidPiece() = delete;
#endif

public:
    /*0*/ virtual ~JunglePyramidPiece();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUNGLEPYRAMIDPIECE
#endif

};