// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class CurseBindingEnchant : public Enchant {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CURSEBINDINGENCHANT
public:
    class CurseBindingEnchant& operator=(class CurseBindingEnchant const &) = delete;
    CurseBindingEnchant(class CurseBindingEnchant const &) = delete;
    CurseBindingEnchant() = delete;
#endif

public:
    /*0*/ virtual ~CurseBindingEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*12*/ virtual bool isTreasureOnly() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CURSEBINDINGENCHANT
#endif

};