// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class InPackagePackSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INPACKAGEPACKSOURCE
public:
    class InPackagePackSource& operator=(class InPackagePackSource const &) = delete;
    InPackagePackSource(class InPackagePackSource const &) = delete;
    InPackagePackSource() = delete;
#endif

public:
    /*0*/ virtual ~InPackagePackSource();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual enum PackOrigin getPackOrigin() const;
    /*4*/ virtual enum PackType getPackType() const;
    /*5*/ virtual class PackSourceReport load(class PackManifestFactory &, class IContentKeyProvider const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INPACKAGEPACKSOURCE
    MCVAPI void forEachPack(class std::function<void (class Pack &)>);
    MCVAPI void forEachPackConst(class std::function<void (class Pack const &)>) const;
#endif
    MCAPI InPackagePackSource(class std::shared_ptr<class IInPackagePacks> const &, enum PackType);

};