// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FenceGateBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FENCEGATEBLOCK
public:
    class FenceGateBlock& operator=(class FenceGateBlock const &) = delete;
    FenceGateBlock(class FenceGateBlock const &) = delete;
    FenceGateBlock() = delete;
#endif

public:
    /*0*/ virtual ~FenceGateBlock();
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*13*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*18*/ virtual void __unk_vfn_18();
    /*22*/ virtual bool canConnect(class Block const &, unsigned char, class Block const &) const;
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
    /*59*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*65*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*67*/ virtual void __unk_vfn_67();
    /*70*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*74*/ virtual bool ignoreEntitiesOnPistonMove(class Block const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual bool use(class Player &, class BlockPos const &) const;
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FENCEGATEBLOCK
    MCVAPI bool isFenceGateBlock() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI FenceGateBlock(std::string const &, int, enum WoodType);

//private:
    MCAPI void _checkIsInWall(class BlockSource &, class BlockPos const &) const;
    MCAPI void _onOpenChanged(class BlockSource &, class BlockPos const &) const;

private:

};