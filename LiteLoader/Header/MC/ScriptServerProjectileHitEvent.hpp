// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerProjectileHitEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERPROJECTILEHITEVENT
public:
    struct ScriptServerProjectileHitEvent& operator=(struct ScriptServerProjectileHitEvent const &) = delete;
    ScriptServerProjectileHitEvent(struct ScriptServerProjectileHitEvent const &) = delete;
    ScriptServerProjectileHitEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerProjectileHitEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERPROJECTILEHITEVENT
#endif

//private:

};