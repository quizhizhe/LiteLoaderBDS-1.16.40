// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct Description {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESCRIPTION
public:
    struct Description& operator=(struct Description const &) = delete;
    Description(struct Description const &) = delete;
    Description() = delete;
#endif
public:
    /*0*/ virtual void __unk_vfn_0() = 0;
    /*1*/ virtual ~Description();
    /*2*/ virtual void deserializeData(class Json::Value &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DESCRIPTION
#endif
    MCAPI struct Description * parseDescription(class Json::Value &);

};