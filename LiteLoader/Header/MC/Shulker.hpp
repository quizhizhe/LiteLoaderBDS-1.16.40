// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Shulker : public Mob {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKER
public:
    class Shulker& operator=(class Shulker const &) = delete;
    Shulker(class Shulker const &) = delete;
    Shulker() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~Shulker();
    /*12*/ virtual void setPos(class Vec3 const &);
    /*30*/ virtual void __unk_vfn_30();
    /*39*/ virtual void normalTick();
    /*51*/ virtual bool isInWall() const;
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*74*/ virtual float getShadowRadius() const;
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*101*/ virtual bool canAttack(class Actor *, bool) const;
    /*121*/ virtual void __unk_vfn_121();
    /*123*/ virtual bool shouldRender() const;
    /*124*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*133*/ virtual float getPickRadius();
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*238*/ virtual void __unk_vfn_238();
    /*240*/ virtual bool _hurt(class ActorDamageSource const &, int, bool, bool);
    /*242*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*243*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*246*/ virtual void __unk_vfn_246();
    /*256*/ virtual void _onSizeUpdated();
    /*257*/ virtual void __unk_vfn_257();
    /*275*/ virtual void travel(float, float, float);
    /*278*/ virtual void aiStep();
    /*290*/ virtual void __unk_vfn_290();
    /*291*/ virtual float getMaxHeadXRot();
    /*300*/ virtual void __unk_vfn_300();
    /*305*/ virtual int getArmorValue();
    /*332*/ virtual void __unk_vfn_332();
    /*336*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    MCVAPI bool isLeashableType();
    MCVAPI bool useNewAi() const;
#endif
    MCAPI void calculateBB();
    MCAPI unsigned char getAttachFace() const;
    MCAPI bool getAttached() const;
    MCAPI bool isValidAttach(class BlockPos, unsigned char);
    MCAPI void setAttachFace(unsigned char);
    MCAPI void setPeekAmount(int);
    MCAPI void setShulkerAttachPos(class BlockPos);
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;

//protected:
    MCAPI bool teleportSomewhere();

protected:

};