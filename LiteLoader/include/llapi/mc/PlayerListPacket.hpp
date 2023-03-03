// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PlayerListPacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERLISTPACKET
public:
    class PlayerListPacket& operator=(class PlayerListPacket const &) = delete;
    PlayerListPacket(class PlayerListPacket const &) = delete;
    PlayerListPacket() = delete;
#endif

public:
    /*0*/ virtual ~PlayerListPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
    /*5*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERLISTPACKET
#endif

};