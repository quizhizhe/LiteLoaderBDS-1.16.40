// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PackReport {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKREPORT
public:
    class PackReport& operator=(class PackReport const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKREPORT
#endif
    MCAPI PackReport();
    MCAPI PackReport(class PackReport const &);
    MCAPI PackReport(class PackReport &&);
    MCAPI class PackReport & operator=(class PackReport &&);
    MCAPI void serialize(class Json::Value &);
    MCAPI ~PackReport();

};