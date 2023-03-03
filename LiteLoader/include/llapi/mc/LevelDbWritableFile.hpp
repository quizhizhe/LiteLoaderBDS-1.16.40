// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LevelDbWritableFile {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBWRITABLEFILE
public:
    class LevelDbWritableFile& operator=(class LevelDbWritableFile const &) = delete;
    LevelDbWritableFile(class LevelDbWritableFile const &) = delete;
    LevelDbWritableFile() = delete;
#endif

public:
    /*0*/ virtual ~LevelDbWritableFile();
    /*1*/ virtual class leveldb::Status Append(class leveldb::Slice const &);
    /*2*/ virtual class leveldb::Status Close();
    /*3*/ virtual class leveldb::Status Flush();
    /*4*/ virtual class leveldb::Status Sync();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEVELDBWRITABLEFILE
#endif
    MCAPI LevelDbWritableFile(std::string, class Core::File &&);

//private:
    MCAPI class leveldb::Status SyncDirIfManifest();

private:

};