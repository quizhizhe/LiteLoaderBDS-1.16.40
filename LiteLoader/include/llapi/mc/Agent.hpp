// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Agent : public Mob {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENT
public:
    class Agent& operator=(class Agent const &) = delete;
    Agent(class Agent const &) = delete;
    Agent() = delete;
#endif

public:
    /*3*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~Agent();
    /*30*/ virtual void __unk_vfn_30();
    /*33*/ virtual void teleportTo(class Vec3 const &, bool, int, int, struct ActorUniqueID const &);
    /*39*/ virtual void normalTick();
    /*52*/ virtual bool isInvisible() const;
    /*53*/ virtual bool canShowNameTag() const;
    /*54*/ virtual void __unk_vfn_54();
    /*58*/ virtual std::string getFormattedNameTag() const;
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual bool isPickable();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*121*/ virtual void __unk_vfn_121();
    /*132*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*151*/ virtual void setCarriedItem(class ItemStack const &);
    /*169*/ virtual void __unk_vfn_169();
    /*180*/ virtual bool canBePulledIntoVehicle() const;
    /*182*/ virtual void __unk_vfn_182();
    /*197*/ virtual bool canBeAffected(class MobEffectInstance const &) const;
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*212*/ virtual bool isWorldBuilder();
    /*214*/ virtual bool isAdventure() const;
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*232*/ virtual void kill();
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*238*/ virtual void __unk_vfn_238();
    /*240*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*258*/ virtual void knockback(class Actor *, int, float, float, float, float, float);
    /*275*/ virtual void travel(float, float, float);
    /*278*/ virtual void aiStep();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*324*/ virtual bool createAIGoals();
    /*331*/ virtual bool canExistWhenDisallowMob() const;
    /*332*/ virtual void __unk_vfn_332();
    /*336*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*348*/ virtual void __unk_vfn_348();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENT
    MCVAPI bool breaksFallingBlocks() const;
    MCVAPI bool getAlwaysShowNameTag() const;
    MCVAPI bool interactPreventDefault();
    MCVAPI bool isTargetable() const;
#endif
    MCAPI Agent(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &);
    MCAPI void setNameTagFromOwner(class Player const &);
    MCAPI static class Vec3 roundTeleportPos(class Vec3 const &);

};