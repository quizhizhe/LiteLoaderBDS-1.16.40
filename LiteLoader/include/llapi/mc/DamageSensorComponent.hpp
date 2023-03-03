// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DamageSensorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORCOMPONENT
public:
    class DamageSensorComponent& operator=(class DamageSensorComponent const &) = delete;
    DamageSensorComponent(class DamageSensorComponent const &) = delete;
    DamageSensorComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DAMAGESENSORCOMPONENT
#endif
    MCAPI bool recordDamage(class Actor &, class Actor *, enum ActorDamageCause, int, bool, class VariantParameterList);

//private:
    MCAPI bool _recordDamage(class Actor &, class Actor *, enum ActorDamageCause const &, class Actor *, int, bool, class VariantParameterList);

private:

};