// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SlimeMoveControl : public MoveControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEMOVECONTROL
public:
    class SlimeMoveControl& operator=(class SlimeMoveControl const &) = delete;
    SlimeMoveControl(class SlimeMoveControl const &) = delete;
    SlimeMoveControl() = delete;
#endif

public:
    /*0*/ virtual ~SlimeMoveControl();
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLIMEMOVECONTROL
#endif

};