// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetDataFromColorIndexFunction : public LootItemFunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDATAFROMCOLORINDEXFUNCTION
public:
    class SetDataFromColorIndexFunction& operator=(class SetDataFromColorIndexFunction const &) = delete;
    SetDataFromColorIndexFunction(class SetDataFromColorIndexFunction const &) = delete;
    SetDataFromColorIndexFunction() = delete;
#endif

public:
    /*0*/ virtual ~SetDataFromColorIndexFunction();
    /*1*/ virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /*3*/ virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETDATAFROMCOLORINDEXFUNCTION
#endif

};