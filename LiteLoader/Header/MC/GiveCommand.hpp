// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GiveCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GIVECOMMAND
public:
    class GiveCommand& operator=(class GiveCommand const &) = delete;
    GiveCommand(class GiveCommand const &) = delete;
    GiveCommand() = delete;
#endif

public:
    /*0*/ virtual ~GiveCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GIVECOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};