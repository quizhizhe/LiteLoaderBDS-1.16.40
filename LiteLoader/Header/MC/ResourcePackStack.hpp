// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ResourcePackStack {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKSTACK
public:
    class ResourcePackStack& operator=(class ResourcePackStack const &) = delete;
    ResourcePackStack(class ResourcePackStack const &) = delete;
    ResourcePackStack() = delete;
#endif

public:
    /*0*/ virtual ~ResourcePackStack();
    /*1*/ virtual std::vector<struct ResourcePath> loadAllVersionsOf(class ResourceLocation const &) const;
    /*2*/ virtual bool loadAllVersionsOf(class ResourceLocation const &, class ResourcePackMergeStrategy &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKSTACK
#endif
    MCAPI void add(class PackInstance, class ResourcePackRepository const &, bool);
    MCAPI bool hasPlatformLockedContent() const;
    MCAPI void removeDuplicates();
    MCAPI void removeIf(class std::function<bool (class PackInstance const &)> const &);
    MCAPI void removeInvalidPacks();
    MCAPI static std::unique_ptr<class ResourcePackStack> deserialize(class std::basic_istream<char, struct std::char_traits<char>> &, class ResourcePackRepository const &);

//private:
    MCAPI static void _populateDependencies(std::vector<class PackInstance> &, class PackInstance &, class ResourcePackRepository const &, bool);

private:

};