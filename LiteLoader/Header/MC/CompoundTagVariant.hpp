// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CompoundTagVariant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGVARIANT
public:
    class CompoundTagVariant& operator=(class CompoundTagVariant const &) = delete;
    CompoundTagVariant(class CompoundTagVariant const &) = delete;
    CompoundTagVariant() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPOUNDTAGVARIANT
#endif
    MCAPI class Tag & emplace(class Tag &&);
    MCAPI class Tag * get();
    MCAPI class Tag const * get() const;
    MCAPI ~CompoundTagVariant();

};