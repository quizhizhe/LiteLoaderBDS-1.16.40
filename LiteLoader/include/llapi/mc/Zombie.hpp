// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Zombie : public HumanoidMonster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ZOMBIE
public:
    class Zombie& operator=(class Zombie const &) = delete;
    Zombie(class Zombie const &) = delete;
    Zombie() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~Zombie();
    /*30*/ virtual void __unk_vfn_30();
    /*43*/ virtual float getRidingHeight();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*121*/ virtual void __unk_vfn_121();
    /*169*/ virtual void __unk_vfn_169();
    /*179*/ virtual bool canPickupItem(class ItemStack const &) const;
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*233*/ virtual void die(class ActorDamageSource const &);
    /*238*/ virtual void __unk_vfn_238();
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*282*/ virtual bool checkSpawnRules(bool);
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*305*/ virtual int getArmorValue();
    /*332*/ virtual void __unk_vfn_332();
    /*348*/ virtual void __unk_vfn_348();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ZOMBIE
    MCVAPI bool useNewAi() const;
#endif
    MCAPI Zombie(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);
    MCAPI void setZombieType(enum Zombie::ZombieType);

//protected:

protected:
    MCAPI static class mce::UUID const SPAWN_BONUS_UUID;
    MCAPI static class Attribute const SPAWN_REINFORCEMENTS_CHANCE;

};