// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUTILS
public:
    class BlockUtils& operator=(class BlockUtils const &) = delete;
    BlockUtils(class BlockUtils const &) = delete;
    BlockUtils() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKUTILS
#endif
    MCAPI static bool isFullFlowingLiquid(class Block const &);
    MCAPI static bool isLiquidSource(class Block const &);

};