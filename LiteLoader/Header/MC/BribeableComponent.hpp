// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BribeableComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLECOMPONENT
public:
    class BribeableComponent& operator=(class BribeableComponent const &) = delete;
    BribeableComponent(class BribeableComponent const &) = delete;
    BribeableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BRIBEABLECOMPONENT
#endif
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI void resetBribe(class Actor &);
    MCAPI void setBribed(class Actor &);

};