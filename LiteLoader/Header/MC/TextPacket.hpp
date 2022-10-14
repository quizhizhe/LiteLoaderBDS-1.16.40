// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TextPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
//    char filler[168];
public:
    TextType mType;
    std::string mAuthor;
    std::string mMessage;
    std::vector<std::string> params;//参数用于替换mMessage里的%
    bool mLocalize = 0;//是否本地化
    std::string mXuid;
    std::string mPlatformId;

    //TextPacket(){};
    
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEXTPACKET
public:
    class TextPacket& operator=(class TextPacket const &) = delete;
    TextPacket(class TextPacket const &) = delete;
    TextPacket() = delete;
#endif

public:
    /*0*/ virtual ~TextPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*4*/ virtual enum StreamReadResult read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEXTPACKET
#endif
    MCAPI static class TextPacket createChat(std::string const &, std::string const &, std::string const &, std::string const &);
    MCAPI static class TextPacket createJukeboxPopup(std::string const &, std::vector<std::string> const &);
    MCAPI static class TextPacket createSystemMessage(std::string const &);
    MCAPI static class TextPacket createTextObjectMessage(class TextObjectRoot const &);
    MCAPI static class TextPacket createTextObjectWhisperMessage(class TextObjectRoot const &, std::string const &, std::string const &);
    MCAPI static class TextPacket createTranslated(std::string const &, std::vector<std::string> const &);

};