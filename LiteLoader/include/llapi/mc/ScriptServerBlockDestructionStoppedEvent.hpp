// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerBlockDestructionStoppedEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERBLOCKDESTRUCTIONSTOPPEDEVENT
public:
    struct ScriptServerBlockDestructionStoppedEvent& operator=(struct ScriptServerBlockDestructionStoppedEvent const &) = delete;
    ScriptServerBlockDestructionStoppedEvent(struct ScriptServerBlockDestructionStoppedEvent const &) = delete;
    ScriptServerBlockDestructionStoppedEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerBlockDestructionStoppedEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERBLOCKDESTRUCTIONSTOPPEDEVENT
#endif

//private:

};