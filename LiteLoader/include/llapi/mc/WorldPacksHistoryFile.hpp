// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorldPacksHistoryFile {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDPACKSHISTORYFILE
public:
    class WorldPacksHistoryFile& operator=(class WorldPacksHistoryFile const &) = delete;
    WorldPacksHistoryFile(class WorldPacksHistoryFile const &) = delete;
    WorldPacksHistoryFile() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDPACKSHISTORYFILE
#endif
    MCAPI enum WorldPacksHistoryFile::ParseResult initializeFromJson(class Json::Value const &);

};