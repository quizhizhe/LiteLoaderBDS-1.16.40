// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Attribute {

#define AFTER_EXTRA
public:
    inline class HashedString const & getName() const{
        return dAccess<HashedString>(this, 8);
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTE
public:
    class Attribute& operator=(class Attribute const &) = delete;
    Attribute(class Attribute const &) = delete;
    Attribute() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTE
#endif
    MCAPI Attribute(class HashedString const &, enum RedefinitionMode, bool);
    MCAPI static class Attribute & getByName(class HashedString const &);

};