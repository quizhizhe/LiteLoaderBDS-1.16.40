// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class OceanMonumentDoubleXYRoom : public OceanMonumentPiece {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEXYROOM
public:
    class OceanMonumentDoubleXYRoom& operator=(class OceanMonumentDoubleXYRoom const &) = delete;
    OceanMonumentDoubleXYRoom(class OceanMonumentDoubleXYRoom const &) = delete;
    OceanMonumentDoubleXYRoom() = delete;
#endif

public:
    /*0*/ virtual ~OceanMonumentDoubleXYRoom();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*5*/ virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMONUMENTDOUBLEXYROOM
#endif

};