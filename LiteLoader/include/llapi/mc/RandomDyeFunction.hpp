// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RandomDyeFunction : public LootItemFunction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMDYEFUNCTION
public:
    class RandomDyeFunction& operator=(class RandomDyeFunction const &) = delete;
    RandomDyeFunction(class RandomDyeFunction const &) = delete;
    RandomDyeFunction() = delete;
#endif

public:
    /*0*/ virtual ~RandomDyeFunction();
    /*1*/ virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /*3*/ virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMDYEFUNCTION
#endif

//private:
    MCAPI void _applyBase(class ItemStackBase &, class Random &) const;
    MCAPI class Color _getRandomArmorColor(class Random &) const;
    MCAPI class Color _getRandomDyeColor(class Random &) const;

private:

};