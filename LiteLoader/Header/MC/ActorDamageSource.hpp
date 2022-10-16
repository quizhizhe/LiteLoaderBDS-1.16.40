// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Actor;

enum ActorDamageCause : int {
    ActorDamageCause_None = -0x01,
    ActorDamageCause_Override = 0x00,
    ActorDamageCause_Contact = 0x01,
    ActorDamageCause_EntityAttack = 0x02,
    ActorDamageCause_Projectile = 0x03,
    ActorDamageCause_Suffocation = 0x04,
    FActorDamageCause_all = 0x05,
    ActorDamageCause_Fire = 0x06,
    ActorDamageCause_FireTick = 0x07,
    ActorDamageCause_Lava = 0x08,
    ActorDamageCause_Drowning = 0x09,
    ActorDamageCause_BlockExplosion = 0x0A,
    ActorDamageCause_EntityExplosion = 0x0B,
    ActorDamageCause_Void = 0x0C,
    ActorDamageCause_Suicide = 0x0D,
    ActorDamageCause_Magic = 0x0E,
    ActorDamageCause_Wither = 0x0F,
    ActorDamageCause_Starve = 0x10,
    ActorDamageCause_Anvil = 0x11,
    ActorDamageCause_Thorns = 0x12,
    ActorDamageCause_FallingBlock = 0x13,
    ActorDamageCause_Piston = 0x14,
    ActorDamageCause_FlyIntoWall = 0x15,
    ActorDamageCause_Magma = 0x16,
    ActorDamageCause_Fireworks = 0x17,
    ActorDamageCause_Lightning = 0x18,
    ActorDamageCause_Charging = 0x19,
    ActorDamageCause_Temperature = 0x1A,
    ActorDamageCause_Freezing = 0x1B,
    ActorDamageCause_Stalactite = 0x1C,
    ActorDamageCause_Stalagmite = 0x1D,
    ActorDamageCause_All = 0x1F,
};

#undef BEFORE_EXTRA

class ActorDamageSource {

#define AFTER_EXTRA
    // Add Member There
    ActorDamageCause mCause;
    char filler[4];

public:
    ActorDamageSource(ActorDamageCause cause){
        this->mCause = cause;
    };
    LIAPI Actor* getEntity();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDAMAGESOURCE
public:
    class ActorDamageSource& operator=(class ActorDamageSource const &) = delete;
    ActorDamageSource(class ActorDamageSource const &) = delete;
    ActorDamageSource() = delete;
#endif

public:
    /*0*/ virtual ~ActorDamageSource();
    /*1*/ virtual bool isEntitySource() const;
    /*2*/ virtual bool isChildEntitySource() const;
    /*3*/ virtual bool isBlockSource() const;
    /*4*/ virtual bool isFire() const;
    /*5*/ virtual struct std::pair<std::string, std::vector<std::string>> getDeathMessage(std::string, class Actor *) const;
    /*6*/ virtual bool getIsCreative() const;
    /*7*/ virtual bool getIsWorldBuilder() const;
    /*8*/ virtual struct ActorUniqueID getEntityUniqueID() const;
    /*9*/ virtual enum ActorType getEntityType() const;
    /*10*/ virtual enum ActorCategory getEntityCategories() const;
    /*11*/ virtual bool getDamagingEntityIsCreative() const;
    /*12*/ virtual bool getDamagingEntityIsWorldBuilder() const;
    /*13*/ virtual struct ActorUniqueID getDamagingEntityUniqueID() const;
    /*14*/ virtual enum ActorType getDamagingEntityType() const;
    /*15*/ virtual enum ActorCategory getDamagingEntityCategories() const;
    /*16*/ virtual std::unique_ptr<class ActorDamageSource> clone() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORDAMAGESOURCE
#endif
    MCAPI static enum ActorDamageCause lookupCause(std::string const &);
    MCAPI static std::string const & lookupCauseName(enum ActorDamageCause);

};