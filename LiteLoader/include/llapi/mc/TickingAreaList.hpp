// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TickingAreaList {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREALIST
public:
    class TickingAreaList& operator=(class TickingAreaList const &) = delete;
    TickingAreaList(class TickingAreaList const &) = delete;
    TickingAreaList() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TICKINGAREALIST
#endif
    MCAPI void checkEntityConditions(std::vector<class Vec3> const &, class std::function<void (class ITickingArea const &)>);

};