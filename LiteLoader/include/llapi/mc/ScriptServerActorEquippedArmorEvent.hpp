// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct ScriptServerActorEquippedArmorEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERACTOREQUIPPEDARMOREVENT
public:
    struct ScriptServerActorEquippedArmorEvent& operator=(struct ScriptServerActorEquippedArmorEvent const &) = delete;
    ScriptServerActorEquippedArmorEvent(struct ScriptServerActorEquippedArmorEvent const &) = delete;
    ScriptServerActorEquippedArmorEvent() = delete;
#endif
public:
    /*0*/ virtual ~ScriptServerActorEquippedArmorEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine &, class ScriptApi::ScriptObjectHandle &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERACTOREQUIPPEDARMOREVENT
#endif

//private:

};