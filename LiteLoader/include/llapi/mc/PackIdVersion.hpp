// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct PackIdVersion {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKIDVERSION
public:
    PackIdVersion(struct PackIdVersion const &) = delete;
    PackIdVersion() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKIDVERSION
#endif
    MCAPI bool operator<(struct PackIdVersion const &) const;
    MCAPI struct PackIdVersion & operator=(struct PackIdVersion const &);
    MCAPI struct PackIdVersion & operator=(struct PackIdVersion &&);
    MCAPI bool operator==(struct PackIdVersion const &) const;
    MCAPI ~PackIdVersion();

};