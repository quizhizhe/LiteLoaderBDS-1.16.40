// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "TargetGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VexCopyOwnerTargetGoal : public TargetGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEXCOPYOWNERTARGETGOAL
public:
    class VexCopyOwnerTargetGoal& operator=(class VexCopyOwnerTargetGoal const &) = delete;
    VexCopyOwnerTargetGoal(class VexCopyOwnerTargetGoal const &) = delete;
    VexCopyOwnerTargetGoal() = delete;
#endif

public:
    /*0*/ virtual ~VexCopyOwnerTargetGoal();
    /*1*/ virtual bool canUse();
    /*4*/ virtual void start();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VEXCOPYOWNERTARGETGOAL
#endif

};