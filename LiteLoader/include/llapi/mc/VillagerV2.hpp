// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "VillagerBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VillagerV2 : public VillagerBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGERV2
public:
    class VillagerV2& operator=(class VillagerV2 const &) = delete;
    VillagerV2(class VillagerV2 const &) = delete;
    VillagerV2() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~VillagerV2();
    /*11*/ virtual void remove();
    /*30*/ virtual void __unk_vfn_30();
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
    /*182*/ virtual void __unk_vfn_182();
    /*189*/ virtual void buildDebugInfo(std::string &) const;
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*217*/ virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*233*/ virtual void die(class ActorDamageSource const &);
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*238*/ virtual void __unk_vfn_238();
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*275*/ virtual void travel(float, float, float);
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*332*/ virtual void __unk_vfn_332();
    /*339*/ virtual void newServerAiStep();
    /*348*/ virtual void __unk_vfn_348();
    /*349*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERV2
#endif

};