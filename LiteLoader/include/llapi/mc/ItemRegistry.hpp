// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemRegistry {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMREGISTRY
public:
    class ItemRegistry& operator=(class ItemRegistry const &) = delete;
    ItemRegistry(class ItemRegistry const &) = delete;
    ItemRegistry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMREGISTRY
#endif
    MCAPI static class WeakPtr<class Item> getItem(short);
    MCAPI static class WeakPtr<class Item> lookupByName(int &, std::string const &);
    MCAPI static class WeakPtr<class Item> lookupByName(int &, int &, std::string const &);
    MCAPI static void registerAlias(std::string const &, class HashedString const &);
    MCAPI static void registerItem(class SharedPtr<class Item>);
    MCAPI static void shutdown();
    MCAPI static void unregisterItem(class HashedString const &);

//private:

private:
    MCAPI static class std::unordered_map<int, class WeakPtr<class Item>, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, class WeakPtr<class Item>>>> mIdToItemMap;
    MCAPI static class std::unordered_map<class HashedString, class HashedString, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class HashedString>>> mItemAliasLookupMap;
    MCAPI static std::vector<class SharedPtr<class Item>> mItemRegistry;
    MCAPI static short mMaxItemID;
    MCAPI static class std::unordered_map<class HashedString, class WeakPtr<class Item>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class WeakPtr<class Item>>>> mNameToItemMap;

};