// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ShapelessRecipe.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShapelessChemistryRecipe : public ShapelessRecipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAPELESSCHEMISTRYRECIPE
public:
    class ShapelessChemistryRecipe& operator=(class ShapelessChemistryRecipe const &) = delete;
    ShapelessChemistryRecipe(class ShapelessChemistryRecipe const &) = delete;
    ShapelessChemistryRecipe() = delete;
#endif

public:
    /*0*/ virtual ~ShapelessChemistryRecipe();
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*9*/ virtual class mce::UUID const & getId() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHAPELESSCHEMISTRYRECIPE
#endif
    MCAPI ShapelessChemistryRecipe(std::string, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
    MCAPI static class mce::UUID const ID;

};