// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TurtleEggBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TURTLEEGGBLOCK
public:
    class TurtleEggBlock& operator=(class TurtleEggBlock const &) = delete;
    TurtleEggBlock(class TurtleEggBlock const &) = delete;
    TurtleEggBlock() = delete;
#endif

public:
    /*0*/ virtual ~TurtleEggBlock();
    /*1*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
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
    /*50*/ virtual bool canContainLiquid() const;
    /*52*/ virtual void __unk_vfn_52();
    /*56*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*59*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*64*/ virtual void transformOnFall(class BlockSource &, class BlockPos const &, class Actor *, float) const;
    /*67*/ virtual void __unk_vfn_67();
    /*73*/ virtual void __unk_vfn_73();
    /*80*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &, unsigned char) const;
    /*86*/ virtual bool playerWillDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*90*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*92*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual bool use(class Player &, class BlockPos const &) const;
    /*104*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*127*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*128*/ virtual bool isAuxValueRelevantForPicking() const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
    /*159*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TURTLEEGGBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif

//private:
    MCAPI void _decreaseEggs(class BlockSource &, class BlockPos const &, unsigned int, bool) const;
    MCAPI void _destroyEgg(class BlockSource &, class BlockPos const &, class Actor &, int, bool) const;

private:

};