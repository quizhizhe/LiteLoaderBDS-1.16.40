// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BlockListSerializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLISTSERIALIZER
public:
    class BlockListSerializer& operator=(class BlockListSerializer const &) = delete;
    BlockListSerializer(class BlockListSerializer const &) = delete;
    BlockListSerializer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKLISTSERIALIZER
#endif
    MCAPI static void loadJSONSet(std::string const &, class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> &, class Json::Value);

};