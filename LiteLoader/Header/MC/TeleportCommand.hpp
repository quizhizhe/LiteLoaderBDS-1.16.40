// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class TeleportCommand : public Command {

#define AFTER_EXTRA
    // Add Member There
public:
    enum FacingResult;
    enum TeleportAnalysis;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELEPORTCOMMAND
public:
    class TeleportCommand& operator=(class TeleportCommand const &) = delete;
    TeleportCommand(class TeleportCommand const &) = delete;
    TeleportCommand() = delete;
#endif

public:
    /*0*/ virtual ~TeleportCommand();
    /*1*/ virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TELEPORTCOMMAND
#endif
    MCAPI static void setup(class CommandRegistry &);
    MCAPI static void teleport(class Actor &, class Vec3, class Vec3 *, class AutomaticID<class Dimension, int>, class RelativeFloat, class RelativeFloat, int, struct ActorUniqueID const &);

//private:
    MCAPI enum TeleportCommand::FacingResult getFacingDirection(class CommandOrigin const &, class CommandOutput &, class Vec3 &) const;
    MCAPI static enum TeleportCommand::TeleportAnalysis actorToLocationTeleportAnalysis(class CommandOrigin const &, class CommandArea const &, class CommandArea &, class Actor const &, class Vec3);
    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(class CommandOrigin const &, class CommandSelectorResults<class Actor> const &, class Vec3, bool);

private:

};