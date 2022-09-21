// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PackManifestFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKMANIFESTFACTORY
public:
    class PackManifestFactory& operator=(class PackManifestFactory const &) = delete;
    PackManifestFactory(class PackManifestFactory const &) = delete;
    PackManifestFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKMANIFESTFACTORY
#endif
    MCAPI std::unique_ptr<class PackManifest> create(class PackAccessStrategy &, class ResourceLocation const &, class PackReport &, class SubpackInfoCollection *);
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_LOG_PATH;
    MCAPI static std::string const MANIFEST_PACK_UUID_UPGRADE_SALT;
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH;
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD;
    MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD_BACKUP;
    MCAPI static class SemVersion const REQUIRED_VANILLA_FOR_OLD_PACKS;
    MCAPI static class std::unordered_map<std::string, std::vector<char> const, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<char> const>>> mAlternateContentKeys;
    MCAPI static class std::unordered_map<std::string, std::vector<char> const, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<char> const>>> mContentKeys;

};