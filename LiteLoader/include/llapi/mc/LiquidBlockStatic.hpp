// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LiquidBlock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LiquidBlockStatic : public LiquidBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCKSTATIC
public:
    class LiquidBlockStatic& operator=(class LiquidBlockStatic const &) = delete;
    LiquidBlockStatic(class LiquidBlockStatic const &) = delete;
    LiquidBlockStatic() = delete;
#endif

public:
    /*0*/ virtual ~LiquidBlockStatic();
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
    /*52*/ virtual void __unk_vfn_52();
    /*67*/ virtual void __unk_vfn_67();
    /*73*/ virtual void __unk_vfn_73();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIQUIDBLOCKSTATIC
#endif

//private:
    MCAPI void _setDynamic(class BlockSource &, class BlockPos const &) const;

private:

};