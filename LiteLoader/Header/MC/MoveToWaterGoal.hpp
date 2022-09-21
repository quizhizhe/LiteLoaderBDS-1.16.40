// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToBlockGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MoveToWaterGoal : public BaseMoveToBlockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWATERGOAL
public:
    class MoveToWaterGoal& operator=(class MoveToWaterGoal const &) = delete;
    MoveToWaterGoal(class MoveToWaterGoal const &) = delete;
    MoveToWaterGoal() = delete;
#endif

public:
    /*0*/ virtual ~MoveToWaterGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void __unk_vfn_5();
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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVETOWATERGOAL
#endif

};