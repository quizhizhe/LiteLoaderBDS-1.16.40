// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AngryDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANGRYDEFINITION
public:
    class AngryDefinition& operator=(class AngryDefinition const &) = delete;
    AngryDefinition(class AngryDefinition const &) = delete;
    AngryDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANGRYDEFINITION
#endif
    MCAPI void addBroadcastTargetByName(std::string const &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class AngryDefinition>> &);

};