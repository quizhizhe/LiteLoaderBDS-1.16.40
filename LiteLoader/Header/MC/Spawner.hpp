// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelChunk.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Mob;
class ItemActor;
class ItemStack;
class LevelChunk;

#undef BEFORE_EXTRA

class Spawner {

#define AFTER_EXTRA
// Add new members to class
public:
    LIAPI Mob* spawnMob(Vec3& ,int, std::string );
    LIAPI ItemActor* spawnItem(Vec3&, int, ItemStack*);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNER
public:
    class Spawner& operator=(class Spawner const &) = delete;
    Spawner(class Spawner const &) = delete;
    Spawner() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNER
#endif
    MCAPI void postProcessSpawnMobs(class BlockSource &, int, int, class Random &);
    MCAPI class ItemActor * spawnItem(class BlockSource &, class ItemStack const &, class Actor *, class Vec3 const &, int);
    MCAPI class Mob * spawnMob(class BlockSource &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, bool, bool, bool);
    MCAPI class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> spawnMobGroup(class BlockSource &, std::string const &, class Vec3 const &, bool, class std::function<void (class Mob &)> &&);
    MCAPI class Actor * spawnProjectile(class BlockSource &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec3 const &);
    MCAPI void tick(class BlockSource &, class LevelChunk const &);
    MCAPI static bool findNextSpawnBlockUnder(class BlockSource const &, class BlockPos &, enum MaterialType, enum SpawnBlockRequirements);

//protected:
    MCAPI void _tickSpawnMobClusters(class BlockSource &, class LevelChunk const &, class BlockPos, class std::function<void (class BlockPos const &, class SpawnConditions &)> const &);
    MCAPI void _tickSpawnStructureMobs(class BlockSource &, class LevelChunk const &, class BlockPos, class std::function<void (class BlockPos const &, struct LevelChunk::HardcodedSpawningArea const &, class SpawnConditions const &)> const &, class std::function<class gsl::span<struct LevelChunk::HardcodedSpawningArea const, -1> (class LevelChunk const &)> const &);

//private:
    MCAPI int _handlePopulationCap(class MobSpawnerData const *, class SpawnConditions const &, int);
    MCAPI bool _isSpawnPositionOk(class MobSpawnRules const &, class BlockSource &, class BlockPos const &);
    MCAPI void _permuteId(struct ActorDefinitionIdentifier &, class MobSpawnRules const &, class Random &) const;
    MCAPI bool _popCapAllows(class Dimension const &, class MobSpawnerData const &, bool, bool) const;
    MCAPI void _sendHerdEvents(struct MobSpawnHerdInfo const &, std::vector<class Mob *> &) const;
    MCAPI void _spawnMobCluster(class BlockSource &, class BlockPos const &, class SpawnConditions &);
    MCAPI void _spawnMobInCluster(class BlockSource &, struct ActorDefinitionIdentifier, class BlockPos const &, class SpawnConditions const &, std::vector<class Mob *> &);
    MCAPI void _spawnStructureMob(class BlockSource &, class BlockPos const &, struct LevelChunk::HardcodedSpawningArea const &, class SpawnConditions const &);
    MCAPI void _updateBaseTypeCount(class BlockSource &, class ChunkPos const &);
    MCAPI void _updateGroupPersistence(class MobSpawnRules const &, std::vector<class Mob *> const &);
    MCAPI void _updateMobCounts(class BlockSource &, struct ActorDefinitionIdentifier const &, class SpawnConditions const &);

protected:

private:
    MCAPI static class std::unordered_set<class ChunkPos, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<class ChunkPos>> const SPAWN_RING_OFFSETS;

};