// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FillCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILLCOMMAND
public:
    class FillCommand& operator=(class FillCommand const &) = delete;
    FillCommand(class FillCommand const &) = delete;
    FillCommand() = delete;
#endif

public:
    /*0*/ virtual ~FillCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FILLCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};