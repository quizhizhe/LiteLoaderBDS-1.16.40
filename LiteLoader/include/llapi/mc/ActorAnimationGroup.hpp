// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ActorAnimationGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORANIMATIONGROUP
public:
    class ActorAnimationGroup& operator=(class ActorAnimationGroup const &) = delete;
    ActorAnimationGroup(class ActorAnimationGroup const &) = delete;
    ActorAnimationGroup() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORANIMATIONGROUP
#endif
    MCAPI class std::shared_ptr<class ActorAnimationInfo> getActorAnimationInfo(class HashedString const &);
    MCAPI void loadActorAnimation(std::string const &, class Core::Path const &, class PackStats &, enum CurrentCmdVersion, bool);
    MCAPI void loadActorAnimationsSync(class ResourcePackManager &);

};