// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerActorAttackEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTORATTACKEVENT
public:
    struct ScriptServerActorAttackEvent& operator=(struct ScriptServerActorAttackEvent const &) = delete;
    ScriptServerActorAttackEvent(struct ScriptServerActorAttackEvent const &) = delete;
    ScriptServerActorAttackEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerActorAttackEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERACTORATTACKEVENT
#endif

//private:

};