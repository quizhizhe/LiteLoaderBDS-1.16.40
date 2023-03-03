// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TallGrass : public BushBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TALLGRASS
public:
    class TallGrass& operator=(class TallGrass const &) = delete;
    TallGrass(class TallGrass const &) = delete;
    TallGrass() = delete;
#endif

public:
    /*0*/ virtual ~TallGrass();
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
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
    /*67*/ virtual void __unk_vfn_67();
    /*73*/ virtual void __unk_vfn_73();
    /*75*/ virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum FertilizerType) const;
    /*76*/ virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /*77*/ virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*81*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*95*/ virtual void __unk_vfn_95();
    /*105*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*106*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*125*/ virtual enum BlockRenderLayer getRenderLayer() const;
    /*126*/ virtual enum BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /*127*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*129*/ virtual int getColor(class Block const &) const;
    /*130*/ virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TALLGRASS
    MCVAPI bool canBeSilkTouched() const;
#endif

};