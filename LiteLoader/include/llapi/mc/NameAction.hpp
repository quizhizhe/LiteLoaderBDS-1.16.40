// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct NameAction {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAMEACTION
public:
    struct NameAction& operator=(struct NameAction const &) = delete;
    NameAction() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAMEACTION
#endif
    MCAPI NameAction(struct NameAction const &);
    MCAPI void addNameFilterByName(std::string const &);
    MCAPI ~NameAction();

};