// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class EnchantCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTCOMMAND
public:
    class EnchantCommand& operator=(class EnchantCommand const &) = delete;
    EnchantCommand(class EnchantCommand const &) = delete;
    EnchantCommand() = delete;
#endif

public:
    /*0*/ virtual ~EnchantCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCHANTCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};