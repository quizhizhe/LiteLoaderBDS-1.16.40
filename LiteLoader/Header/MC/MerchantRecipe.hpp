// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MerchantRecipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MERCHANTRECIPE
public:
    class MerchantRecipe& operator=(class MerchantRecipe const &) = delete;
    MerchantRecipe() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MERCHANTRECIPE
#endif
    MCAPI MerchantRecipe(class MerchantRecipe const &);
    MCAPI void calculateDemandPrices(int, int);
    MCAPI std::unique_ptr<class CompoundTag> createTag(bool) const;
    MCAPI bool isSame(class MerchantRecipe const &) const;
    MCAPI void load(class CompoundTag const *);
    MCAPI ~MerchantRecipe();

};