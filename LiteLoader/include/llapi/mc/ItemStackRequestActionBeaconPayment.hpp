// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ItemStackRequestActionBeaconPayment {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONBEACONPAYMENT
public:
    class ItemStackRequestActionBeaconPayment& operator=(class ItemStackRequestActionBeaconPayment const &) = delete;
    ItemStackRequestActionBeaconPayment(class ItemStackRequestActionBeaconPayment const &) = delete;
    ItemStackRequestActionBeaconPayment() = delete;
#endif

public:
    /*0*/ virtual ~ItemStackRequestActionBeaconPayment();
    /*1*/ virtual void __unk_vfn_1();
    /*2*/ virtual void _write(class BinaryStream &) const;
    /*3*/ virtual bool _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMSTACKREQUESTACTIONBEACONPAYMENT
#endif

};