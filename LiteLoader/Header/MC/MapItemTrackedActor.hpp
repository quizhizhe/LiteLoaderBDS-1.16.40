// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MapItemTrackedActor {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPITEMTRACKEDACTOR
public:
    class MapItemTrackedActor& operator=(class MapItemTrackedActor const &) = delete;
    MapItemTrackedActor(class MapItemTrackedActor const &) = delete;
    MapItemTrackedActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPITEMTRACKEDACTOR
#endif
    MCAPI std::unique_ptr<class Packet> nextUpdatePacket(class MapItemSavedData const &);

};