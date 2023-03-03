// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DragonStrafePlayerGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONSTRAFEPLAYERGOAL
public:
    class DragonStrafePlayerGoal& operator=(class DragonStrafePlayerGoal const &) = delete;
    DragonStrafePlayerGoal(class DragonStrafePlayerGoal const &) = delete;
    DragonStrafePlayerGoal() = delete;
#endif

public:
    /*0*/ virtual ~DragonStrafePlayerGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONSTRAFEPLAYERGOAL
#endif

//private:
    MCAPI void findNewTarget();
    MCAPI void navigateToNextPathNode();
    MCAPI void setTarget(class Actor *);

private:

};