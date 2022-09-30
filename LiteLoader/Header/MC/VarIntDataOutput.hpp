// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class VarIntDataOutput {

#define AFTER_EXTRA
    BinaryStream *mStream;
public:
    VarIntDataOutput(BinaryStream *stream){
        mStream = stream;
    };
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VARINTDATAOUTPUT
public:
    class VarIntDataOutput& operator=(class VarIntDataOutput const &) = delete;
    VarIntDataOutput(class VarIntDataOutput const &) = delete;
    VarIntDataOutput() = delete;
#endif

public:
    /*0*/ virtual ~VarIntDataOutput();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void writeFloat(float);
    /*4*/ virtual void writeDouble(double);
    /*5*/ virtual void writeByte(char);
    /*6*/ virtual void writeShort(short);
    /*7*/ virtual void writeInt(int);
    /*8*/ virtual void writeLongLong(__int64);
    /*9*/ virtual void writeBytes(void const *, unsigned __int64);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VARINTDATAOUTPUT
    MCVAPI void writeLongString(class gsl::basic_string_span<char const, -1>);
    MCVAPI void writeString(class gsl::basic_string_span<char const, -1>);
#endif

};