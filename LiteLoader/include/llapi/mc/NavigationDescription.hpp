// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct NavigationDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONDESCRIPTION
public:
    struct NavigationDescription& operator=(struct NavigationDescription const &) = delete;
    NavigationDescription(struct NavigationDescription const &) = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const = 0;
    /*1*/ virtual ~NavigationDescription();
    /*2*/ virtual void deserializeData(class Json::Value &);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONDESCRIPTION
#endif
    MCAPI NavigationDescription();

};