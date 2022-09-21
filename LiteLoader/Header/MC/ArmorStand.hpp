// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ArmorStand : public Mob {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTAND
public:
    class ArmorStand& operator=(class ArmorStand const &) = delete;
    ArmorStand(class ArmorStand const &) = delete;
    ArmorStand() = delete;
#endif

public:
    /*7*/ virtual ~ArmorStand();
    /*30*/ virtual void __unk_vfn_30();
    /*33*/ virtual void teleportTo(class Vec3 const &, bool, int, int, struct ActorUniqueID const &);
    /*39*/ virtual void normalTick();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*74*/ virtual float getShadowRadius() const;
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*87*/ virtual bool isPickable();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*121*/ virtual void __unk_vfn_121();
    /*124*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*217*/ virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*238*/ virtual void __unk_vfn_238();
    /*240*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*242*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*243*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*279*/ virtual void pushActors();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*332*/ virtual void __unk_vfn_332();
    /*348*/ virtual void __unk_vfn_348();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
    MCVAPI bool interactPreventDefault();
#endif
    MCAPI int getNumSlotsFilled() const;
    MCAPI void setPoseIndex(int);

//private:
    MCAPI void _causeDamage(float);
    MCAPI void _destroyWithEffects(class Vec3 const &);
    MCAPI void _dropHeldItems();
    MCAPI void _dropHeldItemsAndResource();
    MCAPI void _dropItem(class ItemStack const &);
    MCAPI void _readPose(class CompoundTag const *);
    MCAPI bool _trySwapItem(class Player &, enum EquipmentSlot);

private:
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
    MCAPI static struct ArmorStand::Pose const POSE_HERO;
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;

};