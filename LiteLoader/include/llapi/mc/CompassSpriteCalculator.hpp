// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CompassSpriteCalculator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPASSSPRITECALCULATOR
public:
    class CompassSpriteCalculator& operator=(class CompassSpriteCalculator const &) = delete;
    CompassSpriteCalculator(class CompassSpriteCalculator const &) = delete;
    CompassSpriteCalculator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPASSSPRITECALCULATOR
#endif
    MCAPI int updateFromPosition(class BlockSource const *, float, float, float, bool, bool);
    MCAPI int updateFromPosition(class BlockSource const *, class BlockPos const &, float, float, float, bool, bool, bool, bool);

};