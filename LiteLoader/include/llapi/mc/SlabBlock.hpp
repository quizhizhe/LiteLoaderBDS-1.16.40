// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SlabBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLABBLOCK
public:
    class SlabBlock& operator=(class SlabBlock const &) = delete;
    SlabBlock(class SlabBlock const &) = delete;
    SlabBlock() = delete;
#endif

public:
    /*0*/ virtual ~SlabBlock();
    /*6*/ virtual bool isObstructingChests(class BlockSource &, class BlockPos const &) const;
    /*15*/ virtual bool liquidCanFlowIntoFromDirection(unsigned char, class std::function<class Block const & (class BlockPos const &)> const &, class BlockPos const &) const;
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
    /*37*/ virtual bool isDoubleSlabBlock() const;
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*42*/ virtual void __unk_vfn_42();
    /*43*/ virtual void __unk_vfn_43();
    /*49*/ virtual void __unk_vfn_49();
    /*52*/ virtual void __unk_vfn_52();
    /*56*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*87*/ virtual void __unk_vfn_87();
    /*90*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*92*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*96*/ virtual float getExplosionResistance(class Actor *) const;
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*109*/ virtual void __unk_vfn_109();
    /*112*/ virtual class MobSpawnerData const * getMobToSpawn(class SpawnConditions const &, class BlockSource &) const;
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*128*/ virtual bool isAuxValueRelevantForPicking() const;
    /*138*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SLABBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isSlabBlock() const;
#endif
    MCAPI SlabBlock(std::string const &, int, bool, class Material const &, class WeakPtr<class BlockLegacy>);

};