// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct FloatRange {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATRANGE
public:
    struct FloatRange& operator=(struct FloatRange const &) = delete;
    FloatRange(struct FloatRange const &) = delete;
    FloatRange() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOATRANGE
#endif
    MCAPI float getValue(class Random &) const;
    MCAPI bool parseJson(class Json::Value const &, float, float);

};