// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LookControlComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKCONTROLCOMPONENT
public:
    class LookControlComponent& operator=(class LookControlComponent const &) = delete;
    LookControlComponent(class LookControlComponent const &) = delete;
    LookControlComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOKCONTROLCOMPONENT
#endif
    MCAPI void initialize(class Mob &);
    MCAPI void setLookAtPosition(class Actor const *, float, float);

};