// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LevelSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSETTINGS
public:
    class LevelSettings& operator=(class LevelSettings const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELSETTINGS
#endif
    MCAPI LevelSettings(class LevelSettings const &);
    MCAPI LevelSettings(class LevelSettings &&);
    MCAPI LevelSettings();
    MCAPI LevelSettings(class LevelData const &, class AutomaticID<class Dimension, int>);
    MCAPI class LevelSettings & operator=(class LevelSettings &&);
    MCAPI class LevelSettings & setDefaultAbilities(class Abilities);
    MCAPI class LevelSettings & setEducationProductID(std::string);
    MCAPI class LevelSettings & setGameRules(class GameRules);
    MCAPI class LevelSettings & setSpawnSettings(struct SpawnSettings);
    MCAPI ~LevelSettings();
    MCAPI static unsigned int parseSeedString(std::string const &, unsigned int);

};