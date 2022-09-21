// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SetTitlePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETTITLEPACKET
public:
    class SetTitlePacket& operator=(class SetTitlePacket const &) = delete;
    SetTitlePacket(class SetTitlePacket const &) = delete;
    SetTitlePacket() = delete;
#endif

public:
    /*0*/ virtual ~SetTitlePacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETTITLEPACKET
#endif
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType);
    MCAPI SetTitlePacket(enum SetTitlePacket::TitleType, class TextObjectRoot const &);
    MCAPI SetTitlePacket(int, int, int);
    MCAPI class SetTitlePacket & operator=(class SetTitlePacket &&);

};