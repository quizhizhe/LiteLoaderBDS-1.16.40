// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MoveToLiquidGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOLIQUIDGOAL
public:
    class MoveToLiquidGoal& operator=(class MoveToLiquidGoal const &) = delete;
    MoveToLiquidGoal(class MoveToLiquidGoal const &) = delete;
    MoveToLiquidGoal() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOLIQUIDGOAL
    MCVAPI void appendDebugInfo(std::string &) const;
    MCVAPI bool canContinueToUse();
    MCVAPI bool canUse();
    MCVAPI bool isValidTarget(class BlockSource &, class BlockPos const &);
#endif

};