// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AnimatePacket : public Packet {

#define AFTER_EXTRA
public:
    enum Action
    {
        NoAction = 0,
        Swing = 1,
        WakeUp = 3,
        CriticalHit = 4,
        // MagicCriticalHit=5,
        RowRight = 128,
        RowLeft = 129,
    };
    ActorRuntimeID mRuntimeId;
    Action mAction;
    float mData;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEPACKET
public:
    class AnimatePacket& operator=(class AnimatePacket const &) = delete;
    AnimatePacket(class AnimatePacket const &) = delete;
    AnimatePacket() = delete;
#endif

public:
    /*0*/ virtual ~AnimatePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATEPACKET
#endif

};