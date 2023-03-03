// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Silverfish : public Monster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SILVERFISH
public:
    class Silverfish& operator=(class Silverfish const &) = delete;
    Silverfish(class Silverfish const &) = delete;
    Silverfish() = delete;
#endif

public:
    /*7*/ virtual ~Silverfish();
    /*30*/ virtual void __unk_vfn_30();
    /*39*/ virtual void normalTick();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*103*/ virtual class Actor * findAttackTarget();
    /*121*/ virtual void __unk_vfn_121();
    /*132*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*238*/ virtual void __unk_vfn_238();
    /*244*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*260*/ virtual void spawnAnim();
    /*278*/ virtual void aiStep();
    /*282*/ virtual bool checkSpawnRules(bool);
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*330*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*332*/ virtual void __unk_vfn_332();
    /*348*/ virtual void __unk_vfn_348();
    /*349*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SILVERFISH
    MCVAPI bool useNewAi() const;
#endif

};