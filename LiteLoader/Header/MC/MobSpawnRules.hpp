// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MobSpawnRules {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNRULES
public:
    class MobSpawnRules& operator=(class MobSpawnRules const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOBSPAWNRULES
#endif
    MCAPI MobSpawnRules(class MobSpawnRules const &);
    MCAPI MobSpawnRules(class MobSpawnRules &&);
    MCAPI MobSpawnRules();
    MCAPI class MobSpawnRules & addPermutation(int, int, struct ActorDefinitionIdentifier const &);
    MCAPI bool canSpawnInConditions(class SpawnConditions const &, class BlockSource &) const;
    MCAPI int getSpawnCount(class SpawnConditions const &, class BlockSource &, class Random &, struct MobSpawnHerdInfo const &) const;
    MCAPI struct MobSpawnHerdInfo const & selectRandomHerd(class Random &) const;
    MCAPI ~MobSpawnRules();
    MCAPI static int const MAX_DEFAULT_SPAWN_DISTANCE;
    MCAPI static unsigned __int64 const MAX_WORLD_AGE;
    MCAPI static int const MIN_DEFAULT_SPAWN_DISTANCE;

};