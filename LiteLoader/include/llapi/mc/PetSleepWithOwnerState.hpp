// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PetSleepWithOwnerState {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PETSLEEPWITHOWNERSTATE
public:
    class PetSleepWithOwnerState& operator=(class PetSleepWithOwnerState const &) = delete;
    PetSleepWithOwnerState(class PetSleepWithOwnerState const &) = delete;
    PetSleepWithOwnerState() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PETSLEEPWITHOWNERSTATE
    MCVAPI void start();
    MCVAPI void stop();
#endif

//protected:
    MCAPI void dampenSpeed();

protected:

};