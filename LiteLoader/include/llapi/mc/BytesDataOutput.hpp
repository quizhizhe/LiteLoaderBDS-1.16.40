// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BytesDataOutput {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BYTESDATAOUTPUT
public:
    class BytesDataOutput& operator=(class BytesDataOutput const &) = delete;
    BytesDataOutput(class BytesDataOutput const &) = delete;
    BytesDataOutput() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BYTESDATAOUTPUT
    MCVAPI void writeByte(char);
    MCVAPI void writeDouble(double);
    MCVAPI void writeFloat(float);
    MCVAPI void writeInt(int);
    MCVAPI void writeLongLong(__int64);
    MCVAPI void writeLongString(class gsl::basic_string_span<char const, -1>);
    MCVAPI void writeShort(short);
    MCVAPI void writeString(class gsl::basic_string_span<char const, -1>);
#endif

};