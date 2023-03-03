// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Slime.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LavaSlime : public Slime {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAVASLIME
public:
    class LavaSlime& operator=(class LavaSlime const &) = delete;
    LavaSlime(class LavaSlime const &) = delete;
    LavaSlime() = delete;
#endif

public:
    /*1*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*7*/ virtual ~LavaSlime();
    /*30*/ virtual void __unk_vfn_30();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual bool isInLava() const;
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual float getBrightness(float) const;
    /*81*/ virtual void __unk_vfn_81();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*96*/ virtual bool isOnFire() const;
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*121*/ virtual void __unk_vfn_121();
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*238*/ virtual void __unk_vfn_238();
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*282*/ virtual bool checkSpawnRules(bool);
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*305*/ virtual int getArmorValue();
    /*332*/ virtual void __unk_vfn_332();
    /*337*/ virtual void jumpFromGround();
    /*348*/ virtual void __unk_vfn_348();
    /*350*/ virtual bool canDealDamage();
    /*354*/ virtual bool doPlayLandSound();
    /*357*/ virtual void decreaseSquish();
    /*358*/ virtual std::unique_ptr<class Slime> createChild(int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LAVASLIME
#endif

};