// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class Random {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOM
public:
    class Random& operator=(class Random const &) = delete;
    Random(class Random const &) = delete;
    Random() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOM
#endif
    MCAPI float nextFloat();
    MCAPI float nextGaussianFloat();
    MCAPI int nextGaussianInt(int);
    MCAPI int nextInt(int, int);

//private:

private:
    MCAPI static class Bedrock::Threading::ThreadLocalObject<class Random, class std::allocator<class Random>> mThreadLocalRandom;

};