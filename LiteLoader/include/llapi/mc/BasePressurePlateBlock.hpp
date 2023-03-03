// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BasePressurePlateBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEPRESSUREPLATEBLOCK
public:
    class BasePressurePlateBlock& operator=(class BasePressurePlateBlock const &) = delete;
    BasePressurePlateBlock(class BasePressurePlateBlock const &) = delete;
    BasePressurePlateBlock() = delete;
#endif

public:
    /*0*/ virtual ~BasePressurePlateBlock();
    /*1*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class BlockSource &, class BlockPos const &, class Actor *) const;
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
    /*51*/ virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /*52*/ virtual void __unk_vfn_52();
    /*56*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*59*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*67*/ virtual void __unk_vfn_67();
    /*70*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*73*/ virtual void __unk_vfn_73();
    /*81*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*101*/ virtual bool isAttachedTo(class BlockSource &, class BlockPos const &, class BlockPos &) const;
    /*104*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*138*/ virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
    /*164*/ virtual int getTickDelay() const;
    /*165*/ virtual int getSignalStrength(class BlockSource &, class BlockPos const &) const = 0;
    /*166*/ virtual int getSignalForData(int) const = 0;
    /*167*/ virtual int getRedstoneSignal(int) const = 0;
    /*168*/ virtual class AABB const getSensitiveAABB(class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEPRESSUREPLATEBLOCK
    MCVAPI bool canSpawnOn() const;
    MCVAPI bool isSignalSource() const;
#endif

//protected:
    MCAPI void checkPressed(class BlockSource &, class BlockPos const &, int, int) const;

protected:

};