// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class NetherFortressStart : public StructureStart {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSSTART
public:
    class NetherFortressStart& operator=(class NetherFortressStart const &) = delete;
    NetherFortressStart(class NetherFortressStart const &) = delete;
    NetherFortressStart() = delete;
#endif

public:
    /*0*/ virtual ~NetherFortressStart();
    /*3*/ virtual enum StructureFeatureType getType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETHERFORTRESSSTART
#endif
    MCAPI NetherFortressStart(class Random &, int, int);

};