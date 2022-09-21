// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LiquidBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCK
public:
    class LiquidBlock& operator=(class LiquidBlock const &) = delete;
    LiquidBlock(class LiquidBlock const &) = delete;
    LiquidBlock() = delete;
#endif

public:
    /*0*/ virtual ~LiquidBlock();
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
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
    /*67*/ virtual void __unk_vfn_67();
    /*73*/ virtual void __unk_vfn_73();
    /*79*/ virtual bool mayPick(class BlockSource &, class Block const &, bool) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*90*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*95*/ virtual void __unk_vfn_95();
    /*103*/ virtual void handleEntityInside(class BlockSource &, class BlockPos const &, class Actor *, class Vec3 &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*129*/ virtual int getColor(class Block const &) const;
    /*131*/ virtual int getColorAtPos(class BlockSource &, class BlockPos const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*146*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDBLOCK
    MCVAPI bool canBeSilkTouched() const;
#endif

//protected:
    MCAPI void emitFizzParticle(class BlockSource &, class BlockPos const &) const;
    MCAPI int getDepth(class BlockSource &, class BlockPos const &) const;
    MCAPI bool solidify(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    MCAPI void trySpreadFire(class BlockSource &, class BlockPos const &, class Random &) const;

//private:
    MCAPI class Vec3 _getFlow(class BlockSource &, class BlockPos const &) const;

protected:

private:

};