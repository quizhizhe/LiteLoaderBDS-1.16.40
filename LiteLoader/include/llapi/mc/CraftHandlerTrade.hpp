// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CraftHandlerTrade {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERTRADE
public:
    class CraftHandlerTrade& operator=(class CraftHandlerTrade const &) = delete;
    CraftHandlerTrade(class CraftHandlerTrade const &) = delete;
    CraftHandlerTrade() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerTrade();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual bool _handleCraftAction(class ItemStackRequestActionCraftBase const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRAFTHANDLERTRADE
#endif

};