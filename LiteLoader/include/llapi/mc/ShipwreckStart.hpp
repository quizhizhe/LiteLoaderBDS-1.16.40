// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ShipwreckStart : public StructureStart {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIPWRECKSTART
public:
    class ShipwreckStart& operator=(class ShipwreckStart const &) = delete;
    ShipwreckStart(class ShipwreckStart const &) = delete;
    ShipwreckStart() = delete;
#endif

public:
    /*0*/ virtual ~ShipwreckStart();
    /*3*/ virtual enum StructureFeatureType getType() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHIPWRECKSTART
#endif
    MCAPI ShipwreckStart(class BiomeSource &, class Random &, int, int);

};