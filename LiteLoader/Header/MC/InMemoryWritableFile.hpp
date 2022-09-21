// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class InMemoryWritableFile {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYWRITABLEFILE
public:
    class InMemoryWritableFile& operator=(class InMemoryWritableFile const &) = delete;
    InMemoryWritableFile(class InMemoryWritableFile const &) = delete;
    InMemoryWritableFile() = delete;
#endif

public:
    /*0*/ virtual ~InMemoryWritableFile();
    /*1*/ virtual class leveldb::Status Append(class leveldb::Slice const &);
    /*2*/ virtual class leveldb::Status Close();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INMEMORYWRITABLEFILE
    MCVAPI class leveldb::Status Flush();
    MCVAPI class leveldb::Status Sync();
#endif
    MCAPI InMemoryWritableFile(class std::shared_ptr<class InMemoryFile>);

};