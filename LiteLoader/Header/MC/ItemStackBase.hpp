// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackBase {

#define AFTER_EXTRA
// Add Member There
private:
//void* vtbl;
    char filler[128];

public:
LIAPI int getCount() const;

#undef AFTER_EXTRA
public:
    /*0*/ virtual ~ItemStackBase();
    /*1*/ virtual void reinit(class Item const &, int, int);
    /*2*/ virtual void reinit(class BlockLegacy const &, int);
    /*3*/ virtual void setNull();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKBASE
#endif
    MCAPI void _read(class ReadOnlyBinaryStream &);
    MCAPI void _write(class BinaryStream &) const;
    MCAPI bool addComponents(class Json::Value const &, std::string &);
    MCAPI void addCustomUserData(class BlockActor &, class BlockSource &);
    MCAPI void clearChargedItem();
    MCAPI class ItemEnchants constructItemEnchantsFromUserData() const;
    MCAPI void deserializeComponents(class IDataInput &);
    MCAPI short getAuxValue() const;
    MCAPI std::string getCustomName() const;
    MCAPI short getDamageValue() const;
    MCAPI std::string getDescriptionId() const;
    MCAPI class ItemDescriptor getDescriptor() const;
    MCAPI std::string getHoverName() const;
    MCAPI short getId() const;
    MCAPI int getIdAux() const;
    MCAPI class Item const * getItem() const;
    MCAPI unsigned char getMaxStackSize() const;
    MCAPI std::string getName() const;
    MCAPI std::unique_ptr<class CompoundTag> getNetworkUserData() const;
    MCAPI std::string getRawNameId() const;
    MCAPI bool hasComponent(std::string const &) const;
    MCAPI bool hasCustomHoverName() const;
    MCAPI bool hasSameAuxValue(class ItemStackBase const &) const;
    MCAPI bool hasSameUserData(class ItemStackBase const &) const;
    MCAPI bool hurtAndBreak(int, class Actor *);
    MCAPI bool isBlock() const;
    MCAPI bool isDamageableItem() const;
    MCAPI bool isDamaged() const;
    MCAPI bool isEmptyStack() const;
    MCAPI bool isEnchanted() const;
    MCAPI bool isExperimental() const;
    MCAPI bool isHorseArmorItem() const;
    MCAPI bool isNull() const;
    MCAPI bool isStackable(class ItemStackBase const &) const;
    MCAPI bool isStackedByData() const;
    MCAPI bool isWearableItem() const;
    MCAPI bool matches(class ItemStackBase const &) const;
    MCAPI bool matchesEitherWearableCase(class CompoundTag const *) const;
    MCAPI bool matchesItem(class ItemStackBase const &) const;
    MCAPI operator bool() const;
    MCAPI bool operator!=(class ItemStackBase const &) const;
    MCAPI bool sameItem(int, int) const;
    MCAPI bool sameItem(class ItemStackBase const &) const;
    MCAPI bool sameItemAndAux(class ItemStackBase const &) const;
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    MCAPI void saveEnchantsToUserData(class ItemEnchants const &);
    MCAPI void serializeComponents(class IDataOutput &) const;
    MCAPI void set(int);
    MCAPI void setChargedItem(class ItemInstance const &, bool);
    MCAPI void setCustomLore(std::vector<std::string> const &);
    MCAPI void setCustomName(std::string const &);
    MCAPI void setRepairCost(int);
    MCAPI void setUserData(std::unique_ptr<class CompoundTag>);
    MCAPI bool shouldVanish() const;
    MCAPI std::string toString() const;
    MCAPI bool updateComponent(std::string const &, class Json::Value const &);
    MCAPI static std::string const TAG_CAN_DESTROY;
    MCAPI static std::string const TAG_CAN_PLACE_ON;
    MCAPI static std::string const TAG_DISPLAY;
    MCAPI static std::string const TAG_DISPLAY_NAME;
    MCAPI static std::string const TAG_ENCHANTS;
    MCAPI static std::string const TAG_LORE;
    MCAPI static std::string const TAG_REPAIR_COST;

//protected:
    MCAPI ItemStackBase();
    MCAPI ItemStackBase(class BlockLegacy const &, int);
    MCAPI ItemStackBase(class Block const &, int, class CompoundTag const *);
    MCAPI ItemStackBase(class Item const &);
    MCAPI ItemStackBase(class Item const &, int);
    MCAPI ItemStackBase(class Item const &, int, int);
    MCAPI ItemStackBase(class ItemStackBase const &);
    MCAPI std::string _getHoverFormattingPrefix() const;
    MCAPI bool _setItem(int);
    MCAPI void init(class BlockLegacy const &, int);
    MCAPI void init(class Item const &, int, int, class CompoundTag const *);
    MCAPI void init(int, int, int);
    MCAPI class ItemStackBase & operator=(class ItemStackBase const &);

//private:
    MCAPI void _loadComponents(class CompoundTag const &);
    MCAPI void _loadItem(class CompoundTag const &);
    MCAPI void _makeChargedItemFromUserData();
    MCAPI void _setChargedItem(class ItemInstance const &);
    MCAPI void _updateCompareHashes();

protected:
    MCAPI static std::string const TAG_CHARGED_ITEM;
    MCAPI static std::string const TAG_STORE_CAN_DESTROY;
    MCAPI static std::string const TAG_STORE_CAN_PLACE_ON;

private:

};