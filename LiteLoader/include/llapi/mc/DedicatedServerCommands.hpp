// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DedicatedServerCommands {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVERCOMMANDS
public:
    class DedicatedServerCommands& operator=(class DedicatedServerCommands const &) = delete;
    DedicatedServerCommands(class DedicatedServerCommands const &) = delete;
    DedicatedServerCommands() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEDICATEDSERVERCOMMANDS
#endif
    MCAPI static void setupStandaloneServer(class Minecraft &, class IMinecraftApp &, class Level &, class LevelStorage &, class DedicatedServer &, class WhitelistFile &);

//private:

private:
    MCAPI static std::vector<std::string> mSaveAllFileList;

};