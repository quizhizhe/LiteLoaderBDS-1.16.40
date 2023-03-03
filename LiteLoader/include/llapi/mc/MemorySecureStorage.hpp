// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MemorySecureStorage {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MEMORYSECURESTORAGE
public:
    class MemorySecureStorage& operator=(class MemorySecureStorage const &) = delete;
    MemorySecureStorage(class MemorySecureStorage const &) = delete;
    MemorySecureStorage() = delete;
#endif

public:
    /*0*/ virtual ~MemorySecureStorage();
    /*1*/ virtual bool add(std::string const &, std::string const &);
    /*2*/ virtual bool addOrUpdate(std::string const &, std::string const &);
    /*3*/ virtual bool remove(std::string const &);
    /*4*/ virtual bool get(std::string const &, std::string &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MEMORYSECURESTORAGE
#endif

};