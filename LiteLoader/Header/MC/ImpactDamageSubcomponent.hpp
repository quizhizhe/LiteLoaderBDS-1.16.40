// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ImpactDamageSubcomponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPACTDAMAGESUBCOMPONENT
public:
    class ImpactDamageSubcomponent& operator=(class ImpactDamageSubcomponent const &) = delete;
    ImpactDamageSubcomponent(class ImpactDamageSubcomponent const &) = delete;
    ImpactDamageSubcomponent() = delete;
#endif

public:
    /*0*/ virtual ~ImpactDamageSubcomponent();
    /*1*/ virtual void readfromJSON(class Json::Value &);
    /*2*/ virtual void writetoJSON(class Json::Value &) const;
    /*3*/ virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IMPACTDAMAGESUBCOMPONENT
#endif

};