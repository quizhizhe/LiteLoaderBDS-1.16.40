// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"
#include "PackAccessStrategy.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DirectoryPackAccessStrategy : public PackAccessStrategy {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRECTORYPACKACCESSSTRATEGY
public:
    class DirectoryPackAccessStrategy& operator=(class DirectoryPackAccessStrategy const &) = delete;
    DirectoryPackAccessStrategy(class DirectoryPackAccessStrategy const &) = delete;
    DirectoryPackAccessStrategy() = delete;
#endif

public:
    /*0*/ virtual ~DirectoryPackAccessStrategy();
    /*1*/ virtual unsigned __int64 getPackSize() const;
    /*2*/ virtual class ResourceLocation const & getPackLocation() const;
    /*3*/ virtual std::string const & getPackName() const;
    /*4*/ virtual bool isWritable() const;
    /*5*/ virtual void setIsTrusted(bool);
    /*6*/ virtual bool isTrusted() const;
    /*7*/ virtual bool hasAsset(class Core::Path const &, bool) const;
    /*8*/ virtual bool hasFolder(class Core::Path const &) const;
    /*9*/ virtual bool getAsset(class Core::Path const &, std::string &, bool) const;
    /*10*/ virtual bool deleteAsset(class Core::PathBuffer<std::string> const &);
    /*11*/ virtual bool writeAsset(class Core::Path const &, std::string const &);
    /*12*/ virtual void forEachIn(class Core::Path const &, class std::function<void (class Core::Path const &)>, bool) const;
    /*13*/ virtual void forEachInAssetSet(class Core::Path const &, class std::function<void (class Core::Path const &)>) const;
    /*14*/ virtual enum PackAccessStrategyType getStrategyType() const;
    /*16*/ virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const &) const;
    /*18*/ virtual bool canRecurse() const;
    /*19*/ virtual void unload();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DIRECTORYPACKACCESSSTRATEGY
#endif
    MCAPI DirectoryPackAccessStrategy(class ResourceLocation const &, bool);

};