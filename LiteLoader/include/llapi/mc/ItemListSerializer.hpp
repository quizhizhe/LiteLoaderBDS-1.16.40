// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemListSerializer {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMLISTSERIALIZER
public:
    class ItemListSerializer& operator=(class ItemListSerializer const &) = delete;
    ItemListSerializer(class ItemListSerializer const &) = delete;
    ItemListSerializer() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMLISTSERIALIZER
#endif
    MCAPI static void loadJSONSet(std::string const &, class std::set<class Item const *, struct std::less<class Item const *>, class std::allocator<class Item const *>> &, class Json::Value);

};