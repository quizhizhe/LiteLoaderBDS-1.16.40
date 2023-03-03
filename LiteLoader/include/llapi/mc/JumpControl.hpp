// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class JumpControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUMPCONTROL
public:
    class JumpControl& operator=(class JumpControl const &) = delete;
    JumpControl(class JumpControl const &) = delete;
    JumpControl() = delete;
#endif

public:
    /*0*/ virtual ~JumpControl();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void tick(class JumpControlComponent &, class Mob &);
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual float getJumpPower(class JumpControlComponent const &, class Mob const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JUMPCONTROL
    MCVAPI int getJumpDelay(class JumpControlComponent const &, class Mob const &) const;
    MCVAPI enum JumpType getJumpType(class JumpControlComponent const &, class Mob const &) const;
    MCVAPI void initializeInternal(class Mob &, struct JumpControlDescription *);
    MCVAPI void resetSpeedModifier(class JumpControlComponent const &, class Mob &);
    MCVAPI void setJumpType(class JumpControlComponent &, class Mob &, enum JumpType);
#endif

};