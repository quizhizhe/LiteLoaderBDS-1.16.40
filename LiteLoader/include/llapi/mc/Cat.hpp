// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Cat : public Animal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAT
public:
    class Cat& operator=(class Cat const &) = delete;
    Cat(class Cat const &) = delete;
    Cat() = delete;
#endif

public:
    /*7*/ virtual ~Cat();
    /*30*/ virtual void __unk_vfn_30();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*111*/ virtual void onTame();
    /*121*/ virtual void __unk_vfn_121();
    /*169*/ virtual void __unk_vfn_169();
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*238*/ virtual void __unk_vfn_238();
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*265*/ virtual enum LevelSoundEvent getAmbientSound();
    /*278*/ virtual void aiStep();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*332*/ virtual void __unk_vfn_332();
    /*340*/ virtual void _serverAiMobStep();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAT
#endif

};