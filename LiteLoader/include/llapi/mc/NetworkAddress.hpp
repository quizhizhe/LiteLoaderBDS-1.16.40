// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct NetworkAddress {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKADDRESS
public:
    struct NetworkAddress& operator=(struct NetworkAddress const &) = delete;
    NetworkAddress(struct NetworkAddress const &) = delete;
    NetworkAddress() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKADDRESS
#endif
    MCAPI bool isValid() const;
    MCAPI ~NetworkAddress();

};