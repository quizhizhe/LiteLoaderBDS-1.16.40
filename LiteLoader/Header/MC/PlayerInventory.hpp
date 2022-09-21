// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PlayerInventory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINVENTORY
public:
    class PlayerInventory& operator=(class PlayerInventory const &) = delete;
    PlayerInventory(class PlayerInventory const &) = delete;
    PlayerInventory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERINVENTORY
    MCVAPI void containerContentChanged(int);
    MCVAPI void containerSizeChanged(int);
    MCVAPI void createTransactionContext(class std::function<void (class Container &, int, class ItemStack const &, class ItemStack const &)>, class std::function<void (void)>);
#endif
    MCAPI int getContainerSize(enum ContainerID) const;
    MCAPI int getHotbarSize() const;
    MCAPI class ItemStack const & getItem(int, enum ContainerID) const;
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    MCAPI struct PlayerInventory::SlotData getSelectedSlot() const;
    MCAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    MCAPI void setItem(int, class ItemStack const &, enum ContainerID, bool);

};