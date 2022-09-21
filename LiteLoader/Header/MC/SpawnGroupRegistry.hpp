// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SpawnGroupRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNGROUPREGISTRY
public:
    class SpawnGroupRegistry& operator=(class SpawnGroupRegistry const &) = delete;
    SpawnGroupRegistry(class SpawnGroupRegistry const &) = delete;
    SpawnGroupRegistry() = delete;
#endif

public:
    /*0*/ virtual ~SpawnGroupRegistry();
    /*1*/ virtual std::string const & getRootKey();
    /*2*/ virtual std::string const & getFileType();
    /*3*/ virtual bool processPopulationControl(std::string const &, class Json::Value &);
    /*4*/ virtual void readResourceFiles(class ResourcePackManager &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SPAWNGROUPREGISTRY
#endif

//private:
    MCAPI void _addSpawnRules(std::string const &, class MobSpawnRules &);

private:

};