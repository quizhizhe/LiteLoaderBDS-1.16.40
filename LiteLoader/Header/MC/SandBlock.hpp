// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SandBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SANDBLOCK
public:
    class SandBlock& operator=(class SandBlock const &) = delete;
    SandBlock(class SandBlock const &) = delete;
    SandBlock() = delete;
#endif

public:
    /*0*/ virtual ~SandBlock();
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
    /*75*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*76*/ virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /*77*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*95*/ virtual void __unk_vfn_95();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*127*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*128*/ virtual bool isAuxValueRelevantForPicking() const;
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
    /*159*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*164*/ virtual class Color getDustColor(class Block const &) const;
    /*165*/ virtual std::string getDustParticleName(class Block const &) const;
    /*166*/ virtual void __unk_vfn_166();
    /*167*/ virtual void __unk_vfn_167();
    /*168*/ virtual bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    /*169*/ virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SANDBLOCK
    MCVAPI bool canBeOriginalSurface() const;
#endif

};