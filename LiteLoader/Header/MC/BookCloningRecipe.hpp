// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BookCloningRecipe : public Recipe {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOKCLONINGRECIPE
public:
    class BookCloningRecipe& operator=(class BookCloningRecipe const &) = delete;
    BookCloningRecipe(class BookCloningRecipe const &) = delete;
    BookCloningRecipe() = delete;
#endif

public:
    /*0*/ virtual ~BookCloningRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /*2*/ virtual int getCraftingSize() const;
    /*3*/ virtual class RecipeIngredient const & getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const & getResultItem() const;
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*7*/ virtual int size() const;
    /*8*/ virtual bool isExperimental() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOOKCLONINGRECIPE
#endif
    MCAPI BookCloningRecipe(std::string, class mce::UUID const &);
    MCAPI static class mce::UUID const ID;

};