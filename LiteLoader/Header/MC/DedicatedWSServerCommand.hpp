// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DedicatedWSServerCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDWSSERVERCOMMAND
public:
    class DedicatedWSServerCommand& operator=(class DedicatedWSServerCommand const &) = delete;
    DedicatedWSServerCommand(class DedicatedWSServerCommand const &) = delete;
    DedicatedWSServerCommand() = delete;
#endif

public:
    /*0*/ virtual ~DedicatedWSServerCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEDICATEDWSSERVERCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &, class IMinecraftApp &);

//private:

private:
    MCAPI static class IMinecraftApp * mApp;

};