// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RideableComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLECOMPONENT
public:
    class RideableComponent& operator=(class RideableComponent const &) = delete;
    RideableComponent(class RideableComponent const &) = delete;
    RideableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RIDEABLECOMPONENT
#endif
    MCAPI bool canAddRider(class Actor const &, class Actor &) const;
    MCAPI bool getFirstAvailableSeatPosition(class Actor const &, class Actor &, class Vec3 &) const;
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI void positionRider(class Actor &, class Actor &);

//private:
    MCAPI void _setCanPlayerRide(class Player &, bool);
    MCAPI struct SeatDescription getValidSeat(class Actor const &, int) const;

private:

};