// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerActorDeathEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTORDEATHEVENT
public:
    struct ScriptServerActorDeathEvent& operator=(struct ScriptServerActorDeathEvent const &) = delete;
    ScriptServerActorDeathEvent(struct ScriptServerActorDeathEvent const &) = delete;
    ScriptServerActorDeathEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerActorDeathEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERACTORDEATHEVENT
#endif

//private:

};