// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerBlockInteractedWithEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERBLOCKINTERACTEDWITHEVENT
public:
    struct ScriptServerBlockInteractedWithEvent& operator=(struct ScriptServerBlockInteractedWithEvent const &) = delete;
    ScriptServerBlockInteractedWithEvent(struct ScriptServerBlockInteractedWithEvent const &) = delete;
    ScriptServerBlockInteractedWithEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerBlockInteractedWithEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERBLOCKINTERACTEDWITHEVENT
#endif

//private:

};