// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MoveControl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROL
public:
    class MoveControl& operator=(class MoveControl const &) = delete;
    MoveControl(class MoveControl const &) = delete;
    MoveControl() = delete;
#endif

public:
    /*0*/ virtual ~MoveControl();
    /*1*/ virtual void initializeInternal(class Mob &, struct MoveControlDescription *);
    /*2*/ virtual void tick(class MoveControlComponent &, class Mob &);
    /*3*/ virtual void setWantedPosition(class MoveControlComponent &, class Mob &, class Vec3 const &, float);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MOVECONTROL
#endif
    MCAPI static float const MIN_DELTA_TO_MOVE;
    MCAPI static float const MIN_SPEED_SQR;

//protected:
    MCAPI float calculateMoveSpeed(class MoveControlComponent const &, class Mob &, class Vec3 const &, float);
    MCAPI float calculateYRotation(class MoveControlComponent const &, class Mob const &, class Vec3 const &, float);

protected:

};