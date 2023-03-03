// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BuoyancyDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUOYANCYDEFINITION
public:
    class BuoyancyDefinition& operator=(class BuoyancyDefinition const &) = delete;
    BuoyancyDefinition(class BuoyancyDefinition const &) = delete;
    BuoyancyDefinition() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUOYANCYDEFINITION
#endif
    MCAPI void initialize(class EntityContext &, class BuoyancyComponent &) const;
    MCAPI static void addLiquidBlock(std::string const &, class std::set<class gsl::not_null<class Block const *>, struct std::less<class gsl::not_null<class Block const *>>, class std::allocator<class gsl::not_null<class Block const *>>> &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BuoyancyDefinition>> &);

//private:
    MCAPI void _addLiquidBlockByName(std::string const &);
    MCAPI class Json::Value _serialize() const;

private:

};