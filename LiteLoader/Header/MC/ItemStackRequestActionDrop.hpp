// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackRequestActionDrop {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONDROP
public:
    class ItemStackRequestActionDrop& operator=(class ItemStackRequestActionDrop const &) = delete;
    ItemStackRequestActionDrop(class ItemStackRequestActionDrop const &) = delete;
    ItemStackRequestActionDrop() = delete;
#endif

public:
    /*0*/ virtual ~ItemStackRequestActionDrop();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void _write(class BinaryStream &) const;
    /*3*/ virtual bool _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONDROP
#endif

};