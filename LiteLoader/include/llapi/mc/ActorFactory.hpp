// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFACTORY
public:
    class ActorFactory& operator=(class ActorFactory const &) = delete;
    ActorFactory(class ActorFactory const &) = delete;
    ActorFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORFACTORY
#endif
    MCAPI ActorFactory(class Level &);
    MCAPI std::unique_ptr<class Actor> createBornEntity(struct ActorDefinitionIdentifier const &, class Actor *);
    MCAPI std::unique_ptr<class Actor> createBornEntity(struct ActorDefinitionIdentifier const &, class BlockPos const &);
    MCAPI std::unique_ptr<class Actor> createEntity(std::string const &, struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec2 const &);
    MCAPI std::unique_ptr<class Actor> createSpawnedEntity(struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &, class Vec2 const &);
    MCAPI std::unique_ptr<class Actor> createSummonedEntity(struct ActorDefinitionIdentifier const &, class Actor *, class Vec3 const &);
    MCAPI std::unique_ptr<class Actor> createTransformedEntity(struct ActorDefinitionIdentifier const &, class Actor *);
    MCAPI std::unique_ptr<class Actor> loadEntity(class CompoundTag *, class DataLoadHelper &, class LevelChunk const *);
    MCAPI ~ActorFactory();
    MCAPI static std::vector<struct std::pair<std::string, struct ActorDefinitionIdentifier const *>> buildSummonEntityTypeEnum(bool);
    MCAPI static class Actor * fixLegacyEntity(class BlockSource &, class CompoundTag const *);
    MCAPI static enum ActorType lookupEntityType(struct ActorDefinitionIdentifier const &);
    MCAPI static void registerEntityMapping(enum ActorType const &, bool, std::unique_ptr<class Actor> ( *const &)(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &), bool);

//private:
    MCAPI std::unique_ptr<class Actor> _constructActor(struct ActorDefinitionIdentifier const &, class Vec3 const &, class Vec2 const &);
    MCAPI void _loadDefinitionGroups(class ActorDefinitionGroup *);

private:
    MCAPI static std::vector<struct VanillaActorData> builtinEntityMappings;

};