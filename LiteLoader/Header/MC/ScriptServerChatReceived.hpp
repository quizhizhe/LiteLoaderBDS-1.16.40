// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptApi.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptServerChatReceived {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERCHATRECEIVED
public:
    class ScriptServerChatReceived& operator=(class ScriptServerChatReceived const &) = delete;
    ScriptServerChatReceived(class ScriptServerChatReceived const &) = delete;
    ScriptServerChatReceived() = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerChatReceived();
    /*1*/ virtual bool receivedEvent(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, std::string const &, class ScriptApi::ScriptObjectHandle const &);
    /*2*/ virtual bool getEventData(class ScriptApi::ScriptVersionInfo const &, class ScriptEngine &, class ScriptServerContext &, std::string const &, class ScriptApi::ScriptObjectHandle &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSERVERCHATRECEIVED
#endif

//private:

private:
    MCAPI static class HashedString const mHash;

};