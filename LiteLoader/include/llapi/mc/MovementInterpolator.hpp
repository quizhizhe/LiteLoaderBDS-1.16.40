// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MovementInterpolator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEMENTINTERPOLATOR
public:
    class MovementInterpolator& operator=(class MovementInterpolator const &) = delete;
    MovementInterpolator(class MovementInterpolator const &) = delete;
    MovementInterpolator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEMENTINTERPOLATOR
#endif
    MCAPI void tick(class Actor &);

};