// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockItem.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class SaplingBlockItem : public BlockItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAPLINGBLOCKITEM
public:
    class SaplingBlockItem& operator=(class SaplingBlockItem const &) = delete;
    SaplingBlockItem(class SaplingBlockItem const &) = delete;
    SaplingBlockItem() = delete;
#endif

public:
    /*0*/ virtual ~SaplingBlockItem();
    /*5*/ virtual void __unk_vfn_5();
    /*21*/ virtual int getLevelDataForAuxValue(int) const;
    /*26*/ virtual void __unk_vfn_26();
    /*27*/ virtual void __unk_vfn_27();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*37*/ virtual void __unk_vfn_37();
    /*43*/ virtual void __unk_vfn_43();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*49*/ virtual void __unk_vfn_49();
    /*50*/ virtual void __unk_vfn_50();
    /*65*/ virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*90*/ virtual void __unk_vfn_90();
    /*97*/ virtual void __unk_vfn_97();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAPLINGBLOCKITEM
#endif

};