// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorldTemplatePackSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEPACKSOURCE
public:
    class WorldTemplatePackSource& operator=(class WorldTemplatePackSource const &) = delete;
    WorldTemplatePackSource(class WorldTemplatePackSource const &) = delete;
    WorldTemplatePackSource() = delete;
#endif

public:
    /*0*/ virtual ~WorldTemplatePackSource();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void __unk_vfn_2();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void __unk_vfn_4();
    /*5*/ virtual class PackSourceReport load(class PackManifestFactory &, class IContentKeyProvider const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDTEMPLATEPACKSOURCE
#endif

};