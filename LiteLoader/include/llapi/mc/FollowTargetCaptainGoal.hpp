// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FollowTargetCaptainGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLLOWTARGETCAPTAINGOAL
public:
    class FollowTargetCaptainGoal& operator=(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal(class FollowTargetCaptainGoal const &) = delete;
    FollowTargetCaptainGoal() = delete;
#endif

public:
    /*0*/ virtual ~FollowTargetCaptainGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FOLLOWTARGETCAPTAINGOAL
#endif

//private:
    MCAPI void _determineMovePos();

private:

};