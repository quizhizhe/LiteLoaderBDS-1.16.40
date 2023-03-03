// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MerchantRecipeList {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MERCHANTRECIPELIST
public:
    class MerchantRecipeList& operator=(class MerchantRecipeList const &) = delete;
    MerchantRecipeList(class MerchantRecipeList const &) = delete;
    MerchantRecipeList() = delete;
#endif

public:
    /*0*/ virtual ~MerchantRecipeList();
    /*1*/ virtual class MerchantRecipe * getRecipeFor(class ItemInstance const &, class ItemInstance const &, int);
    /*2*/ virtual void addIfNewOrBetter(class MerchantRecipe *);
    /*3*/ virtual class MerchantRecipe * getMatchingRecipeFor(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /*4*/ virtual class MerchantRecipe * getMatchingRecipeFor(class MerchantRecipe const &);
    /*5*/ virtual void load(class CompoundTag const &);
    /*6*/ virtual std::unique_ptr<class CompoundTag> createTag(bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MERCHANTRECIPELIST
#endif
    MCAPI void assignNetIds();
    MCAPI bool isRequiredItem(class ItemInstance const &, class ItemInstance const &);

};