// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ResourceLoader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCELOADER
public:
    class ResourceLoader& operator=(class ResourceLoader const &) = delete;
    ResourceLoader(class ResourceLoader const &) = delete;
    ResourceLoader() = delete;
#endif

public:
    /*0*/ virtual ~ResourceLoader();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3() = 0;
    /*4*/ virtual void __unk_vfn_4() = 0;
    /*5*/ virtual void __unk_vfn_5() = 0;
    /*6*/ virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &) const;
    /*7*/ virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &, std::vector<std::string> const &) const;
    /*8*/ virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &) const;
    /*9*/ virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &, std::vector<std::string>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCELOADER
    MCVAPI bool isInStreamableLocation(class ResourceLocation const &) const;
    MCVAPI bool isInStreamableLocation(class ResourceLocation const &, std::vector<std::string> const &) const;
#endif
    MCAPI ResourceLoader(class std::function<class Core::PathBuffer<std::string> (void)>);

};