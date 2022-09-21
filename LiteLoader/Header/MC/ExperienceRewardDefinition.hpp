// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ExperienceRewardDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEREWARDDEFINITION
public:
    class ExperienceRewardDefinition& operator=(class ExperienceRewardDefinition const &) = delete;
    ExperienceRewardDefinition(class ExperienceRewardDefinition const &) = delete;
    ExperienceRewardDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXPERIENCEREWARDDEFINITION
#endif
    MCAPI void addBredExpressionNode(class ExpressionNode const &);
    MCAPI void addDeathExpressionNode(class ExpressionNode const &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExperienceRewardDefinition>> &);

};