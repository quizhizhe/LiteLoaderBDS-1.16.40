// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BehaviorSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEHAVIORSYSTEM
public:
    class BehaviorSystem& operator=(class BehaviorSystem const &) = delete;
    BehaviorSystem(class BehaviorSystem const &) = delete;
    BehaviorSystem() = delete;
#endif

public:
    /*0*/ virtual ~BehaviorSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORSYSTEM
#endif

};