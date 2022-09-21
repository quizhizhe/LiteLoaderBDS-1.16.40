// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CoralFan : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORALFAN
public:
    class CoralFan& operator=(class CoralFan const &) = delete;
    CoralFan(class CoralFan const &) = delete;
    CoralFan() = delete;
#endif

public:
    /*0*/ virtual ~CoralFan();
    /*1*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*8*/ virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /*10*/ virtual class AABB const & getAABB(class BlockSource &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*18*/ virtual void __unk_vfn_18();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual void __unk_vfn_25();
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*28*/ virtual void __unk_vfn_28();
    /*29*/ virtual bool isWaterBlocking() const;
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
    /*44*/ virtual bool isValidAuxValue(int) const;
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual bool canContainLiquid() const;
    /*52*/ virtual void __unk_vfn_52();
    /*59*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*67*/ virtual void __unk_vfn_67();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /*82*/ virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*90*/ virtual int getResourceCount(class Random &, class Block const &, int, bool) const;
    /*91*/ virtual class ItemInstance getResourceItem(class Random &, class Block const &, int) const;
    /*92*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*93*/ virtual void spawnResources(class BlockSource &, class BlockPos const &, class Block const &, std::vector<class Item const *> *, float, int, bool) const;
    /*95*/ virtual void __unk_vfn_95();
    /*105*/ virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*127*/ virtual std::string buildDescriptionId(class Block const &) const;
    /*128*/ virtual bool isAuxValueRelevantForPicking() const;
    /*129*/ virtual int getColor(class Block const &) const;
    /*130*/ virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
    /*159*/ virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /*164*/ virtual void checkAlive(class BlockSource &, class BlockPos const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CORALFAN
    MCVAPI bool canBeSilkTouched() const;
#endif
    MCAPI CoralFan(std::string const &, int);
    MCAPI static std::string const CORAL_FAN_NAMES[];

};