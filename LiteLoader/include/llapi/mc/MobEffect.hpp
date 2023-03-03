// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
#include "HashedString.hpp"
#undef BEFORE_EXTRA

class MobEffect {

#define AFTER_EXTRA
// Add Member There
public:
    enum class EffectType : short
    {
        Empty          = 0,
        Speed          = 1,
        Slowness       = 2,
        Haste          = 3,
        MiningFatigue  = 4,
        Strength       = 5,
        InstantHealth  = 6,
        InstantDamage  = 7,
        JumpBoost      = 8,
        Nausea         = 9,
        Regeneration   = 10,
        Resistance     = 11,
        FireResistance = 12,
        WaterBreathing = 13,
        Invisibility   = 14,
        Blindness      = 15,
        NightVision    = 16,
        Hunger         = 17,
        Weakness       = 18,
        Poison         = 19,
        Wither         = 20,
        HealthBoost    = 21,
        Absorption     = 22,
        Saturation     = 23,
        Levitation     = 24,
        FatalPoison    = 25,
        ConduitPower   = 26,
        SlowFalling    = 27,
        BadOmen        = 28,
        VillageHero    = 29,
    };
    struct FactorCalculationData {
        FactorCalculationData() = delete;
        FactorCalculationData(FactorCalculationData const&) = delete;
        FactorCalculationData(FactorCalculationData const&&) = delete;
    };

    inline std::string const & getResourceName() const{
        //EffectCommand::execute Line247
        return dAccess<std::string>(this,80);
    };
    inline HashedString const & getComponentName() const{
        //MobEffect::MobEffect Line43;
        return dAccess<HashedString>(this,152);
    };

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBEFFECT
public:
    class MobEffect& operator=(class MobEffect const &) = delete;
    MobEffect(class MobEffect const &) = delete;
    MobEffect() = delete;
#endif

public:
    /*0*/ virtual ~MobEffect();
    /*1*/ virtual void applyEffects(class Actor *, int, int) const;
    /*2*/ virtual void removeEffects(class Actor *);
    /*3*/ virtual void applyInstantaneousEffect(class Actor *, class Actor *, class Actor *, int, float) const;
    /*4*/ virtual bool isInstantaneous() const;
    /*5*/ virtual float getAttributeModifierValue(int, class AttributeModifier const &) const;
    /*6*/ virtual bool isDurationEffectTick(int, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBEFFECT
#endif
    MCAPI MobEffect(int, std::string const &, std::string const &, bool, int, int, std::string const &, bool);
    MCAPI void addAttributeBuff(class Attribute const &, class std::shared_ptr<class AttributeBuff>);
    MCAPI void addAttributeModifier(class Attribute const &, class std::shared_ptr<class AttributeModifier>);
    MCAPI void setDurationAmplifier(class std::shared_ptr<class Amplifier>);
    MCAPI void setValueAmplifier(class std::shared_ptr<class Amplifier>);
    MCAPI static class MobEffect * ABSORPTION;
    MCAPI static class MobEffect * BLINDNESS;
    MCAPI static class MobEffect * CONDUIT_POWER;
    MCAPI static class MobEffect * CONFUSION;
    MCAPI static class MobEffect * DAMAGE_BOOST;
    MCAPI static class MobEffect * DAMAGE_RESISTANCE;
    MCAPI static class Color const DEFAULT_COLOR;
    MCAPI static class MobEffect * DIG_SLOWDOWN;
    MCAPI static class MobEffect * DIG_SPEED;
    MCAPI static class MobEffect * FATAL_POISON;
    MCAPI static class MobEffect * FIRE_RESISTANCE;
    MCAPI static class MobEffect * HARM;
    MCAPI static class MobEffect * HEAL;
    MCAPI static class MobEffect * HEALTH_BOOST;
    MCAPI static class MobEffect * HERO_OF_THE_VILLAGE;
    MCAPI static class MobEffect * HUNGER;
    MCAPI static class MobEffect * INVISIBILITY;
    MCAPI static class MobEffect * JUMP;
    MCAPI static class MobEffect * LEVITATION;
    MCAPI static class MobEffect * MOVEMENT_SLOWDOWN;
    MCAPI static class MobEffect * MOVEMENT_SPEED;
    MCAPI static class MobEffect * NIGHT_VISION;
    MCAPI static class MobEffect * POISON;
    MCAPI static class MobEffect * REGENERATION;
    MCAPI static class MobEffect * SATURATION;
    MCAPI static class MobEffect * SLOW_FALLING;
    MCAPI static class MobEffect * WATER_BREATHING;
    MCAPI static class MobEffect * WEAKNESS;
    MCAPI static class MobEffect * WITHER;
    MCAPI static class MobEffect * getById(int);
    MCAPI static class MobEffect * getByName(std::string const &);
    MCAPI static void initEffects(class ResourcePackManager *);
    MCAPI static std::unique_ptr<class MobEffect> mMobEffects[];

//protected:
    MCAPI class InstantaneousAttributeBuff _createInstantBuff(class AttributeBuff const &, int, float) const;
    MCAPI class TemporalAttributeBuff _createTemporalBuff(class AttributeBuff const &, int, int) const;

protected:

};