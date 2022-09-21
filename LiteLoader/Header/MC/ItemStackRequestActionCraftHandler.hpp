// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackRequestActionCraftHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTHANDLER
public:
    class ItemStackRequestActionCraftHandler& operator=(class ItemStackRequestActionCraftHandler const &) = delete;
    ItemStackRequestActionCraftHandler(class ItemStackRequestActionCraftHandler const &) = delete;
    ItemStackRequestActionCraftHandler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONCRAFTHANDLER
#endif
    MCAPI bool _initCraftResults(std::vector<class ItemInstance> const &);
    MCAPI class ItemInstance * _initSingleCraftResult(class ItemInstance const &);
    MCAPI bool endRequest(bool);
    MCAPI bool handleConsume(class ItemStackRequestActionConsume const &);
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const &);
    MCAPI ~ItemStackRequestActionCraftHandler();

//private:
    MCAPI bool _setCreatedItemOutputSlot(unsigned char);

private:

};