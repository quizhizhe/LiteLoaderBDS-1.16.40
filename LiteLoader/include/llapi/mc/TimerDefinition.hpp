// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TimerDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMERDEFINITION
public:
    class TimerDefinition& operator=(class TimerDefinition const &) = delete;
    TimerDefinition(class TimerDefinition const &) = delete;
    TimerDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TIMERDEFINITION
#endif
    MCAPI void addWeightedChoiceEntry(struct WeightChoiceEntry const &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class TimerDefinition>> &);

};