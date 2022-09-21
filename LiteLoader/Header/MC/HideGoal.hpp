// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MoveToPOIGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class HideGoal : public MoveToPOIGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDEGOAL
public:
    class HideGoal& operator=(class HideGoal const &) = delete;
    HideGoal(class HideGoal const &) = delete;
    HideGoal() = delete;
#endif

public:
    /*0*/ virtual ~HideGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*16*/ virtual unsigned __int64 _getRepathTime() const;
    /*18*/ virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(enum POIType) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HIDEGOAL
#endif

//private:
    MCAPI void _sendSoundTheAlarmAchievement() const;

private:

};