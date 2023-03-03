// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "PetSleepWithOwnerState.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class IdleState : public PetSleepWithOwnerState {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDLESTATE
public:
    class IdleState& operator=(class IdleState const &) = delete;
    IdleState(class IdleState const &) = delete;
    IdleState() = delete;
#endif

public:
    /*0*/ virtual ~IdleState();
    /*1*/ virtual void tick();
    /*2*/ virtual void start();
    /*3*/ virtual void stop();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDLESTATE
#endif

};