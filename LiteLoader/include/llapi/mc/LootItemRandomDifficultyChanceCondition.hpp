// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LootItemRandomDifficultyChanceCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMRANDOMDIFFICULTYCHANCECONDITION
public:
    class LootItemRandomDifficultyChanceCondition& operator=(class LootItemRandomDifficultyChanceCondition const &) = delete;
    LootItemRandomDifficultyChanceCondition(class LootItemRandomDifficultyChanceCondition const &) = delete;
    LootItemRandomDifficultyChanceCondition() = delete;
#endif

public:
    /*0*/ virtual ~LootItemRandomDifficultyChanceCondition();
    /*1*/ virtual bool applies(class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMRANDOMDIFFICULTYCHANCECONDITION
#endif
    MCAPI LootItemRandomDifficultyChanceCondition(class Json::Value);

};