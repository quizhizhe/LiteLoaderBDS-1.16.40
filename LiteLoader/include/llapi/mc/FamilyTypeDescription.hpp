// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct FamilyTypeDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAMILYTYPEDESCRIPTION
public:
    struct FamilyTypeDescription& operator=(struct FamilyTypeDescription const &) = delete;
    FamilyTypeDescription(struct FamilyTypeDescription const &) = delete;
    FamilyTypeDescription() = delete;
#endif
public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~FamilyTypeDescription();
    /*2*/ virtual void deserializeData(class Json::Value &);
    /*3*/ virtual void serializeData(class Json::Value &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FAMILYTYPEDESCRIPTION
#endif

};