// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class LegacyTradeableComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYTRADEABLECOMPONENT
public:
    class LegacyTradeableComponent& operator=(class LegacyTradeableComponent const &) = delete;
    LegacyTradeableComponent(class LegacyTradeableComponent const &) = delete;
    LegacyTradeableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LEGACYTRADEABLECOMPONENT
#endif
    MCAPI void addAdditionalSaveData(class CompoundTag &);
    MCAPI class UpdateTradePacket createDataPacket(class Actor &, enum ContainerID);
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI void notifyTrade(class Actor &, int);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void restockAllRecipes(class Actor &);
    MCAPI void updateTradeTier(class Actor &);

//private:
    MCAPI struct TradeTable * _getTradeTable(class Actor &);
    MCAPI bool _refreshTrades(class Actor &);
    MCAPI void _updateMaxTradeTier(class Actor &, int);

private:

};