// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootItemRandomChanceCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMCHANCECONDITION
public:
    class LootItemRandomChanceCondition& operator=(class LootItemRandomChanceCondition const &) = delete;
    LootItemRandomChanceCondition(class LootItemRandomChanceCondition const &) = delete;
    LootItemRandomChanceCondition() = delete;
#endif

public:
    /*0*/ virtual ~LootItemRandomChanceCondition();
    /*1*/ virtual bool applies(class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMRANDOMCHANCECONDITION
#endif

};