// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HopMoveControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPMOVECONTROL
public:
    class HopMoveControl& operator=(class HopMoveControl const &) = delete;
    HopMoveControl(class HopMoveControl const &) = delete;
    HopMoveControl() = delete;
#endif

public:
    /*0*/ virtual ~HopMoveControl();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
    /*3*/ virtual void setWantedPosition(class MoveControlComponent &, class Mob &, class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPMOVECONTROL
#endif

};