// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ElementBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ELEMENTBLOCK
public:
    class ElementBlock& operator=(class ElementBlock const &) = delete;
    ElementBlock(class ElementBlock const &) = delete;
    ElementBlock() = delete;
#endif

public:
    /*0*/ virtual ~ElementBlock();
    /*18*/ virtual void __unk_vfn_18();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual void __unk_vfn_25();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*49*/ virtual void __unk_vfn_49();
    /*52*/ virtual void __unk_vfn_52();
    /*53*/ virtual bool canBeUsedInCommands(bool, class BaseGameVersion const &) const;
    /*67*/ virtual void __unk_vfn_67();
    /*73*/ virtual void __unk_vfn_73();
    /*87*/ virtual void __unk_vfn_87();
    /*95*/ virtual void __unk_vfn_95();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*127*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
    /*162*/ virtual class Block const * tryLegacyUpgrade(unsigned short) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ELEMENTBLOCK
#endif
    MCAPI ElementBlock(std::string const &, int, enum ElementType);
    MCAPI static struct ElementInfo getElementInfo(enum ElementType);
    MCAPI static class RecipeIngredient getIngredientForElement(enum ElementType, int);
    MCAPI static class ItemInstance getItemForElement(enum ElementType, int);
    MCAPI static void initElements();
    MCAPI static bool isElement(class ItemStackBase const &);

//private:

private:
    MCAPI static std::vector<class BlockLegacy const *> mElements;

};