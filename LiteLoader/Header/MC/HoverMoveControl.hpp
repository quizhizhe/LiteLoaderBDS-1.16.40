// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveControl.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HoverMoveControl : public MoveControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOVERMOVECONTROL
public:
    class HoverMoveControl& operator=(class HoverMoveControl const &) = delete;
    HoverMoveControl(class HoverMoveControl const &) = delete;
    HoverMoveControl() = delete;
#endif

public:
    /*0*/ virtual ~HoverMoveControl();
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOVERMOVECONTROL
#endif

};