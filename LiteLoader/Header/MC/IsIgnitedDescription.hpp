// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct IsIgnitedDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISIGNITEDDESCRIPTION
public:
    struct IsIgnitedDescription& operator=(struct IsIgnitedDescription const &) = delete;
    IsIgnitedDescription(struct IsIgnitedDescription const &) = delete;
    IsIgnitedDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ISIGNITEDDESCRIPTION
    MCVAPI void deserializeData(class Json::Value &);
    MCVAPI void serializeData(class Json::Value &) const;
#endif

};