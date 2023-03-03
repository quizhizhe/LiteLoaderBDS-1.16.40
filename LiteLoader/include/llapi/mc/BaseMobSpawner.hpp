// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BaseMobSpawner {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASEMOBSPAWNER
public:
    class BaseMobSpawner& operator=(class BaseMobSpawner const &) = delete;
    BaseMobSpawner(class BaseMobSpawner const &) = delete;
    BaseMobSpawner() = delete;
#endif

public:
    /*0*/ virtual ~BaseMobSpawner();
    /*1*/ virtual void tick(class BlockSource &);
    /*2*/ virtual void load(class CompoundTag const &);
    /*3*/ virtual void save(class CompoundTag &);
    /*4*/ virtual class BlockPos const & getPos() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BASEMOBSPAWNER
#endif
    MCAPI class Mob * getDisplayEntity(class BlockSource &);
    MCAPI void setEntityId(struct ActorDefinitionIdentifier);
    MCAPI void setNextSpawnData(std::unique_ptr<class SpawnData>);

//protected:
    MCAPI void _delay(class BlockSource &);

protected:

};