// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockDefinitionGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITIONGROUP
public:
    class BlockDefinitionGroup& operator=(class BlockDefinitionGroup const &) = delete;
    BlockDefinitionGroup(class BlockDefinitionGroup const &) = delete;
    BlockDefinitionGroup() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKDEFINITIONGROUP
#endif
    MCAPI void buildBlockSchema(class BlockComponentFactory const &);
    MCAPI bool generateBlockResource(class Json::Value const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDefinition>> const &, struct BlockDefinitionGroup::BlockResource &);
    MCAPI void loadResources(class ResourcePackManager &, class BlockComponentFactory const &);
    MCAPI void registerBlocks();
    MCAPI ~BlockDefinitionGroup();

//private:
    MCAPI void _buildBlockComponentsSchema(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct BlockDefinition>, struct BlockDefinition> &, class BlockComponentFactory const &);
    MCAPI void _buildBlockDescriptionSchema(class JsonUtil::JsonSchemaObjectNode<class JsonUtil::JsonParseState<class JsonUtil::EmptyClass, struct BlockDefinition>, struct BlockDefinition> &);
    MCAPI bool _loadBlockDescription(class Json::Value const &, struct BlockDescription &);
    MCAPI void _loadComponents(class Json::Value const &, struct BlockDefinition &, class BlockComponentFactory const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockDefinition>> const &);

private:

};