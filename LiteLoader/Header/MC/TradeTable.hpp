// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct TradeTable {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADETABLE
public:
    struct TradeTable& operator=(struct TradeTable const &) = delete;
    TradeTable(struct TradeTable const &) = delete;
    TradeTable() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRADETABLE
#endif
    MCAPI int getTradeTierFromExp(unsigned int);

};