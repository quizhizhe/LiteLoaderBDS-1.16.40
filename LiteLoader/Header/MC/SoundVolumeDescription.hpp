// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct SoundVolumeDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOUNDVOLUMEDESCRIPTION
public:
    struct SoundVolumeDescription& operator=(struct SoundVolumeDescription const &) = delete;
    SoundVolumeDescription(struct SoundVolumeDescription const &) = delete;
    SoundVolumeDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~SoundVolumeDescription();
    /*2*/ virtual void deserializeData(class Json::Value &);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SOUNDVOLUMEDESCRIPTION
#endif

};