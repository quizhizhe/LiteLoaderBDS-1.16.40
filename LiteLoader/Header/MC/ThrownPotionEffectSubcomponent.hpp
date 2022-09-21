// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "SplashPotionEffectSubcomponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ThrownPotionEffectSubcomponent : public SplashPotionEffectSubcomponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THROWNPOTIONEFFECTSUBCOMPONENT
public:
    class ThrownPotionEffectSubcomponent& operator=(class ThrownPotionEffectSubcomponent const &) = delete;
    ThrownPotionEffectSubcomponent(class ThrownPotionEffectSubcomponent const &) = delete;
    ThrownPotionEffectSubcomponent() = delete;
#endif

public:
    /*0*/ virtual ~ThrownPotionEffectSubcomponent();
    /*1*/ virtual void readfromJSON(class Json::Value &);
    /*2*/ virtual void writetoJSON(class Json::Value &) const;
    /*3*/ virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THROWNPOTIONEFFECTSUBCOMPONENT
#endif

};