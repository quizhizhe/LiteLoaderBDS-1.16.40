// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct SpawnSettings {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNSETTINGS
public:
    SpawnSettings(struct SpawnSettings const &) = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNSETTINGS
#endif
    MCAPI SpawnSettings();
    MCAPI struct SpawnSettings & operator=(struct SpawnSettings &&);
    MCAPI struct SpawnSettings & operator=(struct SpawnSettings const &);
    MCAPI ~SpawnSettings();

};