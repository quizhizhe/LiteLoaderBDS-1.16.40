// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ItemStackBase.hpp"

#define BEFORE_EXTRA
// Add include headers & pre-declares
#include "ItemStackNetIdVariant.hpp"
#include "MC/I18n.hpp"
#include "MC/PropertiesSettings.hpp"
class Tag;
class ItemActor;
class CompoundTag;
class ItemInstance;

#undef BEFORE_EXTRA

class ItemStack : public ItemStackBase {

#define AFTER_EXTRA
// Add new members to class
    ItemStackNetIdVariant mNetId;

public:
    ItemStack clone() const;
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create();
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(std::string type, int count = 1);
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(std::unique_ptr<CompoundTag> tag);
    // The return value should be freed by the developer if it is no longer used
    LIAPI static ItemStack* create(short itemId, int aux,int count = 1);
    LIAPI ItemStack* clone_s() const;
    LIAPI static ItemStack fromItemInstance(ItemInstance const& ins);

    LIAPI std::string getTypeName() const;
    LIAPI int getAux() const;
    LIAPI int getCount() const;

    LIAPI bool setItem(ItemStack* newItem);
    LIAPI bool setLore(const std::vector<std::string>& lores);
    LIAPI std::unique_ptr<CompoundTag> getNbt();
    LIAPI bool setNbt(CompoundTag* nbt);
    //LIAPI string getStandardName(const Localization& language);

#undef AFTER_EXTRA
public:
    /*0*/ virtual ~ItemStack();
    /*1*/ virtual void reinit(class Item const &, int, int);
    /*2*/ virtual void reinit(class BlockLegacy const &, int);
    /*3*/ virtual void setNull();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACK
#endif
    MCAPI ItemStack();
    MCAPI ItemStack(class BlockLegacy const &, int);
    MCAPI ItemStack(class Block const &, int, class CompoundTag const *);
    MCAPI ItemStack(class Item const &);
    MCAPI ItemStack(class Item const &, int);
    MCAPI ItemStack(class Item const &, int, int);
    MCAPI ItemStack(class ItemStack const &);
    MCAPI void _assignNetIdVariant(class ItemStack const &) const;
    MCAPI void clientInitRequestId(class SimpleClientNetId<struct ItemStackRequestIdTag, int, 0> const &);
    MCAPI class ItemStack getStrippedNetworkItem() const;
    MCAPI bool matchesAndNetIdVariantMatches(class ItemStack const &) const;
    MCAPI bool matchesNetIdVariant(class ItemStack const &) const;
    MCAPI class ItemStack & operator=(class ItemStack const &);
    MCAPI bool sameItemAndAuxAndBlockData(class ItemStack const &) const;
    MCAPI void serverInitNetId();
    MCAPI void useAsFuel();
    MCAPI bool useOn(class Actor &, int, int, int, unsigned char, float, float, float);
    MCAPI static class ItemStack const EMPTY_ITEM;
    MCAPI static class ItemStack fromTag(class CompoundTag const &);
    MCAPI static class ItemStack fromTag(class CompoundTag const &, class Level &);

};