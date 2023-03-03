// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class FaceDirectionalBlock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FACEDIRECTIONALBLOCK
public:
    class FaceDirectionalBlock& operator=(class FaceDirectionalBlock const &) = delete;
    FaceDirectionalBlock(class FaceDirectionalBlock const &) = delete;
    FaceDirectionalBlock() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FACEDIRECTIONALBLOCK
    MCVAPI enum Flip getFaceFlip(unsigned char, class Block const &) const;
    MCVAPI unsigned char getMappedFace(unsigned char, class Block const &) const;
    MCVAPI class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    MCVAPI class Block const & getRenderBlock() const;
    MCVAPI bool isValidAuxValue(int) const;
#endif
    MCAPI static unsigned char getFacingDirection(class Block const &, bool);

};