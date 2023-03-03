// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RandomValueBounds {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMVALUEBOUNDS
public:
    class RandomValueBounds& operator=(class RandomValueBounds const &) = delete;
    RandomValueBounds(class RandomValueBounds const &) = delete;
    RandomValueBounds() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMVALUEBOUNDS
#endif
    MCAPI void deserialize(class Json::Value);
    MCAPI float getFloat(class Random &) const;
    MCAPI int getInt(class Random &) const;

};