// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SwimWanderDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWANDERDEFINITION
public:
    class SwimWanderDefinition& operator=(class SwimWanderDefinition const &) = delete;
    SwimWanderDefinition(class SwimWanderDefinition const &) = delete;
    SwimWanderDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIMWANDERDEFINITION
#endif
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWanderDefinition>> &);

};