// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockSourceListener.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Weather : public BlockSourceListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEATHER
public:
    class Weather& operator=(class Weather const &) = delete;
    Weather(class Weather const &) = delete;
    Weather() = delete;
#endif

public:
    /*0*/ virtual ~Weather();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_8();
    /*9*/ virtual void __unk_vfn_9();
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual class Particle * addParticle(enum ParticleType, class Vec3 const &, class Vec3 const &, int, class CompoundTag const *, bool);
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*14*/ virtual void __unk_vfn_14();
    /*15*/ virtual void __unk_vfn_15();
    /*16*/ virtual void __unk_vfn_16();
    /*17*/ virtual void __unk_vfn_17();
    /*18*/ virtual void __unk_vfn_18();
    /*19*/ virtual void __unk_vfn_19();
    /*20*/ virtual void __unk_vfn_20();
    /*21*/ virtual void __unk_vfn_21();
    /*22*/ virtual void __unk_vfn_22();
    /*23*/ virtual void __unk_vfn_23();
    /*24*/ virtual void __unk_vfn_24();
    /*25*/ virtual void __unk_vfn_25();
    /*26*/ virtual void levelEvent(enum LevelEvent, class Vec3 const &, int);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEATHER
#endif
    MCAPI int calcRainCycleTime() const;
    MCAPI int calcRainDuration() const;
    MCAPI int calcSnowBlockDepth(class BlockSource &, class BlockPos const &, int) const;
    MCAPI bool canPlaceTopSnow(class BlockSource &, class BlockPos const &, bool, bool, int *) const;
    MCAPI bool isPrecipitatingAt(class BlockSource &, class BlockPos const &) const;
    MCAPI bool isRainingAt(class BlockSource &, class BlockPos const &) const;
    MCAPI bool isSnowingAt(class BlockSource &, class BlockPos const &) const;
    MCAPI void rebuildTopSnowToDepth(class BlockSource &, class BlockPos const &, int);
    MCAPI void serverTick();
    MCAPI bool tryToPlaceTopSnow(class BlockSource &, class BlockPos const &, bool, bool);

//private:
    MCAPI void _notifyWeatherChangedEvent(class LevelData const &) const;

private:

};