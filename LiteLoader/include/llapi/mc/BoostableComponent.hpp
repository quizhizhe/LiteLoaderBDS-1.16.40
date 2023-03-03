// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BoostableComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOOSTABLECOMPONENT
public:
    class BoostableComponent& operator=(class BoostableComponent const &) = delete;
    BoostableComponent(class BoostableComponent const &) = delete;
    BoostableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOOSTABLECOMPONENT
#endif
    MCAPI bool onItemInteract(class Actor &, class ItemStack &, class Player &);

//private:
    MCAPI void _useItem(class Actor &, class ItemStack &, class Player &);

private:
    MCAPI static class std::shared_ptr<class AttributeModifier> SPEED_MODIFIER_BOOSTING;
    MCAPI static class mce::UUID const SPEED_MODIFIER_BOOSTING_UUID;

};