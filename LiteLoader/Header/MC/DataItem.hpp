// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class DataItem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DATAITEM
public:
    class DataItem& operator=(class DataItem const &) = delete;
    DataItem(class DataItem const &) = delete;
    DataItem() = delete;
#endif

public:
    /*0*/ virtual ~DataItem();
    /*1*/ virtual bool isDataEqual(class DataItem const &) const;
    /*2*/ virtual std::unique_ptr<class DataItem> clone() const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DATAITEM
#endif

};