// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CommandContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDCONTEXT
public:
    class CommandContext& operator=(class CommandContext const &) = delete;
    CommandContext(class CommandContext const &) = delete;
    CommandContext() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMMANDCONTEXT
#endif
    MCAPI CommandContext(std::string const &, std::unique_ptr<class CommandOrigin>, int);

};