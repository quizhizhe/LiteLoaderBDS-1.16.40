// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class IgniteSubcomponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IGNITESUBCOMPONENT
public:
    class IgniteSubcomponent& operator=(class IgniteSubcomponent const &) = delete;
    IgniteSubcomponent(class IgniteSubcomponent const &) = delete;
    IgniteSubcomponent() = delete;
#endif

public:
    /*0*/ virtual ~IgniteSubcomponent();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IGNITESUBCOMPONENT
    MCVAPI void readfromJSON(class Json::Value &);
    MCVAPI void writetoJSON(class Json::Value &) const;
#endif

};