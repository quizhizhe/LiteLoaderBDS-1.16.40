// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ProjectileSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROJECTILESYSTEM
public:
    class ProjectileSystem& operator=(class ProjectileSystem const &) = delete;
    ProjectileSystem(class ProjectileSystem const &) = delete;
    ProjectileSystem() = delete;
#endif

public:
    /*0*/ virtual ~ProjectileSystem();
    /*1*/ virtual void tick(class EntityRegistry &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROJECTILESYSTEM
#endif

};