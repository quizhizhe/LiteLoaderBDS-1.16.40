// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ExplodeDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLODEDEFINITION
public:
    class ExplodeDefinition& operator=(class ExplodeDefinition const &) = delete;
    ExplodeDefinition(class ExplodeDefinition const &) = delete;
    ExplodeDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXPLODEDEFINITION
#endif
    MCAPI void deserializeData(class Json::Value &);
    MCAPI void initialize(class EntityContext &, class ExplodeComponent &) const;
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExplodeDefinition>> &);

};