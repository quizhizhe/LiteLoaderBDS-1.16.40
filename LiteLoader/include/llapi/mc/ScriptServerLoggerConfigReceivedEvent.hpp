// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptServerLoggerConfigReceivedEvent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERLOGGERCONFIGRECEIVEDEVENT
public:
    class ScriptServerLoggerConfigReceivedEvent& operator=(class ScriptServerLoggerConfigReceivedEvent const &) = delete;
    ScriptServerLoggerConfigReceivedEvent(class ScriptServerLoggerConfigReceivedEvent const &) = delete;
    ScriptServerLoggerConfigReceivedEvent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerLoggerConfigReceivedEvent();
    /*1*/ virtual bool receivedEvent(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, std::string const &, class ScriptApi::ScriptObjectHandle const &);
    /*2*/ virtual bool getEventData(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, std::string const &, class ScriptApi::ScriptObjectHandle &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERLOGGERCONFIGRECEIVEDEVENT
#endif

//private:

private:
    MCAPI static class HashedString const mHash;

};