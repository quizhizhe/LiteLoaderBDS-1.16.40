// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BalloonComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONCOMPONENT
public:
    class BalloonComponent& operator=(class BalloonComponent const &) = delete;
    BalloonComponent(class BalloonComponent const &) = delete;
    BalloonComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BALLOONCOMPONENT
#endif
    MCAPI void detach(class Actor &);
    MCAPI void integrate(class Actor &);
    MCAPI void onRemoved(class Actor &, bool);
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void setAttachedActor(class Actor &, class Actor &);
    MCAPI bool shouldPop(class Actor &, bool &);
    MCAPI static std::string const ATTACHED_TAG;
    MCAPI static float const FENCE_BALLOON_RANGE;
    MCAPI static std::string const MAX_HEIGHT_TAG;
    MCAPI static std::string const SHOULD_DROP_TAG;
    MCAPI static void _integrateBalloon(class Vec3 &, class Vec3 *, class Vec3 const &, class DistanceConstraint *);
    MCAPI static class Actor * getBalloonForActor(class Actor const &);

};