// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MoveInputHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUTHANDLER
public:
    class MoveInputHandler& operator=(class MoveInputHandler const &) = delete;
    MoveInputHandler(class MoveInputHandler const &) = delete;
    MoveInputHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVEINPUTHANDLER
    MCVAPI void clearInputState();
    MCVAPI void fillInputPacket(class PlayerAuthInputPacket &);
    MCVAPI class Vec3 const & getGazeDirection() const;
    MCVAPI bool isChangeHeight() const;
    MCVAPI bool isPlayerMoving() const;
    MCVAPI void tick(class Player &);
#endif

};