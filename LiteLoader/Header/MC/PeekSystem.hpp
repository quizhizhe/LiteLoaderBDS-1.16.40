// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PeekSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PEEKSYSTEM
public:
    class PeekSystem& operator=(class PeekSystem const &) = delete;
    PeekSystem(class PeekSystem const &) = delete;
    PeekSystem() = delete;
#endif

public:
    /*0*/ virtual ~PeekSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PEEKSYSTEM
#endif

};