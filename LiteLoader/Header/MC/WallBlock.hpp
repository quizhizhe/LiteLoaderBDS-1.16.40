// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WallBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WALLBLOCK
public:
    class WallBlock& operator=(class WallBlock const &) = delete;
    WallBlock(class WallBlock const &) = delete;
    WallBlock() = delete;
#endif

public:
    /*0*/ virtual ~WallBlock();
    /*1*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*13*/ virtual bool getLiquidClipVolume(class BlockSource &, class BlockPos const &, class AABB &) const;
    /*18*/ virtual void __unk_vfn_18();
    /*21*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
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
    /*67*/ virtual void __unk_vfn_67();
    /*69*/ virtual void onStructureBlockPlace(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*92*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*127*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*128*/ virtual bool isAuxValueRelevantForPicking() const;
    /*137*/ virtual class AABB const & getVisualShapeInWorld(class Block const &, class BlockSource &, class BlockPos const &, class AABB &, bool) const;
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WALLBLOCK
    MCVAPI bool canBeSilkTouched() const;
    MCVAPI bool isWallBlock() const;
#endif
    MCAPI WallBlock(std::string const &, int, class BlockLegacy const &);
    MCAPI void tryFixWallStates(class BlockSource &, class BlockPos const &, int) const;
    MCAPI static float const POST_HEIGHT;
    MCAPI static class std::array<std::string, 14> const WALL_NAMES;

//private:
    MCAPI enum WallConnectionType _desiredConnectionState(class BlockSource &, class BlockPos const &, unsigned char) const;
    MCAPI bool _isCovered(class BlockSource &, class BlockPos const &, class AABB const &) const;
    MCAPI bool _shouldBePost(class BlockSource &, class BlockPos const &, class Block const &) const;
    MCAPI bool _tryAddToTickingQueue(class BlockSource &, class BlockPos const &) const;

private:

};