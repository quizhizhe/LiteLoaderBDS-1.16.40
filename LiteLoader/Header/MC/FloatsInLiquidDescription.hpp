// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct FloatsInLiquidDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATSINLIQUIDDESCRIPTION
public:
    struct FloatsInLiquidDescription& operator=(struct FloatsInLiquidDescription const &) = delete;
    FloatsInLiquidDescription(struct FloatsInLiquidDescription const &) = delete;
    FloatsInLiquidDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLOATSINLIQUIDDESCRIPTION
    MCVAPI void deserializeData(class Json::Value &);
    MCVAPI void serializeData(class Json::Value &) const;
#endif

};