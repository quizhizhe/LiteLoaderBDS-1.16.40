// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EndermanTakeBlockGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMANTAKEBLOCKGOAL
public:
    class EndermanTakeBlockGoal& operator=(class EndermanTakeBlockGoal const &) = delete;
    EndermanTakeBlockGoal(class EndermanTakeBlockGoal const &) = delete;
    EndermanTakeBlockGoal() = delete;
#endif

public:
    /*0*/ virtual ~EndermanTakeBlockGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual void __unk_vfn_5();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERMANTAKEBLOCKGOAL
#endif

};