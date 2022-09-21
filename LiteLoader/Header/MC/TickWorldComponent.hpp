// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TickWorldComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKWORLDCOMPONENT
public:
    class TickWorldComponent& operator=(class TickWorldComponent const &) = delete;
    TickWorldComponent(class TickWorldComponent const &) = delete;
    TickWorldComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKWORLDCOMPONENT
#endif
    MCAPI void removeArea();
    MCAPI void setTickingArea(class Actor &, class std::shared_ptr<class ITickingArea>);
    MCAPI void updateArea(class Actor &);
    MCAPI ~TickWorldComponent();

};