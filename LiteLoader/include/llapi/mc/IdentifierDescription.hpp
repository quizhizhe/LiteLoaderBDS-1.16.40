// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct IdentifierDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTIFIERDESCRIPTION
public:
    struct IdentifierDescription& operator=(struct IdentifierDescription const &) = delete;
    IdentifierDescription(struct IdentifierDescription const &) = delete;
    IdentifierDescription() = delete;
#endif
public:
    /*0*/ virtual ~IdentifierDescription();
    /*1*/ virtual char const * getJsonName() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_IDENTIFIERDESCRIPTION
#endif

};