// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetBookContentsFunction : public LootItemFunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBOOKCONTENTSFUNCTION
public:
    class SetBookContentsFunction& operator=(class SetBookContentsFunction const &) = delete;
    SetBookContentsFunction(class SetBookContentsFunction const &) = delete;
    SetBookContentsFunction() = delete;
#endif

public:
    /*0*/ virtual ~SetBookContentsFunction();
    /*1*/ virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /*3*/ virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETBOOKCONTENTSFUNCTION
#endif
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

//private:
    MCAPI void _fillUserData(class CompoundTag &);

private:

};