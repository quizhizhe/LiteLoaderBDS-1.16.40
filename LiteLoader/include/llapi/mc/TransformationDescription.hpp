// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct TransformationDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRANSFORMATIONDESCRIPTION
public:
    struct TransformationDescription& operator=(struct TransformationDescription const &) = delete;
    TransformationDescription(struct TransformationDescription const &) = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~TransformationDescription();
    /*2*/ virtual void deserializeData(class Json::Value &);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TRANSFORMATIONDESCRIPTION
#endif
    MCAPI TransformationDescription();

};