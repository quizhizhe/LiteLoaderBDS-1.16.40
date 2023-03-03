// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MobEffect.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class InstantaneousMobEffect : public MobEffect {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTANEOUSMOBEFFECT
public:
    class InstantaneousMobEffect& operator=(class InstantaneousMobEffect const &) = delete;
    InstantaneousMobEffect(class InstantaneousMobEffect const &) = delete;
    InstantaneousMobEffect() = delete;
#endif

public:
    /*0*/ virtual ~InstantaneousMobEffect();
    /*4*/ virtual bool isInstantaneous() const;
    /*6*/ virtual bool isDurationEffectTick(int, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSTANTANEOUSMOBEFFECT
#endif
    MCAPI InstantaneousMobEffect(int, std::string const &, std::string const &, bool, int, int);

};