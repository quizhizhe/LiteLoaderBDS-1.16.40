// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "MobEffect.hpp"

#undef BEFORE_EXTRA

class MobEffectInstance {

#define AFTER_EXTRA
public:
    inline HashedString const & getComponentName() const{
        void* mMobEffects = dlsym("?mMobEffects@MobEffect@@2PAV?$unique_ptr@VMobEffect@@U?$default_delete@VMobEffect@@@std@@@std@@A");
        return dAccess<MobEffect>(mMobEffects,*(int*)this).getComponentName();
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECTINSTANCE
public:
    class MobEffectInstance& operator=(class MobEffectInstance const &) = delete;
    MobEffectInstance(class MobEffectInstance const &) = delete;
    MobEffectInstance() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECTINSTANCE
#endif
    MCAPI MobEffectInstance(unsigned int, int, int, int, int, int, bool, bool, bool);
    MCAPI int getDifficulityDuration(enum Difficulty) const;
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    MCAPI void update(class MobEffectInstance const &);
    MCAPI static class MobEffectInstance const NO_EFFECT;
    MCAPI static class Color getColorValue(std::vector<class MobEffectInstance> const &);
    MCAPI static class MobEffectInstance load(class CompoundTag const &);

};