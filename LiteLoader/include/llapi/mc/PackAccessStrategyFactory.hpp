// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class PackAccessStrategyFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKACCESSSTRATEGYFACTORY
public:
    class PackAccessStrategyFactory& operator=(class PackAccessStrategyFactory const &) = delete;
    PackAccessStrategyFactory(class PackAccessStrategyFactory const &) = delete;
    PackAccessStrategyFactory() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKACCESSSTRATEGYFACTORY
#endif
    MCAPI static std::unique_ptr<class PackAccessStrategy> create(class ResourceLocation &, class IContentKeyProvider const &, class PackReport &, bool);
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForDirectory(class ResourceLocation const &, bool);
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncrypted(class ResourceLocation const &, class ContentIdentity const &, class IContentKeyProvider const &, bool);
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForEncryptedZip(class ResourceLocation const &, class IContentKeyProvider const &);
    MCAPI static std::unique_ptr<class PackAccessStrategy> createForZip(class ResourceLocation const &, bool);

};