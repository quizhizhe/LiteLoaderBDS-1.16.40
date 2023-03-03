// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "FindCoverGoal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FleeSunGoal : public FindCoverGoal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLEESUNGOAL
public:
    class FleeSunGoal& operator=(class FleeSunGoal const &) = delete;
    FleeSunGoal(class FleeSunGoal const &) = delete;
    FleeSunGoal() = delete;
#endif

public:
    /*0*/ virtual ~FleeSunGoal();
    /*1*/ virtual bool canUse();
    /*3*/ virtual void __unk_vfn_3();
    /*6*/ virtual void __unk_vfn_6();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLEESUNGOAL
#endif

};