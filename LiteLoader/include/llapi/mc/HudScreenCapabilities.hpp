// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct HudScreenCapabilities {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDSCREENCAPABILITIES
public:
    struct HudScreenCapabilities& operator=(struct HudScreenCapabilities const &) = delete;
    HudScreenCapabilities(struct HudScreenCapabilities const &) = delete;
    HudScreenCapabilities() = delete;
#endif
public:
    /*0*/ virtual ~HudScreenCapabilities();
    /*1*/ virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HUDSCREENCAPABILITIES
#endif

};