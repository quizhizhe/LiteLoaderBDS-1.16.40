// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class GetChunkDataCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCHUNKDATACOMMAND
public:
    class GetChunkDataCommand& operator=(class GetChunkDataCommand const &) = delete;
    GetChunkDataCommand(class GetChunkDataCommand const &) = delete;
    GetChunkDataCommand() = delete;
#endif

public:
    /*0*/ virtual ~GetChunkDataCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GETCHUNKDATACOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);

};