// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "persona.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class AnimatedImageData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATEDIMAGEDATA
public:
    class AnimatedImageData& operator=(class AnimatedImageData const &) = delete;
    AnimatedImageData(class AnimatedImageData const &) = delete;
    AnimatedImageData() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATEDIMAGEDATA
#endif
    MCAPI AnimatedImageData(enum persona::AnimatedTextureType, struct mce::Image const &, float);

};