// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LookAtDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATDEFINITION
public:
    class LookAtDefinition& operator=(class LookAtDefinition const &) = delete;
    LookAtDefinition(class LookAtDefinition const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOKATDEFINITION
#endif
    MCAPI LookAtDefinition();
    MCAPI void deserializeData(class Json::Value &);
    MCAPI ~LookAtDefinition();
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class LookAtDefinition>> &);

};