// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FitDoubleXYRoom {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FITDOUBLEXYROOM
public:
    class FitDoubleXYRoom& operator=(class FitDoubleXYRoom const &) = delete;
    FitDoubleXYRoom(class FitDoubleXYRoom const &) = delete;
    FitDoubleXYRoom() = delete;
#endif

public:
    /*0*/ virtual ~FitDoubleXYRoom();
    /*1*/ virtual bool fits(class RoomDefinition const &) const;
    /*2*/ virtual std::unique_ptr<class OceanMonumentPiece> create(int &, class std::shared_ptr<class RoomDefinition>, class Random &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FITDOUBLEXYROOM
#endif

};