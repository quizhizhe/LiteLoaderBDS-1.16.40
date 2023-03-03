// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class WorldTemplateManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEMANAGER
public:
    class WorldTemplateManager& operator=(class WorldTemplateManager const &) = delete;
    WorldTemplateManager(class WorldTemplateManager const &) = delete;
    WorldTemplateManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDTEMPLATEMANAGER
#endif
    MCAPI struct WorldTemplateInfo const * findInstalledWorldTemplate(struct PackIdVersion const &) const;
    MCAPI ~WorldTemplateManager();

//private:
    MCAPI void _initialize();
    MCAPI void _initializePackSources();
    MCAPI void _onDiscoverWorldTemplate(class Pack const &);

private:

};