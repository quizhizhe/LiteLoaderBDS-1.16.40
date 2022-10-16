// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
#include "math.h"
namespace glm{
template <typename t,int>
struct tmat3x3{
    tmat3x3() = delete;
    tmat3x3(tmat3x3 const&) = delete;
    tmat3x3(tmat3x3 const&&) = delete;
};

}

#undef BEFORE_EXTRA

class Facing {

#define AFTER_EXTRA
enum Name;
enum Rotation;
public:

static int convertYRotationToFacingDirection(float yRotation){
    int cardinalDirection = (int)floor(((4.0 * yRotation)/360.0)+0.5) & 3;
    void* Facing_Plane_HORIZONTAL = dlsym("?HORIZONTAL@Plane@Facing@@2V?$vector@EV?$allocator@E@std@@@std@@A");
    return dAccess<int>(Facing_Plane_HORIZONTAL,cardinalDirection);
}
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FACING
public:
    class Facing& operator=(class Facing const &) = delete;
    Facing(class Facing const &) = delete;
    Facing() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FACING
#endif
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT;
    MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT_AXIS_Y;
    MCAPI static std::vector<unsigned char> const ALL_FACES;
    MCAPI static enum Facing::Name const BY2DDATA[];
    MCAPI static enum Facing::Name const DIRECTIONS[];
    MCAPI static class BlockPos const DIRECTION[];
    MCAPI static class Vec3 const NORMAL[];
    MCAPI static unsigned char const OPPOSITE_FACING[];
    MCAPI static int const STEP_X[];
    MCAPI static int const STEP_Y[];
    MCAPI static int const STEP_Z[];
    MCAPI static unsigned char fromVec3(class Vec3 const &);
    MCAPI static unsigned char getOpposite(unsigned char);
    MCAPI static struct glm::tmat3x3<float, 0> getRotationMatrix(unsigned char, enum Facing::Rotation);
    MCAPI static int getStepX(unsigned char);
    MCAPI static int getStepY(unsigned char);
    MCAPI static int getStepZ(unsigned char);
    MCAPI static unsigned char rotateFaceAroundGivenFace(unsigned char, unsigned char, enum Facing::Rotation);
    MCAPI static class gsl::basic_string_span<char const, -1> toString(unsigned char);

};