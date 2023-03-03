// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class InventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
    std::unordered_map<class InventorySource, std::vector<class InventoryAction>> actions; // 0x0
    std::vector<class InventoryTransactionItemGroup> items;                                // 0x40

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTION
public:
    class InventoryTransaction& operator=(class InventoryTransaction const &) = delete;
    InventoryTransaction() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INVENTORYTRANSACTION
#endif
    MCAPI InventoryTransaction(class InventoryTransaction const &);
    MCAPI void addAction(class InventoryAction const &);
    MCAPI enum InventoryTransactionError executeFull(class Player &, bool) const;
    MCAPI void forceBalanceTransaction();
    MCAPI std::vector<class InventoryAction> const & getActions(class InventorySource const &) const;
    MCAPI class std::function<enum InventoryTransactionError (class Player &, class InventoryAction const &, bool)> getVerifyFunction(class InventorySource const &) const;
    MCAPI void serialize(class BinaryStream &, bool) const;
    MCAPI enum InventoryTransactionError verifyFull(class Player &, bool) const;
    MCAPI ~InventoryTransaction();

//private:
    MCAPI void _dropCreatedItems(class Player &) const;
    MCAPI void addActionToContent(class InventoryAction const &);
    MCAPI void addItemToContent(class ItemStack const &, int);

private:

};