// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

namespace CommandUtils {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    MCAPI extern std::vector<struct std::pair<std::string, char>> const CMD_INPUT_UNICODE_TRANSLATE_MAP;
    MCAPI bool addItemInstanceComponents(class ItemInstance &, class Json::Value const &, std::string &);
    MCAPI void alterSpawnableEntities(class LevelData &, struct ActorDefinitionIdentifier const &, struct ActorDefinitionIdentifier &);
    MCAPI void clearBlockEntityContents(class BlockSource &, class BlockPos const &);
    MCAPI class ItemStack createItemStack(std::string const &, int, int);
    MCAPI std::vector<class ItemStack> createItemStacks(class ItemInstance const &, int, int &);
    MCAPI bool createMapData(class Actor &, class ItemInstance &, class CommandOutput &);
    MCAPI void displayLocalizableMessage(bool, class Player &, std::string const &, std::vector<std::string> const &);
    MCAPI class BlockPos getFeetBlockPos(class Actor const *);
    MCAPI class Vec3 getFeetPos(class Actor const *);
    MCAPI std::vector<enum ActorType> getInvalidCommandEntities();
    MCAPI class Player const * getOriginPlayer(class CommandOrigin const &);
    MCAPI bool isPlayerSpawnedMob(class Actor *, class Actor *);
    MCAPI std::string toJsonResult(std::string const &, class Json::Value const &);

};