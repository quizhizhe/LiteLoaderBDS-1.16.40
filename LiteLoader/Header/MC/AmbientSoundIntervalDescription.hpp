// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct AmbientSoundIntervalDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDINTERVALDESCRIPTION
public:
    struct AmbientSoundIntervalDescription& operator=(struct AmbientSoundIntervalDescription const &) = delete;
    AmbientSoundIntervalDescription(struct AmbientSoundIntervalDescription const &) = delete;
    AmbientSoundIntervalDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~AmbientSoundIntervalDescription();
    /*2*/ virtual void deserializeData(class Json::Value &);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AMBIENTSOUNDINTERVALDESCRIPTION
#endif

};