// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BodyControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BODYCONTROL
public:
    class BodyControl& operator=(class BodyControl const &) = delete;
    BodyControl(class BodyControl const &) = delete;
    BodyControl() = delete;
#endif

public:
    /*0*/ virtual ~BodyControl();
    /*1*/ virtual void clientTick(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BODYCONTROL
#endif

};