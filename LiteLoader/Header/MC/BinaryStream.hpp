// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ReadOnlyBinaryStream.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BinaryStream : public ReadOnlyBinaryStream {

#define AFTER_EXTRA
public:
    std::string writeBuf, *pwBuf;

    LIAPI void write(const void* origin, size_t num);
    LIAPI void writeByte(uint8_t origin);
    LIAPI void writeBool(bool origin);
    LIAPI void writeDouble(double value);
    LIAPI void writeFloat(float value);
    LIAPI void writeString(std::string value);
    LIAPI void writeSignedInt(int value);
    LIAPI void writeSignedInt64(__int64 value);
    LIAPI void writeSignedShort(short value);
    LIAPI void writeUnsignedChar(unsigned char value);
    LIAPI void writeUnsignedShort(unsigned short value);
    LIAPI void writeUnsignedInt(unsigned int value);
    LIAPI void writeUnsignedInt64(unsigned __int64 value);
    LIAPI void writeVarInt(int value);
    LIAPI void writeVarInt64(__int64 value);
    
    inline void writeType(class Vec3 const& vec3)
    {
        writeFloat(vec3.x);
        writeFloat(vec3.y);
        writeFloat(vec3.z);
    }

    LIAPI void reserve(size_t size);
    LIAPI std::string& getRaw();
    LIAPI void writeCompoundTag(class CompoundTag const& tag);

    inline void reset(){
        this->writeBuf.clear();
        ReadOnlyBinaryStream::setReadPointer(0);
    }

    inline std::string getAndReleaseData(){
        std::string str = std::move(this->writeBuf);
        return str;
    }


#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BINARYSTREAM
public:
    class BinaryStream& operator=(class BinaryStream const &) = delete;
    BinaryStream(class BinaryStream const &) = delete;
#endif

public:
    /*0*/ virtual ~BinaryStream();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BINARYSTREAM
#endif
    MCAPI BinaryStream();
    MCAPI BinaryStream(std::string &, bool);
    MCAPI void writeSignedBigEndianInt(int);
    MCAPI void writeUnsignedVarInt(unsigned int);
    MCAPI void writeUnsignedVarInt64(unsigned __int64);

};