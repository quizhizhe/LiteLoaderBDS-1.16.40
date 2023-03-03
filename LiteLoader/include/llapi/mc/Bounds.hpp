// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct Bounds {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNDS
public:
    struct Bounds& operator=(struct Bounds const &) = delete;
    Bounds(struct Bounds const &) = delete;
    Bounds() = delete;
#endif
public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOUNDS
#endif
    MCAPI Bounds(class BlockPos const &, class BlockPos const &, int, enum Bounds::Option);
    MCAPI Bounds(class ChunkPos const &, class ChunkPos const &);
    MCAPI bool contains(struct Bounds const &) const;

};