// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct BlockDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDEFINITION
public:
    struct BlockDefinition& operator=(struct BlockDefinition const &) = delete;
    BlockDefinition(struct BlockDefinition const &) = delete;
    BlockDefinition() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKDEFINITION
#endif
    MCAPI struct BlockComponentDescription * getComponentDescription(std::string const &) const;
    MCAPI ~BlockDefinition();

};