// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GameSpecificNetEventCallback {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMESPECIFICNETEVENTCALLBACK
public:
    class GameSpecificNetEventCallback& operator=(class GameSpecificNetEventCallback const &) = delete;
    GameSpecificNetEventCallback(class GameSpecificNetEventCallback const &) = delete;
    GameSpecificNetEventCallback() = delete;
#endif

public:
    /*0*/ virtual ~GameSpecificNetEventCallback();
    /*1*/ virtual void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMESPECIFICNETEVENTCALLBACK
#endif

};