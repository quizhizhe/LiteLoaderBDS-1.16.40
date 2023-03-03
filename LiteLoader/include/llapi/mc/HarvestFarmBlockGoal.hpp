// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HarvestFarmBlockGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HARVESTFARMBLOCKGOAL
public:
    class HarvestFarmBlockGoal& operator=(class HarvestFarmBlockGoal const &) = delete;
    HarvestFarmBlockGoal(class HarvestFarmBlockGoal const &) = delete;
    HarvestFarmBlockGoal() = delete;
#endif

public:
    /*0*/ virtual ~HarvestFarmBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual bool hasReachedTarget() const;
    /*11*/ virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /*12*/ virtual int _nextStartTick();
    /*13*/ virtual bool _canReach(class BlockPos const &);
    /*14*/ virtual void _moveToBlock();
    /*15*/ virtual class Vec3 _getTargetPosition() const;
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual bool findTargetBlock();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HARVESTFARMBLOCKGOAL
#endif

//protected:
    MCAPI int findInventorySlotForFarmSeeds();

protected:

};