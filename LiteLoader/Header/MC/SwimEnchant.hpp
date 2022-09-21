// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SwimEnchant : public Enchant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMENCHANT
public:
    class SwimEnchant& operator=(class SwimEnchant const &) = delete;
    SwimEnchant(class SwimEnchant const &) = delete;
    SwimEnchant() = delete;
#endif

public:
    /*0*/ virtual ~SwimEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*5*/ virtual int getMaxLevel() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SWIMENCHANT
#endif

};