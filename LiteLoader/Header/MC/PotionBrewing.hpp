// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PotionBrewing {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POTIONBREWING
public:
    class PotionBrewing& operator=(class PotionBrewing const &) = delete;
    PotionBrewing(class PotionBrewing const &) = delete;
    PotionBrewing() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_POTIONBREWING
#endif
    MCAPI static void addPotionMix(class ItemDescriptor const &, class PotionBrewing::Ingredient const &, class ItemDescriptor const &);
    MCAPI static bool hasMix(class ItemInstance const &, class ItemDescriptor const &);
    MCAPI static void initPotionBrewing();
    MCAPI static bool isIngredient(class ItemDescriptor const &);
    MCAPI static class ItemInstance mix(class ItemDescriptor const &, class ItemInstance const &);

//private:
    MCAPI static class ItemInstance getChemistryMix(class ItemDescriptor const &, class ItemDescriptor const &);

private:
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemInstance>> mChemistryMixes;
    MCAPI static std::vector<class PotionBrewing::Mix<class Item const &>> mContainerMixes;
    MCAPI static std::vector<class PotionBrewing::Mix<class ItemDescriptor>> mPotionMixes;
    MCAPI static std::vector<class PotionBrewing::Ingredient> mValidContainers;
    MCAPI static class std::unordered_set<class PotionBrewing::Ingredient, struct std::hash<class PotionBrewing::Ingredient>, struct std::equal_to<class PotionBrewing::Ingredient>, class std::allocator<class PotionBrewing::Ingredient>> mValidIngredients;
    MCAPI static class std::unordered_set<class PotionBrewing::Ingredient, struct std::hash<class PotionBrewing::Ingredient>, struct std::equal_to<class PotionBrewing::Ingredient>, class std::allocator<class PotionBrewing::Ingredient>> mValidRecipeInputs;

};