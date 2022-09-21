// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Llama : public Animal {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LLAMA
public:
    class Llama& operator=(class Llama const &) = delete;
    Llama(class Llama const &) = delete;
    Llama() = delete;
#endif

public:
    /*7*/ virtual ~Llama();
    /*30*/ virtual void __unk_vfn_30();
    /*54*/ virtual void __unk_vfn_54();
    /*61*/ virtual void __unk_vfn_61();
    /*76*/ virtual void __unk_vfn_76();
    /*81*/ virtual void __unk_vfn_81();
    /*88*/ virtual void __unk_vfn_88();
    /*90*/ virtual void __unk_vfn_90();
    /*98*/ virtual void __unk_vfn_98();
    /*100*/ virtual void __unk_vfn_100();
    /*112*/ virtual void onFailedTame();
    /*121*/ virtual void __unk_vfn_121();
    /*169*/ virtual void __unk_vfn_169();
    /*173*/ virtual void causeFallDamage(float);
    /*182*/ virtual void __unk_vfn_182();
    /*206*/ virtual void __unk_vfn_206();
    /*207*/ virtual void __unk_vfn_207();
    /*228*/ virtual void __unk_vfn_228();
    /*231*/ virtual void __unk_vfn_231();
    /*235*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*238*/ virtual void __unk_vfn_238();
    /*244*/ virtual void _playStepSound(class BlockPos const &, class Block const &);
    /*246*/ virtual void __unk_vfn_246();
    /*257*/ virtual void __unk_vfn_257();
    /*290*/ virtual void __unk_vfn_290();
    /*300*/ virtual void __unk_vfn_300();
    /*305*/ virtual int getArmorValue();
    /*332*/ virtual void __unk_vfn_332();
    /*348*/ virtual void __unk_vfn_348();
    /*349*/ virtual bool isDarkEnoughToSpawn() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LLAMA
    MCVAPI bool useNewAi() const;
#endif

};