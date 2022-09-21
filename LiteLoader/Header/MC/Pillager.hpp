// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "HumanoidMonster.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Pillager : public HumanoidMonster {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PILLAGER
public:
    class Pillager& operator=(class Pillager const &) = delete;
    Pillager(class Pillager const &) = delete;
    Pillager() = delete;
#endif

public:
    /*7*/ virtual ~Pillager();
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
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*238*/ virtual void __unk_vfn_238();
    /*242*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*332*/ virtual void __unk_vfn_332();
    /*348*/ virtual void __unk_vfn_348();
    /*349*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PILLAGER
#endif

};