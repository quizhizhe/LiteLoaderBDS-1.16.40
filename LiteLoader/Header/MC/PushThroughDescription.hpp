// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct PushThroughDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHTHROUGHDESCRIPTION
public:
    struct PushThroughDescription& operator=(struct PushThroughDescription const &) = delete;
    PushThroughDescription(struct PushThroughDescription const &) = delete;
    PushThroughDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~PushThroughDescription();
    /*2*/ virtual void deserializeData(class Json::Value &);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PUSHTHROUGHDESCRIPTION
#endif

};