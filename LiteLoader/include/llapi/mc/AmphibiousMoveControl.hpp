// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AmphibiousMoveControl : public MoveControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMPHIBIOUSMOVECONTROL
public:
    class AmphibiousMoveControl& operator=(class AmphibiousMoveControl const &) = delete;
    AmphibiousMoveControl(class AmphibiousMoveControl const &) = delete;
    AmphibiousMoveControl() = delete;
#endif

public:
    /*0*/ virtual ~AmphibiousMoveControl();
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AMPHIBIOUSMOVECONTROL
#endif

};