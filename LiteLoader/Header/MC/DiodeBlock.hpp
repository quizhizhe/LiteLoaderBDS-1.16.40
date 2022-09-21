// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DiodeBlock : public BlockLegacy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIODEBLOCK
public:
    class DiodeBlock& operator=(class DiodeBlock const &) = delete;
    DiodeBlock(class DiodeBlock const &) = delete;
    DiodeBlock() = delete;
#endif

public:
    /*0*/ virtual ~DiodeBlock();
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
    /*48*/ virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /*49*/ virtual void __unk_vfn_49();
    /*52*/ virtual void __unk_vfn_52();
    /*65*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*67*/ virtual void __unk_vfn_67();
    /*73*/ virtual void __unk_vfn_73();
    /*81*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*87*/ virtual void __unk_vfn_87();
    /*88*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*95*/ virtual void __unk_vfn_95();
    /*99*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*106*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*109*/ virtual void __unk_vfn_109();
    /*116*/ virtual void __unk_vfn_116();
    /*118*/ virtual void __unk_vfn_118();
    /*119*/ virtual void __unk_vfn_119();
    /*141*/ virtual int getVariant(class Block const &) const;
    /*142*/ virtual void __unk_vfn_142();
    /*158*/ virtual void __unk_vfn_158();
    /*164*/ virtual int getSignal(class BlockSource &, class BlockPos const &, int) const;
    /*165*/ virtual bool isLocked(class BlockSource &, class BlockPos const &) const;
    /*166*/ virtual bool isSameDiode(class Block const &) const;
    /*167*/ virtual bool shouldPrioritize(class BlockSource &, class BlockPos const &) const;
    /*168*/ virtual bool isOn() const;
    /*169*/ virtual bool shouldTurnOn(class BlockSource &, class BlockPos const &) const;
    /*170*/ virtual int getInputSignal(class BlockSource &, class BlockPos const &) const;
    /*171*/ virtual bool isAlternateInput(class Block const &) const;
    /*172*/ virtual int getAlternateSignal(class BlockSource &, class BlockPos const &) const;
    /*173*/ virtual int getOutputSignal(class Block const &) const;
    /*174*/ virtual int getTurnOffDelay(class Block const &) const;
    /*175*/ virtual int getTurnOnDelay(class Block const &) const = 0;
    /*176*/ virtual class Block const * getOnBlock(class Block const *) const = 0;
    /*177*/ virtual class Block const * getOffBlock(class Block const *) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIODEBLOCK
    MCVAPI bool canSpawnOn() const;
    MCVAPI bool isSignalSource() const;
#endif
    MCAPI static bool isDiode(class Block const &);

//protected:
    MCAPI int getAlternateSignalAt(class BlockSource &, class BlockPos const &, int) const;

protected:

};