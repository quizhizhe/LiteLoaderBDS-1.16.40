// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerPlayerAttackedActorEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERPLAYERATTACKEDACTOREVENT
public:
    struct ScriptServerPlayerAttackedActorEvent& operator=(struct ScriptServerPlayerAttackedActorEvent const &) = delete;
    ScriptServerPlayerAttackedActorEvent(struct ScriptServerPlayerAttackedActorEvent const &) = delete;
    ScriptServerPlayerAttackedActorEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerPlayerAttackedActorEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERPLAYERATTACKEDACTOREVENT
#endif

//private:

};